#pragma once
#include "CommonIncludes.h"


struct COffsetz
{
	struct
	{
		std::ptrdiff_t m_Local = 0x2FAC;
		std::ptrdiff_t m_aimPunchAngle = 0x301C;
		std::ptrdiff_t m_aimPunchAngleVel = 0x3028;
		std::ptrdiff_t m_viewPunchAngle = 0x3010;
		std::ptrdiff_t m_vecViewOffset = 0x104;
		std::ptrdiff_t m_nTickBase = 0x3404;
		std::ptrdiff_t m_vecVelocity = 0x110;
		std::ptrdiff_t m_iHealth = 0xFC;
		std::ptrdiff_t m_iMaxHealth;
		std::ptrdiff_t m_lifeState = 0x25B;
		std::ptrdiff_t m_fFlags = 0x100;
		std::ptrdiff_t m_iObserverMode = 0x334C;
		std::ptrdiff_t m_hObserverTarget = 0x3360;
		std::ptrdiff_t m_hViewModel;
		std::ptrdiff_t m_szLastPlaceName = 0x3588;
		std::ptrdiff_t deadflag;
	} DT_BasePlayer;

	struct
	{
		std::ptrdiff_t m_flAnimTime;
		std::ptrdiff_t m_flSimulationTime;
		std::ptrdiff_t m_vecOrigin = 0x134;
		std::ptrdiff_t m_hOwner;
		std::ptrdiff_t m_angRotation;
		std::ptrdiff_t m_nRenderMode;
		std::ptrdiff_t m_iTeamNum = 0xF0;
		std::ptrdiff_t m_MoveType = 0x258;
		std::ptrdiff_t m_Collision = 0x318;
		std::ptrdiff_t m_bSpotted = 0x939;
		std::ptrdiff_t m_vecMins;
		std::ptrdiff_t m_vecMaxs;
		std::ptrdiff_t m_nSolidType;
		std::ptrdiff_t m_usSolidFlags;
		std::ptrdiff_t m_nSurroundType;
	} DT_BaseEntity;

    struct
    {
        std::ptrdiff_t m_nHitboxSet;
    } DT_BaseAnimating;

	struct
	{
		std::ptrdiff_t m_hActiveWeapon = 0x2EE8;
		std::ptrdiff_t m_hMyWeapons = 0x2DE8;
		std::ptrdiff_t m_hMyWearables;
	} DT_BaseCombatCharacter;

	struct
	{
		std::ptrdiff_t m_iPing;
		std::ptrdiff_t m_iKills;
		std::ptrdiff_t m_iAssists;
		std::ptrdiff_t m_iDeaths;
		std::ptrdiff_t m_bConnected;
		std::ptrdiff_t m_iTeam;
		std::ptrdiff_t m_iPendingTeam;
		std::ptrdiff_t m_bAlive;
		std::ptrdiff_t m_iHealth;
	} DT_PlayerResource;

	struct
	{
		std::ptrdiff_t m_iPlayerC4;
		std::ptrdiff_t m_iPlayerVIP;
		std::ptrdiff_t m_bHostageAlive;
		std::ptrdiff_t m_isHostageFollowingSomeone;
		std::ptrdiff_t m_iHostageEntityIDs;
		std::ptrdiff_t m_bombsiteCenterB;
		std::ptrdiff_t m_hostageRescueX;
		std::ptrdiff_t m_hostageRescueY;
		std::ptrdiff_t m_hostageRescueZ;
		std::ptrdiff_t m_iMVPs;
		std::ptrdiff_t m_iArmor;
		std::ptrdiff_t m_bHasHelmet = 0xB250;
		std::ptrdiff_t m_bHasDefuser = 0xB26C;
		std::ptrdiff_t m_iScore;
		std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
		std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
		std::ptrdiff_t m_iCompTeammateColor;
		std::ptrdiff_t m_bControllingBot;
		std::ptrdiff_t m_iControlledPlayer;
		std::ptrdiff_t m_iControlledByPlayer;
		std::ptrdiff_t m_iBotDifficulty;
		std::ptrdiff_t m_szClan;
		std::ptrdiff_t m_iTotalCashSpent;
		std::ptrdiff_t m_iCashSpentThisRound;
		std::ptrdiff_t m_nEndMatchNextMapVotes;
		std::ptrdiff_t m_bEndMatchNextMapAllVoted;
		std::ptrdiff_t m_nActiveCoinRank;
		std::ptrdiff_t m_nMusicID;
		std::ptrdiff_t m_nPersonaDataPublicLevel;
		std::ptrdiff_t m_nPersonaDataPublicCommendsLeader;
		std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher;
		std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly;
	} DT_CSPlayerResource;

