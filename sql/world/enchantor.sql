DELETE FROM acore_world.creature_template WHERE entry = 300200;
INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3, KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name, subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag, speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale, `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime, BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2, dynamicflags, family, trainer_type, trainer_spell, trainer_class, trainer_race, type, type_flags, lootid, pickpocketloot, skinloot, PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType, HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier, RacialLeader, movementId, RegenHealth, mechanic_immune_mask, spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild) VALUES (300200, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Professions', null, '', 0, 80, 80, 2, 35, 1, 1, 1.14286, 1, 1, 20, 0.75, 0, 0, 1, 2000, 2000, 1, 1, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 'Enchantor', 12340);

INSERT INTO acore_world.creature_template_locale (entry, locale, Name, Title, VerifiedBuild) VALUES (300200, 'frFR', 'Métiers', null, 18019);


INSERT INTO acore_world.creature_template (entry, difficulty_entry_1, difficulty_entry_2, difficulty_entry_3, KillCredit1, KillCredit2, modelid1, modelid2, modelid3, modelid4, name, subname, IconName, gossip_menu_id, minlevel, maxlevel, exp, faction, npcflag, speed_walk, speed_run, speed_swim, speed_flight, detection_range, scale, `rank`, dmgschool, DamageModifier, BaseAttackTime, RangeAttackTime, BaseVariance, RangeVariance, unit_class, unit_flags, unit_flags2, dynamicflags, family, trainer_type, trainer_spell, trainer_class, trainer_race, type, type_flags, lootid, pickpocketloot, skinloot, PetSpellDataId, VehicleId, mingold, maxgold, AIName, MovementType, HoverHeight, HealthModifier, ManaModifier, ArmorModifier, ExperienceModifier, RacialLeader, movementId, RegenHealth, mechanic_immune_mask, spell_school_immune_mask, flags_extra, ScriptName, VerifiedBuild) VALUES (300201, 0, 0, 0, 0, 0, 30721, 0, 0, 0, 'Item enhancements', null, '', 0, 80, 80, 2, 35, 1, 1, 1.14286, 1, 1, 20, 0.75, 0, 0, 1, 2000, 2000, 1, 1, 8, 0, 2048, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, '', 12340);

INSERT INTO acore_world.creature_template_locale (entry, locale, Name, Title, VerifiedBuild) VALUES (300201, 'frFR', 'Améliorations objets', null, 18019);

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
