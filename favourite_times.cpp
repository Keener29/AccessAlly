//Dylan Keen
#include <iostream>

using namespace std;

unsigned int nextHour(unsigned t){
    //convert to 1:00
    if (t == 1260){
        return 100;
    }

    return ( (t-60)+100);
}

int main() {
    // input value
    unsigned int mins {};

    // let 12:00 a.m. represent 0
    cout<<"Enter number of minutes: ";
    cin >> mins;
    int time {1200};

    //counter for number of occurences
    unsigned long int counter{};

    //variables to hold digits
    int digit4 {};
    int digit3 {};
    int digit2 {};
    int digit1 {};

    for (unsigned long i{}; i<=mins; i+=1){
        // set to next hour after #:59 passes
        if ( (time % 100) == 60){
            time  = nextHour(time);
        }

        //if number has 3 digits 100
        if ( (time/1000) == 0) {
            //seperating the three digits into seperate varibles
            int digit3 = time%10;
            int digit2 = (time%100)/10;
            int digit1 = time/100;

            //if the differences between each consecutive digits are the same, then add to the counter
            if ( (digit3 - digit2) == (digit2 - digit1)){
                counter+=1;
            }
        }
        else {
            //seperating the four digits into seperate variables 1234
            int digit4 = time%10;
            int digit3 = (time%100)/10;
            int digit2 = (time%1000)/100;
            int digit1 = time/1000;

            if ( ((digit4 - digit3) == (digit3 - digit2)) && ( (digit3 - digit2) == (digit2 - digit1))){
                counter+=1;
            }
        }

        //increment by one minute
        time += 1;
    }
    cout<<counter;
}