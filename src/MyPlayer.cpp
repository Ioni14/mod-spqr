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

        player->TeleportTo(571, 5876.77, 659.164, 644.985, 1.22217); // Puit de Dalaran
    }
};

// Add all scripts in one
void AddMyPlayerScripts()
{
    new MyPlayer();
}
