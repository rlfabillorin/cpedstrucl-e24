// ESPINAR AND FABILLORIN
#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void strCpy(char *str2, char *str1);
void strCat(char *str1, char *str2);
int strCmp(char *str1, char *str2);
void strRev(char *str1, char *str2);
int main()
{
	char firstM[20];
	char secondM[20];
	char thirdM[20];
	int result, choice=0;
	cout << "Enter 1st message: ";
	gets(firstM);
	cout << "\nEnter 2nd message: ";
	gets(secondM);
		
	result = strCmp(firstM,secondM);
	if(result==0)
	cout << "\nSTRCMP: Equal";
	else
	cout << "\nSTRCMP: NOT Equal";
	strCpy(thirdM,secondM);
	cout << "\nSTRCPY: " << thirdM;
	strCat(firstM,secondM);
	cout<< "\nSTRCAT: "<< firstM;
	strRev(firstM, secondM);
	cout << "\nSTRREV: " << firstM;
	getch();
	return 0;
}

void strCat(char *str1, char *str2)
{	
	while (*str1)
		*str1++;
	while (*str1++ = *str2++);
}
	
void strCpy(char *str1, char *str2)
{
	while(*str1++ = *str2++);
}

int strCmp(char *str1, char *str2)
{
	while(*str1==*str2)
{
	if(*str1=='\0' || *str2=='\0')
	break;
	str1++;
	str2++;
}
	if(*str1=='\0' && *str2=='\0')
	return 0;
	else
	return -1;
}

void strRev(char *str1, char *str2)
{
	char *begMes, *endMes;
	int temp(0);
	begMes = str1;
	endMes = str1;
	int length, i;
	length=strlen(str1);
	for ( i = 0 ; i < (length) - 1  ; i++ )
	endMes++;
	for ( i = 0 ; i < length/2 ; i++ )
	{
    temp = *endMes;
	*endMes = *begMes;
    *begMes = temp;
    begMes++;
    endMes--;
	}
}
