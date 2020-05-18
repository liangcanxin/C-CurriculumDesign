#ifndef SHAPECALCULATE_H_INCLUDED
#define SHAPECALCULATE_H_INCLUDED

#include <iostream>
#include <Windows.h>
#include "Shape.h"
#include "Circle.h"
#include "Cylinder.h"
#include "Rectangle.h"
#include "Cube.h"
#include "Triangle.h"
#include "Prism.h"

using namespace std;

#define SET(X) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | X);    //Êä³ö×ÖÌåÑÕÉ«¿ØÖÆ

void gotoxy(int x, int y)       //光标定位函数
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mainMenu()         //菜单界面
{
    SET(4);cout<<"explanation: "<<endl;
    SET(7);cout<<"     the program is to calculate different types of shape's"<<endl
        <<"area, perimeter and even volume. But before doing these, you"
        <<"are required to choose the type of shape first, then set itsparameters"<<endl
        <<endl;
    SET(3);cout<<"Here is the menu!";
    SET(7);gotoxy(25,8);cout<<"--MENU--"<<endl;
    gotoxy(15,10);cout<<"--two-dimensional picture--"<<endl;
    gotoxy(24,12);cout<<"1. circle"<<endl;
    gotoxy(24,13);cout<<"2. triangle"<<endl;
    gotoxy(24,14);cout<<"3. rectangle"<<endl;
    gotoxy(15,16);cout<<"--three-dimensional picture--"<<endl;
    gotoxy(24,18);cout<<"4. cylinder"<<endl;
    gotoxy(24,19);cout<<"5. triangular prism"<<endl;
    gotoxy(24,20);cout<<"6. cube"<<endl<<endl;
    gotoxy(24,22);cout<<"0. exit"<<endl;
    SET(3);gotoxy(0,25);cout<<"please select the shape by its ";
    SET(6);cout<<"number";SET(3);cout<<" : ";
}

#endif // SHAPECALCULATE_H_INCLUDED
