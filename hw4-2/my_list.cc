#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

string* split(const string& str, const string& delim) {
    string* string_list = new string[10];

    int idx = 0;
    char *token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
    while (token != NULL) {
        string_list[idx] = token;
        token = strtok(NULL, delim.c_str());
        ++idx;
    }

    return string_list;
}

struct Item {
    string name;
    string age;
    string id;
    string subject[10];
};

struct Item* create_item() {
    struct Item* pitem = new Item;
    
    return pitem;
}

struct Item* find_end_of_list(struct Item* linked_list_first_item) {
    struct Item* end_of_list;
    int i = 0, end = 0;
    for (i = 0;;i++){
        if ((linked_list_first_item + i + 1)->name == ""){
            break;
        }
        end++;    
    }
    end_of_list = (linked_list_first_item + end);
    
    return end_of_list;
}

void insert_item(struct Item* prev_item, struct Item* item) {
    item = (prev_item + 1);
}


int main() {
    int line = 0;
    string student;
    string* string_list, *subject;
    struct Item* last_item;
    struct Item* linked_list = new Item[100];
    
    ifstream fin;
    fin.open("input.txt");
    for (int i = 0;;) {
        while (getline(fin, student)){
            string_list = split(student, ":");
            linked_list[i] = *create_item();
            linked_list[i].name = string_list[0];
            linked_list[i].age = string_list[1];
            linked_list[i].id = string_list[2];
            subject = split(string_list[3], ",");
            for (int j = 0;; j++) {
                if (subject[j].empty() == true)
                    break;
                linked_list[i].subject[j] = subject[j];
            }
            i++;
            insert_item(&linked_list[i], &linked_list[i+1]);
            line++;
        }
        break;
    }

    last_item = find_end_of_list(&linked_list[0]);
    
    for (int k = 0;; k++) {
        if (linked_list[k].id.substr(0, 4) == "2013"){
            cout << linked_list[k].name << "(" << linked_list[k].id << "): " << linked_list[k].subject[0];
            for (int l = 1;; l++){
                cout << " & " << linked_list[k].subject[l];
                if (linked_list[k].subject[l+1].empty() == true){
                    break;
                }
            }
            cout << endl;
        }
        if (k == line){
            fin.close();  
            delete[] linked_list;
            return 0;
        }
    }

    if (last_item->name == "") {
        fin.close();
        return 0;
    }
}
