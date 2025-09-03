#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;


void draw(string lines[]);

int main(){

  string lines[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

  draw(lines);


 return 0;
}


void draw(string lines[]){

  cout << '\t' << "|" << "     "<< "|" << "     " <<"|"<< "     " << '\n';
  cout << '\t' << "|" << "  "<<lines[0]<<"  "<< "|" << "  "<<lines[1]<<"  " <<"|"<< "  "<<lines[2]<<"  " << '\n';
  cout << '\t' << "|" << "  "<<lines[3]<<"  "<< "|" << "  "<<lines[1]<<"  " <<"|"<< "  "<<lines[4]<<"  " << '\n';
   
}


