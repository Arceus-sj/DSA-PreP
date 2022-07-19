#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int *a, int n) {
    
//     i = 0; i < n; i++
//         j = 0; j < n - i - 1; j++;
    
    for(int i = 1; i < n; i++) {
       
       for(int j = 0; j < n - i; j++) {
           
           if(a[j] > a[j+1]) {
               swap(a[j], a[j+1]);
           }
           else if(a[j] < a[j+1]) {
               continue;
           }
       }
    }
    
    for(int i = 0; i < n; i++) 
        cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n; i++) {
        cin >> a[i];
    }
    
    bubbleSort(a, n);
    return 0;
}
