#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include <iostream>
#include <cmath>
#include "Shape.h"
using namespace std;

class Triangle : public Shape
{
    public:
        Triangle(float a=0, float b=0, float c=0);      //�������캯��
        void setA(float);                   //���������ε�����A��B��C
        void setB(float);
        void setC(float);
        float getA() const;                 //��ȡ�����ε�����
        float getB() const;
        float getC() const;
        virtual float perimeter() const;    //�麯���������ܳ�
        virtual float area() const;         //�麯�����������
        virtual void shapeName() const      //�麯�������������
        {
            cout<<"Triangle";
        }
        virtual void shapeSet() const       //�麯���������ͼ�β���˵��
        {
            cout<<"please input the triangle's three side length( parameter separated by space ):";
        }
        friend ostream &operator<< (ostream &,const Triangle &);//���������
    protected:
        float A,B,C;
    private:
};
Triangle::Triangle(float x,float y,float z):A(x),B(y),C(z){}

void Triangle::setA(float a)
{
    A=a;
}

void Triangle::setB(float b)
{
    B=b;
}

void Triangle::setC(float c)
{
    C=c;
}

float Triangle::getA() const {return A;}

float Triangle::getB() const {return B;}

float Triangle::getC() const {return C;}

float Triangle::perimeter() const {return A+B+C;}

float Triangle::area() const    //���ú��׹�ʽ�����������
{
    float p=(A+B+C)/2;
    return sqrt(p*(p-A)*(p-B)*(p-C));
}

ostream &operator<< (ostream &output, const Triangle &t)
{
    output<<"its area is "<<t.area()<<endl
        <<"its perimeter is "<<t.perimeter();
    return output;
}

#endif // TRIANGLE_H_INCLUDED
