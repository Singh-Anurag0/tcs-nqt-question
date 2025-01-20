
#include <bits/stdc++.h>
using namespace std;

int main (){
int n ;
cin >> n;
vector<int>arr(n);
for (int i=0; i<n; i++){
    cin >> arr[i];

}
int smallest=INT_MAX;
int secondsmallest=INT_MAX;
for (int j=0; j<n; j++){
    if (arr[j] < smallest){
     
     secondsmallest=smallest;
     smallest = arr[j];
    }
    if (arr[j]<secondsmallest && arr[j] > smallest)
        {
         secondsmallest= arr[j];
    }
}
cout << secondsmallest  << "   " << smallest;

// int largest=INT_MIN;
// int secondlargest=INT_MIN;
// for (int j=0; j<n; j++){
//     if (arr[j] > largest){
//         secondlargest = largest;
//      largest = arr[j];
     
//     }
//     if (arr[j] > secondlargest and arr[j]<largest)
//         {
//          secondlargest= arr[j];
//     }
// }
// cout << largest  << "   " << secondlargest;




}