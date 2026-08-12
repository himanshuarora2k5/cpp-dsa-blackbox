#include <bits/stdc++.h>
using namespace std;
int main(){

    int sum = 0;
    for(int i = 20; i < 41; i++){
        if(i % 2 == 0){
            sum = sum + i;
        }
    }

    cout << sum;
    return 0;
}