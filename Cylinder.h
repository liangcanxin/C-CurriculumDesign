#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED
#include <iostream>
#include "Shape.h"
#include "Circle.h"
using namespace std;

class Cylinder:public Circle
{
    public:
        Cylinder(float r=0,float h=0);      //���幹�캯��
        void setHeight(float);                                  //�趨Բ����
        virtual float area() const;                             //�����麯��
        virtual float volume() const;                           //�����麯��
        virtual void shapeName() const {cout<<"Cylinder";}     //�����麯��
        virtual void shapeSet() const       //�麯�������������
        {
            cout<<"please input the cylinder's bottom figure's radius and its length ( parameter separated by space ):";
        }
        friend ostream& operator<< (ostream&, const Cylinder&); //���������
    protected:
        float height;
    private:
};
Cylinder::Cylinder(float r, float h)
    :Circle(r),height(h){}

void Cylinder::setHeight(float h){height=h;}

float Cylinder::area() const
{
    return 2*Circle::area()+2*3.14159*radius*height;
}

float Cylinder::volume() const
{
    return Circle::area()*height;
}

ostream &operator<<(ostream &output, const Cylinder& cy)
{
    output<<"its area is "<<cy.area()<<endl
        <<"its volume is "<<cy.volume();
    return output;
}



#endif // CYLINDER_H_INCLUDED
