class ICE
{
    class vehicles
    {
    class armaments
        {
        startFullyRearmed = 1;
        };
    };
  class zones
  {
    #include "zoneList.hpp"
  };
  class firstAid
  {
    bleedoutTimeSteps[] = {300, 0}; // Controls the bleedout time steps
    bleedoutTimeReset = 180; // Controls the time that you should go incapped within to go down a step. 2 * this time takes you a step back up.
  };
	class mission
	{
		gameMode = "A&D";
		missionScale = "large";
		recommendedTotalPlayers = 50;
		attackingSide = "west";
              class briefings
        {
        // Provide file name containing side specific mission briefings here. File text can use structured text syntax. Use <br /> tag for line breaks.
        class west
              {
             original = "briefing_blue.hpp";
            //these are optional:
            //english = "briefing_blue_en.hpp";
            //italian= = "briefing_blue_it.hpp";
              };
        class east
             {
             original = "briefing_red.hpp";
            //these are optional:
            //english = "briefing_blue_en.hpp";
            //italian= = "briefing_blue_it.hpp";
              };
        };

		class factions // or sides
		{
			class faction
			{
				bluFor = "BLU_F";
				opFor = "OPF_F";
			};
            class teamName
            {
                bluFor = "USA";
                opFor = "Jordan";
            };
            class teamFlag
            {
                bluFor = "flags\us.paa"; // "flags" is a sub-folder in mission folder
                opFor = "flags\jr.paa";
            };
		};
		class scoring
		{
			class tickets
			{
				// In A&S, specify the tickets per hour, (not total tickets). It will later be scaled by duration.
				// In A&D, specify the tickets per zone. It is usually a 7:5 ratio, for attackers/defenders respectively.
				// In S&D, do not specify any tickets. It is automatically calculated, with the defenders ticket count representing the total caches.
				bluFor = 70;
				opFor = 50;
			};
		};
	};
	class respawn
	{
        class vehicles
        {
            class respawnDelay
            {
                // 'globalOverride' takes precedence over 'multiplier'
                //globalOverride = -1; // Value is in minutes. set to >= 0 to override scaled "vehicle category" values.

                multiplier = 1.0; // set to > 0 to override scaled "vehicle category" values. Eg: 0.5 to halve all values. 1.5 to increase all values.
                //(<= 0 uses default multiplier), (> 0, < 1 scales down), (> 1 scales up), (== 1 uses 1 for all vehicles, regardless of missionScale)
            };
        };
		class FO
		{
			minSpacingDist = 600;
			maxFriendlySiteDist = 1000;
			minZoneDist = 50;
			minEnemyFBDist = 300;
			minEnemyBaseDist = 1000;
		};
		class SRP
		{
			maxFriendlySiteDist = 600;
		};
		class HO
		{
			minSpacingDist = 250;
		};
        class infantry
        {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 60; // "pivot value" where low player count differences result in small time penalties,
                // but large differences result in exponential time penalties
                maxDuration = 240;
            };
        };
	};
	class gameModes
	{
	    class objectives
        {
            class zones
            {
                class captureRates
                {
                    // Eg: A higher value (eg: 2 to 3) is ideal for smaller missions.
                    heldZoneMultiplier = 1; // Decimal value between 0 and N. (> 0, < 1 will reduce capture rate), (> 1 will increase capture rate). Eg: 0.25, 0.5, 0.75, 1.0, 1.25, 1.5

                    // This value is a cumulative multiplier with 'captureRateMultiplier'. (So if captureRateMultiplier == 2 and neutralZoneCaptureRateMultiplier == 3, then overall rate is 6 times faster.)
                    // Eg: A value of 2 is ideal for missions which have very few neutral zones at the start.
					// Eg: A value of 2 is ideal for missions which have very few neutral zones at the start.
                    // Eg: A high value (eg: 3 to 6) is ideal for missions which have many neutral zones at the start or for smaller missions.
                    neutralZoneMultiplier = 1.5; // Decimal value between 0 and N. (> 0, < 1 will reduce capture rate), (> 1 will increase capture rate)

                                        negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier".
                };
            };
		};

		class AAD
        {
			attackerTicketsPerZoneCapture = 20;
			attackerMaxTotalTickets = 50;
        };
	};
    class gear
    {
        #include "tb_kitDefines.sqh" 
        #include "tb_magazineExclusions.hpp"
	    class NVGogglesForAll
        {
            west = 1;
            east = 1;
            resistance = 1;
        };
        class roles
        {
			#define __unlimited -99
            kits[] =
            {
                #include "factions\BLU_F_roleRatio.hpp"
                #include "factions\OPF_F_roleRatio.hpp"
            };
		};
	    class armaments
		{
			class BLU_F
			{
				defaultGear = "factions\BLU_F.sqh";
				#include "factions\_common_smallItems.sqh"
				#include "factions\BLU_F_gear.sqh"
				#include "factions\BLU_F_uniforms.sqh"
			};
			class OPF_F
			{
				defaultGear = "factions\OPF_F.sqh";
				#include "factions\_common_smallItems.sqh"
				#include "factions\OPF_F_gear.sqh"
				#include "factions\OPF_F_uniforms.sqh"
			};
		};
	};
};
