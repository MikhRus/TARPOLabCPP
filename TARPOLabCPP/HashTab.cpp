//------------------------------------------------------------------------------
// Container.cpp - содержит реализацию методов класса Container
//------------------------------------------------------------------------------

#include "HashTab.h"
#include <unordered_map>

using namespace std;
//------------------------------------------------------------------------------
// Инициализация контейнера
HashTab::HashTab() : len(0) { }

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void HashTab::Clear()
{
	for (int i = 0; i < len; i++)
	{
		delete hashTab[i];
	}
	len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера
/*unordered_map<int, Wisdom> unm;

int HashCode(string a) {
	hash<string>();
}*/

void HashTab::In(ifstream& ifst) {
	while (!ifst.eof())
	{
		if ((hashTab[len] = WisdomFactory::In(ifst)) != 0)
		{
			len++;
		}
	}
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера
void HashTab::Out(ofstream& ofst) {
	ofst << "Container contents " << len << " elements." << endl;
	for (int i = 0; i < len; i++) {
		ofst << i << ": ";
		hashTab[i]->Out(ofst);
	}
}
