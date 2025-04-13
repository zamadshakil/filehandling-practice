#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string line;
	int num, count=0, sum=0;

	ifstream getfile("integer.txt");
	if (!getfile){
		cerr << "Error opening file" << endl;
		return 1;

	}
	while (getfile.is_open()) {
		//num = getfile.get(); testing 
		getfile >> num;
		sum += num;
		count++;

	}
	int avg = sum / count;
	ofstream writefile("result.txt");
	
	if (writefile.fail()){
		cerr << "Error writing file content in result.txt." << endl;
		return 1;

	}
	else {
		writefile << "The sum is: " << sum << endl << "The avg is: " << avg;
		cout << "Content written in the file successfully." << endl;
	}



	return 0;

}
