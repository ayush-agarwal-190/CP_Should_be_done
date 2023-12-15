




Using Dp approach 

ll dp[35][35];
ll ncr(int n,int r){
    if(n==r || r==0)return 1;
    else if(r==1)return n;
    else if(dp[n][r]!=(-1))return dp[n][r];
    dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
    return dp[n][r];

}


N distinct object take K , Tell me number of ways 

nCr =n!/r!(n-r)!


->>
 // precompute the factorials of all number

f[0]=1;
for(i=1;i<m;i++)
{
	 f[i]=(((i%m)*(f[i-1]%m))%m); 
}


-->> 
    //modular multiplication of r! and (n-r)!
    x=((f[n-r]%m)*(f[r]%m))%m;

->> Two lines for dividing the abbove
    //modular multiplicative inverse of x
    y=bigmod(x,m-2);

    //modular multiplication of n! and y
    z=((f[n]%m)*(y%m))%m;    
