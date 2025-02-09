#include<bits/stdc++.h>
using namespace std;
int main (){
    cout <<  "Enter the Year :-  "<< endl;
    int year;
    cin >> year;
    if (year%400 == 0){
        cout << "lear year";
    }
    else if (year%100 != 0 && year%4 == 0){
        cout << "leap year";
    }
    else {
        cout << "Not a leap year";
    }

}