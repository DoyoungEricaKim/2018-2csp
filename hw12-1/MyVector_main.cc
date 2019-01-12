#include <iostream>
#include "MyContainer.h"
#include <algorithm>
using namespace std;

template<typename T>
class MyVector: public MyContainer<T> {
    public:
        MyVector();
        MyVector(int n);
        MyVector(T* arr, int size);
        bool empty();
        int size();
        int max_size();
        void reserve(int new_cap);
        void push_back(T obj);
        void pop_back();
        T& front();
        T& back();
        T& at(int idx);
        T& operator[](const int &i);
        MyVector<T> operator+(const MyVector<T>& rhs);
    private:
        int capacity;
};

template<typename T>MyVector<T>::MyVector():MyContainer<T>() {
    capacity = this->n_elements;
}

template<typename T>MyVector<T>::MyVector(int n):MyContainer<T>(n){
    capacity = this->n_elements;
}

template<typename T>MyVector<T>::MyVector(T* arr, int size):MyContainer<T>(arr, size) {
    capacity = this->n_elements;
}

template<typename T>bool MyVector<T>::empty() {
    if(this->n_elements == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

template<typename T>int MyVector<T>::size() {
    int size = MyContainer<T>::size();
    return size;
}

template<typename T>int MyVector<T>::max_size() {
    return capacity;
}

template<typename T>void MyVector<T>::reserve(int new_cap) {
    for(int i = 0; i <= new_cap; i++) {
        capacity++;
    }
}

template<typename T>void MyVector<T>::push_back(T obj) {
    if(MyContainer<T>::n_elements <= capacity) {
        int tmp = capacity;
        capacity = max(1, 2*capacity);
        T* new_arr = new T[capacity];
        for(int i = 0; i < tmp; i++) {
            new_arr[i] = this->obj_arr[i];
        }
        this->obj_arr = new T[capacity];
        new_arr[this->n_elements] = obj;
        for(int i = 0; i < capacity; i++) {
            this->obj_arr[i] = new_arr[i];
        }
        (this->n_elements)++;
    }    
}

template<typename T>void MyVector<T>::pop_back() {
    this->obj_arr[(this->n_elements)-1] = NULL;
    (this->n_elements)--;
}

template<typename T>T& MyVector<T>::front() {
    return this->obj_arr[0];
}

template<typename T>T& MyVector<T>::back() {
    return this->obj_arr[(this->n_elements)-1];
}

template<typename T>T& MyVector<T>::at(int idx){
    if(idx < this->n_elements) {
        return this->obj_arr[idx];
    }
}

template<typename T>T& MyVector<T>::operator[](const int &i) {
    return this->obj_arr[i];   
}

template<typename T>MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs){
    int numelement = this->n_elements + rhs.n_elements;
    MyVector<T> newvec(numelement);
    for(int i = 0; i < this->n_elements; i++) {
       newvec[i] = this->obj_arr[i];
    }
    for(int i = this->n_elements; i < numelement; i++) {
        newvec[i] = rhs.obj_arr[i-(this->n_elements)];
    }
    return newvec;
}

int main() {
    MyVector<int> myvec1;
    myvec1.push_back(0);
    cout << myvec1.size() << endl;
    cout << myvec1.max_size() << endl;

    int arr[] = {1, 2, 3, 4, 5};
    MyVector<int> myvec2(arr, 5);
    cout << myvec2.size() << endl;
    cout << myvec2.max_size() << endl;
    myvec2.push_back(5);
    cout << myvec2.size() << endl;
    cout << myvec2.max_size() << endl;
    
    for(int n = 0; n < myvec2.size(); n++) 
        cout << myvec2[n] << " ";
    cout << endl;

    myvec2.back() = 6;
    for(int n = 0; n < myvec2.size(); n++)
        cout << myvec2.at(n) << " ";
    cout << endl;
    MyVector<int> myvec3 = myvec1 + myvec2;
    for(int n = 0; n < myvec3.size(); n++)
        cout << myvec3.at(n) << " ";
    cout << endl;

    return 1;
}
