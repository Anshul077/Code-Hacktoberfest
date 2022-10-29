// C++ program to sort array
  
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 0, 1, 5, 8, 9, 6, 7, 3, 4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    sort(arr + 2, arr + n);
  
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  
    return 0;
}
