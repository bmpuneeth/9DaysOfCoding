#include <bits/stdc++.h>
using namespace std;
 
// Return the sum of the square
// of first n natural numbers
int squaresum(int n)
{
    // Iterate i from 1 and n
    // finding square of i and add to sum.
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (i * i);
    return sum;
}
 
// Driven Program
int main()
{
    int n = 4;
    cout << squaresum(n) << endl;
    return 0;
}
