#include <iostream>
#include <list>
using namespace std;

int main()
{

	cout << "Part 1	---		LIST		---" << endl << endl;
	// List - это реализация двусвязного списка. Обращение к элементам list невозможно через оператор [] или метода at (как это реализовано для VECTOR).

	list<int> myLst;

	myLst.push_back(87); // Добавление эл-та в конец
	myLst.push_front(39); // Добавление эл-та в начало

	auto itLt = myLst.begin(); // auto заменяет list<int>::iterator

	cout << *itLt << endl << endl;



	return 0;
}