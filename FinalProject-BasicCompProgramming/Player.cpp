#include "stdafx.h"

Player::Player()
{
	isBroke = false;
}

void Player::SetPosition(char _coord, int _x, int _y)
{
	switch (_coord)
	{
	case 'x':
		mVec2.x = _x;
		break;
	case 'y':
		mVec2.y = _y;
		break;
	default:
		break;
	}
}

void Player::SetPosition(Vector2 _vec2)
{
	mVec2 = _vec2;
}

int Player::GetPosition(char _coord)
{
	switch (_coord)
	{
	case 'x':
		return mVec2.x;
		break;
	case 'y':
		return mVec2.y;
		break;
	default:
		return 0;
		break;
	}
}

Vector2 Player::GetPosition()
{
	return mVec2;
}

void Player::SetMoney(long _money)
{
	mMoney = _money;
}

long Player::GetMoney()
{
	return mMoney;
}

void Player::SetIdPos(Vector2 _vec2)
{
	mVec2.id = _vec2.id;
}

void Player::SetIdPos(int _id)
{
	mVec2.id = _id;
}

int Player::GetIdPos()
{
	return mVec2.id;
}

void Player::Draw(Vector2 _vec2)
{
	GameSystem().GotoPos(_vec2.x, _vec2.y, name);
}

void Player::Draw(int _posX, int _posY)
{
	GameSystem().GotoPos(_posX, _posY, name);
}
