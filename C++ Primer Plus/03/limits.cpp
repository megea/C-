#include <iostream>
#include <climits>

int main()
{
    using namespace std;

    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "short is " << sizeof(short) << "bytes." << endl;
    cout << "int is " << sizeof(int) << "bytes." << endl;
    cout << "long is " << sizeof n_long << "bytes." << endl; 
    cout << "n_llong is " << sizeof n_llong << "bytes." << endl;
    cout << endl;

    cout << "Maxinum values:" << endl;
    cout << "short: " << n_short << endl;
    cout << "int: " << n_int << endl;
    cout << "long: " << n_long << endl;
    cout << "llong: " << n_llong << endl;
    cout << endl;

    cout << "Mininum int value is: " << INT_MIN << endl;
    cout << "Bits per byte: " << CHAR_BIT << endl;

    return 0;
}
