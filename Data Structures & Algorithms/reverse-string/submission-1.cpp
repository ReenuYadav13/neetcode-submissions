class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};


//ek or trika hai eska -  2 pointer se karne ka 
// class Solution {
// public:
//     void reverseString(vector<char>& s) {

//         int left = 0;
//         int right = s.size() - 1;

//         while(left < right) {
//             swap(s[left], s[right]);
//             left++;
//             right--;
//         }
//     }
// };