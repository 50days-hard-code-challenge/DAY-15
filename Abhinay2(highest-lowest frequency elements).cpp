vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    vector<int>va;
    map<int,int>hashmap;
    for(int i=0;i<v.size();i++){
        hashmap[v[i]]++;
    }
    int maxi=0;
    int maxele=INT_MIN;
    for(auto it:hashmap){
        if(it.second>maxi){
            maxi=it.second;
            maxele=it.first;
        }
    }
    int mini=INT_MAX;
    int minele=INT_MAX;
    for(auto it:hashmap){
        if(it.second<mini){
            mini=it.second;
            minele=it.first;
        }
    }
    va.push_back(maxele);
    va.push_back(minele);
    return va;
}
