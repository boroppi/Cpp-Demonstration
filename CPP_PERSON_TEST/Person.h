#pragma once

#ifndef _Person_H
#define _Person_H


#include <string>
#include "Resource.h"
#include <memory>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	std::shared_ptr<Resource> pResource;
public:
	Person(std::string first, std::string last, int arbitrary);
	
	
	virtual std::string GetName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
	void SetFirstName(std::string first) { firstname = first; }
	bool operator<(Person& p);
	bool operator<(int i);
	friend bool operator<(int i, Person& p);
	void AddResource();
};

bool operator<(int i, Person& p);

#endif // !_Person_H