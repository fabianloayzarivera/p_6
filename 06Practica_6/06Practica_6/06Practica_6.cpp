// 06Practica_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tools.h"

int main()
{
	char *cad = "yes";
	int count = countWords(cad, "Read.txt");
	cout <<"Word: "<<cad<< " Count: "<<count<<endl;
	int sum = sumNumbers("ReadNumbers.txt");
	cout << "Numbers sum: " << sum<<endl;
	
	getchar();
    return 0;
}




