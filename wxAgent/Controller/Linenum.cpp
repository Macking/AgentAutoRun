#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
  ifstream in(argv[1]);
  string line;
  vector<string> lines;
  while(getline(in,line))
    lines.push_back(line);
  if(lines.size() == 0) return 0;
  int num = 0;
  const int width = int(log10(lines.size())) + 1;
  for(int i = 0; i < line.size(); i++) {
    cout.setf(ios::right, ios::adjustfield);
    cout.width(width);
    cout << ++num << ") " << line[i] << endl;
  }
}
