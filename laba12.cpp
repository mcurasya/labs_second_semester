#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;
int main(int argc, const char **argv)
{
    string initial, result_alpha, result_numeric, result;
    cin >> initial;
    for (int i = initial.length() - 1; i >= 0; i--)
    {
        if (isalpha(initial[i]))
        {
            result_alpha += initial[i];
        }
        if (isnumber(initial[i]))
        {
            result_numeric += initial[i];
        }
        if (!isalnum(initial[i]))
        {
            cout << "Неприпустимий  символ  " << initial[i] << endl;
            return 0;
        }
    }

    reverse(result_numeric.begin(), result_numeric.end());
    result = result_alpha + result_numeric;
    cout << result << endl;
    return 0;
}