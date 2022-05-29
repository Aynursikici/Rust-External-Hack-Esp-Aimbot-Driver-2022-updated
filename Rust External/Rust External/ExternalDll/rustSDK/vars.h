#include <Windows.h>
#include <atomic>
#include "myMath.h"
#include "RustSDK.h"

namespace Vars
{
	namespace Config
	{
		extern DWORD64 GameObjectManager;
		extern DWORD64 BaseNetworkable;

		extern int ScreenWidth;
		extern int ScreenHigh;

		extern std::atomic<short> espFPS;
		extern std::atomic<short> menuFPS;

		extern 	bool LocalPlayerIsValid;
		extern 	bool panic;
		extern 	bool MenuActive;
	}

	namespace  Aim
	{
		extern bool aim ;
		extern bool randomBone;
		extern DWORD64 addr_BasePlayer_on_Aimming;
		extern float fov;
		extern bool drawFov;
		extern float smooth;

		extern float recoil;
		extern bool NoSpread;
		extern bool NoSway;

		extern bool ModifyBullet;
		extern 	float fat;
	}

	namespace  Esp
	{
		//player
		extern bool playerEsp;
		extern bool drawBox;
		extern bool drawHealthBar;
		extern bool drawSkeleton;
		extern bool drawActiveWeapons;

		extern bool playerCorpse;
		extern bool playerSleepers;
		extern bool npcEsp;

		//loot
		extern bool stone;
		extern bool sulphur;
		extern bool metal;
	    extern bool hemp;
		extern bool dropItems;
		extern bool airdrop;

		//etc
		extern bool landAirTurret;
		extern bool autoTurret;
		extern bool guntrap;
		extern bool flameturret;
		
		extern bool cupboard;
		extern bool cupboardPlayer;
		extern bool largeBox;
		extern bool smallBox;
		extern bool stash ;
		extern bool sleepingbag ;


		extern bool minicopter;
		extern bool cow;
		extern bool boat;
		extern bool bigBoat;
	
	
	}

	namespace  Misc
	{
		extern bool walkWatter;
		extern bool spider;
		extern bool HigthJump;
		extern bool speedhack;
		extern float speedBonus;
		extern bool WatterBoost;
		extern bool WallWalk ;

		extern bool superMelee;
		extern bool superEoka;
		extern bool alwaysDay;
		extern float alwaysDay_float;
		extern 	bool ThirdPersonMode;
		extern 	bool AdminMode;
		
		extern bool crosshair;
	}

}