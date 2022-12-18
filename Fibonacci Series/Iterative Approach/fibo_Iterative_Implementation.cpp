// FIBONACCI SERIES ITERATIVE IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;

long long int fibonacci(long long int n){
long long int x = 0, y = 1, z = 0;
   for (long long int i = 0; i < n; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
   }
   return x;
}
int main(){
    long long int input;
    cout<<"Input the number of elements you want in the series: ";     //The indexing here starts from 1 not zero
    cin >> input;
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    fibonacci(input);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << endl << "Time taken by program is : " << fixed << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}