#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedGossip.h"
#include "ReputationMgr.h"

class Teleporter : public CreatureScript {
public:
    Teleporter() : CreatureScript("Teleporter") {}

    bool OnGossipHello(Player *player, Creature *creature) override {
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "Ulduar", GOSSIP_SENDER_MAIN, 1);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "Trial of Crusader", GOSSIP_SENDER_MAIN, 2);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "Icecrown Citadel", GOSSIP_SENDER_MAIN, 3);
        SendGossipMenuFor(player, 1, creature->GetGUID());

        return true;
    }

    bool OnGossipSelect(Player *player, Creature * /*creature*/, uint32 /*sender*/, uint32 action) override {
        player->PlayerTalkClass->ClearMenus();

        switch (action) {
            case 1: // Ulduar
            {
                player->TeleportTo(571, 9333.621, -1114.728271, 1245.147, 6.271470);
                break;
            }
            case 2: // TOC
            {
                player->TeleportTo(571, 8515.6797, 716.981995, 558.2480, 1.573150);
                break;
            }
            case 3: // ICC
            {
                player->TeleportTo(571, 5791.8628, 2072.304932, 636.063538, 3.593742);
                break;
            }
        }

        player->PlayerTalkClass->SendCloseGossip();

        return true;
    }
};

void AddTeleporterScripts() {
    new Teleporter();
}
