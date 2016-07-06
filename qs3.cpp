/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Design a program that finds all numbers from 1 to 1000 whose prime factors, when added
               together, sum up to a prime number (for example, 12 has prime factors of 2, 2, and 3, which
               sum to 7, which is prime). Implement the code for that algorithm.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "math.h"

bool prime (int p)
{
	int s = p;
	for (int i=2; i<=(double)(p/2); i++)
	{
		if(p%i ==0)
		{
			return 0;
			p=p/i;
		}
	}
	if (p==s)
	{
		return 1;
	}
}
int prime_factors(int n)
{
	int pf1;
	int sum =0;
		while (n%2 == 0)
		{
			pf1 = 2;
			sum = sum + pf1;
			n=n/2;
		}

		for (int i=3; i<=sqrt((double)(n)); i=i+2)
		{
			while (n%i==0)
			{
			pf1 = i;
			sum = sum +pf1;
			n=n/i;
			}
		}
		
		if (n>2)
		{
			pf1 = n;
			sum = sum + pf1;
		}

		if (prime(sum))
		{
			return 1;
		}
		else return 0;
}
int main()
{
	int no;
for ( no=1; no<=1000; no++)
{
	bool foo = prime_factors(no);
	if (foo)
	{
		cout<<"sum of "<<no<<"is prime"<<endl;
	}
}
system ("pause");
return 0;
}

