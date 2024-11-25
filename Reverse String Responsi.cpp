#include <iostream>
#include <algorithm>
using namespace std;

string reverseString(string str){
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Reversed string: " << reverseString(input) << endl;

    return 0;

}