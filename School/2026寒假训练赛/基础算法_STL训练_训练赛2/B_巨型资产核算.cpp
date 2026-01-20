#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    pair<string,string> num;
    cin >> num.first >> num.second;
    size_t len_f = num.first.size() -1;
    size_t len_s = num.second.size() -1;
    string sum;
    bool plus = false;
    int one_sum;
    for(int i = len_f, j = len_s; i >= 0 || j >= 0 ; i--, j--)
    {
        one_sum = ((int)num.first[i] - '0') + ((int)num.second[j] - '0');
        if(plus) one_sum++;
        if(one_sum >= 10)
        {
            sum += to_string(one_sum - 10);
            plus = true;
        }
        else
        {
            sum += to_string(one_sum);
            plus = false;
        }
        if(i > 0 && j == 0)
        {
            num.second[j] = '0';
            j++;
        }
        if(j > 0 && i == 0)
        {
            num.first[i] = '0';
            i++;
        }
    }
    reverse(sum.begin(),sum.end());
    cout << sum << endl;

}