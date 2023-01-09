class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    
    {
        int c=1;
        int r=0;
        for(int i=1;i<size;i++){
            if(a[r]==a[i])
            c++;
            else
            c--;
            if(c==0){
            c=1;
            r=i;
        }}
        
    
    c=0;
    for(int i=0;i<size;i++){
        if(a[r]==a[i])
        c++;
    }
    
    if(c>size/2)
    return a[r];
    else 
    return -1;
    }
};
