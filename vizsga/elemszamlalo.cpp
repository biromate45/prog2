// elemszamlalo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int db = 11;
	int array[8] = { };
	for (int a = 0;a < 10;a++) {
		cout << "\n" << "Adja meg a tomb elemeit: ";
		cin >> array[a];

	}
	for (int i = 0; i < 8; i++) {
		int found = 0;
		for (int j = 0; j < i; j++) {
			if (array[i] == array[j]) found++;
		}
		if (found == 0) {
			int count = 1;
			for (int j = i + 1; j < 8; j++) {
				if (array[i] == array[j]) count++;
			}

			cout << array[i] << ":" << count << endl;
		}
	}

	getchar();
	getchar();
    return 0;
}

