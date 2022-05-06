#pragma once

struct Vector2D
{
	float x;
	float y;

	Vector2D()
	{
		x = 0.0f;
		y = 0.0f;
	}

	Vector2D(float Initial_x, float Initial_y)
	{
		x = Initial_x;
		y = Initial_y;
	}
	
};

enum SCREENS
{
	SCREEN_INTRO,
	SCREEN_MENU,
	SCREEN_LEVEL1,
	SCREEN_LEVEL2,
	SCREEN_GAMEOVER,
	SCREEN_HIGHSCORERS,
};

enum FACING
{
	FACING_LEFT,
	FACING_RIGHT,
};