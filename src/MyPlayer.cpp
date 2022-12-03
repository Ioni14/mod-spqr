#include "ScriptMgr.h"
#include "Player.h"
#include "Pet.h"
#include "ReputationMgr.h"
#include "Config.h"
#include "Chat.h"

// Add player scripts
class MyPlayer : public PlayerScript {
public:
    MyPlayer() : PlayerScript("MyPlayer") {}

    void OnLogin(Player *player) override {
        if (!sConfigMgr->GetOption<bool>("SPQR.Enable", false)) {
            return;
        }
        ChatHandler(player->GetSession()).SendSysMessage("SPQR module loaded.");
    }

    void OnFirstLogin(Player *player) override {
        if (!sConfigMgr->GetOption<bool>("SPQR.Enable", false)) {
            return;
        }

        player->GiveLevel(DEFAULT_MAX_LEVEL);
        player->ModifyMoney(2000000000);
        for (uint16 slot = INVENTORY_SLOT_BAG_START; slot < INVENTORY_SLOT_BAG_END; ++slot) {
            player->EquipNewItem(slot, 38082, true);
        }

        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1090), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1098), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1091), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1119), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1106), 43000, false);

        player->AddItem(40211, 40); // Potion hâte
        player->AddItem(40212, 40); // Potion crit

        player->learnSpell(33388 /* Apprenti cavalier */);
        player->learnSpell(33391 /* Compagnon cavalier */);
        player->learnSpell(34090 /* Expert cavalier */);
        player->learnSpell(34091 /* Artisan cavalier */);
        player->learnSpell(54197 /* Vol par temps froid */);
        player->learnSpell(59976 /* Proto-drake noir */);
        player->learnSpell(17481 /* Destrier de la mort de Vaillefendre */);

        switch (player->getClass()) {
            case CLASS_WARLOCK:
                player->learnSpell(5784 /* Palefroi corrompu */);
                player->learnSpell(23161 /* Destrier de l'effroi */);
                player->learnSpell(1122); // Inferno
                player->learnSpell(691); // Felhunter
                player->learnSpell(697); // Voidwalker
                player->learnSpell(712); // Succubus
                player->learnSpell(713); // Incubus
                player->learnSpell(18540); // Ritual of Doom
                player->AddItem(6265, 5); // Eclat d'âme
                player->AddItem(41597, 1); // Sac d'âmes
                break;
            case CLASS_HUNTER: {
                player->EquipNewItem(INVENTORY_SLOT_BAG_END - 1, 44447, true); // Ammo Pouch
                player->AddItem(52020, 28000); // Bullets
                player->AddItem(43005, 40); // Pet food
                player->AddQuest(sObjectMgr->GetQuestTemplate(6102), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(6102), 0, player, false);
                player->AddQuest(sObjectMgr->GetQuestTemplate(6103), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(6103), 0, player, false);
                Pet *pet = player->CreateTamedPetFrom(26672); // Bloodthirsty Tundra Wolf
                if (pet) {
                    pet->GetMap()->AddToMap(pet->ToCreature(), true);
                    player->SetMinion(pet, true);
                    pet->InitTalentForLevel();
                    pet->ModifyPower(POWER_HAPPINESS, HAPPINESS_LEVEL_SIZE * 3);
                    pet->SavePetToDB(PET_SAVE_AS_CURRENT);
                    player->ToPlayer()->PetSpellInitialize();
                }
                break;
            }
            case CLASS_MAGE:
                // Portals
                player->learnSpell(53142);
                if (player->GetTeamId() == TEAM_ALLIANCE) {
                    player->learnSpell(11419);
                    player->learnSpell(32266);
                    player->learnSpell(11416);
                    player->learnSpell(33691);
                    player->learnSpell(10059);
                    player->learnSpell(49360);
                }
                player->AddItem(17032, 20); // Portal rune
                break;
            case CLASS_ROGUE:
                learnSkill(player, 633); // crochetage
                player->AddItem(7676, 20); // Tea
                player->AddItem(52020, 1000); // Bullets
                break;
            case CLASS_WARRIOR:
                player->AddItem(52020, 1000); // Bullets
                player->AddQuest(sObjectMgr->GetQuestTemplate(1498), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(1498), 0, player, false);
                player->AddQuest(sObjectMgr->GetQuestTemplate(1719), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(1719), 0, player, false);
                break;
            case CLASS_DRUID:
                player->learnSpell(33943); // Forme de vol
                player->learnSpell(40120); // Forme de vol rapide
                // Forme d'ours
                player->AddQuest(sObjectMgr->GetQuestTemplate(6001), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(6001), 0, player, false);
                break;
            case CLASS_SHAMAN:
                // Totems
                player->AddQuest(sObjectMgr->GetQuestTemplate(9451), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(9451), 0, player, false);
                player->AddQuest(sObjectMgr->GetQuestTemplate(9555), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(9555), 0, player, false);
                player->AddQuest(sObjectMgr->GetQuestTemplate(9509), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(9509), 0, player, false);
                player->AddQuest(sObjectMgr->GetQuestTemplate(9554), nullptr);
                player->RewardQuest(sObjectMgr->GetQuestTemplate(9554), 0, player, false);
                break;
            case CLASS_PALADIN:
                player->learnSpell(13819 /* Cheval de guerre */);
                player->learnSpell(23214 /* Destrier */);
                player->learnSpell(7328); // Redemption
                break;
            case CLASS_DEATH_KNIGHT: {
                // these are all the starter quests that award talent points, quest items, or spells
                int STARTER_QUESTS[33] = {12593, 12619, 12842, 12848, 12636, 12641, 12657, 12678, 12679, 12680, 12687,
                                          12698, 12701, 12706, 12716, 12719, 12720, 12722, 12724, 12725, 12727, 12733,
                                          -1, 12751, 12754, 12755, 12756, 12757, 12779, 12801, 13165, 13166};

                int specialSurpriseQuestId = -1;
                switch (player->getRace()) {
                    case RACE_TAUREN:
                        specialSurpriseQuestId = 12739;
                        break;
                    case RACE_HUMAN:
                        specialSurpriseQuestId = 12742;
                        break;
                    case RACE_NIGHTELF:
                        specialSurpriseQuestId = 12743;
                        break;
                    case RACE_DWARF:
                        specialSurpriseQuestId = 12744;
                        break;
                    case RACE_GNOME:
                        specialSurpriseQuestId = 12745;
                        break;
                    case RACE_DRAENEI:
                        specialSurpriseQuestId = 12746;
                        break;
                    case RACE_BLOODELF:
                        specialSurpriseQuestId = 12747;
                        break;
                    case RACE_ORC:
                        specialSurpriseQuestId = 12748;
                        break;
                    case RACE_TROLL:
                        specialSurpriseQuestId = 12749;
                        break;
                    case RACE_UNDEAD_PLAYER:
                        specialSurpriseQuestId = 12750;
                        break;
                }

                STARTER_QUESTS[22] = specialSurpriseQuestId;
                STARTER_QUESTS[32] = player->GetTeamId() == TEAM_ALLIANCE ? 13188 : 13189;

                for (int questId: STARTER_QUESTS) {
                    if (player->GetQuestStatus(questId) == QUEST_STATUS_NONE) {
                        player->AddQuest(sObjectMgr->GetQuestTemplate(questId), nullptr);
                        player->RewardQuest(sObjectMgr->GetQuestTemplate(questId), 0, player, false);
                    }
                }
            }
                break;
        }

        // Weapon skills
        learnSkill(player, 43);
        learnSkill(player, 55);
        learnSkill(player, 44);
        learnSkill(player, 172);
        learnSkill(player, 45);
        learnSkill(player, 226);
        learnSkill(player, 118);
        learnSkill(player, 229);
        learnSkill(player, 473);
        learnSkill(player, 54);
        learnSkill(player, 160);
        learnSkill(player, 46);
        learnSkill(player, 173);
        learnSkill(player, 228);
        learnSkill(player, 136);
        // Armor skills
        learnSkill(player, 413);
        learnSkill(player, 293);

        player->UpdateSkillsToMaxSkillsForLevel();

        addStuff(player);

        player->SaveToDB(false, false);

        player->TeleportTo(571, 5876.77, 659.164, 644.985, 1.22217); // Puit de Dalaran
    }

