// FIBONACCI SERIES RECURSIVE IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);    // Only the end element of the series is printed
}
int main ()
{
	long long int input;
    cout<<"Enter which nth element of the series is to be printed: ";     //The indexing starts from one not zero
    cin >> input;
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cout<<fib(input-1)<<endl;
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << endl << "Time taken by program is : " << fixed << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
