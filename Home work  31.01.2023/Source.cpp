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

	Library library("Пушкинская");
	Subscriber subscriber("Петров", "Война и мир");
	Subscriber subscriber1("Сидоров", "Преступление и наказание");
	Subscriber subscriber2("Петров", "Кому на Руси жить хорошо");
	Book book("Толстой", "Война и мир", 1963, "Роман");
	Book book1("Достоевский", "Преступление и наказание", 1986, "Философский роман");
	Book book2("Гоголь", "Мертвые души", 1842, "Поэма");
	//Добавляем книги в библиотеку
	
	library.addBook(book);
	library.addBook(book1);
	library.addBook(book2);


}

