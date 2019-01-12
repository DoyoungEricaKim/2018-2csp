#include <iostream>
#include <string>
#include <vector>
#include "draw_shape.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    size_t row, col;
    cin >> col >> row;
    Canvas canvas(row, col);
    canvas.Print();
    
    while(true) {
        string tok;
        cin >> tok;
        if (tok == "add") {
            string type;
            cin >> type;
            if (type == "rect") {
                int x, y, w, h;
                char b;
                cin >> x >> y >> w >> h >> b;
                Rectangle r(x, y, w, h, b, type);
                shapes.push_back(new Rectangle(x, y, w, h, b, type));
            }
            else if (type == "tri_up") {
                int x, y, h;
                char b;
                cin >> x >> y >> h >> b;
                UpTriangle up(x, y, h, b, type);
                shapes.push_back(new UpTriangle(x, y, h, b, type));
            }
            else if (type == "tri_down") {
                int x, y, h;
                char b;
                cin >> x >> y >> h >> b;
                DownTriangle(x, y, h, b, type);
                shapes.push_back(new DownTriangle(x, y, h, b, type));
            }
            else if (type == "diamond") {
                int x, y, h;
                char b;
                cin >> x >> y >> h >> b;
                shapes.push_back(new Diamond(x, y, h, b, type));
            }
            else continue;
        }
        else if (tok == "draw") {
            canvas.Clear();
            for (int i = 0; i < shapes.size(); ++i)
                shapes[i]->Draw(&canvas);
            canvas.Print();
        }
        else if (tok == "delete") {
            int index;
            cin >> index;
            if(index <= shapes.size()){ 
                shapes.erase(shapes.begin() + index);
            }

        }
        else if (tok == "dump") {
            for(int i = 0; i < shapes.size(); ++i) {
                    cout << i << " ";
                    shapes[i]->Dump();
            }
        }
        else if (tok == "resize") {
            int row, col;
            cin >> col >> row;
            canvas.Resize(row, col);
        }
        else {
            break;
        }
    }
    for (int i = 0; i < shapes.size(); ++i)
        delete shapes[i];
    shapes.clear();
    
    return 0;
}
