class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n = s.size();
        int i = 0;

        for(int l=0;l<n;++l){
            if(s[l] != ' '){

                if(i!=0) s[i++] = ' ';
                int r = l;
                while(r<n && s[r] != ' ') s[i++] = s[r++];

                reverse(s.begin() + i - (r - l), s.begin() + i);

                l = r;
            }
        }

        s.erase(s.begin() + i, s.end());
        return s;
    }
};