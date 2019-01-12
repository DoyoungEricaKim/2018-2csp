template <class T>
class Node {
    public:
        T data;
        Node<T>* next;
};

template <class T>
class List {
    private:
        Node<T> *head;
    public:
        List() : head(NULL) {};
        ~List() {
            while(head) {
                Node<T>* tmp = head;
                head = head->next;
                delete tmp;
            }
        }
        List(T* arr, int n_nodes) {
            Node<T>**tmp = &head;
            for(int i = 0; i < n_nodes; i++) {
                Node<T>* node = new Node<T>;
                node->data = arr[i];
                *tmp = node;
                tmp = &node->next;    
            }
            *tmp = nullptr;
        }
            
        void insert_at(int idx, T data) {
            Node<T>* tmp = head;
            Node<T>* node = new Node<T>;
            node->data = data;
            for(int i = 0; i < idx-1; i ++) {
                tmp = tmp->next;
            }
            node->next = tmp->next;
            tmp->next = node;
        }
        void remove_at(int idx) {
            Node<T>*tmp = head, *tmp2;
            for(int i = 0; i < idx; i++) {
                tmp2 = tmp;
                tmp = tmp->next;
            }
            tmp2->next = tmp->next;
            delete tmp;
        }
        void pop_back() {
            Node<T>* tmp = head;
            while(tmp->next->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = nullptr;
            delete tmp->next;
        }
        void push_back(T val) {
            Node<T>*node = new Node<T>;
            node->data = val;
            Node<T>*tmp = head;
            while(tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = node;
        }
        void pop_front() {
            Node<T>* tmp = head;
            head = head->next;
            delete tmp;
        }
        void push_front(T val) {
            Node<T>* node = new Node<T>;
            node->data = val;
            node->next = head;
            head = node;
        }
        friend std::ostream& operator<<(std::ostream& out, List<T>& rhs) {
            Node<T>*cur = rhs.head;
            while(cur->next != nullptr) {
                out << cur->data << ", ";
                cur = cur->next;
            }
            out << cur->data << " " << std::endl;
            return out;
        }            
};
//
//template<typename T>List<T>::~List() {
//    delete head;
//}
//template<typename T>void List<T>::insert_at(int idx, T data) {
//    (head+idx)-> Node<T>::data;
//}
//template<typename T>void List<T>::remove_at(int idx) {
//    (head+idx) = NULL;
//}
//template<typename T>void List<T>::pop_back() {
//    Node<T>* cur = head;
//    int last = 0;
//    while(cur != NULL) {
//        last++;
//    }
//    (head+last) = NULL;
//}
//template<typename T>void List<T>::push_back(T val) {
//    Node<T>* cur = head;
//    int last = 0;
//    while(cur != NULL) {
//        last++;
//    }
//    (head+last) > val;
//}
//template<typename T>void List<T>::pop_front(){
//    *head = NULL;
//}
//template<typename T>void List<T>::push_front(T val) {
//    head->val;
//}
//
