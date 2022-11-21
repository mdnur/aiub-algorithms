#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> s;

    s.push("NBJ");
    s.push("Tanjim Rahman");
    s.push("Ashekin");

    while (!s.empty())
    {       
        cout << s.front() << endl;
        s.pop();
    }
    
    return 0;
}