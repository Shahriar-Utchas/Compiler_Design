#include <bits/stdc++.h>
using namespace std;

int main()
{
    string statement;
    cout << "Enter Your Statement: ";
    // 'alpha=beta+cappa;' type
    getline(cin, statement);
    cout << "The entered statement was: " << statement << endl;
    int equal, plus, col;

    // equal
    if (isdigit(statement[0]))
    {
        cout << "Lexical Error Found At First";
        return 0;
    }
    else
    {
        for (int i = 0; i < statement.length(); i++)
        {
            if (statement[i] == '=')
            {
                equal = i;
            }
        }
        for (int i = 0; i < equal; i++)
        {
            cout << statement[i];
            if (i + 1 == equal)
            {
                cout << endl;
                cout << "=" << endl;
            }
        }
    }

    // plus
    if (isdigit(statement[equal + 1]))
    {
        cout << "Lexical Error Found after Equal";
        return 0;
    }
    else
    {
        for (int i = 0; i < statement.length(); i++)
        {
            if (statement[i] == '+')
            {
                plus = i;
            }
        }
        for (int i = equal + 1; i < plus; i++)
        {
            cout << statement[i];
            if (i + 1 == plus)
            {
                cout << endl;
                cout << "+" << endl;
            }
        }
    }

    // semi-colon
    if (isdigit(statement[plus + 1]))
    {
        cout << "Lexical Error Found After Plus";
        return 0;
    }
    else
    {
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
    }
    return 0;
}
