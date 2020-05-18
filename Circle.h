#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle:public Shape
{
    public:
        Circle(float r=0);    //�������캯��
        void setRadius(float);                      //�趨�뾶
        float getRadius() const;                    //ȡ�뾶��ֵ
        virtual float perimeter() const;            //���麯�������ٶ���
        virtual float area() const;                 //���麯�������ٶ���
        virtual void shapeName() const              //���麯�������ٶ���
        {
            cout<<"Circle";
        }
        virtual void shapeSet() const               //�麯�������������
        {
            cout<<"please input the circle's radius:";
        }
        friend ostream &operator<< (ostream &, const Circle &);//���������
    protected:
        float radius;
    private:
};
Circle::Circle(float r):radius(r){}    //���ù��캯������

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
