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
int largest= INT_MIN;
for(int j=0; j<n; j++){
    if (arr[j]>largest)
    largest= arr[j];
}
cout << "Largest Element is : " << largest;


 }