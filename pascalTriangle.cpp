class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans,req;
        int cnt=0;
        ans.push_back({1});
        ans.push_back({1,1});
        ans.push_back({1,2,1});
        vector<int> temp1={1,2,1};
        for(int i=3;i<30;i++){
            vector<int> temp2;
            temp2.push_back(1);
            for(int j=1;j<i;j++)
                temp2.push_back(temp1[j-1]+temp1[j]);
            temp2.push_back(1);
            ans.push_back(temp2);
            temp1=temp2;
            cnt++;
        }
        for(int i=0;i<numRows;i++){
            req.push_back(ans[i]);
        }
        //cout<<cnt<<endl;
        return req;
    }
};