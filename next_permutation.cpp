#include<bits/stdc++.h> 
using namespace std; 

    void nextPermutation(vector<int>& nums) 
    {
        int index = -1;
        int n = nums.size();
        vector<int> n1;
        for(int i = n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index = i;
                break;
                
            }
        }
        if(index != -1)
        {
            for(int j = n-1;j>=0;j--)
        {
            if(nums[j]>nums[index])
            {
                swap(nums[j], nums[index]);
                break;
            }
        }
            
        }
        
        
       reverse(nums.begin()+ index+1,nums.end());
       for (int i = 0; i < n; i++) 
       {
           cout<<nums[i]<<endl;
       }
       
    }
int main()
{
    
    int a;
    cin>>a;
    int item;
    

    vector<int> g1(a);
    for(int i=0;i<a;i++)
    {
       cin>>g1[i];
    }

    nextPermutation(g1);
}