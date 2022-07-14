#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *a, int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex])
                minIndex = j;
        }
        
        swap(a[i], a[minIndex]);
    }

    for(int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    
}

int main () {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }

    selectionSort(a, n);
    return 0;
}