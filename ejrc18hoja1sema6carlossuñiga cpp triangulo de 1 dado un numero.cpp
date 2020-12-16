ejercicio 18
#include <stdio.h>
#include <stdafx.h>
#include <conio.h>
#include <iostream>
using namespace System;
using namespace std;
int main(array<System::String ^> ^args)
{
int linea = 1;
int num = 6,i,j;
for (i = 1; i <= num;i++)
{
cout << linea<<endl;
linea = (linea*10) + (i + 1);
j = i + 1;
}
_getch();
return 0;
}
Ver traducción