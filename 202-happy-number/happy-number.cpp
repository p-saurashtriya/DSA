class Solution {
public:
int sum(int n){
    int s = 0;
    while(n){
        int d = n%10;
        s += d*d;
        n /= 10;
    }
    return s;
}
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            slow = sum(slow);
            fast = sum(sum(fast));

        }while(slow != fast);

        return slow == 1;
    }
};