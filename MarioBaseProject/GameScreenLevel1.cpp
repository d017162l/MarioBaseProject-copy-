#include "GameScreenLevel1.h"
#include "Texture2D.h"
#include <iostream>



GameScreenLevel1::GameScreenLevel1(SDL_Renderer* renderer) : GameScreen(renderer)
{
	SetUpLevel();
}

GameScreenLevel1::~GameScreenLevel1()
{
	delete m_background_texture;
	m_background_texture = nullptr;
	my_character  = nullptr;
}


void GameScreenLevel1::Render()
{
	//draw the background
	m_background_texture->Render(Vector2D(), SDL_FLIP_NONE);

	//call render function
	my_character->Render();
}

bool GameScreenLevel1::SetUpLevel()
{
	//Load texture 
	m_background_texture = new Texture2D(m_renderer);
	if (!m_background_texture->LoadFromFile("Images/test.bmp"))
	{
		std::cout << "Failed to load background texture!" << std::endl;
		return false;
	}
	//set up player character
	my_character = new Character(m_renderer, "Images/Mario.png", Vector2D(64, 330));

}

void GameScreenLevel1::Update(float deltaTime, SDL_Event e)
{
	//update character
	my_character->Update(deltaTime, e);
}
