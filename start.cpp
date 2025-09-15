#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str, pattern;
    bool found = false;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter pattern to search: ";
    getline(cin, pattern);
    if (!str.empty())
    {
        int size = str.size(), psize = pattern.size();

        for (int i = 0; i < size - psize + 1; i++)
        {
            for (int j = 0; j < psize; j++)
            {
                if (str[i + j] != pattern[j])
                    break;
                if (j == psize - 1)
                {
                    cout << "Pattern found at index " << i << endl;
                    found = true;
                }
            }
        }

        if (!found)
            cout << "Pattern not found";
    }
    else
    {
        cout << "String is empty";
    }
}
