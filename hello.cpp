#include <iostream>
using namespace std;

// int sum(int n){
//     if (n == 0) return 0;
//     return n + sum(n - 1);
// }

int fac(int n){
    if (n == 0) return 1;
    return n * fac(n - 1);
}

int main(){
    int n;
    cin >> n;

    // cout << sum(n);
    cout << fac(n);
}
