class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(256,0);
        int n=s.size();
        int low=0;
        int high=0;
        int result=INT_MIN;

        for(int high=0;high<n;high++){
            f[s[high]]++;

            int len=high-low+1;
            int maxcount=*max_element(f.begin(),f.end());
            int diff=len-maxcount;

            while(diff>k){
                f[s[low]]--;
                low++;

                maxcount=*max_element(f.begin(),f.end());
                len=high-low+1;
                diff=len-maxcount;
            }
            len=high-low+1;
            result=max(result,len);
        }
        return result;
    }
};
