#include <iostream>
using namespace std;

void ReversedArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);

    ReversedArray(i + 1, arr, n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ReversedArray(0, arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
