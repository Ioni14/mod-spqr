
DELETE FROM acore_world.creature_template WHERE entry = 300200;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300200, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Professions', null, '', 0, 80, 80, 2, 35, 1, 1, 1.14286, 1, 1, 20, 0.5,
        0, 0, 1, 2000, 2000, 1, 1, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1, 1, 0, 0,
        1, 0, 0, 0, 'Enchantor', 12340);

DELETE FROM acore_world.creature_template_locale WHERE entry = 300200;
INSERT INTO acore_world.creature_template_locale (entry, locale, Name, Title, VerifiedBuild)
VALUES (300200, 'frFR', 'Métiers', null, 18019);

DELETE FROM acore_world.creature_template WHERE entry = 300201;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300201, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Item enhancements', null, '', 0, 80, 80, 2, 35, 128, 1, 1.14286, 1, 1,
        20, 0.5, 0, 0, 1, 2000, 2000, 1, 1, 8, 32768, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1,
        1, 1, 0, 0, 1, 0, 0, 0, '', 12340);

DELETE FROM acore_world.creature_template_locale WHERE entry = 300201;
INSERT INTO acore_world.creature_template_locale (entry, locale, Name, Title, VerifiedBuild)
VALUES (300201, 'frFR', 'Améliorations objets', null, 18019);

DELETE FROM acore_world.npc_vendor WHERE entry = 300201;
INSERT INTO acore_world.npc_vendor (entry, slot, item, maxcount, incrtime, ExtendedCost, VerifiedBuild)
VALUES (300201, 0, 41611 /* Boucle de ceinture éternelle */, 0, 0, 0, 0),
       (300201, 0, 38374 /* Renfort */, 0, 0, 0, 0),
       (300201, 0, 38373 /* Renfort */, 0, 0, 0, 0),
       (300201, 0, 44963 /* Renfort */, 0, 0, 0, 0),
       (300201, 0, 41602 /* Fil */, 0, 0, 0, 0),
       (300201, 0, 41604 /* Fil */, 0, 0, 0, 0),
       (300201, 0, 44936 /* Plaque titane */, 0, 0, 0, 0),
       (300201, 0, 41167 /* Lunette */, 0, 0, 0, 0),
       (300201, 0, 41146 /* Lunette */, 0, 0, 0, 0),
       (300201, 1, 50369 /*  */, 0, 0, 0, 0),
       (300201, 1, 50368 /*  */, 0, 0, 0, 0),
       (300201, 1, 50367 /*  */, 0, 0, 0, 0),
       (300201, 1, 50338 /*  */, 0, 0, 0, 0),
       (300201, 1, 50335 /*  */, 0, 0, 0, 0),
       (300201, 1, 50370 /*  */, 0, 0, 0, 0),
       (300201, 1, 50336 /*  */, 0, 0, 0, 0),
       (300201, 1, 50337 /*  */, 0, 0, 0, 0)
;

-- Consommables
DELETE FROM acore_world.creature_template WHERE entry = 300202;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300202, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Consommables', null, '', 0, 80, 80, 2, 35, 128, 1, 1.14286, 1, 1, 20,
        0.5, 0, 0, 1, 2000, 2000, 1, 1, 8, 32768, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1,
        1, 0, 0, 1, 0, 0, 0, '', 12340);

DELETE FROM acore_world.npc_vendor WHERE entry = 300202;
INSERT INTO acore_world.npc_vendor (entry, slot, item, maxcount, incrtime, ExtendedCost, VerifiedBuild)
VALUES -- flacons
       (300202, 0, 46376, 0, 0, 0, 0),
       (300202, 0, 46377, 0, 0, 0, 0),
       (300202, 0, 46379, 0, 0, 0, 0),
       (300202, 0, 46378, 0, 0, 0, 0),
       (300202, 0, 13511, 0, 0, 0, 0),
       -- elixirs
       (300202, 1, 40068, 0, 0, 0, 0),
       (300202, 1, 40070, 0, 0, 0, 0),
       (300202, 1, 40076, 0, 0, 0, 0),
       (300202, 1, 40073, 0, 0, 0, 0),
       (300202, 1, 40072, 0, 0, 0, 0),
       (300202, 1, 40078, 0, 0, 0, 0),
       (300202, 1, 39666, 0, 0, 0, 0),
       (300202, 1, 44332, 0, 0, 0, 0),
       (300202, 1, 44325, 0, 0, 0, 0),
       (300202, 1, 44330, 0, 0, 0, 0),
       (300202, 1, 44327, 0, 0, 0, 0),
       (300202, 1, 44329, 0, 0, 0, 0),
       (300202, 1, 44331, 0, 0, 0, 0),
       (300202, 1, 44328, 0, 0, 0, 0),
       (300202, 1, 40109, 0, 0, 0, 0),
       (300202, 1, 40097, 0, 0, 0, 0),
       -- potions
       (300202, 2, 40211, 0, 0, 0, 0),
       (300202, 2, 40212, 0, 0, 0, 0),
       (300202, 2, 40087, 0, 0, 0, 0),
       (300202, 2, 40093, 0, 0, 0, 0),
       (300202, 2, 33448, 0, 0, 0, 0),
       -- bouffes
       (300202, 3, 43015, 0, 0, 0, 0),
       (300202, 3, 42999, 0, 0, 0, 0),
       (300202, 3, 43000, 0, 0, 0, 0),
       (300202, 3, 34769, 0, 0, 0, 0),
       (300202, 3, 42996, 0, 0, 0, 0),
       (300202, 3, 34768, 0, 0, 0, 0),
       (300202, 3, 42993, 0, 0, 0, 0)
