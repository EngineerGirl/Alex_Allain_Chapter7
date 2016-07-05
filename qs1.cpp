/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Implement the source code that turns numbers into English text.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int no_of_dig(int n)
{
	int count = 0;
	while (n!=0)
	{
		n = n/10; count ++;
	}
	return count;
}

void one_digit(int n)
{
	switch (n)
	{
	case 0: cout << ""; break;
		case 1: cout<< "one \n";break;
			case 2: cout<< "two \n";break;
				case 3: cout<< "three \n";break;
					case 4: cout<< "four \n";break;
						case 5: cout<< "five \n";break;
							case 6: cout<< "six \n";break;
								case 7: cout<< "seven \n"; break;
									case 8: cout<< "eight \n";break;
										case 9: cout<< "nine \n";break;
	}
}



typedef struct
{
	int result;
	int digit;

}blah;

blah find_first_digit(int n)
{
	blah English;
	English.result = n-10;
	int dig = no_of_dig(English.result);
	if (dig==1 || dig == 0) 
	{
		English.digit = 1;
		return English;
	}
	if (dig==2)
	{
		English.result = n -20;
		int dig = no_of_dig(English.result);
		if (dig == 1 || dig==0) 
		{
			English.digit = 2;
		return English;
		}
		else 
		{English.digit = 3;
		return English;}
	}

}

void two_digit(int n)
{
blah English = find_first_digit(n);
	if (English.digit==1)
	{
	switch (n)
	{
		case 10: cout<< "ten \n";break;
			case 11: cout<< "eleven \n";break;
				case 12: cout<< "telve \n";break;
					case 13: cout<< "thirteen \n";break;
						case 14: cout<< "fourteen \n";break;
							case 15: cout<< "fifteen \n";break;
								case 16: cout<< "sixteen \n"; break;
									case 17: cout<< "seventeen \n";break;
										case 18: cout<< "eighteen \n";break;
											case 19: cout<< "nneteen \n";break;
											default: cout << "" ;break;
	}
	}
	if (English.digit==2)
	{
		//int result = n-20;
		cout << "twenty ";
		one_digit(English.result);
	}
	if (English.digit==3)
	{
		//int result = n-30;
		cout << "thirty ";
	one_digit(English.result);
	}
	
}
void turn_eng (int n)
{
int dig;
dig = no_of_dig(n);
if (dig == 1)
one_digit(n);
if (dig==2)
two_digit(n);
}

int main()
{
	
cout<<"Enter a no \n";
int n;
cin>> n;
turn_eng (n);


system("pause");
	return 0;	
}
