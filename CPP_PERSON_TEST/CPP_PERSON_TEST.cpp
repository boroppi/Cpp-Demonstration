// CPP_PERSON_TEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tweeter.h"
#include "Resource.h"
#include <iostream>

using namespace std;

int main()
{
	//Person p("Burak", "Kaya", 123);
	//Person p2("Farop", "Gidop", 200);
	//Person* pp = new Person("Asd", "Qwe", 300);
	//
	//cout << ((pp->GetNumber() < p2) ? "true" : "false") << endl;

	//Tweeter t("Arthas", "Menethil", 103, "@Arthas");

	//delete pp;

	Person p("Burak", "Kaya", 123);
	p.AddResource();
	p.SetFirstName("Borop");
	p.AddResource();
	Person p2 = p;
	p = p2;
	
    return 0;
}

