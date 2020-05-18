#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle:public Shape
{
    public:
        Circle(float r=0);    //声明构造函数
        void setRadius(float);                      //设定半径
        float getRadius() const;                    //取半径的值
        virtual float perimeter() const;            //对虚函数进行再定义
        virtual float area() const;                 //对虚函数进行再定义
        virtual void shapeName() const              //对虚函数进行再定义
        {
            cout<<"Circle";
        }
        virtual void shapeSet() const               //虚函数用于输出名称
        {
            cout<<"please input the circle's radius:";
        }
        friend ostream &operator<< (ostream &, const Circle &);//运算符重载
    protected:
        float radius;
    private:
};
Circle::Circle(float r):radius(r){}    //采用构造函数表定义

void Circle::setRadius(float r)
{
    radius=r;
}

float Circle::getRadius() const {return radius;}

float Circle::perimeter() const {return 2*3.14159*radius;}

float Circle::area() const {return 3.14159*radius*radius;}

ostream &operator<< (ostream &output, const Circle &c)
{
    output<<"its area is "<<c.area()<<endl
        <<"its perimeter is "<<c.perimeter();
    return output;
}



#endif // CIRCLE_H_INCLUDED
