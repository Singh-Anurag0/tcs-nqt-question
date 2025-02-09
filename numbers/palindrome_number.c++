#include<bits/stdc++.h>
using namespace std;
int main (){
    int n , num , rev = 0 , digit ;
    
    cin >> num;
    n = num;
    while(num!=0){
       
        rev = (10*rev) + num%10;
        num = num/10;
    }
    if(n== rev){
        cout << "palindrome";

    }
    else {
         cout << "not palindrome";
    }
}