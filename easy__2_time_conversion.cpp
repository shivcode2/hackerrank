//Question link: https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    int ss = stoi(s.substr(6, 2));
    string meridian = s.substr(8, 2);


    if (meridian == "PM" && hh != 12) {
        hh += 12;
    } 
    else if (meridian == "AM" && hh == 12) {
        hh = 0;
    }
    
    string output = "";
    output.append(to_string(hh).insert(0, 2 - to_string(hh).length(), '0') + ":");
    output.append(to_string(mm).insert(0, 2 - to_string(mm).length(), '0') + ":");
    output.append(to_string(ss).insert(0, 2 - to_string(ss).length(), '0'));
  return output;

}






int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
