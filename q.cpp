#include <iostream>
#include <vector>
using namespace std;

void write_help() {
    cout << "usage: q.exe [options] n1 n2 ..." << endl;
    cout << "options:" << endl;
    cout << "  --help\t display this message" << endl;
}

void write_version() {
    cout << "Course work for option 4.3, created by Molchanova Margarita.\n";
}

struct Config {
    vector<int> nums;
    bool isInterupted;
};

Config parse_arguments(int argc, const char* argv[]) {
    Config cfg; // { vector, bool }
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            if (string(argv[i]) == "--help") write_help();
            else if (string(argv[i]) == "--version") write_version();
            else cout << "wrong argument: " << argv[i] << endl;
            cfg.isInterupted = true;
        } else {
            cfg.nums.push_back(stod(argv[i]));
        }
    }
    return cfg;
}

int main(int argc, const char* argv[]) {  
    int res = 0; 
    Config pars_results = parse_arguments(argc, argv);
    vector<int> nums = pars_results.nums;
    bool isInterupted = pars_results.isInterupted;
    cout << isInterupted << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    // if (pars_results.isInterupded) return 0;  
}