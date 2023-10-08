class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;
        /*int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        v.push_back(sum);
        stack<int>st;
        st.push(sum);
        for(int i=k;i<nums.size();i++)
        {
           sum=sum+nums[i]-nums[i-k];
           if(sum>st.top()){
               v.push_back(sum);
               st.pop();
               st.push(sum);
           }
           else{
               v.push_back(st.top());
           }
        }
        return v;*/

        /*int maxi=INT_MIN;
        for(int i=0;i<k;i++){
            maxi=max(maxi,nums[i]);
        }
        v.push_back(maxi);
        for(int i=k;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            else{
                if(maxi==nums[i-k]){
                    maxi=INT_MIN;
                    for(int j=i-k+1;j<=i;j++){
                        maxi=max(maxi,nums[j]);
                    }
                }
            }
            v.push_back(maxi);
        }
        return v;*/
        /*vector<int> res;
        int i=0;
        while(i+k<=nums.size()){
            res.push_back(*max_element(nums.begin()+i,nums.begin()+i+k));
            i++;
        }
        return res;*/

        deque < int > dq;
        vector < int > ans;
        for (int i = 0; i < nums.size(); i++) {
           if (!dq.empty() && dq.front() == i - k) dq.pop_front();

           while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

           dq.push_back(i);
           if (i >= k - 1) ans.push_back(nums[dq.front()]);
        }
        return ans;


    }
};
