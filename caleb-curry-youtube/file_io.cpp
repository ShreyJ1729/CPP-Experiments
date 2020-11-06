#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data;

    std::ifstream input ("input.txt");
    int num;
    while (input >> num)
    {
        data.push_back(num);
    }

    std::sort(data.begin(), data.end());

    std::ofstream output ("output.txt");
    
    for (int i : data)
    {
        output << i << ",\n";
    }
}