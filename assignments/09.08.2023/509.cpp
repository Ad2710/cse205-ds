int fib(int n) {
        //recursive solution
        //base case
        if(n == 0 || n == 1)
        {
            return n;
        }

        return fib(n-1) + fib(n-2);


        //iterative solution
        
        // int a = 0; int b = 1;

        // int sum = 0;

        // for(int i = 1 ; i < n; i++)
        // {
        //     sum += a + b;
        //     a = b;
        //     b = sum;
        // }

        // return sum;
    }