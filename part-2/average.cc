// Dillon Garcia
// dgarcia0562@csu.fullerton.edu
// dgarcia0562
// partner: audreythomas

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

   if (arguments.size() == 4){ 
     std::cout << "error: you must supply four arguments"; 
     return 1; 
   } 

   std::string street{arguments[1]}; 

   std::string day{arguments[2]}; 

   int hour{}; 
   hour = std::stoi(arguments[3]); 

   int minute{}; 
   minute = std::stoi(arguments[4]);

   if(street != "ash" && street != "beech" && street != "cedar" && street != "date" && street != "elm") { 
     std::cout << "error: invalid street"; 
     return 1; 
   } 

   if (day != "sun" && day != "mon" && day != "tue" && day != "wed" && day != "thu" && day != "fri" && day != "sat") { 
     std::cout << "error: invalid day"; 
     return 1; 
   
   }

  if (hour < 1 (hour) > 24) { 
     std::cout << "error: invalid hour"; 
     return 1; 

   } 

  if (minute < 0 (minute) > 59) { 
     std::cout << "error: invalid minute"; 
     return 1; 

   } 

    bool parking{}; 

   if (street == "ash"){ 
   parking = ParkOnAsh(day, hour); 

   } else if (street == "beech"){ 
     parking = ParkOnBeech(day, hour); 

   } else if (street == "Cedar"){ 
     parking = ParkOnCedar(day, hour); 

   } else if (street == "date"){ 
     parking = ParkOnDate(day, hour, minute); 

   } else if (street == "elm"){ 
     parking = ParkonElm(day,hour, minute) 
   }

   if (parking == true){ 
     std::cout << "allowed"; 

   }else{ 
     std::cout << "not allowed"; 
   } 

  return 0;
}
