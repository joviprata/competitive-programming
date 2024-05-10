#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define endl "\n"
#define vi vector <int>
#define pb push_back()

int32_t main() {
    string s = "Example";
    
    //check size of s:
    int length_s = s.length();
    
    //create a substring from s:
    string substring_s = s.substr(2, 3); //(inicial position, size of substring) obs: going off string limits doesn't raise error, it just doesn't get anything

    //check if substring is found in s:
    auto pos = s.find(substring_s);
    if (pos != string::npos)
        cout << "Substring found at position" << pos << endl;
    else
        cout << "Substring not found" << endl;

    //check if all chars in string are uppercase / lowercase:
    bool string_is_upper = true;
    for (char letter : s) {
        if (isupper(letter))
            string_is_upper = false;
    }
    bool string_is_lower = true;
    for (char letter : s) {
        if (islower(letter))
            string_is_lower = false;
    }

    //concatenate s with another string:
    s += 'abc';

    //replace portion of s with another string:
    s.replace(2, 3, "xyz"); //(inicial position, size of portion to replace, replacement string)

    //reverse string:
    reverse(all(s));

    //convert all string to uppercase / lowercase:
    for (char &letter : s) //& is to assign the variable letter as a pointer to actually change the string s, instead of making a temporary variable for the "for" loop
        letter = toupper(letter);
    for (char &letter : s)
        letter = tolower(letter);

}
