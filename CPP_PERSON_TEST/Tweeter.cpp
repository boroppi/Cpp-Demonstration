#include "stdafx.h"
#include "Tweeter.h"
#include <iostream>

using namespace std;

Tweeter::Tweeter(string first, string last, int arbitrary, string handle) :
	Person(first,last,arbitrary), tweetHandle(handle)
{
	//cout << "constructing " << GetName() << endl;
}



Tweeter::~Tweeter()
{
//	cout << "deconstructing " << GetName() << endl;
}

string Tweeter::GetName() const {
	return Person::GetName() + " " + tweetHandle;
}

