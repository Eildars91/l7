#include <iostream>
#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	human h("�������", "������", "���������", 6);
	h.print();
	student s("�������", "������", "���������", 21, 0);
	s.print();
	boss b("�������", "������", "���������", 34, 120);
	b.print();
	system("pause");
}