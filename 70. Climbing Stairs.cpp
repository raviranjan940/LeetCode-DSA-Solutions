int climbStairs(int n) {
        vector<int> stp(n, 0);

        if(n == 1) return 1;
        stp[0] = 1;
        stp[1] = 2;
        for(int i=2; i<n; i++){
            stp[i] = stp[i-1]+stp[i-2];
        }
        return stp[n-1];
    }
