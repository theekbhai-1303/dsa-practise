//  the idea for using map comes from the fact map stores the key for every element
// A Simple C++ program to count anagrams of a
// pattern in a text.
#include <bits/stdc++.h>
using namespace std;

// Function to find if two strings are equal
bool areAnagram(string s1, string s2)
{
    map<char, int> m; // stores the value of each integer for example a =3 and b = 1 ; 
    for (int i = 0; i < s1.length(); i++)
        m[s1[i]]++;

    for (int i = 0; i < s2.length(); i++)
        m[s2[i]]--;

    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second != 0)
            return false;

    return true;
}

int countAnagrams(string text, string word)
{

    // Initialize result
    int res = 0;
    for (int i = 0;
         i < text.length() - word.length() + 1;
         i++)
    {

        // Check if the word and substring are
        // anagram of each other.
        if (areAnagram(text.substr(i, word.length()),
                       word))
            res++;
    }
    return res;
}

// Driver Code
int main()
{
    string text = "forxxorfxdofr";
    string word = "for";

    cout << countAnagrams(text, word);

    return 0;
}

