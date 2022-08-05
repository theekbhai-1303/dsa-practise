#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static int findAnagrams(const std::string &text,
                            const std::string &word)
    {
        int text_length = text.length();// length of text 
        int word_length = word.length();//length of word 
        if (text_length < 0 || word_length < 0 || text_length < word_length)
            return 0;

        constexpr int CHARACTERS = 256;
        int count = 0;
        int index = 0;
        std::array<char, CHARACTERS> wordArr;
        wordArr.fill(0);
        std::array<char, CHARACTERS> textArr;
        textArr.fill(0);

        // till window size
        for (; index < word_length; index++)
        {
            wordArr[CHARACTERS - word[index]]++;
            textArr[CHARACTERS - text[index]]++;
        }
        if (wordArr == textArr)
            count += 1;
        // next window
        for (; index < text_length; index++)
        {
            textArr[CHARACTERS - text[index]]++;
            textArr[CHARACTERS - text[index - word_length]]--;

            if (wordArr == textArr)
                count += 1;
        }
        return count;
    }
};

int main()
{
    const std::string &text = "forxxorfxdofr";
    const std::string &word = "for";

    cout << Solution::findAnagrams(text, word);
    return 0;
}
