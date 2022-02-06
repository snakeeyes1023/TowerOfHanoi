#include "Disk.h"
#include <iostream>

Disk::Disk()
{
	m_width = 0;
}

Disk::Disk(int width)
{
	m_width = width;
}

void Disk::Show()
{
	for (size_t i = 0; i < m_width; i++)
	{
		std::cout << "+";
	}
}

int Disk::GetWidth()
{
	return m_width;
}
