bool static comp(pair<char,int>p1,pair<char,int>p2){
return p1.second>p2.second;
    }
    
    string frequencySort(string s) {
     //Create an unordered map to store character frequencies
     unordered_map<char,int>map;
     // Loop through the input string and update the character frequencies
     for(char c:s){
         map[c]++;
     }   
    // Create a vector of pairs <char, int> from the unordered map
    vector<pair<char,int>>p;
    for(auto x:map)
    p.push_back({x.first,x.second});
// Sort the vector of pairs using the custom comparison function
    sort(p.begin(),p.end(),comp);
// Create an empty string to store the sorted characters
    string ans="";
// Loop through the sorted vector of pairs and construct the sorted string
    for(auto x:p)
    {
        for(int i=0;i<x.second;i++)
        {
            ans+=x.first;
        }
    }
    // Return the sorted string
    return ans;
    }
