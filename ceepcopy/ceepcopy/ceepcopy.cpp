// ceepcopy.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

#include "ceep.h"

class Bar : Ceep
{
public:
	Bar() {}
	~Bar() {}

	int one = 1;
	int two = 2;
};

class Foo : public Ceep
{
public:
	Foo() {}
	~Foo() {}

	Bar *bar = new Bar();
};



int main()
{	
	using namespace std;

	Foo f1;
	f1.bar->one = 3;
	Foo f2(f1);
	std::cout << (int) &f1 << endl;
	std::cout << f2.ref() << endl;
	std::cout << "equality test " << (f2.ref() == (int)&f1) << endl;


	cin.get();
    return 0;
}

