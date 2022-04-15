class CfgPatches
{
	class SpawnableLootCratesClient
	{
		units[] = {};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class SpawnableLootCratesClient
	{
		dir = "SpawnableLootCratesClient";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SpawnableLootCratesClient";
		credits = "Scarabyte";
		author = "Scarabyte";
		authorID = "0";
		version = "1.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"SpawnableLootCratesClient/scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class WoodenCrate;
	class SpawnableCase_Base: WoodenCrate
	{
		scope = 0;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000000;
				};
			};
		};
	};
	class ToxicCase: SpawnableCase_Base
	{
		scope = 2;
		itemsCargoSize[] = {12,30};
	};
};

