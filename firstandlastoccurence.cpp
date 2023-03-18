 int fo(int *a,int n,int x){
        int s=0;
        int e=n-1;
        int r=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(a[m]==x)
            {
                r=m;
                e=m-1;
            }
            else if(x>a[m])
            s=m+1;
            else
            e=m-1;
            
        }
        return r;
    }
    
      int lo(int *a,int n,int x){
        int s=0;
        int e=n-1;
        int r=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(a[m]==x)
            {
                r=m;
                s=m+1;
            }
            else if(x>a[m])
            s=m+1;
            else
            e=m-1;
            
        }
        return r;
    }
    
    





vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> z;
    int fs=fo(arr,n,x);
    int ls=lo(arr,n,x);
    z.push_back(fs);
       z.push_back(ls);
    return z;}
    
    

    
