#pragma once

class Shape{
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
        virtual std::string getTypeString() = 0;
};

class Circle: public Shape{
    public:
        Circle(double radius);
        virtual double getArea();
        virtual double getPerimeter();
        virtual std::string getTypeString();
    private:
        double _radius;
};

class Rectangle: public Shape{
    public:
        Rectangle(double width, double height);
        virtual double getArea();
        virtual double getPerimeter();
        virtual std::string getTypeString();
    private:
        double _width, _height;
};

