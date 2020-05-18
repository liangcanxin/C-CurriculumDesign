#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED


class Shape                                 //抽象类，指代有一定形状的立体或平面物体
{
    public:
        virtual float perimeter() const     //虚函数，用于计算shape周长
        {
            return 0.0;
        }
        virtual float area() const          //虚函数，用于计算shape面积
        {
            return 0.0;
        }
        virtual float volume() const        //虚函数，用于计算shape体积
        {
            return 0.0;
        }
        virtual void shapeName() const=0;   //纯虚函数，输出图形名称
        virtual void shapeSet() const=0;    //纯虚函数，输出图形说明
};


#endif // SHAPE_H_INCLUDED
