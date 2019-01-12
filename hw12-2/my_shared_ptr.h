#include <iostream>
using namespace std;

template <class T>
class My_shared_ptr
{
    private:
        T* m_obj = NULL;
        int* count = NULL;
    public:
        My_shared_ptr() {
            m_obj = NULL;
            count = NULL; 
        }
        My_shared_ptr(T* obj) {
            m_obj = obj;
            count = obj;
            *count = 1;
        }
        My_shared_ptr(const My_shared_ptr& rhs) {
            m_obj = rhs.m_obj;
            *count = rhs->count;
            count = rhs.count;
        }
        ~My_shared_ptr() {
            if(getCount() == 0) cout << "everything destroyed";
            else{
                m_obj = NULL;
                decrease();
                if(getCount() == 0) cout << "everything destroyed";
            }
        }
        My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs)
        {
            if(count == NULL) {
                m_obj = rhs.m_obj; 
                count = rhs.count;
                increase();
            }
            else {
                *count = *count + *(rhs.count);
            }
            
            return *this;
        }
        const T* get_m_obj() { return m_obj; }

        int getCount() {
            if(count == nullptr)
                return 0;
            else {
                return *count; 
            }
        }
        void increase() { (*count)++; }
        void decrease() { (*count)--; }
};

