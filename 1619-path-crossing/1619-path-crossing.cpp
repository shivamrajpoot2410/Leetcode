class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string>st;
        int x=0, y=0;
        st.insert(to_string(x)+","+to_string(y));
        for(auto i: path)
        {
            if(i=='N') ++y;
            else if(i=='S') --y;
            else if(i=='E') ++x;
            else if(i=='W') --x;
            if(st.count(to_string(x)+","+to_string(y)))
            return true;
            st.insert(to_string(x)+","+to_string(y));
        }
        return false;


    
        
    }
};