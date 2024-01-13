#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include <string>
#include<unordered_map>
#include<map>

using namespace std;

class solution
{
    unordered_map<string, map<string, int>> targets;
    bool backtracking(int ticketNum, vector<string>& result)
    {
        if (result.size() == ticketNum)
        {
            return true;
        }

        for (pair<const string, int>& target : targets[result[result.size() - 1]])
        {
            if (target.second > 0)
            {
                result.push_back(target.first);
                target.second--;
                if (backtracking(ticketNum, result))return true;
                result.pop_back();
                target.second++;
            }
        }

    }


public:
    vector<string> findItinerary(vector<vector<string>>& tickets)
    {
        targets.clear();
        vector<string> result; 
        for (const vector<string>& vec : tickets)
        {
            targets[vec[0]][vec[1]]++;
        }
        result.push_back("JFK");
        backtracking(tickets.size(), result);
        return result;
    }

};


void main()
{
    vector<vector<string>> tickets = {{"MUC", "LHR"},{"JFK", "MUC"},{"SFO", "SJC"},{"LHR", "SFO"} };
    solution s1;
    s1.findItinerary(tickets);

    system("pause");
}