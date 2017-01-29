#include "stdafx.h"
#include <iostream>

GameSystem gameSystem;
Cards cards[MAX_CARDS];

unsigned char MapStage[50][111] =
{
	"qeeeeeeeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeeeeeeew",
	"d             d1       d1       d1       d1       d1       d1       d1       d1       d1       d             d",
	"d             d2       d2       d2       d2       d2       d2       d2       d2       d2       d             d",
	"d             d3       d3       d3       d3       d3       d3       d3       d3       d3       d             d",
	"d             dzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzd             d",
	"d             dzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzd             d",
	"teeeeeeeeeeeeeyeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeeyeeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeg                                                                                teeeeeeeeeeeeeg",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"d         zzzzd                                                                                dzzzz         d",
	"teeeeeeeeeeeeeyeeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeereeeeeeeeyeeeeeeeeeeeeeg",
	"d             dzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzd             d",
	"d             dzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzdzzzzzzzzd             d",
	"d             d        d        d        d        d        d        d        d        d        d             d",
	"d             d        d        d        d        d        d        d        d        d        d             d",
	"d             d        d        d        d        d        d        d        d        d        d             d",
	"aeeeeeeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeefeeeeeeeeeeeees"
};

void DrawStage();
void SetupCards(Cards cards[]);
void Screen_Intro(Players&);
void Screen_Start(Players&);
void Screen_InGame(Players&);

int main()
{
	struct Players players;

	gameSystem.Initialize();

	gameSystem.GetStagePos();
	Screen_Intro(players);

	return 0;
}


