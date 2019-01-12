#pragma once
class Shape {
    public:
        Shape();
        Shape(int width, int height);

        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
        void Print();

    protected:
        double _width;
        double _height;
};

class Square: public Shape {
    public:
        Square(int width, int height);
        void Draw(int canvasx, int canvasy, int x, int y, int l, char shape);
};

class Rectangle: public Shape {
    public:
        Rectangle(int width, int height);
        void Draw(int canvasx, int canvasy, int x, int y, int h, int w, char shape);
};

class Diamond: public Shape {
    public:
        Diamond(int width, int height);
        double GetArea();
        int GetPerimeter();
        void Print();
        void Draw(int canvasx, int canvasy, int x, int y, int l, int shape);
};
