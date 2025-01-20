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
int key =30;
int ans= -1;
for (int i=0; i<n; i++){
    if (arr[i] == key){
        ans = i;
       
        break;
    }
    
    
}
cout << ans << endl;






 }