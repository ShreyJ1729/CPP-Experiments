#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    std::vector<int> data;

    // read in data + store in vector
    std::ifstream input("input.txt");
    int num;
    while (input >> num)
    {
        data.push_back(num);
    }
    input.close();

    // sort vector<int>
    std::sort(data.begin(), data.end());

    std::ofstream output("output.txt");

    if (input.is_open())
        std::cout << "Opened input successfully!";

    // write sorted to output file
    for (int i : data)
    {
        output << i << ",\n";
    }

    std::ifstream input2("input.txt");
    // second method is file.get() --> gets characters one at a time
    char input_char = input2.get(); // you can put this in a loop to get all
    std::cout << input_char << std::endl;
    input2.close();

    std::ifstream input3("input.txt");
    // third way is using getline()
    std::string input_line;
    getline(input3, input_line);
    std::cout << input_line << std::endl;
}