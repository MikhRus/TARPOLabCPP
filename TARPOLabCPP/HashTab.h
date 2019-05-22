#ifndef __HashTab__
#define __HashTab__

#include "Wisdom.h"

//------------------------------------------------------------------------------
// Container.h - содержит класс,
// представляющий простейший контейнер
// на основе одномерного массива.
class HashTab
{
public:
	enum { max_len = 100 }; // максимальная длина
	int len; // текущая длина
	Wisdom* hashTab[max_len];
	void In(ifstream& ifst);     // ввод фигур в котнейнер из входного потока
	void Out(ofstream& ofst);    // вывод фигур в выходного потока
	void Clear();  // очистка контейнера от фигур
	
	/*int HashCode(string a);*/

	HashTab();    // инициализация контейнера
	~HashTab() { Clear(); } // утилизация контейнера перед уничтожением
};

#endif

