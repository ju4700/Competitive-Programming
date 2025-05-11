#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& a, int n, int i){
    int large = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l < n && a[l] > a[large]) large = l;
    if(r < n && a[r] > a[large]) large = r;
    if(large != i){
        swap(a[i], a[large]);
        heapify(a, n, large);
    }
}

int main() 
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i; i < n; i++) cin >> a[i];

    for(int i = n/2-1; i >= 0; i--) heapify(a, n, i);
    for(int i = n-1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0; 
}