#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int sc[50]; 
    for (int i = 0; i < n; ++i) {
        cin >> sc[i];
    }

    int x = sc[k - 1]; 
    int count = 0;

    for (int i = 0; i < n; ++i) {
       
        if (sc[i] >= x && sc[i] > 0) {
            ++count;
        }
    }

    cout << count << endl; 
    return 0;
}

