#include <bits/stdc++.h>
using namespace std;

 int main ()
 {
int n ;

cin >> n;
vector<int>arr(n);

for (int i=0; i<n; i++){
    cin>> arr[i];

}
double median = 0 ;
sort(arr.begin() , arr.end());
if (n%2 == 0){
    int A1= n/2;
    int A2 = (n/2)-1;
     median = (double)(arr[A1]+arr[A2])/2; //double is used hear for decimal results
     // in above line we can alse use 2.0 in place of 2 this is called casting to double.
}
else{
median = arr[n/2];
}
 cout << "meadian =  "   << median;






 }