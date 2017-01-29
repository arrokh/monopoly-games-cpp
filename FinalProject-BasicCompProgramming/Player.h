#pragma once

#include "stdafx.h"

using namespace std;

class Player
{
public:
	string name;
	bool isBroke;
	
	void SetPosition(char, int, int);
	void SetPosition(Vector2);

	int GetPosition(char);
	Vector2 GetPosition();

	void SetMoney(long);
	long GetMoney();

	void SetIdPos(Vector2);
	void SetIdPos(int);
	int GetIdPos();

	void Draw(Vector2);
	void Draw(int,int);
	Player();

private:
	Vector2 mVec2;
	long mMoney;

};
