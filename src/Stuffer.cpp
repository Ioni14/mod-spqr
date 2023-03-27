#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedGossip.h"

class Stuffer : public CreatureScript {
public:
    Stuffer() : CreatureScript("Stuffer") {}

    bool OnGossipHello(Player *player, Creature *creature) {
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Démoniste affliction", GOSSIP_SENDER_MAIN, 1);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Démoniste démono support", GOSSIP_SENDER_MAIN, 20);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Chasseur survie", GOSSIP_SENDER_MAIN, 2);
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
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Paladin tank", GOSSIP_SENDER_MAIN, 13);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Paladin heal", GOSSIP_SENDER_MAIN, 14);
        AddGossipItemFor(player, GOSSIP_ICON_DOT, "Anci", GOSSIP_SENDER_MAIN, 15);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Guerrier fury", GOSSIP_SENDER_MAIN, 16);
        AddGossipItemFor(player, GOSSIP_ICON_TABARD, "Guerrier tank", GOSSIP_SENDER_MAIN, 22);
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
                sendMail(player, "Armures P2", {45497, 46068, 45618, 46137, 45446, 45665, 45619, 46139, 45135});
                sendMail(player, "Armes et accessoires P2", {45133, 45495, 46046, 45518, 45466, 45620, 45617, 45294, 45457});
                break;
            }
            case 20: // Démoniste démono support
            {
                sendMail(player, "Armures P2", {45497, 46068, 45618, 45240, 45446, 45520, 45619, 45488, 45135});
                sendMail(player, "Armes et accessoires P2", {45243, 45495, 45297, 45518, 40255, 45620, 45617, 45294});
                break;
            }
            case 2: // Chasseur survie
            {
                sendMail(player, "Armures P2", {45610, 45300, 46032, 45473, 45869, 45444, 46095, 45536, 45244});
                sendMail(player, "Armes et accessoires P2", {45517, 45608, 46322, 44253, 46038, 45613, 45570});
                break;
            }
            case 3: // Mage feu
            {
                sendMail(player, "Armures P2", {46129, 46134, 45242, 46130, 45446, 45665, 45619, 46133, 45537});
                sendMail(player, "Armes et accessoires P2", {45133, 45495, 46046, 45466, 45518, 45620, 45617, 45294, 45457});
                break;
            }
            case 4: // Prêtre ombre
            {
                sendMail(player, "Armures P2", {46172, 46165, 45242, 46168, 45446, 45665, 45619, 46170, 45135});
                sendMail(player, "Armes et accessoires P2", {45243, 45495, 46046, 45466, 45518, 45620, 45617, 45294, 45457});
                break;
            }
            case 5: // Prêtre disci
            {
                sendMail(player, "Armures P2", {46197, 45390, 45486, 46193, 45146, 45520, 45558, 45388, 46050});
                sendMail(player, "Armes et accessoires P2", {45933, 45946, 46096, 40432, 45535, 45612, 45314, 45294});
                break;
            }
            case 24: // Prêtre sacré
            {
                sendMail(player, "Armures P2", {46197, 45390, 45486, 46193, 44008, 45520, 45558, 45388, 46050});
                sendMail(player, "Armes et accessoires P2", {45447, 45946, 46323, 46051, 45535, 46035, 45271, 45511});
                break;
            }
            case 6: // voleur assa
            {
                sendMail(player, "Armures P2", {46125, 45245, 45461, 45473, 45611, 46124, 46095, 45536, 45564});
                sendMail(player, "Armes et accessoires P2", {45517, 45484, 45484, 45570, 46048, 45608, 45609, 46038});
                break;
            }
            case 7: // voleur combat
            {
                sendMail(player, "Armures P2", {45993, 45245, 45461, 45473, 45869, 46043, 46095, 45536, 45564});
                sendMail(player, "Armes et accessoires P2", {45517, 45132, 45484, 45296, 46048, 45608, 45609, 45931});
                break;
            }
            case 8: // druide feral dps
            {
                sendMail(player, "Armures P2", {46161, 45245, 46032, 45473, 45869, 46158, 46095, 45536, 45564});
                sendMail(player, "Armes et accessoires P2", {45517, 45613, 40713, 46048, 45608, 45609, 45931});
                break;
            }
            case 9: // druide equi
            {
                sendMail(player, "Armures P2", {46191, 46196, 45242, 46194, 45446, 45665, 45619, 46192, 45537});
                sendMail(player, "Armes et accessoires P2", {45933, 46046, 45495, 45466, 45518, 45620, 45617, 40321, 45457});
                break;
            }
            case 10: // druide heal
            {
                sendMail(player, "Armures P2", {46184, 46187, 45618, 45519, 45446, 46183, 45616, 46185, 45135});
                sendMail(player, "Armes et accessoires P2", {45243, 45495, 45946, 45703, 45535, 45612, 45271, 40342});
                break;
            }
            case 23: // druide tank
            {
                sendMail(player, "Armures P2", {41678, 45245, 45496, 45473, 45611, 46043, 46095, 45536, 45232});
                sendMail(player, "Armes et accessoires P2", {45517, 45471, 45608, 45158, 46021, 45533, 45509});
                break;
            }
            case 11: // chaman amélio
            {
                sendMail(player, "Armures P2", {45610, 46203, 45461, 46205, 45460, 46200, 45553, 46208, 45989});
                sendMail(player, "Armes et accessoires P2", {45517, 45456, 46046, 46038, 45609, 45612, 46097, 42608, 45132});
                break;
            }
            case 12: // chaman elem
            {
                sendMail(player, "Armures P2", {46209, 46211, 45242, 46206, 45460, 45665, 45616, 46210, 45537});
                sendMail(player, "Armes et accessoires P2", {45933, 46046, 45495, 40255, 45518, 45612, 45470, 40267});
                break;
            }
            case 21: // chaman heal
            {
                sendMail(player, "Armures P2", {46201, 46204, 45486, 45867, 45460, 46199, 45151, 46202, 45615});
                sendMail(player, "Armes et accessoires P2", {45443, 45614, 46046, 45535, 45466, 45612, 45470, 45114});
                break;
            }
            case 13: // paladin tank
            {
                sendMail(player, "Armures P2", {46175, 46177, 45496, 46039, 45111, 45487, 45825, 45594, 45988});
                sendMail(player, "Armes et accessoires P2", {45485, 45326, 45471, 45158, 46021, 45947, 45587, 45145});
                break;
            }
            case 14: // paladin heal
            {
                sendMail(player, "Armures P2", {46180, 46182, 45486, 45445, 45460, 46179, 45616, 46181, 45537});
                sendMail(player, "Armes et accessoires P2", {45443, 45614, 45946, 46051, 37111, 45612, 45470, 40705});
                break;
            }
            case 15: // paladin ret
            {
                sendMail(player, "Armures P2", {45472, 45245, 46032, 45473, 45663, 45444, 46095, 45134, 45599});
                sendMail(player, "Armes et accessoires P2", {45517, 45608, 45534, 45609, 42987, 45516, 42853, 49623});
                break;
            }
            case 16: // guerrier fury
            {
                sendMail(player, "Armures P2", {46151, 46149, 46032, 46146, 45611, 46148, 46095, 45536, 45599});
                sendMail(player, "Armes et accessoires P2", {45517, 46322, 45608, 45931, 42987, 45516, 45516, 45296});
                break;
            }
            case 22: // guerrier tank
            {
                sendMail(player, "Armures P2", {46166, 46167, 45496, 46162, 45111, 45487, 45139, 45594, 45988});
                sendMail(player, "Armes et accessoires P2", {45485, 45471, 45247, 45158, 46021, 45442, 45587, 45137});
                break;
            }
            case 17: // DK impie
            {
                sendMail(player, "Armures P2", {45472, 46117, 45588, 46111, 45663, 45481, 45241, 45134, 45599});
                sendMail(player, "Armes et accessoires P2", {46040, 45250, 45534, 45609, 42987, 46097, 46036, 45254});
                break;
            }
            case 18: // DK givre
            {
                sendMail(player, "Armures P2", {46115, 46117, 46032, 46111, 45663, 46113, 45241, 45134, 45599});
                sendMail(player, "Armes et accessoires P2", {45459, 45608, 45534, 45931, 42987, 46097, 46097, 40207});
                break;
            }
            case 19: // DK sang
            {
                sendMail(player, "Armures P2", {46120, 46122, 45496, 46118, 45111, 46119, 45551, 45594, 45988});
                sendMail(player, "Armes et accessoires P2", {45485, 45471, 45871, 45158, 46021, 45533, 45144});
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
