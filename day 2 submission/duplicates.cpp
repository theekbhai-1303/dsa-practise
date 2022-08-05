#include <bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;
void printDuplicates(string s)
{
    int count[NO_OF_CHARS] = {};
    for (int i = 0; i < s.size(); i++){
    if (s[i]>=65 && s[i]<=90||s[i]>=97 && s[i]<=122)
    
        count[s[i]]++;
        } // increment the count of each character by using ASCII of character as key
    for (int i = 0; i < s.size(); i++)
        if (count[s[i]] > 1) //
        {
            cout << s[i] << "   count = " << count[s[i]] << endl;
            count[s[i]] = 0;
        }
}
int main()
{
    string s = " your mom is hot 1234    ";
    cout << "Input string is " << s << endl;
    printDuplicates(s);
}