class CfgPatches
{
	class ADTFirearms_aug
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons_Firearms",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Aug_Base;
	class ADTAug_Base: Aug_Base
	{
		scope=0;
		weight=42;
		repairableWithKits[]={1,5};
		repairCosts[]={15,50};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"ADT_Ammo_308AD",
			"ADT_Ammo_308ADGreenTracer",
			"ADT_Ammo_308ADRedTracer",
			"ADT_Ammo_308ADYellowTracer"
		};
		magazineSwitchTime=0.38;
		initSpeedMultiplier=1;
		ejectType=1;
		recoilModifier[]={0.01,0.01,0.01};
		swayModifier[]={0.01,0.01,0.01};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.42;
		barrelArmor=30000.3;
		class NoiseShoot
		{
			strength=42;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics="-";
			opticsZoomMin=0.28;
			opticsZoomMax=0.28;
			opticsZoomInit=0.28;
			distanceZoomMin=300;
			distanceZoomMax=300;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
	class ADTAug: ADTAug_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_AugSteyr0";
		descriptionShort="$STR_cfgWeapons_AugSteyr1";
		model="\dz\weapons\firearms\aug\aug.p3d";
		weight=42;
		magazines[]=
		{
			"ADT_Mag_308AD_STANAG"
		};
		attachments[]=
		{
			"weaponWrap",
			"weaponMuzzleM4",
			"weaponOptics",
			"weaponFlashlight"
		};
		hiddenSelections[]=
		{
			"charging",
			"hide_barrel",
			"zbytek",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"adtweapon\data\Firearms\aug\parts\New\adt_aug_stock_co_gold.paa",
			"adtweapon\data\Firearms\aug\parts\New\adt_aug_barrel_long_co_gold.paa",
			"adtweapon\data\Firearms\aug\parts\New\adt_rail_co_gold.paa",
			"adtweapon\data\Firearms\aug\parts\New\adt_val_co_gold.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ADTWeapon\data\Firearms\aug\parts\New\aug_stock.rvmat",
			"ADTWeapon\data\Firearms\aug\parts\New\aug_barrel_long.rvmat",
			"ADTWeapon\data\Firearms\aug\parts\New\rail.rvmat",
			"ADTWeapon\data\Firearms\aug\parts\New\val.rvmat"
		};
		itemSize[]={6,2};
		spawnDamageRange[]={0,0.60000002};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"ADTWeapon\data\Firearms\aug\parts\New\aug_barrel_long.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\aug_stock.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\rail.rvmat"
							}
						},
						
						{
							0.6,
							
							{
								"ADTWeapon\data\Firearms\aug\parts\New\aug_barrel_long.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\aug_stock.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\rail.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ADTWeapon\data\Firearms\aug\parts\New\aug_barrel_damage.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\aug_stock_damage.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\rail_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ADTWeapon\data\Firearms\aug\parts\New\aug_barrel_damage.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\aug_stock_damage.rvmat",
								"ADTWeapon\data\Firearms\aug\parts\New\rail_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_destruct.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat",
								"DZ\weapons\firearms\aug\data\rail_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
