#include <iostream>

using namespace std;

float model(float year,
            float km_driven,
            float fuel_Diesel,
            float fuel_Electric,
            float fuel_LPG,
            float fuel_Petrol,
            float seller_type_Individual,
            float seller_type_Trustmark_Dealer,
            float transmission_Manual,
            float owner_Fourth_and_Above_Owner,
            float owner_Second_Owner,
            float owner_Test_Drive_Car,
            float owner_Third_Owner)
{
    float prediction = 149688.999744 * year - 49258.412716 * km_driven + 146649.985510 * fuel_Diesel - 11304.751995 * fuel_Electric + 5419.717299 * fuel_LPG - 7297.080696 * fuel_Petrol - 25802.779434 * seller_type_Individual + 24531.468884 * seller_type_Trustmark_Dealer - 273774.485929 * transmission_Manual - 1696.295901 * owner_Fourth_and_Above_Owner - 14611.147442 * owner_Second_Owner + 10297.650184 * owner_Test_Drive_Car - 8607.130414 * owner_Third_Owner + 510002.26102698944;
    return prediction;
}
