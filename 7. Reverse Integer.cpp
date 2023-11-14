nt reverse(int x) {
        int num = x;
        long long ans=0;
        while(num != 0){
            int rem = num%10;
            ans = ans * 10 + rem;
            num = num/10;
        }
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        return ans;
    }
