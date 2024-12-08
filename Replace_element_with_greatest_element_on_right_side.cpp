class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(n,-1);
        int m=arr[n-1];
        for(int i = n-2 ; i>=0; i--){
            if(arr[i]>m){
                v[i]=m;
                m=arr[i];
            }
            else{
                v[i]=m;
            }
        }
        return v;
        
    }
};