;

-- Composants
DELETE FROM acore_world.creature_template WHERE entry = 300204;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300204, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Composants', null, '', 0, 80, 80, 2, 35, 128, 1, 1.14286, 1, 1,
        20, 0.5, 0, 0, 1, 2000, 2000, 1, 1, 8, 32768, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1,
        1, 1, 0, 0, 1, 0, 0, 0, '', 12340);

DELETE FROM acore_world.npc_vendor WHERE entry = 300204;
INSERT INTO acore_world.npc_vendor (entry, slot, item, maxcount, incrtime, ExtendedCost, VerifiedBuild)
VALUES (300204, 0, 39690 /* Déclencheur d'explosion volatile */, 0, 0, 0, 0)
     , (300204, 0, 36913 /* Barre saronite */, 0, 0, 0, 0)
     , (300204, 0, 41163 /* Barre titane */, 0, 0, 0, 0)
     , (300204, 0, 39682 /* Condensateur surchargé */, 0, 0, 0, 0)
     , (300204, 0, 39681 /* Boulons cobalt */, 0, 0, 0, 0)
     , (300204, 0, 39683 /* Tube givracier */, 0, 0, 0, 0)
     , (300204, 0, 35623 /* Air éternel */, 0, 0, 0, 0)
     , (300204, 0, 36860 /* Feu éternel */, 0, 0, 0, 0)
     , (300204, 0, 35624 /* Terre éternelle */, 0, 0, 0, 0)
     , (300204, 0, 33470 /* Etoffe tisse-givre */, 0, 0, 0, 0)
     , (300204, 0, 40772 /* Couteau gnome */, 0, 0, 0, 0)
     , (300204, 0, 42641 /* Sappeur */, 0, 0, 0, 0)
     , (300204, 0, 41119 /* Grenade */, 0, 0, 0, 0)
     , (300204, 0, 41593 /* Tisse-ébène */, 0, 0, 0, 0)
     , (300204, 0, 41595 /* Tisse-sort */, 0, 0, 0, 0)
     , (300204, 0, 41594 /* Voile lunaire */, 0, 0, 0, 0)
     , (300204, 1, 34057 /* Cristal abyssal */, 0, 0, 0, 0)
     , (300204, 1, 34052 /* Eclat de rêve */, 0, 0, 0, 0)
     , (300204, 1, 34055 /* Essence cosmique sup */, 0, 0, 0, 0)
     , (300204, 1, 34054 /* Poussière d'infini */, 0, 0, 0, 0)
     , (300204, 1, 22449 /* Grand éclat prismatique */, 0, 0, 0, 0)
     , (300204, 1, 22446 /* Essence planaire supérieure */, 0, 0, 0, 0)
     , (300204, 9, 6265 /* Fragment d'âme */, 0, 0, 0, 0)
;

-- Stuff P3
DELETE FROM acore_world.creature_template WHERE entry = 300203;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300203, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Stuff P3', null, '', 300203, 80, 80, 2, 35, 1, 1, 1.14286, 1, 1, 20, 0.5,
        0, 0, 1, 2000, 2000, 1, 1, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1, 1, 0, 0,
        1, 0, 0, 0, 'Stuffer', 12340);

DELETE FROM acore_world.gossip_menu WHERE MenuID = 40203;
INSERT INTO acore_world.gossip_menu (MenuID, TextID) VALUES (40203, 300203);

DELETE FROM acore_world.npc_text WHERE ID = 300203;
INSERT INTO acore_world.npc_text (ID, text0_0, text0_1, lang0, Probability0) VALUES (300203, 'Je vous envoie votre stuff par courrier.', 'Je vous envoie votre stuff par courrier.', 7, 1);

-- Reputation
DELETE FROM acore_world.creature_template WHERE entry = 300205;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300205, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Reputations', null, '', 0, 80, 80, 2, 35, 1, 1, 1.14286, 1, 1, 20, 0.5,
        0, 0, 1, 2000, 2000, 1, 1, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1, 1, 0, 0,
        1, 0, 0, 0, 'Reputation', 12340);

