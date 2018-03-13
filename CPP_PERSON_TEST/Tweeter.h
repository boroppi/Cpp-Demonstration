#pragma once
#include "Person.h"
#include <string>

class Tweeter : 
	public Person
{
private:
	std::string tweetHandle;	
public:
	Tweeter(std::string first, std::string last, int arbitrary, std::string handler);
	~Tweeter();
	std::string GetName() const;
};

