#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

int rzut()
{
    random_device kostka;
    uniform_int_distribution<int> liczby(1, 6);
    return (liczby(kostka));
}

int main()
{
    for(int i=0; i<10; ++i)
    {
        cout << rzut() << endl;
    }
    return 0;
}
