#include<string>
using namespace std;
class BMI{
public:
     void setheight(float h);
     void setweight(float w);
     float getBMI();
     string getcategory(); 
private:
     float height;
     float weight;
     float BMI;
};
