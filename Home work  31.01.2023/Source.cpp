#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <windows.h>
#include "ILibrary.h"
#include "Library.h"
#include "Subscriber.h"
#include "Book.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Library library("����������");
	Subscriber subscriber("������", "����� � ���");
	Subscriber subscriber1("�������", "������������ � ���������");
	Subscriber subscriber2("������", "���� �� ���� ���� ������");
	Book book("�������", "����� � ���", 1963, "�����");
	Book book1("�����������", "������������ � ���������", 1986, "����������� �����");
	Book book2("������", "������� ����", 1842, "�����");
	//��������� ����� � ����������
	
	library.addBook(book);
	library.addBook(book1);
	library.addBook(book2);


}

