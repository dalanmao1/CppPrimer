#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1;
    vector<string> str;
    while (cin >> s1)
    {
        str.push_back(s1);
    }
    for (auto num : str)
    {
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] > 96) // num[i]指的是字符串的某个字符
            {
                num[i] -= 32;
            }
        }
        cout << num << endl;
    }
}
