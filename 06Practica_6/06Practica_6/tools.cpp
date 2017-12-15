#include "stdafx.h"
#include "tools.h"

int countWords(char *cad, const char* filename) {
	int count = 0;
	ifstream file(filename);
	char str[255];

	while (file.getline(str, 255))
	{
		if (!strcmp(str, cad))
			count++;
	}

	return count;
}

int sumNumbers(const char* filename) {
	ifstream file(filename);
	char str[255];
	int sum = 0;
	while (file.getline(str, 255))
	{
		stringstream ss(str);
		int i;
		while (ss >> i) {
			sum += i;
			if (ss.peek() == ',')
				ss.ignore();
		}
	}
	return sum;
}