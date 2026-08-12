//functions
#include <bits/stdc++.h>
using namespace std;
/*
functions components:
    return type
    function name
    input type
*/

int double_num( int n ){
    int result = 2 * n;
    return result;
}

int main(){

    int n = 10; //this n is diff from the n in function
    int result = double_num(n);
    cout << result << endl;
    cout << double_num(n) << endl;

    return 0;
}