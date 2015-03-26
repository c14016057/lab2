#include"BMI.h"
void BMI::setheight(float h){
  height=h;
}
void BMI::setweight(float w){
 weight=w;
}
float BMI::getBMI(){
 BMI=weight/height/height*10000;
 return BMI; 
}
string BMI::getcategory(){
if(BMI<15) return "Very severely underweight";
else if((BMI>=15)&&(BMI<16)) return "Severely underweight";
else if((BMI>=16)&&(BMI<18.5)) return "Underweight";
else if((BMI>=18.5)&&(BMI<25)) return "Normal";
else if((BMI>=25)&&(BMI<30)) return "Oberweight";
else if((BMI>=30)&&(BMI<35)) return "Obese Class I(Moderately obese)";
else if((BMI>=35)&&(BMI<40)) return "Obese Class II(Severely obese)";
else return "Obese Class III(Very severely obese)";
}
