#include <iostream>
#include "linked_list.h"

int main() {
    int array[5] = {12, 7, 9, 21, 13};
    List<int> li(array, 5);
    std::cout << li;

    li.pop_back();
    std::cout << li;

    li.push_back(15);
    std::cout << li;

    li.pop_front();
    std::cout << li;

    li.push_front(8);
    std::cout << li;
    
    li.insert_at(4, 19);
    std::cout << li;

    li.remove_at(1);
    std::cout << li;

    return 0;

}
