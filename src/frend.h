/*
	This file is part of Warzone 2100.
	Copyright (C) 2005-2020  Warzone 2100 Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/
/**
 * @file frend.h
 *
 * List corresponding to the files in data/base/images/frontend.img
 * This used to be autogenerated at some point.
 */

#ifndef __INCLUDED_SRC_FREND_H__
#define __INCLUDED_SRC_FREND_H__

enum
{
	IMAGE_FE_LOGO,
	IMAGE_COM1,
	IMAGE_COM2,
	IMAGE_COM3,
	IMAGE_COM4,
	IMAGE_COM1_HI,
	IMAGE_COM2_HI,
	IMAGE_14400_HI,
	IMAGE_19200_HI,
	IMAGE_56000_HI,
	IMAGE_115200_HI,
	IMAGE_ARENA_HI,
	IMAGE_CAMPAIGN_HI,
	IMAGE_14400,
	IMAGE_19200,
	IMAGE_56000,
	IMAGE_115200,
	IMAGE_ARENA,
	IMAGE_CAMPAIGN,
	IMAGE_REFRESH,
	IMAGE_PLAYER0,
	IMAGE_PLAYER1,
	IMAGE_PLAYER2,
	IMAGE_PLAYER3,
	IMAGE_PLAYER4,
	IMAGE_PLAYER5,
	IMAGE_PLAYER6,
	IMAGE_PLAYER7,
	IMAGE_PLAYER8,
	IMAGE_PLAYER9,
	IMAGE_PLAYER10,
	IMAGE_PLAYERN,
	IMAGE_PLAYERN_TC,
	IMAGE_HOST,
	IMAGE_NO,
	IMAGE_OK,
	IMAGE_QUESTION,
	IMAGE_POWMED,
	IMAGE_POWHI,
	IMAGE_POWLO_HI,
	IMAGE_POWMED_HI,
	IMAGE_POWHI_HI,
	IMAGE_NOALLI,
	IMAGE_OFFALLI,
	IMAGE_ALLI,
	IMAGE_NOALLI_HI,
	IMAGE_OFFALLI_HI,
	IMAGE_ALLI_HI,
	IMAGE_COM3_HI,
	IMAGE_COM4_HI,
	IMAGE_HI34,
	IMAGE_HI31,
	IMAGE_HI23,
	IMAGE_HI39,
	IMAGE_HI41,
	IMAGE_HI64,
	IMAGE_ARENA_OVER,
	IMAGE_CAMPAIGN_OVER,
	IMAGE_MEDAL_GOLD,
	IMAGE_MEDAL_SILVER,
	IMAGE_MEDAL_BRONZE,
	IMAGE_POWLO,
	IMAGE_MULTIRANK1,
	IMAGE_RETURN,
	IMAGE_EDIT_PLAYER,
	IMAGE_EDIT_FORCE,
	IMAGE_EDIT_MAP,
	IMAGE_EDIT_GAME,
	IMAGE_TECHLO,
	IMAGE_TECHMED,
	IMAGE_TECHHI,
	IMAGE_TECHLO_HI,
	IMAGE_TECHMED_HI,
	IMAGE_TECHHI_HI,
	IMAGE_NOBASE,
	IMAGE_SBASE,
	IMAGE_LBASE,
	IMAGE_NOBASE_HI,
	IMAGE_SBASE_HI,
	IMAGE_LBASE_HI,
	IMAGE_NOLIMIT,
	IMAGE_TIMELIMIT,
	IMAGE_FRAGLIMIT,
	IMAGE_NOLIMIT_HI,
	IMAGE_TIMELIMIT_HI,
	IMAGE_FRAGLIMIT_HI,
	IMAGE_RETURN_HI,
	IMAGE_SLIM,
	IMAGE_SLIM_HI,
	IMAGE_LOADFORCE,
	IMAGE_SAVEFORCE,
	IMAGE_CLEARFORCE,
	IMAGE_DEFAULTFORCE,
	IMAGE_HI56,
	IMAGE_COMPUTER_N_HI,
	IMAGE_COMPUTER_N,
	IMAGE_COMPUTER_Y,
	IMAGE_COMPUTER_Y_HI,
	IMAGE_LAMP_RED,
	IMAGE_LAMP_AMBER,
	IMAGE_LAMP_GREEN,
	IMAGE_SKIRMISH_OVER,
	IMAGE_TEAM_OVER,
	IMAGE_MOD_OVER,
	IMAGE_SKIRMISH,
	IMAGE_TEAM,
	IMAGE_SKIRMISH_HI,
	IMAGE_TEAM_HI,
	IMAGE_PLAYER_PC,
	IMAGE_MULTIRANK2,
	IMAGE_MEDAL_DUMMY,
	IMAGE_PLAYERX,
	IMAGE_PLAYERX_TC,
	IMAGE_FOG_OFF,
	IMAGE_FOG_ON,
	IMAGE_FOG_OFF_HI,
	IMAGE_FOG_ON_HI,
	IMAGE_WEE_GUY,
	IMAGE_WEE_DIE,
	IMAGE_PENCIL,
	IMAGE_NOPENCIL,
	IMAGE_KEYMAP_DEFAULT,
	IMAGE_MULTIRANK3,
	IMAGE_NOJOIN,
	IMAGE_NOJOIN_FULL,
	IMAGE_NOJOIN_MOD,
	IMAGE_ALLI_TEAMS_HI,
	IMAGE_ALLI_TEAMS,
	IMAGE_TEAM0,
	IMAGE_TEAM1,
	IMAGE_TEAM2,
	IMAGE_TEAM3,
	IMAGE_TEAM4,
	IMAGE_TEAM5,
	IMAGE_TEAM6,
	IMAGE_TEAM7,
	IMAGE_TEAM8,
	IMAGE_TEAM9,
	IMAGE_TEAM10,
	IMAGE_TEAM11,
	IMAGE_TEAM12,
	IMAGE_TEAM13,
	IMAGE_TEAM14,
	IMAGE_TEAM15,
	IMAGE_HOST_HI,
	IMAGE_KEYMAP_DEFAULT_HI,
	IMAGE_EDIT_MAP_HI,
	IMAGE_EDIT_GAME_HI,
	IMAGE_EDIT_PLAYER_HI,
	IMAGE_PLAYER0_HI,
	IMAGE_PLAYER1_HI,
	IMAGE_PLAYER2_HI,
	IMAGE_PLAYER3_HI,
	IMAGE_PLAYER4_HI,
	IMAGE_PLAYER5_HI,
	IMAGE_PLAYER6_HI,
	IMAGE_PLAYER7_HI,
	IMAGE_PLAYER8_HI,
	IMAGE_PLAYER9_HI,
	IMAGE_PLAYER10_HI,
	IMAGE_PLAYERN_HI,
	IMAGE_PLAYERN_HI_TC,
	IMAGE_TEAM0_HI,
	IMAGE_TEAM1_HI,
	IMAGE_TEAM2_HI,
	IMAGE_TEAM3_HI,
	IMAGE_TEAM4_HI,
	IMAGE_TEAM5_HI,
	IMAGE_TEAM6_HI,
	IMAGE_TEAM7_HI,
	IMAGE_TEAM8_HI,
	IMAGE_TEAM9_HI,
	IMAGE_TEAM10_HI,
	IMAGE_TEAM11_HI,
	IMAGE_TEAM12_HI,
	IMAGE_TEAM13_HI,
	IMAGE_TEAM14_HI,
	IMAGE_TEAM15_HI,
	IMAGE_CHECK_OFF,
	IMAGE_CHECK_ON,
	IMAGE_CHECK_DOWNLOAD,
	IMAGE_CHECK_OFF_HI,
	IMAGE_CHECK_ON_HI,
	IMAGE_CHECK_DOWNLOAD_HI,
	IMAGE_DARK_LOCKED,
	IMAGE_DARK_UNLOCKED,
	IMAGE_LOCKED_NOBG,
	IMAGE_UNLOCKED_NOBG,
	IMAGE_TRANS_LOCKED,
	IMAGE_TRANS_UNLOCKED,
	IMAGE_UNLOCK_BLUE,
	IMAGE_LOCK_BLUE,
	IMAGE_SCAVENGERS_ON,
	IMAGE_SCAVENGERS_OFF,
	IMAGE_SCAVENGERS_ON_HI,
	IMAGE_SCAVENGERS_OFF_HI,
	IMAGE_KICK,
	IMAGE_VTOL,
	IMAGE_CYBORG,
	IMAGE_TANK,
	IMAGE_KICK_TRANS,
	IMAGE_NO_VTOL,
	IMAGE_NO_CYBORG,
	IMAGE_NO_TANK,
	IMAGE_NO_UPLINK,
	IMAGE_NO_LASSAT,
	IMAGE_EASY,
	IMAGE_MEDIUM,
	IMAGE_HARD,
	IMAGE_INSANE,
	IMAGE_FILTER,
	IMAGE_FILTER_ON,
	IMAGE_RELOAD,
	IMAGE_RELOAD_HI,
	IMAGE_GAMEVERSION,
	IMAGE_GAMEVERSION_HI,
	IMAGE_ALLI_UNSHARED,
	IMAGE_ALLI_UNSHARED_HI,
};

#endif //__INCLUDED_SRC_FREND_H__
