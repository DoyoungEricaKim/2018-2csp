#include <iostream>
#include "draw_shape.h"
using namespace std;

Shape::Shape(int width, int height) {
    _width = width;
    _height = height;
}

double Shape::GetArea() {
    double a;
    a = _width * _height;
    return a;
}

int Shape::GetPerimeter() {
    double p;
    p = (2*_width) + (2*_height);
    return p;
}

void Shape::Print() {
    int a, p;
    a = GetArea();
    p = GetPerimeter();
    cout << "Area: " << a << endl;
    cout << "Perimeter: " << p << endl;
}

Square::Square(int width, int height):Shape(width, height) {
}

void Square::Draw(int canvasx, int canvasy, int x, int y, int l, char shape) {
    char** canvas = new char*[canvasx+1];
    for(int sk = 0; sk < canvasy+1; ++sk)
        canvas[sk] = new char[canvasy+1];
    canvas[0][0] = ' ';
    for(int i = 1; i <= canvasx; i++) {
        for(int j = 1; j <= canvasy; j++) {
            canvas[i][0] = ((i-1) + '0');
            canvas[0][i] = ((i-1) + '0');
            canvas[i][j] = '.';
        }
    }
    if(x + l + 1 < canvasx + 1) {
        for(int i = y + 1; i < y + l + 1; i++) {
            for(int j = x + 1; j < x + l + 1; j++) {
                canvas[i][j] = shape;
            }
        }
    }
    else {
        for(int i = y + 1; i < canvasy + 1; i++) {
            for(int j = x + 1; j < canvasx + 1; j++) {
                canvas[i][j] = shape;
            }
        }
    }
    for(int i = 0; i <= canvasx; i++) {
        for(int j = 0; j <= canvasy; j++) {
            cout << canvas[i][j];
        }
        cout << endl;
    }
    delete[] canvas;
}

Rectangle::Rectangle(int width, int height):Shape(width, height) {
}

void Rectangle::Draw(int canvasx, int canvasy, int x, int y, int h, int w, char shape) {
    char** canvas = new char*[canvasx+1];
    for(int k = 0; k < canvasy+1; ++k)
        canvas[k] = new char[canvasy+1];
    canvas[0][0] = ' ';
    for(int i = 1; i <= canvasx; i++) {
        for(int j = 1; j <= canvasy; j++) {
            canvas[i][0] = ((i-1) + '0');
            canvas[0][i] = ((i-1) + '0');
            canvas[i][j] = '.';
        }
    } 
    if(x + h + 1 < canvasx + 1) {
        for(int i = y + 1; i < y + h + 1; i++) {
            for(int j = x + 1; j < x + w + 1; j++) {
                canvas[i][j] = shape;
            }
        }
    }
    else {
        for(int i = y + 1; i < canvasy + 1; i++) {
            for(int j = x + 1; j < canvasx + 1; j++) {
                canvas[i][j] = shape;
            }
        }
    }

    for(int i = 0; i <= canvasx; i++) {
        for(int j = 0; j <= canvasy; j++) {
            cout << canvas[i][j];
        }
        cout << endl;
    }
    delete[] canvas;
}

Diamond::Diamond(int width, int height):Shape(width, height) {
}

double Diamond::GetArea() {
    double a;
    a = (Shape::_width * Shape::_height) / 2;
    return a;
}

int Diamond::GetPerimeter() {
    int p;
    p = 4 * Shape::_height;
    return p;
}

void Diamond::Print() {
    double a;
    int p;
    a = Diamond::GetArea();
    p = Diamond::GetPerimeter();
    cout << "Area: " << a << endl;
    cout << "Perimeter: " << p << endl;
}

void Diamond::Draw(int canvasx, int canvasy, int x, int y, int l, int shape) {
    char** canvas = new char*[canvasx+1];
    for(int k = 0; k < canvasy+1; ++k)
        canvas[k] = new char[canvasy+1];
    canvas[0][0] = ' ';
    for(int i = 1; i <= canvasx; i++) {
        for(int j = 1; j <= canvasy; j++) {
            canvas[i][0] = ((i-1) + '0');
            canvas[0][i] = ((i-1) + '0');
            canvas[i][j] = '.';
        }
    }
    if(y+1+2*l+1>canvasy) {
        for(int i = y + 1; i <= canvasy; i++) {
            canvas[i][x+1] = shape;
        }
    }
    else {
        for(int i = y + 1; i < (y + 1) + 2*l + 1; i++) {
            canvas[i][x+1] = shape;
        }
    }
    if(x+1-l < 2) {
        for(int j = 1; j <= (x + 1) + l; j++) {
            canvas[y+l+1][j] = shape;
        }
    }
    else {
        for(int j = x + 1 - l; j <= (x + 1) + l; j++) {
            canvas[y+l+1][j] = shape;
        }
    }

    for(int i = 0; i <= canvasx; i++) {
        for(int j = 0; j <= canvasy; j++) {
            cout << canvas[i][j];
        }
        cout << endl;
    }
    delete[] canvas;
}
