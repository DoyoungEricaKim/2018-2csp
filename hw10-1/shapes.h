#pragma once

class Shape {
    public:
        Shape(double width, double height);
        double _width;
        double _height;
        virtual double getArea() = 0;
};

class Triangle: public Shape {
    public:
        Triangle(double width, double height);
        virtual double getArea();
};

class Rectangle: public Shape {
    public:
        Rectangle(double width, double height);
        virtual double getArea();
};
