#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& arr){
        //sort the vector of strings
        sort(arr.begin(),arr.end());
        //getting the first and last strings in the sorted list
        string first = arr.front();
        string last = arr.back();
        int minLength = min(first.size(),last.size());
        int i = 0;
        //find the common prefix. basically you will go until its not equal or the minlength is hit
        while(i < minLength && first[i] == last[i]){
            i++;
        }
        //retuirn the common prefix
        return first.substr(0,i);
    }

int main(){
    vector<string> arr = {"geeksforfeeks","geeks","geek","geezer"};
    cout << longestCommonPrefix(arr) << "\n";
    return 0;
}