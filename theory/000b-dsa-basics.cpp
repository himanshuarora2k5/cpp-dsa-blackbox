//conditionals and for loop
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 12;
    if ( n % 2 == 0 and n % 3 == 0){ //if(1) --> always true, if(0) --> always false
        cout << "even and div by 3" << endl;
    }
    else {
        cout << "odd" << endl;
    }

    for(int i = 0; i < 5; i++){
        cout << "hello" << endl;
    }
    
    return 0;
}
