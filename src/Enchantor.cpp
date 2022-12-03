#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedGossip.h"

class Enchantor : public CreatureScript {
public:
    Enchantor() : CreatureScript("Enchantor") {}

    bool OnGossipHello(Player *player, Creature *creature) {
        AddGossipItemFor(player, GOSSIP_ICON_TRAINER, "Enchanteur 450 + recettes", GOSSIP_SENDER_MAIN, 1);
        AddGossipItemFor(player, GOSSIP_ICON_TRAINER, "Couture 450 + recettes", GOSSIP_SENDER_MAIN, 2);
        AddGossipItemFor(player, GOSSIP_ICON_TRAINER, "Joaillerie 450 + recettes", GOSSIP_SENDER_MAIN, 3);
        AddGossipItemFor(player, GOSSIP_ICON_TRAINER, "Ingénierie 450 + recettes", GOSSIP_SENDER_MAIN, 4);
        AddGossipItemFor(player, GOSSIP_ICON_TRAINER, "Alchimie 450 + recettes", GOSSIP_SENDER_MAIN, 5);
        SendGossipMenuFor(player, 1, creature->GetGUID());

        return true;
    }

    bool OnGossipSelect(Player *player, Creature * /*creature*/, uint32 /*sender*/, uint32 action) {
        player->PlayerTalkClass->ClearMenus();

        switch (action) {
            case 1: // Enchant
            {
                CloseGossipMenuFor(player);

                uint32 skillId = 333;

                learnSkill(player, skillId);
                player->SetSkill(skillId, 0, 450, 450);
                if (!player->HasItemCount(44452)) {
                    player->AddItem(44452, 1); // Bâtonnet runique en titane
                }

                break;
            }
            case 2: // Couture
            {
                CloseGossipMenuFor(player);

                uint32 skillId = 197;

                learnSkill(player, skillId);
                player->SetSkill(skillId, 0, 450, 450);

                break;
            }
            case 3: // Joaillerie
            {
                CloseGossipMenuFor(player);

                uint32 skillId = 755;

                learnSkill(player, skillId);
                player->SetSkill(skillId, 0, 450, 450);
                if (!player->HasItemCount(20824)) {
                    player->AddItem(20824, 1); // Meule simple
                }
                if (!player->HasItemCount(20815)) {
                    player->AddItem(20815, 1); // Trousse de joaillier
                }

                break;
            }
            case 4: // Ingénierie
            {
                CloseGossipMenuFor(player);

                uint32 skillId = 202;

                learnSkill(player, skillId);
                player->SetSkill(skillId, 0, 450, 450);
                if (!player->HasItemCount(40772)) {
                    player->AddItem(40772, 1); // Couteau de l'armée gnome
                }

                break;
            }
            case 5: // Alchimie
            {
                CloseGossipMenuFor(player);

                uint32 skillId = 171;

                learnSkill(player, skillId);
                player->SetSkill(skillId, 0, 450, 450);

                break;
            }
        }

        return true;
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
};

void AddEnchantorScripts() {
    new Enchantor();
}
