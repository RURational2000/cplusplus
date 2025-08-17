// Move capital letters to the front of a string
// and maintain the order of the letters.
// Example: "aBcDeFg" -> "BCDEafg"  
#include <iostream>
#include <string>

using namespace std;

string moveCapitalLettersToFront(string str)
{
    string result = "";
    string capitals = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            capitals += str[i];
        }
        else
        {
            result += str[i];
        }
    }

    return capitals + result;
}

int main()
{
    cout << moveCapitalLettersToFront("aBcDeFg") << endl;
    return 0;
}