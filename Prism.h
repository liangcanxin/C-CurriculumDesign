#ifndef PRISM_H_INCLUDED
#define PRISM_H_INCLUDED
#include <iostream>
#include "Shape.h"
#include "Triangle.h"
using namespace std;

class Prism:public Triangle
{
    public:
        Prism(float a=0,float b=0,float c=0,float h=0);     //声明构造函数
        void setHeight(float);                      //设置参数
        float getHeight() const;                    //获得参数
        virtual float area() const;                 //虚函数用于求面积
        virtual float volume() const;               //虚函数用于求体积
        virtual void shapeName() const {cout<<"triangular prism";}//虚函数用于输出名称
        virtual void shapeSet() const               //虚函数用于输出图形参数说明
        {
            cout<<"please input the triangular prism's bottom figure's four side-lengths parameter ( parameter separated by space ):";
        }
        friend ostream &operator<< (ostream &output, const Prism& pr);  //运算符重载
    protected:
        float height;
};
Prism::Prism(float a,float b,float c,float h)
    :Triangle(a,b,c),height(h){}

void Prism::setHeight(float h){height=h;}

float Prism::getHeight() const {return height;}

float Prism::area() const
{
    return 2*Triangle::area()+Triangle::perimeter()*height;
}

float Prism::volume() const
{
    return Triangle::area()*height;
}

ostream &operator<< (ostream &output, const Prism& pr)
{
    output<<"its area is "<<pr.area()<<endl
        <<"its volume is "<<pr.volume();
    return output;
}

#endif // PRISM_H_INCLUDED
