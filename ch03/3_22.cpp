#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector; using std::string; using std::cout; using std::cin; using std::isalpha;

int main()
{
    vector<string> text;
    for (string line; getline(cin, line); text.push_back(line));
    
    // Iterate over each word in the text vector
    for (auto& word : text)
    {
        // Convert each character in the word to uppercase if it is alphabetic
        for (auto& ch : word)
            if (isalpha(ch)) ch = toupper(ch);
        
        // Print the modified word
        cout << word << " ";
    }

    return 0;
}