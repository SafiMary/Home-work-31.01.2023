#include "Subscriber.h"
#include "ILibrary.h"
#include <iostream>

Subscriber::Subscriber(const std::string& name, const std::string& bookWanted) : _name(name), _bookWanted(bookWanted), _id(ID_SUBSCRIBER) { ID_SUBSCRIBER++; }


const std::string& Subscriber::getName() const {
	return _name;
}
const std::string& Subscriber::getBookWanted()const {
	return _bookWanted;
}
int Subscriber::getId()const {
	return _id;
}

void Subscriber::setName(const std::string& name) {
	_name = name;
}

void Subscriber::setBookWanted(const std::string& bookWanted) {
	_bookWanted = bookWanted;
}