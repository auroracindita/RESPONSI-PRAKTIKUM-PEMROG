#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> nums) {
    int maxVal = nums[0];
    for (int num : nums) {
        if (num > maxVal)
            maxVal = num;
    }
    return maxVal;
}

int main () {
    int n, num;
    vector<int> numbers;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }

    cout << "Maximum value: " << findMax(numbers) << endl;
    return 0;
}