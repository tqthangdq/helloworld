#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World", "from", "C++17!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
