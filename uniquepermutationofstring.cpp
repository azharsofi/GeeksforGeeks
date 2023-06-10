
class Solution


{     
      void solve( string s,int index, vector<string> &ans){
          //base
          if(index>=s.length()){
              ans.push_back(s);
              return ;
              
          }
          unordered_set<char> m;
         for(int j=index;j<s.length();j++){
             if(m.find(s[j])!=m.end()) continue;
             m.insert(s[j]);
          swap(s[index],s[j]);
           solve(s,index+1,ans);
           swap(s[index],s[j]);
      }
          
      }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    	vector<string> ans;
		    	int index=0;
		    		 solve(S,index,ans);
		    		 sort(ans.begin(),ans.end());
       return ans;
		}
};
