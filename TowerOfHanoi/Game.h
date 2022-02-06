#pragma once
#include "Tower.h"
class Game
{
public:

	Game();

	/// <summary>
	/// Déclencher une parti avec un nombre de disk particulié
	/// </summary>
	/// <param name="nb">nombre de disk</param>
	Game(int);

	/// <summary>
	/// passer le disk du tour vers une autre
	/// </summary>
	/// <param name="de"></param>
	/// <param name="vers"></param>
	void SwitchTopElement(int,int);

	/// <summary>
	/// Vérifie si toute les disk sont sur la dernière tour
	/// </summary>
	/// <returns></returns>
	bool VerifyVictory();

	/// <summary>
	/// Afficher tous les tours et les disk
	/// </summary>
	void Show();

	
private:
	Tower m_TowerA;
	Tower m_TowerB;
	Tower m_TowerC;

	int m_size;

	/// <summary>
	/// Obtenir le tour corespondant à l'entré de l'utilisateur
	/// </summary>
	/// <param name="position"></param>
	/// <returns></returns>
	Tower& GetTowerAtPostion(int);

	/// <summary>
	/// Initialise le jeux selon les paramêtres choisi
	/// </summary>
	void IntializeTower();
};

