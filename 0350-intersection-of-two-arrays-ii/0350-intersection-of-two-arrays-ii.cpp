class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        if(nums1.size()==0 || nums2.size()==0) return ans;
        unordered_map<int,int> freq;
        for(int i=0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(freq.find(nums2[i])!=freq.end() && freq[nums2[i]]){
                freq[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};