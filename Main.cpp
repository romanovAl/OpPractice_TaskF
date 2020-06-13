#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> getArrFromFile(istream & in) {

	vector<string> vec;

	for (string line; getline(in, line);) {
		vec.push_back(line);
	}
	
	return vec;
}

int main(int argc, char* argv[]) {


	vector<vector<string>> vec;

	for (int i = 0; i < argc; ++i) {
		ifstream file(argv[i]);

		cout << argv[i] << endl;

		vec.push_back(getArrFromFile(file)); 


	}

	 for (auto& x : vec) {
		   cout << endl;
		   for(auto&y : x){
		     cout << y ;
		   }
		 }

	/*vector<string> firstVec = vec[0];*/


	/*for (auto& x : firstvec) {
		cout << x << "---" << endl;
		for (size_t i = 1; i < size(vec); i++) {
			if (binary_search(vec[i].begin(), vec[i].end(), x)) {
				cout << "found" << x << endl;
			}
		}
	}*/

	

	
	return 0;
}