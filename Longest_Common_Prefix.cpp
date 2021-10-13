Question:

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Soln:

string Equal( string p, string q )
    {
        int l1 = p.size();
        int l2 = q.size();
        int len = min( l1, l2 );
        int i = 0;
        string s;
        while( i < len && p[i] == q[i] )
        {
            s += p[i];
            i++;
        }
        
        return s;
    }
    
    string longestCommonPrefix( vector<string>& strs )
    {
        if( strs.size() == NULL || strs.size() == 0 )
            return "";
        if( strs.size() == 1 )
            return strs[0];
        string pre = strs[0];
        //sort( strs.begin(), strs.end() );
        for( int i = 1; i < strs.size(); i++ )
        {
            pre = equal( pre, strs[i] );
            if( pre ==""  )
            {
                break;
            }
        }
        
        return pre;
    }
