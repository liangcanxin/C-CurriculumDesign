#include "shapeCalculate.h"

int main()
{
    system("mode con cols=60 lines=30");        //固定界面大小
    Shape *pt;          //对象指针，用于实现多态
    Circle circle;
    Cylinder cylinder;
    Rectangle1 rectangle;
    Cube cube;
    Triangle triangle;
    Prism prism;
    b:              //goto实现循环调用
    system("cls");
    int chooseItem;
    while(1)
    {
        mainMenu();
        SET(1);
        cin>>chooseItem;
        switch(chooseItem)
        {
            case 1: pt=&circle;     break;      //对象指针，实现多态
            case 2: pt=&triangle;   break;
            case 3: pt=&rectangle;  break;
            case 4: pt=&cylinder;   break;
            case 5: pt=&prism;      break;
            case 6: pt=&cube;       break;
            case 0: exit(0);        break;
            default: system("cls");
        }
        if(chooseItem>=0&&chooseItem<=6)break;
    }
    a:          //goto实现循环调用
    system("cls");
    SET(4);cout<<"explanation: "<<endl;
    SET(7);cout<<"Here, you are required to set the shape's parameters!"<<endl;
    SET(3);cout<<"the shape you choose is ";
    SET(6);pt->shapeName();cout<<endl<<endl;        //对象指针实现多态
    SET(7);
    pt->shapeSet();     //对象指针实现多态

    SET(1);
    float x ;
    cin >> x;
    float set[5];
    set[0] = x;
    int i=1;
    while (cin.get() != '\n')      //实现输入不确定数目的float类型数
    {
        cin >> x;
        set[i] = x;
        i++;
    }

    SET(4);cout<<endl<<endl<<"calculation: "<<endl;
    SET(7);cout<<"Here is the result!"<<endl;
    SET(6);
    switch(chooseItem)
    {
        case 1:
            circle.setRadius(set[0]);
            cout<<circle<<endl;         //运算符重载
            break;
        case 2:
            triangle.setA(set[0]);
            triangle.setB(set[1]);
            triangle.setC(set[2]);
            cout<<triangle<<endl;
            break;
        case 3:
            rectangle.setL(set[0]);
            rectangle.setW(set[1]);
            cout<<rectangle<<endl;
            break;
        case 4:
            cylinder.setRadius(set[0]);
            cylinder.setHeight(set[1]);
            cout<<cylinder<<endl;
            break;
        case 5:
            prism.setA(set[0]);
            prism.setB(set[1]);
            prism.setC(set[2]);
            prism.setHeight(set[3]);
            cout<<prism<<endl;
            break;
        case 6:
            cube.setL(set[0]);
            cube.setW(set[1]);
            cube.setHeight(set[2]);
            cout<<cube<<endl;
            break;
    }
    SET(7);
    cout<<endl<<"Are you want to reset this shape's parameters again(a) or return to the menu(b)?"
        <<"( answer a or b )"<<endl
        <<"your answer is : ";
    c:          //goto实现循环调用
    SET(1);
    char choose;
    cin>>choose;
    if(choose == 'a')   goto a;
    else if(choose == 'b')  goto b;
    else
    {
        SET(4);
        cout<<"ERROR: your answer is wrong, please repeat!"<<endl;
        SET(7);cout<<"your answer is: ";
        goto c;
    }
    return 0;
}
