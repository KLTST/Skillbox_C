#include <iostream>

 int main() {
   int menInDaCity;
   int barberInDaCity;
   int oneBarberPower = 8 * 30;
   int barberNeed;

   std:: cout << "How many men in the city? ";
   std:: cin >> menInDaCity;
   std:: cout << "How many barbers in the city? ";
   std:: cin >> barberInDaCity;
   std:: cout << barberInDaCity << " barbers can cut " << barberInDaCity * oneBarberPower << "\n";

   if (menInDaCity > barberInDaCity * oneBarberPower) {
       barberNeed = menInDaCity / oneBarberPower;
       int remainder = menInDaCity % oneBarberPower;
       if (remainder != 0) {
           barberNeed += 1;
       }
     std::cout << "You need " << barberNeed << " barbers \n";
     std:: cout << "\n";
     std:: cout << "You need more barbers. Hire extra: " << barberNeed - barberInDaCity; }

   else if (menInDaCity == barberInDaCity * oneBarberPower) {
     std:: cout << "Ecxactly enough barbers";
   }
     else {
     std:: cout << "\n";
     std:: cout << "You have enough barbers. You can live with them";

    }
}