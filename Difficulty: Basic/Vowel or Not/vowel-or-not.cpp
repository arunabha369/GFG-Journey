class Solution {
  public:
    string isVowel(char c) {

        c = tolower(c); // convert to lowercase for uniform checking

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return "YES";
        else
            return "NO";
    }
};
