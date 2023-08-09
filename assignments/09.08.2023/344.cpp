//recursive solution

    // void solve(vector<char>&s, int& st, int& en)
    // {
    //     //base case
    //     if(st>=en)
    //     {
    //         return;
    //     }

    //     swap(s[st],s[en]);
    //     st = st + 1;
    //     en = en - 1;
    //     solve(s,st,en);

    // }

    void reverseString(vector<char>& s) {
        
        //iterative solution

        int n = s.size();
        int st = 0, en = n-1;

        while(st<=en)
        {
            swap(s[st++],s[en--]);
        }


        // int st = 0,en = s.size()-1;
        // solve(s,st,en);

    }