class Solution {
public:
    int subtractProductAndSum(int n) {
        int i=n;
        int sum=0,prod=1,res;
        while(i)
        {
            sum+=(i%10);
            prod*=(i%10);
            i=i/10;
        }
     
        // cout<<"Product of digits"<<prod<<endl;
        // cout<<"Sum of digits"<<sum<<endl;
        res=prod-sum;
        return res;

    }
};