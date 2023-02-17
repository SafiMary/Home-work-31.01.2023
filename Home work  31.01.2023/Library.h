#pragma once
#include "ILibrary.h"
#include <map>
#include <iterator>
#include <string>

class Library : public ILibrary {
public:
	Library(const std::string& name);
	void addBook(const Book& book)override;
	void modifyBook(int key, const std::string& newName) override;
	void pop(const Subscriber& _sub);
	void removeBook(int key) override;
	void registerSubscriber(const Subscriber& sub) override;
	void showBooks();
	int  getID();
	


private:
	int _ID;
	std::string _name;
	std::map<int, Book> _books; 
	std::map<int, Book>::iterator it = _books.begin();
	int _idCounterBooks;//можно не хранить, а брать из мапы последний элемент
	std::queue<Subscriber> _subs;

};

