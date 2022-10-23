#include <iostream>
using namespace std;


int f(int x)
{
    return x * x + 5;
}

int main()
{

    int x[] = {10, 20, 30, 40};

    for (int i = 0; i < 4; ++i)
    {
        cout << x[i] << " " << f(x[i]) << endl;
    }

    return 0;
}
