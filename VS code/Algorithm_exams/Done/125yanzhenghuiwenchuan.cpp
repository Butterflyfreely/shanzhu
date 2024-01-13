#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;



class solution
{

public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }

            while (left < right && !isalnum(s[right]))
            {
                right--;
            }

            if(left < right)
            {
                if (tolower(s[left]) != tolower(s[right]))
                {
                    return false;
                }
                left++;
                right--;

            }
        }
        return true;
    }


};


void main()
{
    solution s1;

    string s = "A man, a plan, a canal: Panama";
    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);
    s1.isPalindrome(s);


    system("pause");
}


