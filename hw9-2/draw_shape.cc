#include <iostream>
#include "draw_shape.h"
#include <string>
using namespace std;

Canvas::Canvas(size_t row, size_t col) {
   _row = row;
   _col = col;
   _canvas = new char*[_col + 1];
   for(int i = 0; i < _col+ 1; ++i)
       _canvas[i] = new char[_row + 1];
   _canvas[0][0] = ' ';
   for(int j = 1; j <= _col; ++j) {
       for(int k = 1; k <= _row; ++k) {
           _canvas[j][0] = ((j-1)%10 + '0');
           _canvas[0][k] = ((k-1)%10 + '0');
           _canvas[j][k] = '.';
       }
    }
}

void Canvas::Print() {
    for(int i = 0; i <= _col; ++i) {
        for(int j = 0; j <= _row; ++j) {
            cout << _canvas[i][j];
        }
        cout << endl;
    }
}

Canvas::~Canvas() {}

void Canvas::Resize(size_t w, size_t h) {
    _row = w;
    _col = h;
    _canvas = new char*[_col + 1];
    for(int i = 0; i < _col + 1; ++i)
        _canvas[i] = new char[_row + 1];
    _canvas[0][0] = ' ';
    for(int j = 1; j <= _col; ++j) {
       for(int k = 1; k <= _row; ++k) {
           _canvas[j][0] = ((j-1)%10 + '0');
           _canvas[0][k] = ((k-1)%10 + '0');
           _canvas[j][k] = '.';
       }
    }
}

bool Canvas::DrawPixel(int x, int y, char brush) {
    return true;
}

void Canvas::Clear() {
    for(int j = 1; j <= _col; ++j) {
        for(int k = 1; k <= _row; ++k) {
           _canvas[j][0] = ((j-1)%10 + '0');
           _canvas[0][k] = ((k-1)%10 + '0');
           _canvas[j][k] = '.';
        }
    }
}

Shape::Shape(int x, int y, char b, string type) {
    _x = x;
    _y = y;
    _brush = b;
    _type = type;
}

void Shape::Draw(Canvas* canvas) {
    cout << "shape::draw" << endl;
    if(_x + 1 < (canvas->_row) && _y + 1 < (canvas->_col)) {
        for(int i = _y + 1; i < _y + 1; ++i) {
            for(int j = _x + 1; j < _x + 1; ++j) {
                canvas->_canvas[i][j] = _brush;
            }
        }
    }
    else {
        for(int i = _y + 1; i <= (canvas->_col); ++i) {
            for(int j = _x + 1; j <= (canvas->_row); ++j) {
                canvas->_canvas[i][j] = _brush;
            }
        }
    }
}

void Shape::clear() {
}

void Shape::Dump(){
}

Rectangle::Rectangle(int x, int y, int width, int height, char b, string type):Shape(x, y, b, type) {
    _width = width;
    _height = height;
}

void Rectangle::Draw(Canvas* canvas) {
    if(_x + _width + 1 < (canvas->_row) && _y + _height + 1 < (canvas->_col)) {
        for(int i = _y + 1; i < _y + _height + 1; ++i) {
            for(int j = _x + 1; j < _x + _width + 1; ++j) {
                canvas->_canvas[i][j] = _brush;
            }
        }
    }
    else if(_x + _width + 1 < (canvas->_row) && _y + _height + 1 >= (canvas->_col)) {
        for(int i = _y + 1; i <= (canvas->_col); ++i) {
            for(int j = _x + 1; j < _x + _width + 1; ++j) {
                canvas->_canvas[i][j] = _brush;
            }
        }
    }
    else if(_x + _width + 1 >= (canvas->_row) && _y + _height + 1 < (canvas->_col)) {
        for(int i = _y + 1; i < _y + _height + 1; ++i) {
            for(int j = _x + 1; j <= (canvas->_row); ++j) {
                canvas->_canvas[i][j] = _brush;
            }
        }
    }
    else {
        for(int i = _y + 1; i <= (canvas->_col); ++i) {
            for(int j = _x + 1; j <= (canvas->_row); ++j) {
                canvas->_canvas[i][j] =_brush;
            }
        }
    }
}

void Rectangle::Dump() {
    cout << _type << " " << Shape::_x << " " << Shape::_y << " " << _width << " " << _height << " " << Shape:: _brush << endl;
}

UpTriangle::UpTriangle(int x, int y, int height, char b, string type):Shape(x, y, b, type) {
    _height = height;
}

void UpTriangle::Dump() {
    cout << _type << " " << Shape::_x << " " << Shape::_y << " " << _height << " " << Shape:: _brush << endl;
}

void UpTriangle::Draw(Canvas* canvas) {
    int space;
    for(int i = 1, k = 0; i <= _height; ++i, k = 0) {
        for(space = 1; space <= _height - i; ++space) {
        }
        while(k < 2*i-1) {
            if(i+_y>=canvas->_col && space+k+_x-_height+1 < canvas->_row) {
                for(int X = i+_y; X <= canvas->_col; ++X) {
                    canvas->_canvas[X][space+k+_x-_height+1] = _brush;
                }
            }
            if(i+_y < canvas->_col && space+k+_x-_height+1 >= canvas->_row) {
                for(int Y = space+k+_x-_height+1; Y <= canvas->_row; ++Y) {
                    canvas->_canvas[i+_y][Y] = _brush;
                }
            }

            if(i+_y == canvas->_col && space+k+_x-_height+1 == canvas->_row) {
                for(int X = i+_y; X <= canvas->_col; ++X) {
                    for(int Y = space+k+_x-_height+1; Y <= canvas->_row; ++Y) {
                        canvas->_canvas[X][Y] = _brush;
                    }
                }
            }
            if(i+_y > canvas->_col && space+k+_x-_height+1 > canvas->_row) {
                break;
            }
            if(i+_y < canvas->_col &&  space+k+_x-_height+1 < canvas->_row) {
                canvas->_canvas[i+_y][space+k+_x-_height+1] = _brush;
            }
            k++;
        }
    }
}


