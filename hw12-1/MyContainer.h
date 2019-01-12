#include<iostream>
using namespace std;

template<typename T>
class MyContainer {
    public:
        MyContainer();
        MyContainer(int n);
        MyContainer(T* arr, int n);
        ~MyContainer();
        void clear();
        int size();
    protected:
        T* obj_arr = NULL;
        int n_elements;
};

template<typename T>MyContainer<T>::MyContainer() {
    obj_arr = NULL;
    n_elements = 0;
}

template<typename T>MyContainer<T>::MyContainer(int n) {
    obj_arr = new T[n];
    n_elements = n;
}


template<typename T>MyContainer<T>::MyContainer(T* arr, int n) {
    obj_arr = arr;
    n_elements = n;
}

template<typename T>MyContainer<T>::~MyContainer() {
    delete[] obj_arr;
}

template<typename T>void MyContainer<T>::clear() {
    ~MyContainer();
    n_elements = 0;
}

template<typename T>int MyContainer<T>::size() {
    return n_elements;
}
