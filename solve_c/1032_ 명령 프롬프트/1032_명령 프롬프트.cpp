#include <iostream>
#include <cstring>
using namespace std;

/*
다른 문자가 있을경우 '?' 치환
*/

int main()
{
    int n;
    string ans, input;

    cin >> n;
    cin >> ans;
    for (int i = 1; i < n; i++)
    {
        cin >> input;
        for (int j = 0; input[j] != '\0'; j++)
            if (ans[j] != input[j])
                ans[j] = '?';
    }
    cout << ans << endl;
}