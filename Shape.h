#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED


class Shape                                 //�����ָ࣬����һ����״�������ƽ������
{
    public:
        virtual float perimeter() const     //�麯�������ڼ���shape�ܳ�
        {
            return 0.0;
        }
        virtual float area() const          //�麯�������ڼ���shape���
        {
            return 0.0;
        }
        virtual float volume() const        //�麯�������ڼ���shape���
        {
            return 0.0;
        }
        virtual void shapeName() const=0;   //���麯�������ͼ������
        virtual void shapeSet() const=0;    //���麯�������ͼ��˵��
};


#endif // SHAPE_H_INCLUDED
