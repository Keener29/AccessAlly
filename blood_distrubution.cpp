//Dylan Keen

#include <iostream>

using namespace std;

int main(){
    //Type O negative
    unsigned int Oneg {};

    //input for types
    cin>>Oneg;

    //patients whose blood type is O negative, O positive, A negative, A positive, B negative, B positive, and AB negative and AB positive
    unsigned int patient_Oneg {};
    unsigned int patient_Opos {};
    unsigned int patient_Aneg {};
    unsigned int patient_Apos {};
    unsigned int patient_Bneg {};
    unsigned int patient_Bpos {};
    unsigned int patient_ABneg{};
    unsigned int patient_ABpos{};
    //input for people
    cout<< "Enter number of patients: ";
    cin>>patient_Oneg>>patient_Opos>>patient_Aneg>>patient_Apos>>patient_Bneg>>patient_Bpos>>patient_ABneg>>patient_ABpos;
;
    //counter for number of patients that can receive blood
    unsigned int counter_patients{0};

    // all patients will be adminstered units starting from the least versatile patient to the most
    // 1. Negative before positive
    // 2. O patients -> A patients -> B patients -> AB patients
    // Subtract values for units and patients as they are given out

    //o -ve patients
    while (patient_Oneg != 0 ){
        //if we run out of o negative units
        if (Oneg == 0){
            break;
        }
        //increase number of patients given blood
        counter_patients+=1;
        //decrease the number of o negative patients
        patient_Oneg -=1;
        //decreaes number of available units of blood
        Oneg -=1;
    }

    //o +ve patients
    while (patient_Opos != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_Opos -=1;
        Oneg -=1;
    }
    //a -ve patients
    while (patient_Aneg != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_Aneg -=1;
        Oneg -=1;
    }
    // b -ve patients
    while (patient_Bneg != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_Bneg -=1;
        Oneg -=1;
    }
    //ab -ve patients
    while (patient_ABneg != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_ABneg -=1;
        Oneg -=1;
    }
    //a +ve patients
    while (patient_Apos != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_Apos -=1;
        Oneg -=1;
    }
    //b +ve patients
    while (patient_Bpos != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_Bpos -=1;
        Oneg -=1;
    }
    //ab +ve patients
    while (patient_ABpos != 0){
        if (Oneg == 0){
            break;
        }
        counter_patients+=1;
        patient_ABpos -=1;
        Oneg -=1;
    }
    cout<<counter_patients;
}