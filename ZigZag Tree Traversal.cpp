class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	queue<Node*> q;
    	q.push(root);
    	bool path=true;
    	vector<vector<int>> ans;
    	while(!q.empty()){
    	    int s=q.size();
    	    vector<int> temp(s);
    	    for(int i=0;i<s;i++){
    	        Node* node=q.front();
    	        q.pop();
    	        int size;
    	        if(path==false)
    	            size=s-i-1;
    	        else
    	            size=i;
    	        temp[size]=node->data;
    	        if(node->left)
    	            q.push(node->left);
    	        if(node->right)
    	            q.push(node->right);
    	    }
    	    ans.push_back(temp);
    	    path=!path;
    	}
    	for(auto it: ans){
    	    for(auto i: it)
    	        cout<<i<<" ";
    	}
    	return {};
    }
};
