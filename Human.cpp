#include <iostream>
#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	human h("Исхаков", "Ильдар", "Рамилович", 6);
	h.print();
	student s("Исхаков", "Ильдар", "Рамилович", 21, 0);
	s.print();
	boss b("Исхаков", "Ильдар", "Рамилович", 34, 120);
	b.print();
	system("pause");
}