	struct
	{
		std::ptrdiff_t m_bBombTicking;
		std::ptrdiff_t m_flC4Blow;
		std::ptrdiff_t m_bBombDefused;
		std::ptrdiff_t m_hBombDefuser;
		std::ptrdiff_t m_flDefuseCountDown;
	} DT_PlantedC4;

	struct
	{
		std::ptrdiff_t m_iShotsFired = 0xA2D0;
		std::ptrdiff_t m_angEyeAngles[2];
		std::ptrdiff_t m_iAccount;
		std::ptrdiff_t m_totalHitsOnServer;
		std::ptrdiff_t m_ArmorValue = 0xB25C;
		std::ptrdiff_t m_bHasDefuser;
		std::ptrdiff_t m_bIsDefusing = 0x38A8;
		std::ptrdiff_t m_bIsGrabbingHostage;
		std::ptrdiff_t m_bIsScoped = 0x389E;
		std::ptrdiff_t m_bGunGameImmunity = 0x38B4;
		std::ptrdiff_t m_bIsRescuing;
		std::ptrdiff_t m_bHasHelmet;
		std::ptrdiff_t m_flFlashDuration = 0xA318;
		std::ptrdiff_t m_flFlashMaxAlpha = 0xA314;
		std::ptrdiff_t m_flLowerBodyYawTarget;
        std::ptrdiff_t m_bHasHeavyArmor;
		std::ptrdiff_t m_iGunGameProgressiveWeaponIndex;
	} DT_CSPlayer;

	struct
	{
		std::ptrdiff_t m_iItemDefinitionIndex = 0x2F9A;
		std::ptrdiff_t m_iItemIDHigh = 0x2FB0;

		std::ptrdiff_t m_iAccountID = 0x2FB8;
		std::ptrdiff_t m_iEntityQuality = 0x2F9C;
		std::ptrdiff_t m_szCustomName = 0x302C;
		std::ptrdiff_t m_nFallbackPaintKit = 0x31A8;
		std::ptrdiff_t m_nFallbackSeed = 0x31AC;
		std::ptrdiff_t m_flFallbackWear = 0x31B0;
		std::ptrdiff_t m_nFallbackStatTrak = 0x31B4;
		std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31A0;
		std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31A4;
	} DT_BaseAttributableItem;

	struct
	{
		std::ptrdiff_t m_nModelIndex;
		std::ptrdiff_t m_hWeapon;
		std::ptrdiff_t m_hOwner = 0x29BC;
	} DT_BaseViewModel;

	struct
	{
		std::ptrdiff_t m_fAccuracyPenalty = 0x32E0;
        std::ptrdiff_t m_flPostponeFireReadyTime;
	} DT_WeaponCSBase;

	struct
	{
		std::ptrdiff_t m_bStartedArming;
	} DT_WeaponC4;

	struct
	{
		std::ptrdiff_t m_bRedraw;
		std::ptrdiff_t m_bIsHeldByPlayer;
		std::ptrdiff_t m_bPinPulled;
		std::ptrdiff_t m_fThrowTime;
		std::ptrdiff_t m_bLoopingSoundPlaying;
		std::ptrdiff_t m_flThrowStrength;
	} DT_BaseCSGrenade;

	struct
	{
		std::ptrdiff_t m_flNextPrimaryAttack = 0x3208;
		std::ptrdiff_t m_hOwner;
		std::ptrdiff_t m_iClip1 = 0x3234;
		std::ptrdiff_t m_iReserve;
		std::ptrdiff_t m_bInReload = 0x3275;
		std::ptrdiff_t m_iViewModelIndex;
		std::ptrdiff_t m_iWorldModelIndex;
        std::ptrdiff_t m_hWeaponWorldModel;
	} DT_BaseCombatWeapon;

	struct
	{
		std::ptrdiff_t m_bShouldGlow;
	} DT_DynamicProp;

