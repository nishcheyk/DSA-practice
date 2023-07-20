#include<iostream>
using namespace std;

void display(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    cout << count;
}

void multiply(int *arr, int l, int r, int x) {
    for (int i = l; i <= r; i++) {
        arr[i] = arr[i] * x;
    }
}

int main() {
    int n, l, r, x, q;
    cin >> n;
    int arr[n];
    cin>>q;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
     
    }

    for (int i = 0; i < q; i++) {

        cin >> l >> r >> x;
        multiply(arr, l, r, x);

    }
    display(arr, n);

}
