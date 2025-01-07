#include <iostream>
#include <vector>
#include <list>
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

	cout << "Part 0	---		�������� ����� auto		---" << endl << endl;

	auto a = 2;
	
	auto b = 3.14;

	// ������������� auto ���������� ������ ����
	

	vector<int> vt = { 5,7 }; 


	//������� �� ����� ��� ������������ �����

	vector<int>::iterator itvt = vt.begin();

	auto itvt2 = vt.begin(); // � ������ ������� itvt � itvt2 ����� ��������� �� ���� � �� �� ����� � ������




	cout << "Part 1	---		LIST		---" << endl << endl;
	// List - ��� ���������� ����������� ������. ��������� � ��������� list ���������� ����� �������� [] ��� ������ at (��� ��� ����������� ��� VECTOR).

	list<int> myLst;

	myLst.push_front(39); // ���������� ��-�� � ������
	myLst.push_front(39); // ���������� ��-�� � ������
	myLst.push_back(87); // ���������� ��-�� � �����
	myLst.push_front(39); // ���������� ��-�� � ������
	myLst.push_front(39); // ���������� ��-�� � ������
	myLst.push_back(55); // ���������� ��-�� � �����
	myLst.push_front(21); // ���������� ��-�� � ������

	auto itLt = myLst.begin();

	cout << *itLt << endl << endl;
	
	Printlist(myLst);

	//myLst.sort();
	myLst.unique();

	Printlist(myLst);

	myLst.reverse();

	//myLst.clear();

	
	advance(itLt, 3); // ����� ��� ������ ���������
	myLst.insert(itLt, 111); // ����� ��� ������� ��-��
	myLst.erase(itLt); // ����� ��� �������� ��-��

	myLst.remove(111); // �������� ��-�� �� ��� ��������

	myLst.assign(3, 0); // ������� ���������� ��-�� � ��������� 3 ������

	list<int>myLst2 = { 1,2,3,4,5 };

	myLst.assign(myLst2.begin(), myLst2.end()); // ������ � myLst ���������� ��-�� �� myLst2


	return 0;
}