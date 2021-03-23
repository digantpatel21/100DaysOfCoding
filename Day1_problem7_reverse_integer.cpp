class Solution {
public:
    int reverse(int x) {
        long int number = 0;
        
        while(x != 0)
        {
            number = number*10 + x%10;
            x = x/10;
        }
        
        return number > INT_MAX || number < INT_MIN ? 0 : (int)number;
    }
};