DownTriangle::DownTriangle(int x, int y, int height, char b, string type):Shape(x, y, b, type) {
    _height = height;
}

void DownTriangle::Dump() {
    cout << _type << " " << Shape::_x << " " << Shape::_y << " " << _height << " " << Shape:: _brush << endl;
}

void DownTriangle::Draw(Canvas* canvas) {
    int space;
    for(int i = _height, k = 0, j=0, l = 0; i >= 1; i--, k = 0, j++, l++) {
        for(space = i; space < _height; space++) {
        }
        while(k < 2*i-1) {
            if(j+_y-(_height-2)>=canvas->_col && k+l-(_height-2)+_x< canvas->_row) {
                for(int X = j+_y-(_height-2); X <= canvas->_col; ++X) {
                    canvas->_canvas[X][k+l-(_height-2)+_x] = _brush;
                }
            }
            if(j+_y-(_height-2) < canvas->_col && k+l-(_height-2)+_x >= canvas->_row) {
                for(int Y = k+l-(_height-2)+_x; Y <= canvas->_row; ++Y) {
                    canvas->_canvas[j+_y-(_height-2)][Y] = _brush;
                }
            }

            if(j+_y-(_height-2) > canvas->_col && k+l-(_height-2)+_x > canvas->_row) {
                break;
            }
            if(j+_y-(_height-2)< canvas->_col && k+l-(_height-2)+_x < canvas->_row && j+_y-(_height-2) > 0 && k+l-(_height-2)+_x > 0) {
                canvas->_canvas[j+_y-(_height-2)][k+l-(_height-2)+_x] = _brush;
            }
            k++;
        }
    }
}


Diamond::Diamond(int x, int y, int height, char b, string type):Shape(x, y, b, type) {
    _height = height;
}

void Diamond::Dump() {
    cout << _type << " " << Shape::_x << " " << Shape::_y << " " << _height << " " << Shape:: _brush << endl;
}

void Diamond::Draw(Canvas* canvas) {
    int space, space2, midx, midy;    
    for(int i = 1, k = 0; i <= _height; ++i, k = 0) {
        for(space = 1; space <= _height - i; ++space) {
        }
        while(k < 2*i-1) {
            if(i+_y>=canvas->_col && space+k+_x-_height+1 < canvas->_row) {
                for(int X = i+_y; X <= canvas->_col; ++X) {
                    canvas->_canvas[X][space+k+_x-_height+1] = _brush;
                }
            }
            if(i+_y < canvas->_col && space+k+_x-_height+1 >= canvas->_row) {
                for(int Y = space+k+_x-_height+1; Y <= canvas->_row; ++Y) {
                    canvas->_canvas[i+_y][Y] = _brush;
                }
            }

            if(i+_y == canvas->_col && space+k+_x-_height+1 == canvas->_row) {
                for(int X = i+_y; X <= canvas->_col; ++X) {
                    for(int Y = space+k+_x-_height+1; Y <= canvas->_row; ++Y) {
                        canvas->_canvas[X][Y] = _brush;
                    }
                }
            }
            if(i+_y > canvas->_col && space+k+_x-_height+1 > canvas->_row) {
                break;
            }
            if(i+_y < canvas->_col &&  space+k+_x-_height+1 < canvas->_row) {
                canvas->_canvas[i+_y][space+k+_x-_height+1] = _brush;
            }
            midx = i+_y;
            midy = space+k+_x-_height+1; 
            k++;
        }

    }
    for(int i = midy-2*_height+1; i <= midy+1; i++) {
        if(i > 0 && i <= canvas->_row && midx+1 <= canvas->_col)
            canvas->_canvas[midx+1][i] = _brush;
    }
    for(int i = _height, k = 0, j=0, l = 0; i >= 1; i--, k = 0, j++, l++) {
        //for(space2 = i; space2 < _height; space2++) {
        //}
        while(k < 2*i-1) {
            if(j+_y-(_height-2)+ 2*_height>=canvas->_col && k+l-(_height-2)+_x< canvas->_row) {
                for(int X = j+_y-(_height-2)+ 2*_height; X <= canvas->_col; ++X) {
                    canvas->_canvas[X][k+l-(_height-2)+_x] = _brush;
                }
            }
            if(j+_y-(_height-2) + 2*_height< canvas->_col && k+l-(_height-2)+_x >= canvas->_row) {
                for(int Y = k+l-(_height-2)+_x; Y <= canvas->_row; ++Y) {
                    canvas->_canvas[j+_y-(_height-2)+ 2*_height][Y] = _brush;
                }
            }

            if(j+_y-(_height-2) + 2*_height> canvas->_col && k+l-(_height-2)+_x > canvas->_row) {
                break;
            }
            if(j+_y-(_height-2)+ 2*_height< canvas->_col && k+l-(_height-2)+_x < canvas->_row && j+_y-(_height-2) > 0 && k+l-(_height-2)+_x) {
                canvas->_canvas[j+_y-(_height-2)+ 2*_height][k+l-(_height-2)+_x] = _brush;
            }
            k++;
        }
    }
}
