//============================================================================
// Name        : HelloWorld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "HelloPrinter.h"
using namespace std;

void printHello() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
}

int main() {
	printHello();
	HelloPrinter* hp = new HelloPrinter();
	hp->prHello();
	hp->printHelloN();
	return 0;
}
