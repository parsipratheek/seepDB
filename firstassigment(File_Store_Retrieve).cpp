#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cout << "Enter 1 to store or 2 to retrieve: ";
    cin >>n;  
    cin.ignore();
if(n==1){
string name;
cout << "you enter a word called: "; 

getline(cin,name);


ofstream myfile;
  myfile.open ("example.txt");
  myfile <<""<< name;
  myfile.close();
 }
else if(n==2){
  string name;
  ifstream retrieve("example.txt");
  
  getline(retrieve,name);
	cout<<"Retrived word:"<< name <<endl;
}
else{
  cout <<"First store something (enter 1 to store)"<< endl;
}

return 0;
}
