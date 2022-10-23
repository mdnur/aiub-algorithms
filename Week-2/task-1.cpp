// #include "/Users/mohammadnur/stdc++.h" // this include will only with my pc . alternative of bits/stdc++.h
#include <iostream>
#include <fstream>
using namespace std;

void generateData(int range)
{
    string s;
    srand(time(0));
    for (int i = 0; i <= range; i = i + 50)
    {
        if (i == 0)
            continue;
        s = "";
        s = to_string(i) + "k.txt";

        ofstream outfile(s);
        for (int j = 1; j <= i * 1000; j++)
        {
            outfile << (rand() % 100000) << endl;
        }
    }
}

int main()
{

    generateData(100);

    return 0;
}
