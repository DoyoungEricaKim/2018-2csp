#include <iostream>
#include "simple_account.h"
using namespace std;

int main() {
    char job;
    int i = 0;

    while (true) {
        cout << "Job?" << endl;
        cin >> job;
        if (job == 'Q')
            break;
        if (job == 'N') {
            i++;
            if(i < 10) {
                --i;
                Admin user[i];
                (user+i)->newAccount();
                i++;
                
            }
        }
        else
            cout << "Failure: No more new accounts are avilable" << endl;
        }

    }
    return 0;
}
