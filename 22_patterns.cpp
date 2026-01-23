#include <iostream>
using namespace std;

void pattern1(int n){
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
    cout << "pattern 1: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n){
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
    cout << "pattern 2: " << endl;
    for(int i = 0; i < n; i++){
       for(int j = 0; j <= i; j++){
        cout << "* ";
       }
       cout << endl;
    }
}
void pattern3(int n){
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
    cout << "pattern 3: " << endl;
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= i; j++){
        cout << j << " ";
       }
       cout << endl;
    }
}
void pattern4(int n){
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
    cout << "pattern 4: " << endl;
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= i; j++){
        cout << i << " ";
       }
       cout << endl;
    }
}
void pattern5(int n){
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
    cout << "pattern 5: " << endl;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n - i ; j++){
        cout << "* ";
       }
       cout << endl;
    }
}
void pattern6(int n){
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
    cout << "pattern 6: " << endl;
    for(int i = 0; i <= n; i++){
       for(int j = 1; j <= n - i ; j++){
        cout << j << " " ;
       }
       cout << endl;
    }
}
void pattern7(int n){
//              *             
//           *  *  *          
//        *  *  *  *  *       
//     *  *  *  *  *  *  *    
//  *  *  *  *  *  *  *  *  * 
    cout << "pattern 7: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1 ; j++){
        cout << " " << " " << " " ;
       }
        for(int j = 0; j < 2 * i + 1 ; j++){
        cout << " * " ;
       } 
        for(int j = 0; j < n - i - 1 ; j++){
        cout << " " << " " << " ";
       }
       cout << endl;
    }
}
void pattern8(int n){
//  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  *    
//        *  *  *  *  *       
//           *  *  *          
//              *      
    cout << "pattern 8: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
        cout << " " << " " << " " ;
       }
        for(int j = 0; j < 2 * n - (2 * i + 1) ; j++){
        cout << " * " ;
       } 
        for(int j = 0; j < i ; j++){
        cout << " " << " " << " " ;
       }
       cout << endl;
    }
}
void pattern9(int n){
//              *             
//           *  *  *          
//        *  *  *  *  *       
//     *  *  *  *  *  *  *    
//  *  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  *    
//        *  *  *  *  *       
//           *  *  *          
//              *   
    cout << "pattern 9 -> combination of 7 and 8: " << endl;
    pattern7(n);
    pattern8(n);
}
void pattern10(int n){
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 
    cout << "pattern 10: " << endl;
    for(int i = 1; i <= 2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j = 1; j <= stars; j++){
            cout << " * ";
        }
        cout << endl; 
    }

}
void pattern11(int n){
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
    cout << "pattern 11: " << endl;
    for(int i = 0; i < n; i++){
        int start = 1 ;
        if (i % 2 == 0) start = 1;
        else start = 0;
      for(int j = 0; j <= i; j++){
        cout << start << " ";
        start = 1 - start; 
      } 
      cout << endl;
    }

}
void pattern12(int n){
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
    cout << "pattern 12: " << endl;
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++){
        // numbers 
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        // space 
        for(int j = 1; j <= space; j++){
            cout << " ";
        }

        // numbers
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }

}
void pattern13(int n){
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
    cout << "pattern 13: " << endl;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void pattern14(int n){
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
    cout << "pattern 14: " << endl;
    for(int i = 0; i < n ; i++){
        for(char ch = 'A' ; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
    cout << "pattern 15: " << endl;
    for(int i = 0; i < n; i ++){
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }

}
void pattern16(int n){
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
    cout << "pattern 16: " << endl;
    for(int i = 0; i < n; i ++){
        char chr = 'A' + i;
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << chr << " ";
        }
        cout << endl;
    }

}
void pattern17(int n){
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA
    cout << "pattern 17: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1 ; j++){
        cout << " " ;
       }
       char ch = 'A';
       int breakpoint = (2*i+1) / 2;
        for(int j = 0; j < 2 * i + 1 ; j++){
        cout << ch ;
        if(j < breakpoint) ch++;
        else ch--;
       } 
        for(int j = 0; j < n - i - 1 ; j++){
        cout << " " ;
       }
       cout << endl;
    }
}
void pattern18(int n){
// E 
// D E 
// C D E 
// B C D E 
// A B C D E
    cout << "pattern 18: " << endl;
  for(int i = 0; i < n; i++){
    for(char ch = 'E' - i; ch <= 'E'; ch++){
        cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern19(int n){
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
    cout << "pattern 19: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <  n - i;j++){
            cout << "*";
        }
        for(int j = 1; j < 2*i+1 ;j++){
            cout << " ";
        }
        for(int j = 0; j <  n - i;j++){
            cout << "*";
        }
        cout << endl;
    }
     for(int i = 0; i < n; i++){
        for(int j = 0; j <= i;j++){
            cout << "*";
        }
        for(int j = 1; j < 2 * n - (2 * i + 1) ;j++){
            cout << " ";
        }
       for(int j = 0; j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n){
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
    cout << "pattern 20: " << endl;
    for(int i = 0; i < n-1; i++){
        // star
        for(int j = 0; j <= i;j++){
            cout << "*";
        }
        // space
        for(int j = 1; j < 2 * n - (2 * i + 1) ; j++){
            cout << " ";
        }
        // star
        for(int j = 0; j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 0; i < 2*n; i++){
        cout << "*";
    }
    cout << endl;

    for(int i = 0; i < n-1; i++){
        // star
        for(int j = 1; j < n - i;j++){
            cout << "*";
        }
        // space
        for(int j = 0; j < 2 * i + 2 ; j++){
            cout << " ";
        }
        // star
       for(int j = 1; j < n - i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n){
//  *  *  *  *  * 
//  *           * 
//  *           * 
//  *           * 
//  *  *  *  *  * 
    cout << "pattern 21: " << endl;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++ ){
            if(i == 0 || j == 0 || i == n-1 || j == n-1) cout << " * "; 
            else cout << ' ' << " " << " ";
        }
        cout << endl ;
    }
}
void pattern22(int n){
// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
    cout << "pattern 22: " << endl;
    for(int i = 0; i < 2*n-1;i++){
        // int val = n/2+1 ;
        for(int j = 0; j < 2*n-1; j++ ){
         int top = i;
         int left = j;
         int right = (2*n-2)-j;
         int down = (2*n-2)-i;
         cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl ;
    }
}



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);
        pattern5(n);
        pattern6(n);
        pattern7(n);
        pattern8(n);
        pattern9(n);
        pattern10(n);
        pattern11(n);
        pattern12(n);
        pattern13(n);
        pattern14(n);
        pattern15(n);
        pattern16(n);
        pattern17(n);
        pattern18(n);
        pattern19(n);
        pattern20(n);
        pattern21(n);
        pattern22(n);

    }
    return 0;
}
