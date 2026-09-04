class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int id=0;
        int x=m;
        int y=n;
        vector <int> res(x+y);

        while(i<x and j<y)
        {
            if(nums1[i]<=nums2[j])
            {
                res[id]=nums1[i];
                id++;
                i++;
            }
            else
            {
                res[id]=nums2[j];
                id++;
                j++;
            }
        }
        while(i<x)
        {
            res[id]=nums1[i];
            id++;
            i++;
        }
        while(j<y)
        {
            res[id]=nums2[j];
            id++;
            j++;
        }
        nums1 = res;

    }
};