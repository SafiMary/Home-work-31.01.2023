#pragma once
#include <string>



class Book {
public:
	Book();
	Book(const std::string& author, const std::string& title, int yearIssue, const std::string& content);
	const std::string& getTitle()const;
	const std::string& getAuthor()const;
	const std::string& getContent()const;
	int getYearIssue()const;

	void setTitle(const std::string& title);
	void setAuthor(const std::string& author);
	void setContent(const std::string& content);
	void setYearIssue(int yearIssue);
	void showOneBook();
private:
	std::string _author;
	std::string _title;
	int _yearIssue;
	std::string	_content;

};

