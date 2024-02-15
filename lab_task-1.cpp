#include <bits/stdc++.h>
using namespace std;

int main()
{
    string statement;
    cout << "Enter Your Statement: ";
    // 'alpha=beta+cappa' type
    cin >> statement;
    int eq, plus, col;

    // equal
    for (int i = 0; i < statement.length(); i++)
    {
        if (statement[i] == '=')
        {
            eq = i;
        }
    }
    for (int i = 0; i < eq; i++)
    {
        cout << statement[i];
        if (i + 1 == eq)
        {
            cout << endl;
            cout << "=" << endl;
        }
    }

    // plus
    for (int i = 0; i < statement.length(); i++)
    {
        if (statement[i] == '+')
        {
            plus = i;
        }
    }
    for (int i = eq + 1; i < plus; i++)
    {
        cout << statement[i];
        if (i + 1 == plus)
        {
            cout << endl;
            cout << "+" << endl;
        }
    }

    // semi-colon
    for (int i = 0; i < statement.length(); i++)
    {
        if (statement[i] == ';')
        {
            col = i;
        }
    }
    for (int i = plus + 1; i < col; i++)
    {
        cout << statement[i];
        if (i + 1 == col)
        {
            cout << endl;
            cout << ";" << endl;
        }
    }
    return 0;
}