private:
    void learnSkill(Player *player, uint32 skillId) {
        uint32 classmask = player->getClassMask();

        for (uint32 j = 0; j < sSkillLineAbilityStore.GetNumRows(); ++j)
        {
            SkillLineAbilityEntry const* skillLine = sSkillLineAbilityStore.LookupEntry(j);
            if (!skillLine)
                continue;

            // wrong skill
            if (skillLine->SkillLine != skillId)
                continue;

            // not high rank
            if (skillLine->SupercededBySpell)
                continue;

            // skip racial skills
            if (skillLine->RaceMask != 0)
                continue;

            // skip wrong class skills
            if (skillLine->ClassMask && (skillLine->ClassMask & classmask) == 0)
                continue;

            SpellInfo const* spellInfo = sSpellMgr->GetSpellInfo(skillLine->Spell);
            if (!spellInfo || !SpellMgr::IsSpellValid(spellInfo))
                continue;

            player->learnSpell(skillLine->Spell);
        }
    }
    void addStuff(Player *player) {
        switch (player->getClass()) {
            case CLASS_WARLOCK:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40421, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44661, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40424, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 44005, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40423, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 44008, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40396, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 39766, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 39426, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40420, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40561, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40560, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40558, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40719, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40399, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 40255, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40432, true);
                break;
            case CLASS_HUNTER:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40543, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44664, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40507, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 40403, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 43998, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 40282, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40388, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 40385, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40504, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 39762, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40331, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40549, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40074, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40474, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 44253, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40256, true);
                player->SetAmmo(52020);
                break;
            case CLASS_MAGE:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40416, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44661, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40419, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 44005, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40418, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 44008, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40396, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 40273, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 39712, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40415, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40301, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40560, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40246, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40719, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40399, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 40255, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40432, true);
                break;
            case CLASS_ROGUE:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40499, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44664, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40502, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 40403, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40539, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 39765, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 39714, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 40386, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 40385, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40496, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40260, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40500, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 39701, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40074, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40474, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 40684, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 44253, true);
                player->SetAmmo(52020);
                break;
            case CLASS_DEATH_KNIGHT:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 44006, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44664, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40557, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 40403, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40550, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 40330, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40402, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 40491, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 42620, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40347, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40278, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40294, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 39706, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40075, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 39401, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 42987, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 37390, true);
                break;
            case CLASS_DRUID:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40467, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44661, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40470, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 44005, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40469, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 44008, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40395, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 40192, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 40321, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40466, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40561, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40560, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40519, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40399, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40080, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 40255, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40682, true);
                break;
            case CLASS_PALADIN:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40576, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44664, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40578, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 40403, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40574, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 40186, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40384, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 42852, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40541, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40260, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40577, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40591, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40075, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40474, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 42987, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40431, true);
                break;
            case CLASS_PRIEST:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40562, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44661, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40555, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 44005, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40234, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 44008, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40395, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 40273, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 39712, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40454, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40561, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40560, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40558, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40719, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40399, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 40255, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40432, true);
                break;
            case CLASS_SHAMAN:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40543, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44661, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40524, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 40403, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40523, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 40736, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 39763, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_OFFHAND, 39468, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 40322, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40520, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 39762, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40522, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40367, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 40474, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40074, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 40684, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 37390, true);
                break;
            case CLASS_WARRIOR:
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HEAD, 40528, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_NECK, 44664, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_SHOULDERS, 40530, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_BACK, 40403, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_CHEST, 40539, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WRISTS, 40330, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_MAINHAND, 40384, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_RANGED, 40385, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_HANDS, 40541, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_WAIST, 40205, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_LEGS, 40318, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FEET, 40591, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER1, 43993, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_FINGER2, 40474, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET1, 42987, true);
                player->EquipNewItem(EquipmentSlots::EQUIPMENT_SLOT_TRINKET2, 40256, true);
                player->SetAmmo(52020);
                break;
        }
    }
};

// Add all scripts in one
void AddMyPlayerScripts() {
    new MyPlayer();
}
