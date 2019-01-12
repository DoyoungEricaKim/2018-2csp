#pragma once
#include <string>
using namespace std;

class Canvas {
    public:
        Canvas(size_t row, size_t col);
        ~Canvas();
        void Resize(size_t w, size_t h);
        bool DrawPixel(int x, int y, char brush);
        void Print();
        void Clear();
        char** _canvas;
        size_t _row, _col;
};

class Shape {
    public:
        Shape(int x, int y, char b, string t);
        virtual ~Shape(){};
        virtual void Draw(Canvas* canvas);
        virtual void clear();
        virtual void Dump();
        string _type;
    protected:
        int _x, _y;
        char _brush;
};

class Rectangle: public Shape {
    public:
        Rectangle(int x, int y, int width, int height, char b, string type);
        void Draw(Canvas* canvas);
        void Dump();
    protected:
        int _width, _height;
};

class UpTriangle: public Shape {
    public:
        UpTriangle(int x, int y, int height, char b, string type);
        void Draw(Canvas* canvas);
        void Dump();
    protected:
        int _height;
};

class DownTriangle: public Shape {
    public:
        DownTriangle(int x, int y, int height, char b, string type);
        void Draw(Canvas* canvas);
        void Dump();
    protected:
        int _height;
};

class Diamond: public Shape {
    public:
        Diamond(int x, int y, int height, char b, string type);
        void Draw(Canvas* canvas);
        void Dump();
    protected:
        int _height;
};

