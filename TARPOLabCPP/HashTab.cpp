//------------------------------------------------------------------------------
// Container.cpp - �������� ���������� ������� ������ Container
//------------------------------------------------------------------------------

#include "HashTab.h"
#include <unordered_map>

using namespace std;
//------------------------------------------------------------------------------
// ������������� ����������
HashTab::HashTab() : len(0) { }

//------------------------------------------------------------------------------
// ������� ���������� �� ��������� (������������ ������)
void HashTab::Clear()
{
	for (int i = 0; i < len; i++)
	{
		delete hashTab[i];
	}
	len = 0;
}

//------------------------------------------------------------------------------
// ���� ����������� ����������
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
// ����� ����������� ����������
void HashTab::Out(ofstream& ofst) {
	ofst << "Container contents " << len << " elements." << endl;
	for (int i = 0; i < len; i++) {
		ofst << i << ": ";
		hashTab[i]->Out(ofst);
	}
}
