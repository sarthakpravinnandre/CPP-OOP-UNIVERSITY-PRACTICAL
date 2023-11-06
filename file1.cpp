#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream file; 
//opening file "sample.txt" in out(write) mode
file.open("abc1.txt",ios::out);
if(!file)
{
cout<<"Error in creating file!!!"<<endl;
}
cout<<"File created successfully."<<endl;
file<<"Welcome to PVG's College of Engineering************ , Nashik";
file.open("abc1.txt",ios::in);
if(!file)
{
cout<<"Error in opening file!!!"<<endl;
}
char ch; 
cout<<"File content: "<<endl;
while(!file.eof())
{
file>>ch; 
cout<<ch;
}
file.close(); 
return 0;
}
