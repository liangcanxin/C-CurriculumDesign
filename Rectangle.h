#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
#include "Shape.h"
using namespace std;

class Rectangle1:public Shape
{
    public:
        Rectangle1(float l=0, float w=0);    //声明构造函数
        void setL(float);                      //设定长
        void setW(float);                      //设定宽
        float getL() const ;                    //取长的值
        float getW() const ;
        virtual float perimeter() const;            //对虚函数进行再定义
        virtual float area() const;                 //对虚函数进行再定义
        virtual void shapeName() const              //对虚函数进行再定义
        {
            cout<<"Rectangle";
        }
        virtual void shapeSet() const           //虚函数用于输出图形参数说明
        {
            cout<<"please input the rectangle's long and wide( parameter separated by space ):";
        }
        friend ostream &operator<< (ostream &, const Rectangle1 &);//运算符重载

    protected:
        float longs;
        float wide;
};
Rectangle1::Rectangle1(float l, float w):longs(l),wide(w){}   //采用构造函数表定义

void Rectangle1::setL(float l)
{
    longs = l;
}

void Rectangle1::setW(float w)
{
    wide = w;
}

float Rectangle1::getL() const {return longs;}

float Rectangle1::getW() const {return wide;}

float Rectangle1::perimeter() const {return 2*(longs+wide);}

float Rectangle1::area() const {return longs*wide;}

ostream &operator<< (ostream &output, Rectangle1 &re)
{
    output<<"its area is "<<re.area()<<endl
        <<"its perimeter is "<<re.perimeter();
    return output;
}




#endif // RECTANGLE_H_INCLUDED
