#ifndef __HashTab__
#define __HashTab__

#include "Wisdom.h"

//------------------------------------------------------------------------------
// Container.h - �������� �����,
// �������������� ���������� ���������
// �� ������ ����������� �������.
class HashTab
{
public:
	enum { max_len = 100 }; // ������������ �����
	int len; // ������� �����
	Wisdom* hashTab[max_len];
	void In(ifstream& ifst);     // ���� ����� � ��������� �� �������� ������
	void Out(ofstream& ofst);    // ����� ����� � ��������� ������
	void Clear();  // ������� ���������� �� �����
	
	/*int HashCode(string a);*/

	HashTab();    // ������������� ����������
	~HashTab() { Clear(); } // ���������� ���������� ����� ������������
};

#endif

