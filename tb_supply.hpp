class TacBF
{
	class Supply
	{
		// Generates cargo IDs (More effecient broadcasting for these items + their ammo)
		staticWeapons[] = {"B_HMG_01_high_F","RHS_MK19_TriPod_WD", "RDS_AGS_CSAT", "RDS_SPG9_CSAT", "RDS_M2StaticMG_MiniTripod_FIA", "RDS_M2StaticMG_FIA", "RDS_KORD_high_CSAT", "RDS_KORD_CSAT", "RDS_DSHKM_CSAT", "RDS_DSHkM_Mini_TriPod_CSAT", "RDS_M252_FIA", "RDS_2b14_82mm_CSAT", "RDS_TOW_TriPod_FIA", "RDS_Metis_CSAT", "RDS_D30_CSAT", "RDS_ZU23_CSAT", "RDS_M119_FIA"};

		class CargoCollections
		{
			class rds_westFO {
				transportClear = 1;
				cargo[] = {{"RDS_M2StaticMG_FIA", 2, 4},
				{"RDS_M2StaticMG_MiniTripod_FIA", 3, 5},
//				{"RDS_TOW_TriPod_FIA", 1, 0},
				};
			};

			class rds_eastFO {
				transportClear = 1;
				cargo[] = {{"RDS_KORD_high_CSAT", 1, 2},
				{"RDS_KORD_CSAT", 1, 2},
				{"RDS_DSHkM_Mini_TriPod_CSAT", 2, 3},
				{"RDS_DSHKM_CSAT", 1, 2},
//				{"RDS_Metis_CSAT", 1, 0},
				};
			};

			class statics_westSmall {
				transportClear = 1;
				cargo[] = {{"RDS_M2StaticMG_MiniTripod_FIA", 2, 4},
				{"RDS_M2StaticMG_FIA", 2, 4},
//				{"RDS_M252_FIA", 1, 3},
				{"RDS_TOW_TriPod_FIA", 1, 0},
				{"RHS_MK19_TriPod_WD", 1, 0},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				{"TB_Box_West_Mines_F", 2, 0}};
			};

			class statics_eastSmall {
				transportClear = 1;
				cargo[] = {{"RDS_KORD_high_CSAT", 1, 2},
				{"RDS_KORD_CSAT", 1, 2},
				{"RDS_DSHKM_CSAT", 1, 2},
				{"RDS_DSHkM_Mini_TriPod_CSAT", 1, 2},
//				{"RDS_2b14_82mm_CSAT", 1, 3},
				{"RDS_Metis_CSAT", 1, 0},
				{"RDS_AGS_CSAT", 1, 0},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				};
			};

			class statics_westHeavy {
				transportClear = 1;
				cargo[] = {{"RDS_M2StaticMG_MiniTripod_FIA", 2, 4},
				{"RDS_M2StaticMG_FIA", 4, 6},
//				{"RDS_TOW_TriPod_FIA", 2, 3},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				};
			};

			class statics_eastHeavy {
				transportClear = 1;
				cargo[] = {{"RDS_KORD_high_CSAT", 2, 4},
				{"RDS_KORD_CSAT", 1, 2},
				{"RDS_DSHKM_CSAT", 2, 4},
				{"RDS_DSHkM_Mini_TriPod_CSAT", 1, 2},
//				{"RDS_Metis_CSAT", 2, 3},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				{"TB_Box_West_Mines_F", 2, 0}};
			};

			class statics_westArty {
				transportClear = 1;
				cargo[] = {{"RDS_M119_FIA", -0, 4}};
			};

			class statics_eastArty {
				transportClear = 1;
				cargo[] = {{"RDS_D30_CSAT", -0, 4}};
			};
			class statics_eastAAA {
				transportClear = 1;
				cargo[] = {{"RDS_ZU23_CSAT", 2, 8}};
			};
			class statics_eastAAA_ammo {
				transportClear = 1;
				cargo[] = {{"RDS_ZU23_CSAT", -0, 8}};
			};
			class statics_eastAmmo {
				transportClear = 1;
				cargo[] = {{"RDS_ZU23_CSAT", -0, 10}};
			};
			class statics_westAmmo {
				transportClear = 1;
				cargo[] = {{"RDS_ZU23_CSAT", -0, 10}};
			};


		};
		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG
			{
				crateCollection = "rds_westFO";
				crateMass = 1750;
			};

			class ICE_ForwardOutpost_container_EastMG
			{
				crateCollection = "rds_eastFO";
				crateMass = 1750;
			};
		};
	};
};
