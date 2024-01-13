
#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;


class solution
{
public:
    string reverseVowels(string s) {
        unordered_map<char, int> map =
        {
            {'a',1},
            {'e',1},
            {'i',1},
            {'o',1},
            {'u',1}
        };
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (map[tolower(s[left])] ==1)
            {
                if(left < right)
                {
                    while(map[tolower(s[right])] == 1 && map[tolower(s[left])] == 1)
                    {
                        swap(s[left], s[right]);
                        right--;
                        left++; 
                        continue;
                    }
                    right--;
                }
            }
            left++;
        }
        cout << s << endl;
        return s;
    }

};


void main()
{
    solution s1;


    string str = "race a car";
    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);
    s1.reverseVowels(str);

    system("pause");
}



