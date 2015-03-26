#include<iostream>
#include<string>
#include<fstream>
#include"BMI.h"
using namespace std;
int main(){
 BMI bmi;
 float h,w;
 ifstream inFile("file.in",ios::in);
 if(!inFile) {cerr<<"open file error"<<endl;
              return 0;}
 ofstream outFile("file.out",ios::out);
 if(!outFile) {cerr<<"create file error"<<endl;
              return 0;}
 while(1){
 inFile>>h>>w;
 if(h==0.0&&w==0.0) break;
 bmi.setheight(h);
 bmi.setweight(w);
 outFile<<bmi.getBMI()<<"\t"<< bmi.getcategory() <<endl;
 }
 
}
