class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";

        int i=0;
        int j=0;

        while(i<word1.size() and j<word2.size()){    //i chleha word1 ke size tak or j chlega word2 ke size tak toh phele ans mein i judage then j judega
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }
        while(i<word1.size()){       //word1 ke remainning characters
            ans += word1[i];
            i++;
        }
        while(j<word2.size()){             //word2 ke remaining characters
            ans += word2[j];
            j++;
        }
        return ans;
    }
};