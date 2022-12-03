#include "ScriptMgr.h"
#include "Player.h"
#include "ReputationMgr.h"
#include "Config.h"
#include "Chat.h"

// Add player scripts
class MyPlayer : public PlayerScript
{
public:
    MyPlayer() : PlayerScript("MyPlayer") { }

    void OnLogin(Player* player) override
    {
        if (!sConfigMgr->GetOption<bool>("SPQR.Enable", false)) {
            return;
        }
        ChatHandler(player->GetSession()).SendSysMessage("SPQR module loaded.");
    }

    void OnFirstLogin(Player* player) override
    {
        if (!sConfigMgr->GetOption<bool>("SPQR.Enable", false)) {
            return;
        }

        player->GiveLevel(DEFAULT_MAX_LEVEL);
        player->ModifyMoney(2000000000);
        for (uint16 slot = INVENTORY_SLOT_BAG_START; slot < INVENTORY_SLOT_BAG_END; ++slot) {
            player->EquipNewItem(slot, 38082, true);
        }
        player->UpdateSkillsToMaxSkillsForLevel();

        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1090), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1098), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1091), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1119), 43000, false);
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(1106), 43000, false);

        player->learnSpell(34091 /* Artisan cavalier */);
        player->learnSpell(54197 /* Vol par temps froid */);
        player->learnSpell(59976 /* Proto-drake noir */);
        player->learnSpell(17481 /* Destrier de la mort de Vaillefendre */);

        switch (player->getClass()) {
            case CLASS_WARLOCK:
                player->learnSpell(1122); // Inferno
                player->learnSpell(691); // Felhunter
                player->learnSpell(697); // Voidwalker
                player->learnSpell(712); // Succubus
                player->learnSpell(713); // Incubus
                player->learnSpell(18540); // Ritual of Doom
                break;
            case CLASS_SHAMAN:
                player->AddItem(5175, 1);
                player->AddItem(5176, 1);
                player->AddItem(5177, 1);
                player->AddItem(5178, 1);
                break;
            case CLASS_PALADIN:
                player->learnSpell(7328); // Redemption
                break;
        }

        player->TeleportTo(571, 5876.77, 659.164, 644.985, 1.22217); // Puit de Dalaran
    }
};

// Add all scripts in one
void AddMyPlayerScripts()
{
    new MyPlayer();
}
