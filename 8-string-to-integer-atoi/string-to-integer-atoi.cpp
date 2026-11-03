class Solution {
public:
    int myAtoi(string s) {

        if(s.size() == 0) return 0;
        
        bool neg = false;
        bool signHandled = false;
        long long ans = 0;
        int i = 0;

        while( i < s.size() && s[i] == ' ') i++;

        while( i < s.size() ) 
        {
            char ch = s[i];
         
            if( !signHandled && ch == '-' )
            {
                neg = true;
                i++;
                signHandled = true;
                continue;
            }
            else if ( !signHandled && ch == '+')
            {
                neg = false;
                signHandled = true;
                i++;
                continue;
            }
        
            if( ch >= '0' && ch <= '9')
            {
                signHandled = true;
                int dig = ch - '0';

                if(neg){
                    if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && dig > 8))
                        return INT_MIN;
                }
                else {
                    if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && dig > 7))
                        return INT_MAX;
                }

                ans = ans*10 + dig;

            } else{
                break;
            }
            i++;
        }
        if(neg){
            ans = -ans;
        }
        return (int)ans;
    }
};
