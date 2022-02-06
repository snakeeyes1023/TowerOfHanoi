#pragma once
#include <stack>
#include "Disk.h"

class Tower
{
public:

	Tower();

	void Show();

	/// <summary>
	/// Ajouter un disk à la tour
	/// </summary>
	/// <param name="disque">Disque à ajouter</param>
	/// <returns></returns>
	bool Append(Disk);
	
	/// <summary>
	/// Enlever le dernier disk
	/// </summary>
	/// <returns></returns>
	Disk Remove();

	/// <summary>
	/// Compter le nombre de disk sur la tour
	/// </summary>
	/// <returns></returns>
	int Count();

private:
	std::stack<Disk> m_disks;
};