-- Reputation
DELETE FROM acore_world.creature_template WHERE entry = 300206;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name,
                                           subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag,
                                           speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale,
                                           `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime,
                                           BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2,
                                           dynamicflags, family, trainer_type, trainer_spell, trainer_class,
                                           trainer_race, type, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType,
                                           HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier,
                                           RacialLeader, movementId, RegenHealth, mechanic_immune_mask,
                                           spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild)
VALUES (300206, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Teleporter', null, '', 0, 80, 80, 2, 35, 1, 1, 1.14286, 1, 1, 20, 0.5,
        0, 0, 1, 2000, 2000, 1, 1, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1, 1, 0, 0,
        1, 0, 0, 0, 'Teleporter', 12340);

-- Gemmes
DELETE FROM acore_world.creature_template WHERE entry = 300000;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1,
                                           KillCredit2, modelid1, modelid2, modelid3, modelid4, name, subname, IconName,
                                           gossip_menu_id, minlevel, maxlevel, `exp`, faction, npcflag, speed_walk,
                                           speed_run,
                                           speed_swim, speed_flight, detection_range, `scale`, `rank`, dmgschool,
                                           DamageModifier,
                                           BaseAttackTime, RangeAttackTime, BaseVariance, RangeVariance, unit_class,
                                           unit_flags,
                                           unit_flags2, dynamicflags, family, trainer_type, trainer_spell,
                                           trainer_class,
                                           trainer_race, `type`, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId,
                                           VehicleId, mingold, maxgold, AIName, MovementType, HoverHeight,
                                           HealthModifier,
                                           ManaModifier, ArmorModifier, ExperienceModifier, RacialLeader, movementId,
                                           RegenHealth,
                                           mechanic_immune_mask, spell_school_immune_mask, flags_extra, ScriptName,
                                           VerifiedBuild)
VALUES (300000, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Gemmes', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0, 1.0,
        20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1.0,
        1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340);


DELETE FROM acore_world.npc_vendor WHERE entry = 300000;
INSERT INTO acore_world.npc_vendor (entry, slot, item, maxcount, incrtime, ExtendedCost, VerifiedBuild)
VALUES
    -- rouges
    (300000, 0, 40113, 0, 0, 0, 0),
    (300000, 0, 40111, 0, 0, 0, 0),
    (300000, 0, 40117, 0, 0, 0, 0),
    (300000, 0, 40114, 0, 0, 0, 0),
    (300000, 0, 40112, 0, 0, 0, 0),
    (300000, 0, 40118, 0, 0, 0, 0),
    (300000, 0, 40115, 0, 0, 0, 0),
    (300000, 0, 40116, 0, 0, 0, 0),
    -- jaunes
    (300000, 1, 40128, 0, 0, 0, 0),
    (300000, 1, 40123, 0, 0, 0, 0),
    (300000, 1, 40127, 0, 0, 0, 0),
    (300000, 1, 40125, 0, 0, 0, 0),
    (300000, 1, 40126, 0, 0, 0, 0),
    (300000, 1, 40124, 0, 0, 0, 0),
    -- bleues
    (300000, 2, 40119, 0, 0, 0, 0),
    (300000, 2, 40122, 0, 0, 0, 0),
    (300000, 2, 40120, 0, 0, 0, 0),
    (300000, 2, 40121, 0, 0, 0, 0),
    -- oranges
    (300000, 3, 40155, 0, 0, 0, 0),
    (300000, 3, 40142, 0, 0, 0, 0),
    (300000, 3, 40153, 0, 0, 0, 0),
    (300000, 3, 40157, 0, 0, 0, 0),
    (300000, 3, 40151, 0, 0, 0, 0),
    (300000, 3, 40147, 0, 0, 0, 0),
    (300000, 3, 40152, 0, 0, 0, 0),
    (300000, 3, 40159, 0, 0, 0, 0),
    (300000, 3, 40146, 0, 0, 0, 0),
    (300000, 3, 40143, 0, 0, 0, 0),
    (300000, 3, 40148, 0, 0, 0, 0),
    (300000, 3, 40154, 0, 0, 0, 0),
    (300000, 3, 40162, 0, 0, 0, 0),
    (300000, 3, 40145, 0, 0, 0, 0),
    (300000, 3, 40156, 0, 0, 0, 0),
    (300000, 3, 40149, 0, 0, 0, 0),
    (300000, 3, 40160, 0, 0, 0, 0),
    (300000, 3, 40163, 0, 0, 0, 0),
    (300000, 3, 40158, 0, 0, 0, 0),
    (300000, 3, 40144, 0, 0, 0, 0),
    (300000, 3, 40150, 0, 0, 0, 0),
    (300000, 3, 40161, 0, 0, 0, 0),
    -- violettes
    (300000, 4, 40133, 0, 0, 0, 0),
    (300000, 4, 40129, 0, 0, 0, 0),
    (300000, 4, 40134, 0, 0, 0, 0),
    (300000, 4, 40130, 0, 0, 0, 0),
    (300000, 4, 40141, 0, 0, 0, 0),
    (300000, 4, 40132, 0, 0, 0, 0),
    (300000, 4, 40136, 0, 0, 0, 0),
    (300000, 4, 40140, 0, 0, 0, 0),
    (300000, 4, 40135, 0, 0, 0, 0),
    (300000, 4, 40138, 0, 0, 0, 0),
    (300000, 4, 40139, 0, 0, 0, 0),
    (300000, 4, 40131, 0, 0, 0, 0),
    (300000, 4, 40137, 0, 0, 0, 0),
    -- vertes
    (300000, 5, 40166, 0, 0, 0, 0),
    (300000, 5, 40167, 0, 0, 0, 0),
    (300000, 5, 40175, 0, 0, 0, 0),
    (300000, 5, 40179, 0, 0, 0, 0),
    (300000, 5, 40178, 0, 0, 0, 0),
    (300000, 5, 40182, 0, 0, 0, 0),
    (300000, 5, 40174, 0, 0, 0, 0),
    (300000, 5, 40169, 0, 0, 0, 0),
    (300000, 5, 40168, 0, 0, 0, 0),
    (300000, 5, 40181, 0, 0, 0, 0),
    (300000, 5, 40172, 0, 0, 0, 0),
    (300000, 5, 40177, 0, 0, 0, 0),
    (300000, 5, 40171, 0, 0, 0, 0),
    (300000, 5, 40173, 0, 0, 0, 0),
    (300000, 5, 40165, 0, 0, 0, 0),
    (300000, 5, 40176, 0, 0, 0, 0),
    (300000, 5, 40180, 0, 0, 0, 0),
    (300000, 5, 40170, 0, 0, 0, 0),
    (300000, 5, 40164, 0, 0, 0, 0),
    -- metagemmes
    (300000, 6, 41398, 0, 0, 0, 0),
    (300000, 6, 41285, 0, 0, 0, 0),
    (300000, 6, 41401, 0, 0, 0, 0),
    (300000, 6, 41380, 0, 0, 0, 0),
    (300000, 6, 41400, 0, 0, 0, 0),
    (300000, 6, 41333, 0, 0, 0, 0),
    (300000, 6, 41339, 0, 0, 0, 0),
    (300000, 6, 41382, 0, 0, 0, 0),
    (300000, 6, 41381, 0, 0, 0, 0),
    (300000, 6, 41377, 0, 0, 0, 0),
    (300000, 6, 41396, 0, 0, 0, 0),
    (300000, 6, 41385, 0, 0, 0, 0),
    (300000, 6, 41376, 0, 0, 0, 0),
    (300000, 6, 41375, 0, 0, 0, 0),
    (300000, 6, 41378, 0, 0, 0, 0),
    (300000, 6, 41397, 0, 0, 0, 0),
    (300000, 6, 41307, 0, 0, 0, 0),
    (300000, 6, 41389, 0, 0, 0, 0),
    (300000, 6, 41395, 0, 0, 0, 0),
    (300000, 6, 41335, 0, 0, 0, 0),
    (300000, 6, 44078, 0, 0, 0, 0),
    (300000, 6, 41379, 0, 0, 0, 0),
    (300000, 6, 44076, 0, 0, 0, 0),
    (300000, 6, 44084, 0, 0, 0, 0),
    (300000, 6, 44087, 0, 0, 0, 0),
    (300000, 6, 44081, 0, 0, 0, 0),
    (300000, 6, 44089, 0, 0, 0, 0),
    (300000, 6, 44082, 0, 0, 0, 0),
    (300000, 6, 44088, 0, 0, 0, 0),
    -- Spéciaux
    (300000, 7, 42702, 0, 0, 0, 0),
    (300000, 7, 42225, 0, 0, 0, 0)
;


-- glyphes
DELETE FROM acore_world.creature_template WHERE entry between 300100 and 300109;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3,
                                           KillCredit1,
                                           KillCredit2, modelid1, modelid2, modelid3, modelid4, name, subname, IconName,
                                           gossip_menu_id, minlevel, maxlevel, `exp`, faction, npcflag, speed_walk,
                                           speed_run,
                                           speed_swim, speed_flight, detection_range, `scale`, `rank`, dmgschool,
                                           DamageModifier,
                                           BaseAttackTime, RangeAttackTime, BaseVariance, RangeVariance, unit_class,
                                           unit_flags,
                                           unit_flags2, dynamicflags, family, trainer_type, trainer_spell,
                                           trainer_class,
                                           trainer_race, `type`, type_flags, lootid, pickpocketloot, skinloot,
                                           PetSpellDataId,
                                           VehicleId, mingold, maxgold, AIName, MovementType, HoverHeight,
                                           HealthModifier,
                                           ManaModifier, ArmorModifier, ExperienceModifier, RacialLeader, movementId,
                                           RegenHealth,
                                           mechanic_immune_mask, spell_school_immune_mask, flags_extra, ScriptName,
                                           VerifiedBuild)
VALUES (300100, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Chaman', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300101, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Chasseur', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300102, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes DK', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0, 1.0,
        20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1.0,
        1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300103, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Démoniste', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286,
        1.0, 1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
        '', 0, 1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300104, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Druide', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300105, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Guerrier', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300106, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Mage', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300107, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Paladin', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300108, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Prêtre', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340),
       (300109, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Glyphes Voleur', null, '', 0, 80, 80, 2, 2007, 128, 1.0, 1.14286, 1.0,
        1.0, 20.0, 0.5, 0, 0, 1.0, 2000, 2000, 1.0, 1.0, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0,
        1.0, 1.0, 1.0, 1.0, 1.0, 0, 0, 1, 0, 0, 0, '', 12340)
;

DELETE FROM acore_world.npc_vendor WHERE entry between 300100 and 300109;
INSERT INTO acore_world.npc_vendor (entry, slot, item, maxcount, incrtime, ExtendedCost, VerifiedBuild)
VALUES
    -- chaman
    (300100, 0, 41529, 0, 0, 0, 0),
    (300100, 0, 41524, 0, 0, 0, 0),
    (300100, 0, 45771, 0, 0, 0, 0),
    (300100, 0, 45778, 0, 0, 0, 0),
    (300100, 0, 41530, 0, 0, 0, 0),
    (300100, 0, 41532, 0, 0, 0, 0),
    (300100, 0, 45770, 0, 0, 0, 0),
    (300100, 0, 41527, 0, 0, 0, 0),
    (300100, 0, 45776, 0, 0, 0, 0),
    (300100, 0, 41517, 0, 0, 0, 0),
    (300100, 0, 45775, 0, 0, 0, 0),
    (300100, 0, 41536, 0, 0, 0, 0),
    (300100, 0, 41539, 0, 0, 0, 0),
    (300100, 0, 41526, 0, 0, 0, 0),
    (300100, 0, 41533, 0, 0, 0, 0),
    (300100, 0, 41534, 0, 0, 0, 0),
    (300100, 0, 41542, 0, 0, 0, 0),
    (300100, 0, 41531, 0, 0, 0, 0),
    (300100, 0, 41535, 0, 0, 0, 0),
    (300100, 0, 41538, 0, 0, 0, 0),
    (300100, 0, 41541, 0, 0, 0, 0),
    (300100, 0, 45777, 0, 0, 0, 0),
    (300100, 0, 41552, 0, 0, 0, 0),
    (300100, 0, 45772, 0, 0, 0, 0),
    (300100, 0, 41540, 0, 0, 0, 0),
    (300100, 0, 41537, 0, 0, 0, 0),
    (300100, 0, 41547, 0, 0, 0, 0),
    (300100, 0, 41518, 0, 0, 0, 0),
    -- chasseur
    (300101, 0, 42912, 0, 0, 0, 0),
    (300101, 0, 42914, 0, 0, 0, 0),
    (300101, 0, 45733, 0, 0, 0, 0),
    (300101, 0, 45732, 0, 0, 0, 0),
    (300101, 0, 42902, 0, 0, 0, 0),
    (300101, 0, 42907, 0, 0, 0, 0),
    (300101, 0, 42897, 0, 0, 0, 0),
    (300101, 0, 45625, 0, 0, 0, 0),
    (300101, 0, 45731, 0, 0, 0, 0),
    (300101, 0, 42904, 0, 0, 0, 0),
    (300101, 0, 42915, 0, 0, 0, 0),
    (300101, 0, 42917, 0, 0, 0, 0),
    (300101, 0, 42910, 0, 0, 0, 0),
    (300101, 0, 42909, 0, 0, 0, 0),
    (300101, 0, 42913, 0, 0, 0, 0),
    (300101, 0, 42899, 0, 0, 0, 0),
    (300101, 0, 42900, 0, 0, 0, 0),
    (300101, 0, 42903, 0, 0, 0, 0),
    (300101, 0, 42905, 0, 0, 0, 0),
    (300101, 0, 42898, 0, 0, 0, 0),
    (300101, 0, 42911, 0, 0, 0, 0),
    (300101, 0, 45735, 0, 0, 0, 0),
    (300101, 0, 42901, 0, 0, 0, 0),
    (300101, 0, 42908, 0, 0, 0, 0),
    (300101, 0, 42906, 0, 0, 0, 0),
    (300101, 0, 42916, 0, 0, 0, 0),
    (300101, 0, 45734, 0, 0, 0, 0),
    -- DK
    (300102, 0, 45805, 0, 0, 0, 0),
    (300102, 0, 43549, 0, 0, 0, 0),
    (300102, 0, 45804, 0, 0, 0, 0),
    (300102, 0, 43546, 0, 0, 0, 0),
    (300102, 0, 43542, 0, 0, 0, 0),
    (300102, 0, 43547, 0, 0, 0, 0),
    (300102, 0, 43538, 0, 0, 0, 0),
    (300102, 0, 43554, 0, 0, 0, 0),
    (300102, 0, 43827, 0, 0, 0, 0),
    (300102, 0, 43543, 0, 0, 0, 0),
    (300102, 0, 45806, 0, 0, 0, 0),
    (300102, 0, 43533, 0, 0, 0, 0),
    (300102, 0, 43541, 0, 0, 0, 0),
    (300102, 0, 43537, 0, 0, 0, 0),
    (300102, 0, 45799, 0, 0, 0, 0),
    (300102, 0, 43545, 0, 0, 0, 0),
    (300102, 0, 43550, 0, 0, 0, 0),
    (300102, 0, 43825, 0, 0, 0, 0),
    (300102, 0, 43536, 0, 0, 0, 0),
    (300102, 0, 43548, 0, 0, 0, 0),
    (300102, 0, 45800, 0, 0, 0, 0),
    (300102, 0, 43553, 0, 0, 0, 0),
    (300102, 0, 45803, 0, 0, 0, 0),
    (300102, 0, 43534, 0, 0, 0, 0),
    (300102, 0, 43551, 0, 0, 0, 0),
    (300102, 0, 43826, 0, 0, 0, 0),
    (300102, 0, 43552, 0, 0, 0, 0),
    -- démoniste
    (300103, 0, 50077, 0, 0, 0, 0),
    (300103, 0, 42459, 0, 0, 0, 0),
    (300103, 0, 45785, 0, 0, 0, 0),
    (300103, 0, 45779, 0, 0, 0, 0),
    (300103, 0, 42469, 0, 0, 0, 0),
    (300103, 0, 42455, 0, 0, 0, 0),
    (300103, 0, 42454, 0, 0, 0, 0),
    (300103, 0, 45780, 0, 0, 0, 0),
    (300103, 0, 45783, 0, 0, 0, 0),
    (300103, 0, 42453, 0, 0, 0, 0),
    (300103, 0, 42464, 0, 0, 0, 0),
    (300103, 0, 42472, 0, 0, 0, 0),
    (300103, 0, 42465, 0, 0, 0, 0),
    (300103, 0, 45781, 0, 0, 0, 0),
    (300103, 0, 42456, 0, 0, 0, 0),
    (300103, 0, 42460, 0, 0, 0, 0),
    (300103, 0, 42461, 0, 0, 0, 0),
    (300103, 0, 42473, 0, 0, 0, 0),
    (300103, 0, 42471, 0, 0, 0, 0),
    (300103, 0, 42467, 0, 0, 0, 0),
    (300103, 0, 45782, 0, 0, 0, 0),
    (300103, 0, 42468, 0, 0, 0, 0),
    (300103, 0, 42457, 0, 0, 0, 0),
    (300103, 0, 42458, 0, 0, 0, 0),
    (300103, 0, 42463, 0, 0, 0, 0),
    (300103, 0, 45789, 0, 0, 0, 0),
    (300103, 0, 42462, 0, 0, 0, 0),
    (300103, 0, 42470, 0, 0, 0, 0),
    (300103, 0, 42466, 0, 0, 0, 0),
    -- druide
    (300104, 0, 40921, 0, 0, 0, 0),
    (300104, 0, 40906, 0, 0, 0, 0),
    (300104, 0, 40919, 0, 0, 0, 0),
    (300104, 0, 44928, 0, 0, 0, 0),
    (300104, 0, 45603, 0, 0, 0, 0),
    (300104, 0, 45602, 0, 0, 0, 0),
    (300104, 0, 40897, 0, 0, 0, 0),
    (300104, 0, 45604, 0, 0, 0, 0),
    (300104, 0, 40900, 0, 0, 0, 0),
    (300104, 0, 40913, 0, 0, 0, 0),
    (300104, 0, 40923, 0, 0, 0, 0),
    (300104, 0, 40901, 0, 0, 0, 0),
    (300104, 0, 40902, 0, 0, 0, 0),
    (300104, 0, 50125, 0, 0, 0, 0),
    (300104, 0, 48720, 0, 0, 0, 0),
    (300104, 0, 40908, 0, 0, 0, 0),
    (300104, 0, 46372, 0, 0, 0, 0),
    (300104, 0, 45622, 0, 0, 0, 0),
    (300104, 0, 40912, 0, 0, 0, 0),
    (300104, 0, 40914, 0, 0, 0, 0),
    (300104, 0, 40903, 0, 0, 0, 0),
    (300104, 0, 40915, 0, 0, 0, 0),
    (300104, 0, 45601, 0, 0, 0, 0),
    (300104, 0, 40899, 0, 0, 0, 0),
    (300104, 0, 45623, 0, 0, 0, 0),
    (300104, 0, 40896, 0, 0, 0, 0),
    (300104, 0, 40922, 0, 0, 0, 0),
    (300104, 0, 40909, 0, 0, 0, 0),
    (300104, 0, 40920, 0, 0, 0, 0),
    (300104, 0, 40924, 0, 0, 0, 0),
    (300104, 0, 43335, 0, 0, 0, 0),
    (300104, 0, 43331, 0, 0, 0, 0),
    (300104, 0, 43674, 0, 0, 0, 0),
    (300104, 0, 44922, 0, 0, 0, 0),
    (300104, 0, 43332, 0, 0, 0, 0),
    (300104, 0, 43334, 0, 0, 0, 0),
    (300104, 0, 43316, 0, 0, 0, 0),
    -- guerrier
    (300105, 0, 43423, 0, 0, 0, 0),
    (300105, 0, 43414, 0, 0, 0, 0),
    (300105, 0, 43418, 0, 0, 0, 0),
    (300105, 0, 43416, 0, 0, 0, 0),
    (300105, 0, 43424, 0, 0, 0, 0),
    (300105, 0, 43432, 0, 0, 0, 0),
    (300105, 0, 43425, 0, 0, 0, 0),
    (300105, 0, 43415, 0, 0, 0, 0),
    (300105, 0, 43421, 0, 0, 0, 0),
    (300105, 0, 45793, 0, 0, 0, 0),
    (300105, 0, 43429, 0, 0, 0, 0),
    (300105, 0, 43428, 0, 0, 0, 0),
    (300105, 0, 43431, 0, 0, 0, 0),
    (300105, 0, 45790, 0, 0, 0, 0),
    (300105, 0, 45792, 0, 0, 0, 0),
    (300105, 0, 43417, 0, 0, 0, 0),
    (300105, 0, 43422, 0, 0, 0, 0),
    (300105, 0, 43427, 0, 0, 0, 0),
    (300105, 0, 45797, 0, 0, 0, 0),
    (300105, 0, 43412, 0, 0, 0, 0),
    (300105, 0, 45794, 0, 0, 0, 0),
    (300105, 0, 43430, 0, 0, 0, 0),
    (300105, 0, 43419, 0, 0, 0, 0),
    (300105, 0, 43426, 0, 0, 0, 0),
    (300105, 0, 43413, 0, 0, 0, 0),
    (300105, 0, 45795, 0, 0, 0, 0),
    (300105, 0, 43420, 0, 0, 0, 0),
    (300105, 0, 43396, 0, 0, 0, 0),
    (300105, 0, 43395, 0, 0, 0, 0),
    (300105, 0, 49084, 0, 0, 0, 0),
    (300105, 0, 43397, 0, 0, 0, 0),
    (300105, 0, 43399, 0, 0, 0, 0),
    (300105, 0, 43400, 0, 0, 0, 0),
    (300105, 0, 43398, 0, 0, 0, 0),
    -- mage
    (300106, 0, 42751, 0, 0, 0, 0),
    (300106, 0, 42738, 0, 0, 0, 0),
    (300106, 0, 42739, 0, 0, 0, 0),
    (300106, 0, 42735, 0, 0, 0, 0),
    (300106, 0, 50045, 0, 0, 0, 0),
    (300106, 0, 45737, 0, 0, 0, 0),
    (300106, 0, 44955, 0, 0, 0, 0),
    (300106, 0, 42741, 0, 0, 0, 0),
    (300106, 0, 42752, 0, 0, 0, 0),
    (300106, 0, 45740, 0, 0, 0, 0),
    (300106, 0, 42749, 0, 0, 0, 0),
    (300106, 0, 42745, 0, 0, 0, 0),
    (300106, 0, 42754, 0, 0, 0, 0),
    (300106, 0, 45739, 0, 0, 0, 0),
    (300106, 0, 42750, 0, 0, 0, 0),
    (300106, 0, 42737, 0, 0, 0, 0),
    (300106, 0, 44684, 0, 0, 0, 0),
    (300106, 0, 42746, 0, 0, 0, 0),
    (300106, 0, 42736, 0, 0, 0, 0),
    (300106, 0, 42744, 0, 0, 0, 0),
    (300106, 0, 42753, 0, 0, 0, 0),
    (300106, 0, 45738, 0, 0, 0, 0),
    (300106, 0, 42748, 0, 0, 0, 0),
    (300106, 0, 42747, 0, 0, 0, 0),
    (300106, 0, 42743, 0, 0, 0, 0),
    (300106, 0, 42740, 0, 0, 0, 0),
    (300106, 0, 42734, 0, 0, 0, 0),
    (300106, 0, 45736, 0, 0, 0, 0),
    (300106, 0, 43339, 0, 0, 0, 0),
    (300106, 0, 43364, 0, 0, 0, 0),
    (300106, 0, 43360, 0, 0, 0, 0),
    (300106, 0, 43357, 0, 0, 0, 0),
    (300106, 0, 44920, 0, 0, 0, 0),
    (300106, 0, 43359, 0, 0, 0, 0),
    (300106, 0, 43361, 0, 0, 0, 0),
    -- paladin
    (300107, 0, 41106, 0, 0, 0, 0),
    (300107, 0, 43869, 0, 0, 0, 0),
    (300107, 0, 41092, 0, 0, 0, 0),
    (300107, 0, 45745, 0, 0, 0, 0),
    (300107, 0, 41099, 0, 0, 0, 0),
    (300107, 0, 41110, 0, 0, 0, 0),
    (300107, 0, 41109, 0, 0, 0, 0),
    (300107, 0, 45741, 0, 0, 0, 0),
    (300107, 0, 45747, 0, 0, 0, 0),
    (300107, 0, 41094, 0, 0, 0, 0),
    (300107, 0, 41100, 0, 0, 0, 0),
    (300107, 0, 41103, 0, 0, 0, 0),
    (300107, 0, 45742, 0, 0, 0, 0),
    (300107, 0, 41107, 0, 0, 0, 0),
    (300107, 0, 41105, 0, 0, 0, 0),
    (300107, 0, 45743, 0, 0, 0, 0),
    (300107, 0, 45746, 0, 0, 0, 0),
    (300107, 0, 43867, 0, 0, 0, 0),
    (300107, 0, 41108, 0, 0, 0, 0),
    (300107, 0, 43868, 0, 0, 0, 0),
    (300107, 0, 41101, 0, 0, 0, 0),
    (300107, 0, 41102, 0, 0, 0, 0),
    (300107, 0, 45744, 0, 0, 0, 0),
    (300107, 0, 41096, 0, 0, 0, 0),
    (300107, 0, 41095, 0, 0, 0, 0),
    (300107, 0, 41104, 0, 0, 0, 0),
    (300107, 0, 41098, 0, 0, 0, 0),
    (300107, 0, 41097, 0, 0, 0, 0),
    (300107, 0, 43368, 0, 0, 0, 0),
    (300107, 0, 43367, 0, 0, 0, 0),
    (300107, 0, 43365, 0, 0, 0, 0),
    (300107, 0, 43340, 0, 0, 0, 0),
    (300107, 0, 43369, 0, 0, 0, 0),
    (300107, 0, 43366, 0, 0, 0, 0),
    -- pretre
    (300108, 0, 42407, 0, 0, 0, 0),
    (300108, 0, 42415, 0, 0, 0, 0),
    (300108, 0, 42408, 0, 0, 0, 0),
    (300108, 0, 45753, 0, 0, 0, 0),
    (300108, 0, 45756, 0, 0, 0, 0),
    (300108, 0, 42405, 0, 0, 0, 0),
    (300108, 0, 42400, 0, 0, 0, 0),
    (300108, 0, 42409, 0, 0, 0, 0),
    (300108, 0, 42414, 0, 0, 0, 0),
    (300108, 0, 45760, 0, 0, 0, 0),
    (300108, 0, 42406, 0, 0, 0, 0),
    (300108, 0, 45755, 0, 0, 0, 0),
    (300108, 0, 42396, 0, 0, 0, 0),
    (300108, 0, 42411, 0, 0, 0, 0),
    (300108, 0, 42416, 0, 0, 0, 0),
    (300108, 0, 42398, 0, 0, 0, 0),
    (300108, 0, 45757, 0, 0, 0, 0),
    (300108, 0, 42401, 0, 0, 0, 0),
    (300108, 0, 42402, 0, 0, 0, 0),
    (300108, 0, 45758, 0, 0, 0, 0),
    (300108, 0, 42397, 0, 0, 0, 0),
    (300108, 0, 42403, 0, 0, 0, 0),
    (300108, 0, 42404, 0, 0, 0, 0),
    (300108, 0, 42399, 0, 0, 0, 0),
    (300108, 0, 42412, 0, 0, 0, 0),
    (300108, 0, 42417, 0, 0, 0, 0),
    (300108, 0, 42410, 0, 0, 0, 0),
    (300108, 0, 43371, 0, 0, 0, 0),
    (300108, 0, 43374, 0, 0, 0, 0),
    (300108, 0, 43370, 0, 0, 0, 0),
    (300108, 0, 43342, 0, 0, 0, 0),
    (300108, 0, 43373, 0, 0, 0, 0),
    (300108, 0, 43372, 0, 0, 0, 0),
    -- voleur
    (300109, 0, 45767, 0, 0, 0, 0),
    (300109, 0, 45766, 0, 0, 0, 0),
    (300109, 0, 42971, 0, 0, 0, 0),
    (300109, 0, 42972, 0, 0, 0, 0),
    (300109, 0, 45768, 0, 0, 0, 0),
    (300109, 0, 45762, 0, 0, 0, 0),
    (300109, 0, 42963, 0, 0, 0, 0),
    (300109, 0, 42969, 0, 0, 0, 0),
    (300109, 0, 45761, 0, 0, 0, 0),
    (300109, 0, 42960, 0, 0, 0, 0),
    (300109, 0, 42973, 0, 0, 0, 0),
    (300109, 0, 45769, 0, 0, 0, 0),
    (300109, 0, 42957, 0, 0, 0, 0),
    (300109, 0, 42962, 0, 0, 0, 0),
    (300109, 0, 42956, 0, 0, 0, 0),
    (300109, 0, 42968, 0, 0, 0, 0),
    (300109, 0, 42967, 0, 0, 0, 0),
    (300109, 0, 45764, 0, 0, 0, 0),
    (300109, 0, 45908, 0, 0, 0, 0),
    (300109, 0, 42965, 0, 0, 0, 0),
    (300109, 0, 42966, 0, 0, 0, 0),
    (300109, 0, 42955, 0, 0, 0, 0),
    (300109, 0, 42961, 0, 0, 0, 0),
    (300109, 0, 42970, 0, 0, 0, 0),
    (300109, 0, 42974, 0, 0, 0, 0),
    (300109, 0, 42959, 0, 0, 0, 0),
    (300109, 0, 42958, 0, 0, 0, 0),
    (300109, 0, 42964, 0, 0, 0, 0),
    (300109, 0, 43376, 0, 0, 0, 0),
    (300109, 0, 43378, 0, 0, 0, 0),
    (300109, 0, 43380, 0, 0, 0, 0),
    (300109, 0, 43377, 0, 0, 0, 0),
    (300109, 0, 43343, 0, 0, 0, 0),
    (300109, 0, 43379, 0, 0, 0, 0)
;


