#include "Game.h"
#include <iostream>

Game::Game() 
{
	m_size = 3;

	IntializeTower();
}

Game::Game(int size){
	m_size = size;

	IntializeTower();
}

void Game::SwitchTopElement(int from, int to)
{
	if (GetTowerAtPostion(from).Count() == 0)
	{
		return;
	}

	Disk fromDisk{ GetTowerAtPostion(from).Remove() };

	if (!GetTowerAtPostion(to).Append(fromDisk))
	{
		GetTowerAtPostion(from).Append(fromDisk);
	}
}


void Game::Show()
{
	m_TowerA.Show();
	std::cout << std::string(5, '\n');

	m_TowerB.Show();
	std::cout << std::string(5, '\n');

	m_TowerC.Show();
	std::cout << std::string(5, '\n');

}

void Game::IntializeTower()
{
	m_TowerA = Tower();

	for (size_t i = m_size; i > 0; i--)
	{
		m_TowerA.Append(Disk(i));
	}

	m_TowerB = Tower();
	m_TowerC = Tower();
}

bool Game::VerifyVictory()
{
	return m_TowerC.Count() == m_size;
}

Tower& Game::GetTowerAtPostion(int pos)
{
	if (pos == 1)
	{
		return m_TowerA;
	}

	if (pos == 2)
	{
		return m_TowerB;
	}

	return m_TowerC;
}
