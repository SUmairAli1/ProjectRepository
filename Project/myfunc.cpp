#include<iostream>
#include<conio.h>
#include<windows.h>
void gotoxy( int column, int line ){
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
void clrscr()
{
     system("cls");
}
void pause()
{
     system("pause");
}
