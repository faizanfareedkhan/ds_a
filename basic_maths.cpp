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

bool armStrongNumbers(int n){
    int original = n;
    int sumN = 0;
    while(n > 0){
        int ld = n % 10;
        n = n / 10;
        sumN = sumN + ld*ld*ld ;
    } 
    if(original == sumN) return true;
    else return false;
}

void printDivisions(int n){
    // patter 1 for print division of the number 

    // for(int i = 1; i <= n; i++){
    //     if(n%i==0){
    //         cout << i;
    //         cout << endl;
    //     }
    // }

    // patter 2 for print division of the number

    vector<int> ls;

    // cout << sqrt(n);

    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }

        }
    }
    sort(ls.begin(), ls.end());
    for(int i = 0; i < ls.size(); i++){
        cout << ls[i] << endl;
    }

}

void isPrime(int n){
    int count = 0;
    for(int i = 1 ; i*i<= n; i++){
        if(n%i == 0){
            count++;
            if((n/i) != i) count++;
        }
    }
    if(count == 2) cout << "true";
    else cout << "false";
}

int GCD(int a, int b){
    while(a > 0 && b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) return b;
    return a;
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
        // bool resPalindromeNumbers = palindromeNumbers(n);
        // cout << boolalpha << resPalindromeNumbers << endl;
        // bool resArmStrongNumbers = armStrongNumbers(n);
        // cout << boolalpha << resArmStrongNumbers << endl;
        // printDivisions(n);
        // isPrime(n);
        int p;
        cin >> p;
        int resGCD = GCD(n, p); 
        cout << resGCD << endl;
        // cout << n << endl;
        // cout << p << endl;
        
    }
    
    return 0;
}