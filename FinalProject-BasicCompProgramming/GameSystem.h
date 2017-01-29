#pragma once

#include "stdafx.h"

using namespace System;

#define MAX_W_CONSOLE 150
#define MAX_H_CONSOLE 50
#define MAX_PLAYERS 3
#define MAX_CARDS 28


enum PlayerIdent
{
	PLAYER_1 = 0,
	PLAYER_2 = 1,
	PLAYER_3 = 2
} playerIdent;

enum MenuState
{
	MENU_START = 1,
	MENU_INSTRUCTION = 2,
	MENU_EXIT = 3
} menuState;

struct Players
{
	Player player[MAX_PLAYERS];
	PlayerIdent playerIdent;
};

class GameSystem
{
	int resetVal[3];

public:
	int lengthPlayers,
		gameTurn;
	Vector2 posStage[40];
	void Initialize(int _widthConsole = MAX_W_CONSOLE,
					int _heightConsole = MAX_H_CONSOLE);
	void GotoPos(int, int, string _text = "");
	void GotoPos(Vector2, PlayerIdent, Player);
	int RollDice();
	int InputNumber(int);
	void GetStagePos(bool showVal = false);
	GameSystem();
	~GameSystem();

private:
	COORD mCoord;
	HANDLE mHandle;

};