	struct
	{
		std::ptrdiff_t m_bFreezePeriod;
		std::ptrdiff_t m_bMatchWaitingForResume;
		std::ptrdiff_t m_bWarmupPeriod;
		std::ptrdiff_t m_fWarmupPeriodEnd;
		std::ptrdiff_t m_fWarmupPeriodStart;
		std::ptrdiff_t m_bTerroristTimeOutActive;
		std::ptrdiff_t m_bCTTimeOutActive;
		std::ptrdiff_t m_flTerroristTimeOutRemaining;
		std::ptrdiff_t m_flCTTimeOutRemaining;
		std::ptrdiff_t m_nTerroristTimeOuts;
		std::ptrdiff_t m_nCTTimeOuts;
		std::ptrdiff_t m_iRoundTime;
		std::ptrdiff_t m_gamePhase;
		std::ptrdiff_t m_totalRoundsPlayed;
		std::ptrdiff_t m_nOvertimePlaying;
		std::ptrdiff_t m_timeUntilNextPhaseStarts;
		std::ptrdiff_t m_flCMMItemDropRevealStartTime;
		std::ptrdiff_t m_flCMMItemDropRevealEndTime;
		std::ptrdiff_t m_fRoundStartTime;
		std::ptrdiff_t m_bGameRestart;
		std::ptrdiff_t m_flRestartRoundTime;
		std::ptrdiff_t m_flGameStartTime;
		std::ptrdiff_t m_iHostagesRemaining;
		std::ptrdiff_t m_bAnyHostageReached;
		std::ptrdiff_t m_bMapHasBombTarget;
		std::ptrdiff_t m_bMapHasRescueZone;
		std::ptrdiff_t m_bMapHasBuyZone;
		std::ptrdiff_t m_bIsQueuedMatchmaking;
		std::ptrdiff_t m_bIsValveDS;
		std::ptrdiff_t m_bIsQuestEligible;
		std::ptrdiff_t m_bLogoMap;
		std::ptrdiff_t m_iNumGunGameProgressiveWeaponsCT;
		std::ptrdiff_t m_iNumGunGameProgressiveWeaponsT;
		std::ptrdiff_t m_iSpectatorSlotCount;
		std::ptrdiff_t m_bBombDropped;
		std::ptrdiff_t m_bBombPlanted;
		std::ptrdiff_t m_iRoundWinStatus;
		std::ptrdiff_t m_eRoundWinReason;
		std::ptrdiff_t m_flDMBonusStartTime;
		std::ptrdiff_t m_flDMBonusTimeLength;
		std::ptrdiff_t m_unDMBonusWeaponLoadoutSlot;
		std::ptrdiff_t m_bDMBonusActive;
		std::ptrdiff_t m_bTCantBuy;
		std::ptrdiff_t m_bCTCantBuy;
		std::ptrdiff_t m_flGuardianBuyUntilTime;
		std::ptrdiff_t m_iMatchStats_RoundResults;
		std::ptrdiff_t m_iMatchStats_PlayersAlive_T;
		std::ptrdiff_t m_iMatchStats_PlayersAlive_CT;
		std::ptrdiff_t m_GGProgressiveWeaponOrderC;
		std::ptrdiff_t m_GGProgressiveWeaponOrderT;
		std::ptrdiff_t m_GGProgressiveWeaponKillUpgradeOrderCT;
		std::ptrdiff_t m_GGProgressiveWeaponKillUpgradeOrderT;
		std::ptrdiff_t m_MatchDevice;
		std::ptrdiff_t m_bHasMatchStarted;
		std::ptrdiff_t m_TeamRespawnWaveTimes;
		std::ptrdiff_t m_flNextRespawnWave;
		std::ptrdiff_t m_nNextMapInMapgroup;
		std::ptrdiff_t m_nEndMatchMapGroupVoteOptions;
		std::ptrdiff_t m_bIsDroppingItems;
		std::ptrdiff_t m_iActiveAssassinationTargetMissionID;
		std::ptrdiff_t m_fMatchStartTime;
		std::ptrdiff_t m_szTournamentEventName;
		std::ptrdiff_t m_szTournamentEventStage;
		std::ptrdiff_t m_szTournamentPredictionsTxt;
		std::ptrdiff_t m_nTournamentPredictionsPct;
		std::ptrdiff_t m_szMatchStatTxt;
		std::ptrdiff_t m_nGuardianModeWaveNumber;
		std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining;
		std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded;
		std::ptrdiff_t m_nHalloweenMaskListSeed;
		std::ptrdiff_t m_numGlobalGiftsGiven;
		std::ptrdiff_t m_numGlobalGifters;
		std::ptrdiff_t m_numGlobalGiftsPeriodSeconds;
		std::ptrdiff_t m_arrFeaturedGiftersAccounts;
		std::ptrdiff_t m_arrFeaturedGiftersGifts;
		std::ptrdiff_t m_arrTournamentActiveCasterAccounts;
	} DT_CSGameRulesProxy;
};

class Offsetz
{
public:
	void GetNetvars();
};

extern Offsetz* g_Netvars;

extern COffsetz offsetz;