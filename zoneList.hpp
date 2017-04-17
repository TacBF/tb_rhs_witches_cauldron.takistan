#include "tb_defines.hpp"
//Mission: tb_rhs_witches_cauldron_r1
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}        , {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    	{3}    	  , {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_NEUTRAL,SPAWN_INSTANT,    	{}    		, {}   	, 1      , {1,3}     , 2    , "F.B. Sharp Turn" },
{ 3, TEAM_RED, 		SPAWN_NEVER,    	{4}		  	, {}    , 1      , {}        , 0    , "Village" },
{ 4, TEAM_RED, 		SPAWN_NEVER,    	{5}  	    , {}   	, 1      , {}        , 0    , "Intersection" },
{ 5, TEAM_RED, 		SPAWN_NEVER,    	{6}				, {}    , 1      , {}        , 0    , "Gas Station" },
{ 6, TEAM_RED, 		SPAWN_NEVER ,   	{7}  	    , {}    , 1      , {}        , 0    , "Backyards" },
{ 7, TEAM_RED, 		SPAWN_NEVER,    	{8}				, {}    , 1      , {}        , 0    , "Mosque" },

{ 8, TEAM_RED, 		SPAWN_XRAY ,    	{}      	, {}    , 1      , {}        , 0    , "%3" },

{ 9, TEAM_RED, 		SPAWN_INSTANT ,   {}      	, {}    , 1      , {8,3}     , 2    , "F.B. Whiskey" },
{10, TEAM_NEUTRAL,SPAWN_INSTANT ,   {}      	, {}    , 1      , {1,4}     , 2    , "F.B. Whiskey" }
};
