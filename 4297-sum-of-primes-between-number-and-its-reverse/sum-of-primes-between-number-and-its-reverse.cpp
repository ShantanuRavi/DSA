class Solution {
public:
    int rev(int copy){
        int r = 0;
        while(copy != 0){
            int rem = copy % 10;
            r = r * 10 + rem;
            copy = copy/10;
        }
        return r;
    }
    bool isPrime(int val){
        int count  = 0;
        for(int i = 1; i < val; i++){
            if(val % i == 0){
                count++;
            }
        }
        if(count == 1){
            return true;
        }
        return false;
    }
    int sumOfPrimesInRange(int n) {
        int r = rev(n);
        int n1 = min(n,r);
        int n2 = max(n,r);
        int sum = 0;
        for(int i = n1; i <= n2; i++){
            if(isPrime(i)){
                sum += i;
            }
        }
        return sum;  
    }
};