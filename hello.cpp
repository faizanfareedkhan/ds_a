#include <iostream>
#include <vector>
using namespace std;

bool f(vector<int> arr, int n){
    if(n <= 1) return true;

    return (arr[n - 1] >= arr[n - 2]) && f(arr, n - 1);
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < arr.size(); i++)
        cin >> arr[i];

    cout << f(arr, n);

}
