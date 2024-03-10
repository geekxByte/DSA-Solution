class Solution{
public:
	string removeDuplicates(string str) {
	   unordered_map<char,int> duplicate;
       string ans="";
       for(auto ele:str){
           duplicate[ele]++;
           if(duplicate[ele]<=1)ans.push_back(ele);
       }
       return ans;
	}
};
