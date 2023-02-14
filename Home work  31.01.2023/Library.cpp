#include "Library.h"
#include "ILibrary.h"
#include <map>
#include <iostream>
#include <iterator>

//#include "Book.h"
//#include "Subscriber.h"

Library::Library(const std::string& name) : _name(name), _idCounterBooks(0), _ID(0){}


void Library::registerSubscriber(const Subscriber& sub) {
	_ID++;
	_subs.push(sub);
	std::cout << "������������ ��������\n " << std::endl;
}

void Library::addBook(const Book& book) {//�������� �����
	_books.insert({ _idCounterBooks, book });
	_idCounterBooks++;
	std::cout << "����� ���������\n " << std::endl;
}

void Library::modifyBook(int key, const std::string& newName) {//�������� �����
	auto it = _books.find(key);
	it->second.setAuthor(newName);
}

void Library::removeBook(int key) {//������� �����
	_books.erase(key);
	std::cout << "����� �������\n " << std::endl;
}
void Library::pop() {//����� � ������ �����. ��� ����� � ������ ����������
	Subscriber& sub = _subs.front();
	std::string subWantedBook = sub.getBookWanted();
	for (auto it = _books.begin(); it != _books.end(); it++) {
		if (it->second.getTitle() == subWantedBook) {
			_books.erase(it);
			_subs.pop();
			std::cout << "����� ����� " << std::endl;
			return;
		}
		std::cout << "����� �� �������, ������������ ������ " << std::endl;
		_subs.pop();
	}
}
//void Library::showBooks() {// ������ ����
//	std::cout << "������ ����: " << std::endl;
//	for (const auto& [_idCounterBooks, value] : _books) {
//		std::cout << _idCounterBooks << "    " << value.getTitle() << "\n";
//	}
//
//}

//void Library::showBooks() {// ������ ����
//	for (it = _books.begin(); it != _books.end(); it++)
//	{
//		std::cout << it->first << it->second << std::endl;
//	}
//
//}


int  Library::getID() {
	return _ID;
}