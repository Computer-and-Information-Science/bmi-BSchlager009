#include <iostream>
using namespace std;

int main() {
    //Declare values
    const int height = 61;
    const int weight = 130;
    //Convert Units
    double kg = weight*0.453592;
    double m = height*0.0254;
    //Calc BMI
    double BMI = kg/(m*m);
    //Print :D
    cout<<"The BMI for this person is : "<<BMI<<'.'<<endl;
}
