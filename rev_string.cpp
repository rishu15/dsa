
#include <iostream>
#include <string.h>

using namespace std;
int main() {
    string str ="Geeks";
    int j=0;
    while(str[j]){
        j++;
    }
    cout<<j<<endl;
    for(int i=j-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}
