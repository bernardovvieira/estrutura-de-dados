#include <iostream>

using namespace std;

int main()
{
    int t, v;
    long long fibonacci[61];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    cin >> t;

    for(int i = 2; i <= 60; i++){
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];        
    }

    for(int i = 0; i < t; i++)
    {   
        cin >> v;
        cout << "Fib(" << v << ") = " << fibonacci[v] << endl;
    }
    
    return 0;
}