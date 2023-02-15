#include "Library.h"
#include "ILibrary.h"
#include <map>
#include <iostream>
#include <iterator>
#include <string>

Library::Library(const std::string& name) : _name(name), _idCounterBooks(0), _ID(0){}


void Library::registerSubscriber(const Subscriber& sub) {
	_ID++;
	_subs.push(sub);
	std::cout << "Пользователь добавлен\n " << std::endl;
}

void Library::addBook(const Book& book) {//добавить книгу
	_books.insert(std::make_pair(_idCounterBooks, book));
	_idCounterBooks++;
	std::cout << "Книга добавлена\n " << std::endl;
}

void Library::modifyBook(int key, const std::string& newName) {//изменить книгу
	std::cout << "Изменили название книги\n " << std::endl;
	const auto it = _books.find(key);
	std::cout << it->second.setTitle(newName);
}

void Library::removeBook(int key) {//удалить книгу
	_books.erase(key);
	std::cout << "Книга удалена\n " << std::endl;
}
void Library::pop() {//поиск и выдача книги. или отказ в случае отсутствия
	Subscriber& sub = _subs.front();
	std::string subWantedBook = sub.getBookWanted();
	for (auto it = _books.begin(); it != _books.end(); it++) {
		if (it->second.getTitle() == subWantedBook) {
			_books.erase(it);
			_subs.pop();
			std::cout << "Книгу нашли " << std::endl;
			return;
		}
		std::cout << "Книга не найдена, пользователь удален " << std::endl;
		_subs.pop();
	}
}
void Library::showBooks() {// Список книг
	std::cout << "Список книг: " << std::endl;
	/*for (const auto& _idCounterBooks : _books) {
		std::cout << _idCounterBooks << "    " << book.getTitle() << "\n";
	}*/
	for (int i = 0; it != _books.end(); it++, i++) {
		std::cout << it->first << " " << it->second << std::endl;
	}

}
//std::ostream& operator<<(std::ostream& os, const std::map <int, std::string>::iterator& it) {
//	os << it->first;
//	os << it->second;
//	return os;
//}
 /*std::ostream& operator<<(std::ostream& os, const std::map <int, std::string>& _books) {
os << "\n";
for (const auto& _idCounterBooks : _books)
{
	os << "\t{" << _idCounterBooks.first << ", " << _idCounterBooks.second << "}\n";
}

os << ']';
return os;
	}*/
//void Library::showBooks() {// Список книг
//	for (it = _books.begin(); it != _books.end(); it++)
//	{
//		std::cout << it->first << " " << it->second << std::endl;
//	}
//
//}


int  Library::getID() {
	return _ID;
}