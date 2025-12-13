class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> word1(s.begin(),s.end());
        vector<char> word2(t.begin(),t.end());

        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());

        if(word1 == word2){
            return true;
        }

        return false;

    }
};