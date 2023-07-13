-- update Nebula
UPDATE acore_world.item_template
SET stat_value1 = 83, stat_value2 = 55, stat_value3 = 41, stat_value4 = 41, stat_value5 = 53, ItemLevel = 239
WHERE entry = 46046;

-- update la valeur d'AP de la comet a 271 (pas touché l'effet)
UPDATE acore_world.item_template
SET stat_value1 = 271, ItemLevel = 252
WHERE entry = 45609;

-- update val'anyr flat stats (pas de changement de l'effet)
UPDATE acore_world.item_template
SET stat_value1 = 701, stat_value2 = 62, stat_value3 = 64, stat_value4 = 53, stat_value5 = 52, ItemLevel = 258
WHERE entry = 46017;

-- update pharos
UPDATE acore_world.item_template
SET stat_value1 = 105, stat_value2 = 83, stat_value3 = 83, stat_value4 = 73, stat_value5 = 85, ItemLevel = 252
WHERE entry = 45665;

-- update petrified ivy sprig baguette freya
UPDATE acore_world.item_template
SET stat_value1 = 29, stat_value2 = 22, stat_value3 = 25, stat_value4 = 33, stat_value5 = 51, ItemLevel = 245
WHERE entry = 45294;

-- update meteorite cristal trinket (pas touché l'effet)
UPDATE acore_world.item_template
SET stat_value1 = 125, ItemLevel = 239
WHERE entry = 46051;

-- update heart of iron trinket (pas touché l'effet)
UPDATE acore_world.item_template
SET stat_value1 = 171, ItemLevel = 232
WHERE entry = 45158;

-- update flare of the heavens trinket (pas touché l'effet)
UPDATE acore_world.item_template
SET stat_value1 = 135, ItemLevel = 252
WHERE entry = 45518;

-- update scale of fates trinket (pas touché l'effet)
UPDATE acore_world.item_template
SET stat_value1 = 132, ItemLevel = 232
WHERE entry = 45466;
