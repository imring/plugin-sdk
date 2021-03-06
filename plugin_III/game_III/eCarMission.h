/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eCarMission : unsigned char
{
    MISSION_NONE = 0,
    MISSION_CRUISE = 1,
    MISSION_RAMPLAYER_FARAWAY = 2,
    MISSION_RAMPLAYER_CLOSE = 3,
    MISSION_BLOCKPLAYER_FARAWAY = 4,
    MISSION_BLOCKPLAYER_CLOSE = 5,
    MISSION_BLOCKPLAYER_HANDBRAKESTOP = 6,
    MISSION_WAITFORDELETION = 7,
    MISSION_GOTOCOORDS = 8,
    MISSION_GOTOCOORDS_STRAIGHT = 9,
    MISSION_EMERGENCYVEHICLE_STOP = 10,
    MISSION_STOP_FOREVER = 11,
    MISSION_GOTOCOORDS_ACCURATE = 12,
    MISSION_GOTO_COORDS_STRAIGHT_ACCURATE = 13,
    MISSION_GOTOCOORDS_ASTHECROWSWIMS = 14,
    MISSION_RAMCAR_FARAWAY = 15,
    MISSION_RAMCAR_CLOSE = 16,
    MISSION_BLOCKCAR_FARAWAY = 17,
    MISSION_BLOCKCAR_CLOSE = 18,
    MISSION_BLOCKCAR_HANDBRAKESTOP = 19,
    MISSION_HELI_FLYTOCOORS = 20,
    MISSION_ATTACKPLAYER = 21,
    MISSION_PLANE_FLYTOCOORS = 22,
    MISSION_HELI_LAND = 23,
    MISSION_SLOWLY_DRIVE_TOWARDS_PLAYER_1 = 24,
    MISSION_SLOWLY_DRIVE_TOWARDS_PLAYER_2 = 25,
    MISSION_BLOCKPLAYER_FORWARDANDBACK = 26
};