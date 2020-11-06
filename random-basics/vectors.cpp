#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<double> nums;
    for (double num; cin >> num;) {
        nums.push_back(num);
    }

    // get mean
    double sum = 0;
    for (int x: nums) sum += x;
    cout << "sum: " << sum << endl;
    cout << "mean: " << sum/nums.size() << endl;

    // get median
    cout << "median: " << nums[nums.size()/2] << endl;
}