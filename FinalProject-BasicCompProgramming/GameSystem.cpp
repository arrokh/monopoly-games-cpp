#include "stdafx.h"

GameSystem::GameSystem()
{
	for (int i = 0; i < 3; i++)
	{
		resetVal[i] = 0;
	}

	gameTurn = 0;

	mHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	//SetupCards();
}

GameSystem::~GameSystem()
{
}

void GameSystem::Initialize(int _widthConsole,
				int _heightConsole)
{
	Console::SetWindowSize(_widthConsole, _heightConsole);

	system("title MONOPOLY INTERNATIONAL - Console Version");
}


void GameSystem::GotoPos(int _posX, int _posY, string _text)
{
	mCoord.X = _posX;
	mCoord.Y = _posY;

	SetConsoleCursorPosition(mHandle, mCoord);

	cout << _text;
}
void GameSystem::GotoPos(Vector2 _vec2, PlayerIdent _playerIdent, Player _player)
{
	GotoPos(_vec2.x, _vec2.y);

	switch (_playerIdent)
	{
	case PLAYER_1:
		cout << (char)4;
		break;
	case PLAYER_2:
		cout << (char)5;
		break;
	case PLAYER_3:
		cout << (char)6;
		break;
	default:
		break;
	}
	cout << " " << _player.name;
}

void GameSystem::GetStagePos(bool showVal)
{
	for (int i = 0; i < 40; i++)
	{
		if (i >= 0 && i < 10)											// 0 - 9
		{
			posStage[i].Set(97 - (i * 9), 45, i);
		}
		else if (i == 10)												// 10
		{
			posStage[i].Set(2, 45, i);
		}
		else if (i > 10 && i < 20)										// 11 - 19
		{
			posStage[i].Set(2, 40 - (resetVal[0]++ * 4), i);
		}
		else if (i == 20)												// 20
		{
			posStage[i].Set(2, 2, i);
		}
		else if (i > 20 && i < 30)										// 21 - 29
		{
			posStage[i].Set(16 + (resetVal[1]++ * 9), 2, i);
		}
		else if (i == 30)												// 30
		{
			posStage[i].Set(97, 2, i);
		}
		else if (i > 30 && i < 40)										// 31 - 39
		{
			posStage[i].Set(101, 8 + (resetVal[2]++ * 4), i);
		}
	}

	if (showVal)
	{
		for (int i = 0; i < 40; i++)
		{
			posStage[i].TracePos();
			cout << endl;
		}
		cin.get();
	}
}

int GameSystem::RollDice()
{
	int dice1, dice2;
	dice1 = rand() & 6 + 1;
	dice2 = rand() & 6 + 1;

	char BlockDice[6][35] = 
	{
		"qeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeew",
		"d    p                           d",
		"d    o                           d",
		"d                                d",
		"d l                              d",
		"aeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeees"
	};

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 35; j++)
		{
			GameSystem().GotoPos(j + 113, i + 24);
			switch (BlockDice[i][j])
			{
			case 'q':
				cout << char(201);
				break;
			case 'w':
				cout << char(187);
				break;
			case 's':
				cout << char(188);
				break;
			case 'a':
				cout << char(200);
				break;
			case 'e':
				cout << char(205);
				break;
			case 'd':
				cout << char(186);
				break;
			case 'p':
				cout << "Angka Dadu Pertama : " << dice1;
				break;
			case 'o':
				cout << "Angka Dadu Kedua   : " << dice2;
				break;
			case 'l':
				cout << "Anda jalan sebanyak " << dice1 + dice2 << " langkah.";
				break;
			default:
				break;
			}
		}
	}

	/*
	cout <<
		"Angka Dadu Pertama : " << dice1 << "\n" <<
		"Angka Dadu Kedua   : " << dice2 << "\n" <<
		"Anda jalan sebanyak " << dice1 + dice2 << " langkah." <<
		endl;
	*/
	return dice1 + dice2;
}

int GameSystem::InputNumber(int _int)
{
	while (!(cin >> _int)){
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "\t\t\t\t\t\t\tInvalid input.  Try again: ";
	}
	return  _int;
}
