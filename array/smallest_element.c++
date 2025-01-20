#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n <= 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }
  int arr[n];
  for (int i=0; i<n; i++)
  {
    cin >> arr[i];
  }
  int smallest = INT_MAX;
  for (int j=0; j<n; j++){
    if (arr[j] < smallest){
       smallest= arr[j];
    }
  }
     cout << smallest;
    

  }
