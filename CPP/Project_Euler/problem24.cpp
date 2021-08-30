#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool triangleNum(int num){
    int n = 1;
    int t = 0;
    while (t<num)
    {
        t = n*(n+1)/2;
        if (t == num)
        {
           return true;
        }
        

        n++;

    }
    return false;
}

bool triangleWord(string c){
    int n = c.length();
    // cout<<n<<endl;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+=(c[i]-64);
    }
    
    if (triangleNum(sum))
    {
        return true;
    }
    
    

    return false;
}


int main()
{
	string data;
	ifstream infile;
	infile.open("p042_word.txt");
	infile >> data;

	string name[10000];
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
    int count =0;
    for (int i = 0; i < num_name; i++)
    {
        if (triangleWord(name[i]))
        {
            count++;
        }
        
    }
  


    // int n =3;
	// string c = "AKY";
    // cout<<c[0]-64<<endl;

    cout<<count<<endl;

	return 0;
}


