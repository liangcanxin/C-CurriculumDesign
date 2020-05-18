#include "shapeCalculate.h"

int main()
{
    system("mode con cols=60 lines=30");        //�̶������С
    Shape *pt;          //����ָ�룬����ʵ�ֶ�̬
    Circle circle;
    Cylinder cylinder;
    Rectangle1 rectangle;
    Cube cube;
    Triangle triangle;
    Prism prism;
    b:              //gotoʵ��ѭ������
    system("cls");
    int chooseItem;
    while(1)
    {
        mainMenu();
        SET(1);
        cin>>chooseItem;
        switch(chooseItem)
        {
            case 1: pt=&circle;     break;      //����ָ�룬ʵ�ֶ�̬
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
    a:          //gotoʵ��ѭ������
    system("cls");
    SET(4);cout<<"explanation: "<<endl;
    SET(7);cout<<"Here, you are required to set the shape's parameters!"<<endl;
    SET(3);cout<<"the shape you choose is ";
    SET(6);pt->shapeName();cout<<endl<<endl;        //����ָ��ʵ�ֶ�̬
    SET(7);
    pt->shapeSet();     //����ָ��ʵ�ֶ�̬

    SET(1);
    float x ;
    cin >> x;
    float set[5];
    set[0] = x;
    int i=1;
    while (cin.get() != '\n')      //ʵ�����벻ȷ����Ŀ��float������
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
            cout<<circle<<endl;         //���������
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
    c:          //gotoʵ��ѭ������
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
