#pragma once
#include "ILibrary.h"
#include <map>
#include <iterator>


class Library : public ILibrary {
public:
	Library(const std::string& name);
	void addBook(const Book& book)override;
	void modifyBook(int key, const std::string& newName) override;
	void pop();
	void removeBook(int key) override;
	void registerSubscriber(const Subscriber& sub) override;
	//void showBooks();
	int  getID();
	//friend std::ostream& operator<<(std::ostream& os, const std::map <int, std::string>& _books) {
	//	os << "\n";
	//	for (const auto & _idCounterBooks : _books)
	//	{
	//		os << "\t{" << _idCounterBooks.first << ", " << _idCounterBooks.second << "}\n";
	//	}
	//	
	//	os << ']';
	//	return os;
	//}
	/*friend std::ostream& operator<<(std::ostream& os, const std::map <int, std::string>::iterator it) {
		os << it->first << it->second;
		return os;
	}*/
	//template <typename key, typename value>
	//friend std::ostream& operator<<(std::ostream& os, const std::map<int, Book>& _books)
	//{
	//	for (const std::pair<key, value>& t : _books)
	//	{
	//		os << t.first << " " << t.second << " " << std::endl;
	//	}
	//	return os;
	//}

private:
	int _ID;
	std::string _name;
	std::map<int, Book> _books; 
	std::map<int, Book>::iterator it;
	int _idCounterBooks;//можно не хранить, а брать из мапы последний элемент
	std::queue<Subscriber> _subs;

};

