#include <iostream>
using namespace std;

int func_rec(int i, int n){
    if(n <= i) return 0;
    func_rec(i+1, n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    func_rec(1, n);
    return 0;
}
