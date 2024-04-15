int reverse(int x){
    int r;
    int rev=0;
    while(x!=0){
        r=x%10;
        if ((x > 0 && rev > (0x7fffffff - r) / 10) ||(x < 0 && rev < ((signed)0x80000000 - r) / 10)) {
            return 0;  
        }
        rev=rev*10+r;
        x/=10;
        
    }
    return rev;

}
