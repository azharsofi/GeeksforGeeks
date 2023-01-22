vector<int> find(int arr[], int n , int x )
{
    // code here
   int fp(int arr[],int n,int x);
int lp(int arr[],int n,int x);
    
    vector<int> a;
int fs=fp(arr,n,x);
int ls=lp(arr,n,x);
a.push_back(fs);
a.push_back(ls);
return a;}

  int fp(int arr[],int n, int x) {
  
  int res=-1;
  int s=0;
  int e=n-1;
  while(s<=e){
      int m=s+(e-s)/2;
      if(arr[m]==x){
      res=m;
      e=m-1;}
      else if(x>arr[m])
      s=m+1;
      else
      e=m-1;

  }
  return res;
  }
   int lp(int arr[],int n, int x) {
  int res=-1;
  int s=0;
  int e=n-1;
  while(s<=e){
      int m=s+(e-s)/2;
      if(arr[m]==x){
       res=m;
      s=m+1;}
      else if(x>arr[m])
      s=m+1;
      else
      e=m-1;

  }
  return res;}
    
