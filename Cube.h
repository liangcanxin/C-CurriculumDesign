#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
using namespace std;

class Cube:public Rectangle1
{
    public:
        Cube(float l=0,float w=0,float h=0);      //���幹�캯��
        void setHeight(float);                                  //�趨Բ����
        virtual float area() const;                             //�����麯��
        virtual float volume() const;                           //�����麯��
        virtual void shapeName() const {cout<<"Cube";}     //�����麯��
        virtual void shapeSet() const             //�麯���������ͼ�β���˵��
        {
            cout<<"please input the cube's bottom figure's long and wide and the its length ( parameter separated by space ):";
        }
        friend ostream& operator<< (ostream&, const Cube&); //���������
    protected:
        float height;
    private:
};
Cube::Cube(float a, float b, float h)
    :Rectangle1(a,b),height(h){}

void Cube::setHeight(float h){height=h;}

float Cube::area() const
{
    return 2*(longs*wide+longs*height+wide*height);
}

float Cube::volume() const
{
    return Rectangle1::area()*height;
}

ostream &operator<<(ostream &output, const Cube& cu)
{
    output<<"its area is "<<cu.area()<<endl
        <<"its volume is "<<cu.volume();
    return output;
}



#endif // CUBE_H_INCLUDED
