﻿#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	return 0;
}
