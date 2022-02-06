#include "Tower.h"
#include <iostream>

Tower::Tower()
{
	m_disks = std::stack<Disk>();
}

void Tower::Show()
{
	std::stack<Disk> temp{m_disks};
	while (!temp.empty()) {

		temp.top().Show();

		temp.pop();

		std::cout << '\n';
	}
}

bool Tower::Append(Disk disk)
{
	if ( m_disks.empty() || m_disks.top().GetWidth() > disk.GetWidth())
	{
		m_disks.push(disk);
		return true;
	}
	return false;
}

Disk Tower::Remove()
{
	Disk res{ m_disks.top() };
	m_disks.pop();
	return res;
}

int Tower::Count()
{
	return m_disks.size();
}
