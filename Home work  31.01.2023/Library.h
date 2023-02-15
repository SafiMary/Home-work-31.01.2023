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
	void pop();
	void removeBook(int key) override;
	void registerSubscriber(const Subscriber& sub) override;
	//friend std::ostream& operator<<(std::ostream& os, const std::map <int, std::string>::iterator& it);
	//friend std::ostream& operator<<(std::ostream& os, const std::map <int, std::string>& _books);
	template <typename key, typename value>
	friend std::ostream& operator<<(std::ostream& os, const std::map<int, Book>& _books)
	{
		for (const std::pair<key, value>& t : _books)
		{
			os << t.first << " " << t.second << " " << std::endl;
		}
		return os;
	}
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

