//same as next_greater_element using stack with minor changes .

void prevSmaller_element(vector<int> nums){
    stack<int> stck;
    
    for(int i = 0; i < nums.size(); ++i){
        if(stck.empty())
            cout<< "-1 ";
        
        while(!stck.empty() && stck.top() >= nums[i])
            stck.pop();
        
        if(stck.empty())
            cout<< "-1 ";
            
        else
            cout<<stck.top()<<" ";
        
        stck.push(nums[i]);
    }
}
