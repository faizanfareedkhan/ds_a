#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int count(int n){
    // patter 1 to find count of the digits

    // int count = 0;
    // while(n > 0){
    // count++;
    // n = n / 10; 
    // }
    // return count;
    // patter 2 to find count of the digits

    int count = log10(n)+1;
    return count;

}

int reverseNumber(int n){
    int revN = 0;
    while(n > 0){
        // 7
        int lastDigit = n % 10; // 7
        n = n/10; // 7
        revN = revN * 10 + lastDigit; // 987
    }
    return revN;
}

bool palindromeNumbers(int n){
    int original = n;
    int revN = 0;
    while(n > 0){
        int ld = n % 10;
        n = n /10;
        revN = (revN * 10 )+ld;
    } 
    if(original == revN) return true;
    else return false;
}



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        // int resCount = count(n);
        // cout <<  resCount << endl;
        // int resReverseNumber = reverseNumber(n);
        // cout <<  resReverseNumber << endl;
        bool revPalindromeNumbers = palindromeNumbers(n);
        cout << boolalpha << revPalindromeNumbers << endl;
        
        
    }
    
    return 0;
}