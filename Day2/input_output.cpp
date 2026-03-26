#include <iostream>
using namespace std;

int main (){
   cout <<"Reading sensor value..."<<endl;   
   cout << "Enter a temperature : ";
   

   // storing what user inputed as flot because maybe we could get a decimal value. 
   float temp_value;
   cin >> temp_value;
   cout <<endl;

   // Print the temperature entered by the user
   cout <<"Temperature: "<<temp_value<<"°\n";

   // additional feature for fan status when there's a hot weather. 
   string fan_mode;
   fan_mode = "OFF";
   
// Temperature ranges and system response, including fan control and critical warning
    if (temp_value > 50){
        fan_mode ="ON";
        cout <<"Status: Temperature is high\n";        
        cout <<"WARNING: Critical temperature\n";
        cout <<"Action: Fan "<<fan_mode<<"\n"; 

    }
    else if (temp_value >= 20 && temp_value <= 30 ){

        cout <<"Status: Temperature is normal\n";
        cout <<"Action: Fan "<<fan_mode<<"\n"; 

  
    }
    else if (temp_value >30 ){
        fan_mode = "ON";
        cout <<"Status: Temperature is high\n";
        cout <<"Action: Fan "<<fan_mode<<"\n"; 

    }
    else{
        cout << "Status: Temperature is low\n";
        cout <<"Action: Fan "<<fan_mode<<"\n"; 

    }

    return 0;

}