
#include <iostream>
using namespace std;

float MAX (int d, float valori[]){
    int a;
    for (int j; j<d;j++){
       if (valori[j]>a){
           a=valori[j];
       }
    }
    return a;
}

int main() {
    int d;
    float k;
    cin>>d;
    float valori[d];
    for (int i=0;i<d;i++){
        cin>>k;
        valori[i]=k;
    }
    cout << MAX (d, valori);
    return 0;
}