void DrawStage()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 111; j++)
		{
			gameSystem.GotoPos(j, i);
			switch (MapStage[i][j])
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
			case 'r':
				cout << char(203);
				break;
			case 'f':
				cout << char(202);
				break;
			case 't':
				cout << char(204);
				break;
			case 'g':
				cout << char(185);
				break;
			case 'y':
				cout << char(206);
				break;
			case 'z':
				cout << char(219);
				break;
			default:
				//cout << " ";
				break;
			}
		}
	}
}
void SetupCards(Cards cards[])
{
	for (int i = 1; i < MAX_CARDS; i++)
	{
		switch (i)
		{
		case 0:
			cards[i].plotCode = 'A';
			cards[i].id = i + 1;
			cards[i].name = "INDONESIA";
			cards[i].buy = 60;
			cards[i].rentLand = 2;
			cards[i].rentHouse1 = 10;
			cards[i].rentHouse2 = 30;
			cards[i].rentHouse3 = 90;
			cards[i].rentHouse4 = 160;
			cards[i].rentHotel = 250;
			cards[i].buyHouse = 50;
			cards[i].buyHotel = 250;
			cards[i].hipotik = 30;
			break;
		case 1:
			cards[i].plotCode = 'A';
			cards[i].id = i + 1;
			cards[i].name = "MALAYSIA";
			cards[i].buy = 60;
			cards[i].rentLand = 4;
			cards[i].rentHouse1 = 20;
			cards[i].rentHouse2 = 60;
			cards[i].rentHouse3 = 180;
			cards[i].rentHouse4 = 320;
			cards[i].rentHotel = 450;
			cards[i].buyHouse = 50;
			cards[i].buyHotel = 250;
			cards[i].hipotik = 30;
			break;
		case 2:
			cards[i].plotCode = 'B';
			cards[i].id = i + 1;
			cards[i].name = "SINGAPORE";
			cards[i].buy = 100;
			cards[i].rentLand = 8;
			cards[i].rentHouse1 = 40;
			cards[i].rentHouse2 = 100;
			cards[i].rentHouse3 = 300;
			cards[i].rentHouse4 = 450;
			cards[i].rentHotel = 600;
			cards[i].buyHouse = 50;
			cards[i].buyHotel = 250;
			cards[i].hipotik = 60;
			break;
		case 3:
			cards[i].plotCode = 'B';
			cards[i].id = i + 1;
			cards[i].name = "HONGKONG";
			cards[i].buy = 100;
			cards[i].rentLand = 6;
			cards[i].rentHouse1 = 30;
			cards[i].rentHouse2 = 90;
			cards[i].rentHouse3 = 270;
			cards[i].rentHouse4 = 400;
			cards[i].rentHotel = 550;
			cards[i].buyHouse = 50;
			cards[i].buyHotel = 250;
			cards[i].hipotik = 50;
			break;
		case 4:
			cards[i].plotCode = 'B';
			cards[i].id = i + 1;
			cards[i].name = "TAIWAN";
			cards[i].buy = 120;
			cards[i].rentLand = 6;
			cards[i].rentHouse1 = 30;
			cards[i].rentHouse2 = 90;
			cards[i].rentHouse3 = 270;
			cards[i].rentHouse4 = 400;
			cards[i].rentHotel = 550;
			cards[i].buyHouse = 50;
			cards[i].buyHotel = 250;
			cards[i].hipotik = 30;
			break;
		case 5:
			cards[i].plotCode = 'C';
			cards[i].id = i + 1;
			cards[i].name = "PHILIPINA";
			cards[i].buy = 140;
			cards[i].rentLand = 12;
			cards[i].rentHouse1 = 60;
			cards[i].rentHouse2 = 80;
			cards[i].rentHouse3 = 500;
			cards[i].rentHouse4 = 700;
			cards[i].rentHotel = 900;
			cards[i].buyHouse = 10;
			cards[i].buyHotel = 500;
			cards[i].hipotik = 80;
			break;
		case 6:
			cards[i].plotCode = 'D';
			cards[i].id = i + 1;
			cards[i].name = "THAILAND";
			cards[i].buy = 140;
			cards[i].rentLand = 10;
			cards[i].rentHouse1 = 50;
			cards[i].rentHouse2 = 150;
			cards[i].rentHouse3 = 450;
			cards[i].rentHouse4 = 625;
			cards[i].rentHotel = 750;
			cards[i].buyHouse = 100;
			cards[i].buyHotel = 500;
			cards[i].hipotik = 70;
			break;
		case 7:
			cards[i].plotCode = 'E';
			cards[i].id = i + 1;
			cards[i].name = "VIETNAM";
			cards[i].buy = 160;
			cards[i].rentLand = 10;
			cards[i].rentHouse1 = 50;
			cards[i].rentHouse2 = 150;
			cards[i].rentHouse3 = 450;
			cards[i].rentHouse4 = 625;
			cards[i].rentHotel = 750;
			cards[i].buyHouse = 100;
			cards[i].buyHotel = 500;
			cards[i].hipotik = 70;
			break;
		case 8:
			cards[i].plotCode = 'F';
			cards[i].id = i + 1;
			cards[i].name = "JEPANG";
			cards[i].buy = 180;
			cards[i].rentLand = 14;
			cards[i].rentHouse1 = 70;
			cards[i].rentHouse2 = 200;
			cards[i].rentHouse3 = 550;
			cards[i].rentHouse4 = 750;
			cards[i].rentHotel = 950;
			cards[i].buyHouse = 100;
			cards[i].buyHotel = 500;
			cards[i].hipotik = 90;
			break;

		case 9:
			cards[i].plotCode = 'G';
			cards[i].id = i + 1;
			cards[i].name = "KOREA";
			cards[i].buy = 180;
			cards[i].rentLand = 160;
			cards[i].rentHouse1 = 80;
			cards[i].rentHouse2 = 220;
			cards[i].rentHouse3 = 600;
			cards[i].rentHouse4 = 800;
			cards[i].rentHotel = 100;
			cards[i].buyHouse = 100;
			cards[i].buyHotel = 500;
			cards[i].hipotik = 100;
			break;
		case 10:
			cards[i].plotCode = 'H';
			cards[i].id = i + 1;
			cards[i].name = "INDIA";
			cards[i].buy = 200;
			cards[i].rentLand = 14;
			cards[i].rentHouse1 = 70;
			cards[i].rentHouse2 = 200;
			cards[i].rentHouse3 = 550;
			cards[i].rentHouse4 = 750;
			cards[i].rentHotel = 100;
			cards[i].buyHouse = 100;
			cards[i].buyHotel = 500;
			cards[i].hipotik = 900;
			break;
		case 11:
			cards[i].plotCode = 'I';
			cards[i].id = i + 1;
			cards[i].name = "RRC(CHINA)";
			cards[i].buy = 220;
			cards[i].rentLand = 180;
			cards[i].rentHouse1 = 90;
			cards[i].rentHouse2 = 250;
			cards[i].rentHouse3 = 700;
			cards[i].rentHouse4 = 875;
			cards[i].rentHotel = 1050;
			cards[i].buyHouse = 150;
			cards[i].buyHotel = 750;
			cards[i].hipotik = 110;
			break;
		case 12:
			cards[i].plotCode = 'J';
			cards[i].id = i + 1;
			cards[i].name = "UNI SOVIET";
			cards[i].buy = 220;
			cards[i].rentLand = 20;
			cards[i].rentHouse1 = 100;
			cards[i].rentHouse2 = 300;
			cards[i].rentHouse3 = 750;
			cards[i].rentHouse4 = 925;
			cards[i].rentHotel = 1100;
			cards[i].buyHouse = 150;
			cards[i].buyHotel = 750;
			cards[i].hipotik = 120;
		default:
			break;
		}
	}
}

