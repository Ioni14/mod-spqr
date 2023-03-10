void AddMyPlayerScripts();
void AddEnchantorScripts();
void AddStufferScripts();
void AddReputationScripts();
void AddTeleporterScripts();

// Add all
// cf. the naming convention https://github.com/azerothcore/azerothcore-wotlk/blob/master/doc/changelog/master.md#how-to-upgrade-4
// additionally replace all '-' in the module folder name with '_' here
void Addmod_spqrScripts()
{
    AddMyPlayerScripts();
    AddEnchantorScripts();
    AddStufferScripts();
    AddReputationScripts();
    AddTeleporterScripts();
}
