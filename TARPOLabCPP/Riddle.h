#ifndef __Riddle__
#define __Riddle__

//------------------------------------------------------------------------------
// Rectangle.h - �������� �������� ������ ��������������,
// ������������ �� �������� ������ Figure
//------------------------------------------------------------------------------

#include "Wisdom.h"

//------------------------------------------------------------------------------
// �������������
class Riddle : public Wisdom
{
public:
	string riddle, answer; // ������, ������
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);     // ����� ������ � ����������� �����

	// �������� ��� �������������.
	Riddle() {}
};

//------------------------------------------------------------------------------
// �������, �������������� �������� ��������������� ��� ������ �������� ������
class RiddleFactory : public WisdomFactory {
public:
	// ����������� �������, �������������� ������� �������������� (����� 1)
	RiddleFactory() :WisdomFactory(3) { }

	// ��������������� ������ Create �� �������� ���������������.
	Wisdom* Create(int key) {
		if (key == mark)
			return new Riddle;
		else
			return nullptr;
	}
};

#endif