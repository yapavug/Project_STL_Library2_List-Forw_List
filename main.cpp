#include <iostream>
#include <list>
using namespace std;

int main()
{

	cout << "Part 1	---		LIST		---" << endl << endl;
	// List - ��� ���������� ����������� ������. ��������� � ��������� list ���������� ����� �������� [] ��� ������ at (��� ��� ����������� ��� VECTOR).

	list<int> myLst;

	myLst.push_back(87); // ���������� ��-�� � �����
	myLst.push_front(39); // ���������� ��-�� � ������

	auto itLt = myLst.begin(); // auto �������� list<int>::iterator

	cout << *itLt << endl << endl;



	return 0;
}