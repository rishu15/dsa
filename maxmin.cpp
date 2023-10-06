#include<iostream>
using namespace std;
int main() {
    int A[]={1,3,4,1};
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(int i=0;i<4;i++){
        if(A[i]<minimum){
            minimum=A[i];
        }
        if(A[i]>maximum){
            maximum=A[i];
        }
    }
    return maximum+minimum;
}