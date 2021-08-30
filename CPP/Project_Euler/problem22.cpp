#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sapXep(string a[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int  j = i; j < n; j++)
		{
			if (a[i] > a[j]) {
				//swap
				string temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	string data;
	ifstream infile;
	infile.open("p022_name.txt");
	infile >> data;

	string name[100];
	bool start = true;

	int num_name = 0;

	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] == '"' ) {
			if (start) {
				
				start = false;
			}
			else
			{
				num_name++;
				start = true;
			}
		}
		else {
			if (data[i] != ',') {
				name[num_name] += data[i];

			}
		}
	}

	sapXep(name, num_name);

	//cout << name[0].length() << endl;
	//cout << name[0][2] - 64;



	long int total = 0;

	for (int i = 0; i < num_name; i++)
	{
		long int sum = 0;

		for (int j = 0; j < name[i].length(); j++)
		{
			sum += name[i][j] - 64;
		}
		total += (i + 1) * sum;

		//cout << sum << endl;
		//cout << name[i][0] << "\n";
	}

	cout << total<< "\n";

	return 0;
}


