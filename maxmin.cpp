#include<iostream>
using namespace std;
int main() {
    int A[]={1,3,4,1};
    int maximum = 0, minimum = A[0];
    for (int i = 0; i < 4 - 1; i++) {
        maximum = max(maximum, max(A[i], A[i + 1]));
        minimum = min(minimum, min(A[i], A[i + 1]));
    }
    cout << maximum << endl<<minimum<<endl<<maximum + minimum;
}