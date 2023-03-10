#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedGossip.h"
#include "ReputationMgr.h"

class Reputation : public CreatureScript {
public:
    Reputation() : CreatureScript("Reputation") {}

    bool OnGossipHello(Player *player, Creature *creature) override {
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "Kirin Tor", GOSSIP_SENDER_MAIN, 1);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "Chevaliers de la Lame d'ébène", GOSSIP_SENDER_MAIN, 2);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "L'Accord du Repos du ver", GOSSIP_SENDER_MAIN, 3);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "Les Fils de Hodir", GOSSIP_SENDER_MAIN, 4);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT, "La Croisade d'argent", GOSSIP_SENDER_MAIN, 5);
        SendGossipMenuFor(player, 1, creature->GetGUID());

        return true;
    }

    bool OnGossipSelect(Player *player, Creature * /*creature*/, uint32 /*sender*/, uint32 action) override {
        player->PlayerTalkClass->ClearMenus();

        switch (action) {
            case 1: // Kirin Tor
            {
                setReputationExalted(player, 1090);
                break;
            }
            case 2: // Chevaliers de la Lame d'ébène
            {
                setReputationExalted(player, 1098);
                break;
            }
            case 3: // L'Accord du Repos du ver
            {
                setReputationExalted(player, 1091);
                break;
            }
            case 4: // Les Fils de Hodir
            {
                setReputationExalted(player, 1119);
                break;
            }
            case 5: // La Croisade d'argent
            {
                setReputationExalted(player, 1106);
                break;
            }
        }

        player->PlayerTalkClass->SendCloseGossip();

        return true;
    }
private:
    static void setReputationExalted(Player* player, int factionId)
    {
        player->GetReputationMgr().SetOneFactionReputation(sFactionStore.LookupEntry(factionId), 43000, false);
        player->GetReputationMgr().SendState(player->GetReputationMgr().GetState(sFactionStore.LookupEntry(factionId)));
    }
};

void AddReputationScripts() {
    new Reputation();
}
