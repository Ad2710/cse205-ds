//recursive
    bool solve(int &n)
    {
        if(n == 0)
        {
            return false;
        }

        if(n%2 == 0)
        {
            n = n / 2;
            solve(n);
        }

        if(n == 1)
        {
            return true;
        }

        return false;
    }

    bool isPowerOfTwo(int &n) {

        // if(n == 0)
        // {
        //     return false;
        // }

        // while(n!=0)
        // {
        //     if(n == 1)
        //     {
        //         return true;
        //     }

        //     if(n%2 != 0){
        //         return false;
        //     }
        //     else
        //     {
        //         n = n / 2;
        //     }
        // }

        return solve(n);
        
    }