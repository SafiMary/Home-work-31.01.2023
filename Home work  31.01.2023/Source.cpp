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
	//Создали книги

	Book book;
	book.setAuthor("Толстой");
	book.setContent("Роман");
	book.setTitle("Война и мир");
	book.setYearIssue(1963);
	Book book1;
	book1.setAuthor("Достоевский");
	book1.setContent("Философский роман");
	book1.setTitle("Преступление и наказание");
	book1.setYearIssue(1986);
	Book book2;
	book2.setAuthor("Гоголь");
	book2.setContent("Поэма");
	book2.setTitle("Мертвые души");
	book2.setYearIssue(1842);
	Book book3;
	book3.setAuthor("Каверин");
	book3.setContent("Роман");
	book3.setTitle("Два капитана");
	book3.setYearIssue(1956);
	//Добавляем книги в библиотеку
	
	library.addBook(book);
	library.addBook(book1);
	library.addBook(book2);
	library.addBook(book3);

    //Показать содержимое книги
	book.showOneBook();
	
	//Изменить книгу
	library.modifyBook(1, "Изменили название");

	//Проверить произошло ли изменение
	book.showOneBook();
	book3.showOneBook();
	//library.removeBook(1);
	//book.showOneBook();


}

