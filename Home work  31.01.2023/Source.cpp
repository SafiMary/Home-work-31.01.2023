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
	//������� �����

	Book book;
	book.setAuthor("�������");
	book.setContent("�����");
	book.setTitle("����� � ���");
	book.setYearIssue(1963);
	Book book1;
	book1.setAuthor("�����������");
	book1.setContent("����������� �����");
	book1.setTitle("������������ � ���������");
	book1.setYearIssue(1986);
	Book book2;
	book2.setAuthor("������");
	book2.setContent("�����");
	book2.setTitle("������� ����");
	book2.setYearIssue(1842);
	Book book3;
	book3.setAuthor("�������");
	book3.setContent("�����");
	book3.setTitle("��� ��������");
	book3.setYearIssue(1956);
	//��������� ����� � ����������
	
	library.addBook(book);
	library.addBook(book1);
	library.addBook(book2);
	library.addBook(book3);

    //�������� ���������� �����
	book.showOneBook();
	
	//�������� �����
	library.modifyBook(1, "�������� ��������");

	//��������� ��������� �� ���������
	book.showOneBook();
	book3.showOneBook();
	//library.removeBook(1);
	//book.showOneBook();


}