void Screen_Intro(Players& _players)
{
	int menu;

	cout <<
		R"(                                                                                                                                      
  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______ 
 /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ 
                                  __    __  ______  __   __  ______  ______  ______  __      __  __    
                                 /\ "-./  \/\  __ \/\ "-.\ \/\  __ \/\  == \/\  __ \/\ \    /\ \_\ \   
                                 \ \ \-./\ \ \ \/\ \ \ \-.  \ \ \/\ \ \  __/\ \ \/\ \ \ \___\ \____ \  
                                  \ \_\ \ \_\ \_____\ \_\\"\_\ \_____\ \_\   \ \_____\ \_____\/\_____\ 
                                   \/_/  \/_/\/_____/\/_/ \/_/\/_____/\/_/    \/_____/\/_____/\/_____/ 
  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______  ______ 
 /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ /_____/ 
		)" << endl;

	cout << "\t\t\t\t\t\t\tOleh NOOR OCTAVIAN ANWAR\n\n\n";
	cout << "\t\t\t\t\t\t\t       -=Menu=-\n";
	cout << "\t\t\t\t\t\t\t[1] MAIN\n";
	cout << "\t\t\t\t\t\t\t[2] ATURAN MAIN\n";
	cout << "\t\t\t\t\t\t\t[3] KELUAR\n";
	do
	{
		cout << "\t\t\t\t\t\t\tMasukkan kode menu[1/2/3] : ";
		menu = gameSystem.InputNumber(menu);
	} while (menu != 1 &&
		menu != 2 &&
		menu != 3);

	switch (menu)
	{
	case MENU_START:
		Screen_Start(_players);
		Screen_InGame(_players);

		break;
	case MENU_INSTRUCTION:

		break;
	case MENU_EXIT:
		cout << "Keluar Program Cie" << endl;
		break;
	}
}

void Screen_Start(Players& _players)
{
	cout << "\t\t\t\t\t\t_____________________________________________" << endl;
	do
	{
		cout << "\n\t\t\t\t\t\t\tMasukkan banyak pemain [1-3] : ";
		gameSystem.lengthPlayers = gameSystem.InputNumber(gameSystem.lengthPlayers);
	} while (gameSystem.lengthPlayers < 2 || gameSystem.lengthPlayers > 3);
	cout << "\t\t\t\t\t\t_____________________________________________\n" << endl;
	for (int i = 0; i < gameSystem.lengthPlayers; i++)
	{
		cout << "\t\t\t\t\t\t\tMasukkan nama pemain ke-" << i + 1 << " : ";
		getline(cin, _players.player[i].name);
		_players.player[i].name.resize(5);
		cin.ignore();
	}
	system("cls");
}

void Screen_InGame(Players& _players)
{
	int turnPlayer = 0,
		pailitPlayer = 0,
		diceVal;

	for (int i = 0; i < gameSystem.lengthPlayers; i++)
	{
		_players.player[i].SetIdPos(0);
		_players.player[i].SetPosition(gameSystem.posStage[0]);
		_players.player[i].Draw(gameSystem.posStage[0].x,
			gameSystem.posStage[0].y + i);
	}

	cin.ignore();
	cin.get();

	do
	{
		DrawStage();
		cards[0].Draw();
		diceVal = gameSystem.RollDice();
		
		for (int i = 0; i < gameSystem.lengthPlayers; i++)
		{
			for (int j = 0; j < diceVal; j++)
			{
				_players.player[i].SetPosition(gameSystem.posStage[j]);

				Sleep(500);
				_players.player[i].SetIdPos(gameSystem.posStage[j]);

			}

		}

		for (int i = 0; i < gameSystem.lengthPlayers; i++)
		{
			if (_players.player[i].isBroke)
				pailitPlayer++;
		}

	} while (pailitPlayer != gameSystem.lengthPlayers - 1);
}