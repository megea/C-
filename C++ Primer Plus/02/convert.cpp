#include<iostream>

int stonetolb(int);

int main()
{
    using namespace std;

    int stone, pounds;
    cout << "Enter the weight in stone:";
    cin >> stone;
    pounds = stonetolb(stone);
    cout << stone << " stone= " << pounds << " pounds" << endl; 

    return 0;
}

int stonetolb(int stone)
{
    return 14 * stone;
}
