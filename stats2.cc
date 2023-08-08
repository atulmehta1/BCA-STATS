// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int firstVal[]= {50, 55, 60, 65, 70, 75, 80, 85};
    int secondVal[]= {54, 59, 64, 69, 74, 79, 84, 89};
    int f[]= {1, 5, 17, 36, 25, 11, 4, 1};
    int midVal = 0;
    int sum = 0;
    int midArr[8]; 
    for (int i = 0; i<8; i++) {
        sum = firstVal[i] + secondVal[i];
        midVal = (sum/2);
        cout << "mid value : " << midVal << "\n";
        midArr[i] = midVal;
        cout << "mid array: " << midArr[i] << "\n";
        
    }
    cout << "------------------------" << "\n";
    int dx[8];
    for (int i = 0; i<8; i++) {
        dx[i] = midArr[i] - midArr[3];
    }
    int c[8];
    for (int i = 0; i<8; i++){
        c[i] = dx[2] * dx[i];
    }
     for (int i = 0; i<8; i++) {
        cout << c[i];
    }
    return 0; 
}