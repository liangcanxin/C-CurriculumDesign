#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
#include "Shape.h"
using namespace std;

class Rectangle1:public Shape
{
    public:
        Rectangle1(float l=0, float w=0);    //�������캯��
        void setL(float);                      //�趨��
        void setW(float);                      //�趨��
        float getL() const ;                    //ȡ����ֵ
        float getW() const ;
        virtual float perimeter() const;            //���麯�������ٶ���
        virtual float area() const;                 //���麯�������ٶ���
        virtual void shapeName() const              //���麯�������ٶ���
        {
            cout<<"Rectangle";
        }
        virtual void shapeSet() const           //�麯���������ͼ�β���˵��
        {
            cout<<"please input the rectangle's long and wide( parameter separated by space ):";
        }
        friend ostream &operator<< (ostream &, const Rectangle1 &);//���������

    protected:
        float longs;
        float wide;
};
Rectangle1::Rectangle1(float l, float w):longs(l),wide(w){}   //���ù��캯������

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
