#include<iostream>
#include<fstream>

using namespace std;

class DiceRotation {       
  public:              
    int theCount(int goalx, int goaly){
        if ((goalx == 1 and goaly !=4) or (goaly == 1 and goalx !=4) ){
            return 0;
        }
        else if(goalx == 4 and goaly == 4)
        {
            return 4;
        }else if((goalx == 4 and goaly >2) or (goaly == 4 and goalx >2))
        {
            return 3;
        }else
        {
            return 2;
        }
        
    }
};

int main(){
    ifstream infile;
    ofstream outfile;

    infile.open("input.txt");
    outfile.open("output.txt");

    int x,y;
    DiceRotation tc;

    while (!infile.eof())
    {
        infile>>x;
        infile>>y;
        outfile<< tc.theCount(x,y)<<endl;
        cout<< tc.theCount(x,y)<<endl;

    }
    
    infile.close();
    outfile.close();

    return 0;
}