class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int max=*max_element(A,A+N);
    	int min=*min_element(A,A+N);
    	return max+min;
    }

};
