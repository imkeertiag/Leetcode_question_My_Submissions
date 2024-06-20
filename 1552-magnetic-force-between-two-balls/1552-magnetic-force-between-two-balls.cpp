class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
        
        int i,l=0,h=1e9,ans=0;
        sort(p.begin(),p.end());

        while(l<=h)
        {
            int mid = l+(h-l)/2;
            int cnt =0,j=-1e9;
            for(i=0;i<p.size();i++)
            {
                if(p[i]-j>=mid)
                {
                  cnt++;
                  j=p[i];
                }
            }
            if(cnt>=m)
            {
                ans=max(ans,mid);
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }

        }
        return ans;
    }
};