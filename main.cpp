#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;


template <typename T>
void Printlist(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
	cout << endl << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Part 0	---		Ключевое слово auto		---" << endl << endl;

	auto a = 2;
	
	auto b = 3.14;

	// Использование auto затрудняет чтение кода
	

	vector<int> vt = { 5,7 }; 


	//Поэтому не стоит его использовать всюду

	vector<int>::iterator itvt = vt.begin();

	auto itvt2 = vt.begin(); // В данном примере itvt и itvt2 будут указывать на одно и то же место в памяти




	cout << "Part 1	---		LIST		---" << endl << endl;
	// List - это реализация двусвязного списка. Обращение к элементам list невозможно через оператор [] или метода at (как это реализовано для VECTOR).

	list<int> myLst;

	myLst.push_front(39); // Добавление эл-та в начало
	myLst.push_front(39); // Добавление эл-та в начало
	myLst.push_back(87); // Добавление эл-та в конец
	myLst.push_front(39); // Добавление эл-та в начало
	myLst.push_front(39); // Добавление эл-та в начало
	myLst.push_back(55); // Добавление эл-та в конец
	myLst.push_front(21); // Добавление эл-та в начало

	auto itLt = myLst.begin();

	cout << *itLt << endl << endl;
	
	Printlist(myLst);

	//myLst.sort();
	myLst.unique();

	Printlist(myLst);

	myLst.reverse();

	//myLst.clear();
	
	
	//advance(itLt, 3); // Метод для сдвига итератора
	//myLst.insert(itLt, 111); // Метод для вставки эл-та
	//myLst.erase(itLt); // Метод для удаления эл-та

	//myLst.remove(111); // Удаление эл-та по его значению

	//myLst.assign(3, 0); // Удаляет предыдущие эл-ты и заполняет 3 нулями

	//list<int>myLst2 = { 1,2,3,4,5 };

	//myLst.assign(myLst2.begin(), myLst2.end()); // Теперь в myLst копированы эл-ты из myLst2





	cout << "Part 1	---		FORWARD_LIST		---" << endl << endl;
	// Представляет реализацию односвязного списка

	forward_list<int> fl = { 1,2,3 };
	fl.push_front(0);
	fl.push_front(-1);
	for (auto ef : fl)
	{
		cout << '\t' << ef << endl;
	}
	cout << endl;

	forward_list<int>::iterator ifl = fl.begin();


	fl.erase_after(ifl);

	for (auto ef : fl)
	{
		cout << '\t' << ef << endl;
	}
	cout << endl;

	fl.insert_after(ifl, 0);

	for (auto ef : fl)
	{
		cout << '\t' << ef << endl;
	}
	cout << endl;

	ifl = fl.before_begin();

	fl.insert_after(ifl, 100);

	for (auto ef : fl)
	{
		cout << '\t' << ef << endl;
	}
	cout << endl;

	return 0;
}