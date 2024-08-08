#include <iostream>
using namespace std;


void print_patt(int row) {
    int count = 1; 

    
    for (int i = 1; i <= row; ++i) {
        
        for (int j = 1; j <= i; ++j) {
            cout << count << " "; 
            ++count;
        }
        cout << endl; 
    }
}

int main() {
    int row = 7;
    print_patt(row); 
    return 0; 
}
