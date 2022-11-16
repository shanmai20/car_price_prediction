#include <iostream>

using namespace std;

float model(float year,float km_driven,float fuel_Diesel,float fuel_Electric,float fuel_LPG,float fuel_Petrol,float seller_type_Individual,float seller_type_Trustmark_Dealer,float transmission_Manual,float owner_Fourth_and_Above_Owner,float owner_Second_Owner,float owner_Test_Drive_Car,float owner_Third_Owner);

int main()
{

    float year = 0.0;
    float km_driven = 0.0;
    float fuel_Diesel = 0.0;
    float fuel_Electric = 0.0;
    float fuel_LPG = 0.0;
    float fuel_Petrol = 0.0;
    float seller_type_Individual = 0.0;
    float seller_type_Trustmark_Dealer = 0.0;
    float transmission_Manual = 0.0;
    float owner_Fourth_and_Above_Owner = 0.0;
    float owner_Second_Owner = 0.0;
    float owner_Test_Drive_Car = 0.0;
    float owner_Third_Owner = 0.0;
    float prediction = model(year,km_driven,fuel_Diesel,fuel_Electric,fuel_LPG,fuel_Petrol,seller_type_Individual,seller_type_Trustmark_Dealer,transmission_Manual,owner_Fourth_and_Above_Owner,owner_Second_Owner,owner_Test_Drive_Car,owner_Third_Owner);
    cout << "Prediction Value:" << prediction << endl;
    return 0;
}