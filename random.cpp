// random.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include<iostream>
using namespace std;
#include<cstdlib>
#include<time.h>

//int main()
//{
//	int ln, un;
//	cout << "general random integer in specific rande: ";
//	cout << "==============================================";
//	cout << "lower of random is ";
//	cin >> ln;
//	cout << "under of random is ";
//	cin >> un;
//	cout << " the random number between " << ln << "and" << un << "is: ";
//	cout << rand() % static_cast<int> (un - ln + 1) + ln; // cac gia tri bat ky trong khoang [ln,un]
//	return 0;
//
//	// static_cast ===> ep kieu du lieu so nguyen 
//}

//random with array
/*
int main()
{
	int x;
	cout << "nhap x";
	cin >> x;
	int a[100];
	for (int i = 0; i < x; i++)
	{
		a[i] = rand() % 20 + 1;
		// gia tri ngau nhien bat ky se nam tu [1,20]
		// x la so phan tu ma minh muon lay  trong khoang tu [1,20]
		// vd x=30 thi mang se tao ra 30 so ngau nhien co gia tri tron khoang[1.20]
		//cac phan tu co the trung nhau 
		cout << "phan tu thu  : " << i + 1 << "cua mang la " << a[i] << endl;
	}
	return 0;
}*/

//This C++ example program is to generate random numbers in two ranges.
//The first range is from 1 to 6 and the second is from 50 to 100.
// #include<cstdlsit>
//# include<time.h>
/*
int main()
{
	srand(time(NULL));
	int x;
	cout << "nhap x  : ";
	cin >> x;

	int a[23];
	cout << "random of beween " << 1 << "to " << 6 << "is ";
	for(int i=0;i<x;i++)
	{ 
		a[i] = rand() % 6 + 1;
		cout << "phan tu thu " << i + 1 << "la: " << a[i] << endl;
	}
	
	
	return 0;
}*/
// mini test

void sap_xep(int a[100], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}

}
int main()
{
	srand(time(NULL));
	int height[30];
	for (int i = 0; i < 30; i++)
	{
		height[i] = rand() % (190 - 150 + 1) + 150;
		// generate 30 random intergers between 150 and 190
		cout << height[i] << " ";

	}
	for (int i = 0; i < 30; i++)
	{
		if (i % 15 == 0)
			cout << '\n';
		cout << height[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < 30; i++)
	{
		sap_xep(height, 30);
	}
	cout << "the second highest height is " << height[1];
	system("pause");
	return 0;
}