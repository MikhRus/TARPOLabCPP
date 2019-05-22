#ifndef __Widsom__
#define __Widsom__

//------------------------------------------------------------------------------
// Figure.h - �������� �������� ���������� �������������� ������,
// ���������� �������� ������� ��� ���� ������ �����
//------------------------------------------------------------------------------
#include "Wisdom.h"

#include <fstream>
using namespace std;

//------------------------------------------------------------------------------

// �����, ����������� ��� ��������� ������.
// �������� �����������, �����������, ��� �����, �������� ���������� 
class Wisdom {
public:
	virtual void InData(ifstream& ifst) = 0;  // ���� ������ �� ������
	virtual void Out(ofstream& ofst) = 0;     // ����� ������ � ����������� �����
//  protected:
//    Figure() {};
};

//------------------------------------------------------------------------------

// ����������� ����� ������� �����, �������������� ����� ��������� ��� ����
// ���������� �����, � ����������� ������ ��� ������ ����������� � �������
// ������ ������ ������.
class WisdomFactory {
public:
	// �����������, �������������� ��������� ����������� ��������� � ����� � �� ������������
	WisdomFactory(int m);

	// �����,�������������� ����� ������ ������������������ �����.
	// ������ �������������� �� ����������� ��������� �����.
	// ������� ����� ����������� �� ������ ���������� ������� ������� ���������.
	// ��� ������������� ���������� ����, ����������� ������.
	static Wisdom* Make(int key);

	// �������������, ���������� � ���� ������ �� ������
	static Wisdom* In(ifstream& ifst);

	// �����, ������������ ��� �������� ���������� ������ ��� ���������� �����
	virtual Wisdom* Create(int key) = 0;

protected:
	// �������, ������������ ��� ������������� ������ ��� �� �����.
	// �������� ��� ��������������� ��������������� �������.
	int mark;

	// ��������� �� ������� ����� ������, ������������������ ��� �������� 
	// ��������������� �����.
	static WisdomFactory* top;

	// ��������� �� ��������� ������� � ����� ������, 
	// ������������������ ��� �������� ��������������� �����.
	WisdomFactory* next;

};

#endif
