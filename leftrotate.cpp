class Solution{
    public:

	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   
        k=k%n;
        int temp[k];
        for(int i=0;i<k;i++){
            temp[i]=arr[i];
        }
        for(int i=0;i<n-k;i++){
            arr[i]=arr[i+k];
        }
        int j=0;
        for(int i=n-k;i<n;i++){
            arr[i]=temp[j++];
        }
      

	 
	} 
		 

};
