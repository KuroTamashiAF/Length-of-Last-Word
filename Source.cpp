#include <iostream>
#include <vector>
#include<stack>

using namespace std;

class Solution {
public:
    static int lengthOfLastWord(string s) {
        string bb = s;
        if (bb.empty())
            return 0;
       bb.erase(0, bb.find_first_not_of(" "));
       bb.erase(bb.find_last_not_of(" ")+1);
             
       
        int count = 0;

        for (int i = bb.length()-1; i>=0; i--)
        {
           
            if (bb.at(i) != ' ')
                count++;
            else
            {
                break;
            }

           

        }
        return count;
    }
};



int main()
{
    string aaa = "   fly me   to   the moon  ";

    cout << Solution::lengthOfLastWord(aaa) << endl;
    return 0;
}