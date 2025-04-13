#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	const int n = 10;
	int arr1[n], num;
	ifstream getfile("data.txt");
	
	if (!getfile.is_open()) {
		cerr << "Error reading data from file" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		getfile >> arr[i];

	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j + 1] > arr[j]) {
				swap(arr[j + 1], arr[j]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}

//int main()
//{
//	string line;
//	int num, count=0, sum=0;
//	cout << "check" << endl;
//	ifstream getfile("integer.txt");
//	if (!getfile){
//		cerr << "Error opening file" << endl;
//		return 1;
//
//	}
//	while (getfile >> num) {
//		//num = getfile.get(); testing 
//		sum += num;
//		count++;
//
//	}
//	int avg = sum / count;
//	ofstream writefile("result.txt");
//	
//	if (writefile.fail()){
//		cerr << "Error writing file content in result.txt." << endl;
//		return 1;
//
//	}
//	else {
//		writefile << "The sum is: " << sum << endl << "The avg is: " << avg;
//		cout << "Content written in the file successfully." << endl;
//	}
//
//
//
//	return 0;
//
//}





















