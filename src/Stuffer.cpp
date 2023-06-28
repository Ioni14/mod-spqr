#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedGossip.h"

class Stuffer : public CreatureScript {
public:
    Stuffer() : CreatureScript("Stuffer") {}

    bool OnGossipHello(Player *player, Creature *creature) {
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Démoniste affliction", GOSSIP_SENDER_MAIN, 1);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Démoniste démono support", GOSSIP_SENDER_MAIN, 20);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Chasseur précision", GOSSIP_SENDER_MAIN, 2);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Mage feu", GOSSIP_SENDER_MAIN, 3);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Prêtre ombre", GOSSIP_SENDER_MAIN, 4);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Prêtre disci", GOSSIP_SENDER_MAIN, 5);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Prêtre sacré", GOSSIP_SENDER_MAIN, 24);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Voleur assa", GOSSIP_SENDER_MAIN, 6);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Voleur combat", GOSSIP_SENDER_MAIN, 7);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Druide feral", GOSSIP_SENDER_MAIN, 8);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Druide equi", GOSSIP_SENDER_MAIN, 9);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Druide heal", GOSSIP_SENDER_MAIN, 10);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Druide tank", GOSSIP_SENDER_MAIN, 23);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Chaman amélio", GOSSIP_SENDER_MAIN, 11);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Chaman elem", GOSSIP_SENDER_MAIN, 12);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Chaman heal", GOSSIP_SENDER_MAIN, 21);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Paladin prot", GOSSIP_SENDER_MAIN, 13);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Paladin sacré", GOSSIP_SENDER_MAIN, 14);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Paladin ret", GOSSIP_SENDER_MAIN, 15);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Guerrier fury", GOSSIP_SENDER_MAIN, 16);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Guerrier prot", GOSSIP_SENDER_MAIN, 22);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "DK impie", GOSSIP_SENDER_MAIN, 17);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "DK givre", GOSSIP_SENDER_MAIN, 18);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "DK sang", GOSSIP_SENDER_MAIN, 19);
        SendGossipMenuFor(player, 300203, creature->GetGUID());

        return true;
    }

    bool OnGossipSelect(Player *player, Creature * /*creature*/, uint32 /*sender*/, uint32 action) {
        player->PlayerTalkClass->ClearMenus();

        switch (action) {
            case 1: // Démoniste affli
            {
                sendMail(player, "Armures P3", {47796, 47793, 47551, 47462, 47485, 47797, 47419, 47795, 47454});
                sendMail(player, "Armes et accessoires P3", {47468, 47422, 48032, 45294, 47489, 45495, 45518, 45466});
                break;
            }
            case 20: // Démoniste démono support
            {
                sendMail(player, "Armures P3", {47796, 47793, 47554, 47794, 47485, 47797, 47419, 47435, 47454});
                sendMail(player, "Armes et accessoires P3", {45133, 47422, 47470, 45294, 47489, 45495, 45518, 40255});
                break;
            }
            case 2: // Chasseur précision
            {
                sendMail(player, "Armures P3", {48267, 48269, 47546, 46965, 47442, 48266, 47472, 48268, 47457});
                sendMail(player, "Armes et accessoires P3", {47433, 47491, 46995, 45931, 47464, 45608, 47443});
                break;
            }
            case 3: // Mage feu
            {
                sendMail(player, "Armures P3", {47764, 47767, 47551, 47462, 47467, 47763, 47447, 47765, 47454});
                sendMail(player, "Armes et accessoires P3", {47468, 47518, 47437, 45294, 45518, 47477, 47489, 45495});
                break;
            }
            case 4: // Prêtre ombre
            {
                sendMail(player, "Armures P3", {48088, 48091, 47551, 48090, 47467, 45665, 47419, 48089, 47097});
                sendMail(player, "Armes et accessoires P3", {47468, 47483, 47470, 45294, 45495, 47237, 45518, 47477});
                break;
            }
            case 5: // Prêtre disci
            {
                sendMail(player, "Armures P3", {46197, 46190, 47490, 46193, 47588, 46188, 45619, 47478, 46050});
                sendMail(player, "Armes et accessoires P3", {48003, 47483, 47470, 45294, 46096, 47439, 40432, 47432});
                break;
            }
            case 24: // Prêtre sacré
            {
                sendMail(player, "Armures P3", {49482, 46068, 45618, 47604, 47586, 48066, 45619, 48064, 45135});
                sendMail(player, "Armes et accessoires P3", {45443, 47483, 47470, 47995, 45946, 47439, 45535, 47432});
                break;
            }
            case 6: // voleur assa
            {
                sendMail(player, "Armures P3", {48235, 48237, 47546, 48233, 47474, 48234, 47460, 47420, 47445});
                sendMail(player, "Armes et accessoires P3", {47433, 47416, 47416, 47523, 47443, 45608, 45609, 47464});
                break;
            }
            case 7: // voleur combat
            {
                sendMail(player, "Armures P3", {48235, 48237, 47546, 48233, 47474, 48234, 47460, 47420, 47445});
                sendMail(player, "Armes et accessoires P3", {47433, 47475, 47427, 47523, 47443, 48007, 45609, 47464});
                break;
            }
            case 8: // druide feral dps
            {
                sendMail(player, "Armures P3", {48201, 48198, 47546, 48199, 47474, 48202, 47460, 45536, 47445});
                sendMail(player, "Armes et accessoires P3", {47433, 47463, 47668, 47464, 45931, 45608, 47443});
                break;
            }
            case 9: // druide equi
            {
                sendMail(player, "Armures P3", {48174, 48177, 47551, 48176, 47467, 47454, 47479, 47447, 48173});
                sendMail(player, "Armes et accessoires P3", {47468, 47483, 47437, 47670, 47477, 45518, 46046, 47489});
                break;
            }
            case 10: // druide heal
            {
                sendMail(player, "Armures P3", {47554, 47438, 47454, 47469, 48176, 46184, 46187, 46185, 46183});
                sendMail(player, "Armes et accessoires P3", {47468, 46017, 40342, 48032, 45535, 47432, 47439, 45495});
                break;
            }
            case 23: // druide tank
            {
                sendMail(player, "Armures P3", {47549, 47155, 47112, 46975, 47077, 48201, 48198, 48199, 48202});
                sendMail(player, "Armes et accessoires P3", {47133, 48523, 45509, 45158, 47088, 49489, 47955});
                break;
            }
            case 11: // chaman amélio
            {
                sendMail(player, "Armures P3", {48358, 47456, 48360, 47551, 47412, 47989, 48357, 47460, 48359});
                sendMail(player, "Armes et accessoires P3", {47433, 47483, 47475, 47666, 47443, 46046, 47477, 45609});
                break;
            }
            case 12: // chaman elem
            {
                sendMail(player, "Armures P3", {48328, 48330, 47551, 48326, 45460, 48327, 47447, 47479, 47456});
                sendMail(player, "Armes et accessoires P3", {47468, 47422, 47448, 47666, 45495, 46046, 47477, 45518});
                break;
            }
            case 21: // chaman heal
            {
                sendMail(player, "Armures P3", {46201, 46204, 47551, 46198, 45460, 46199, 47426, 47479, 47456});
                sendMail(player, "Armes et accessoires P3", {47468, 46017, 47448, 47665, 45614, 47439, 45535, 47059, 47206});
                break;
            }
            case 13: // paladin tank
            {
                sendMail(player, "Armures P3", {48649, 48647, 47550, 47415, 47459, 48650, 47444, 48648, 47430});
                sendMail(player, "Armes et accessoires P3", {47466, 47475, 47421, 47661, 45158, 47451, 47476, 45471});
                break;
            }
            case 14: // paladin heal
            {
                sendMail(player, "Armures P3", {48587, 48585, 47551, 47471, 45460, 45665, 47997, 47440, 47424});
                sendMail(player, "Armes et accessoires P3", {47468, 46017, 47448, 40705, 37111, 46051, 45614, 47439});
                break;
            }
            case 15: // paladin ret
            {
                sendMail(player, "Armures P3", {48619, 48621, 47548, 48617, 47474, 48618, 47429, 47465, 47473});
                sendMail(player, "Armes et accessoires P3", {47060, 47520, 47661, 42987, 47464, 47443, 47413});
                break;
            }
            case 16: // guerrier fury
            {
                sendMail(player, "Armures P3", {48398, 48400, 47545, 48396, 47414, 47240, 47002, 48399, 47445});
                sendMail(player, "Armes et accessoires P3", {47433, 47446, 47446, 47428, 46966, 47075, 45931, 47131});
                break;
            }
            case 22: // guerrier tank
            {
                sendMail(player, "Armures P3", {48468, 48470, 47550, 47415, 47459, 48467, 47444, 48469, 47430});
                sendMail(player, "Armes et accessoires P3", {47466, 47513, 45587, 47660, 47476, 45471, 47451, 45158});
                break;
            }
            case 17: // DK impie
            {
                sendMail(player, "Armures P3", {48493,48495,47548,48491,45663,48492,47429,47465,45599 });
                sendMail(player, "Armes et accessoires P3", {47458,47475,47528,47673,47464,45609,47993,47413 });
                break;
            }
            case 18: // DK givre
            {
                sendMail(player, "Armures P3", { 45599, 48494, 45241, 47492, 48493, 48495, 47548, 48491, 45663 });
                sendMail(player, "Armes et accessoires P3", { 47475, 47475, 40207, 47458, 47413, 45534, 45931, 47464});
                break;
            }
            case 19: // DK sang
            {
                sendMail(player, "Armures P3", { 48546, 47076, 47061, 47003, 47111, 46968, 47549, 48543, 48545 });
                sendMail(player, "Armes et accessoires P3", { 47515, 47672, 47133, 49489, 47088, 45158, 47955 });
                break;
            }
            case 99:
            {
                sendMail(player, "Armures P2", {});
                sendMail(player, "Armes et accessoires P2", {});
                break;
            }
        }

        return true;
    }

private:
    void sendMail(Player *player, const std::string& subject, const std::list<int>& itemIds)
    {
        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();

        MailSender sender(MAIL_NORMAL, player->GetGUID().GetCounter(), MAIL_STATIONERY_GM);

        MailDraft draft(subject, std::string());

        for (auto const& itemId : itemIds)
        {
            if (Item* item = Item::CreateItem(itemId, 1))
            {
                item->SaveToDB(trans);
                draft.AddItem(item);
            }
        }

        draft.SendMailTo(trans, MailReceiver(player, player->GetGUID().GetCounter()), sender);
        CharacterDatabase.CommitTransaction(trans);
    }
};

void AddStufferScripts() {
    new Stuffer();
}
