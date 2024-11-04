
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
float FtoC(float stopnie);
float FtoK(float stopnie);
float CtoF(float stopnie);
float CtoK(float stopnie);
float KtoC(float stopnie);
float KtoF(float stopnie);
int check(float temp, char stopnie);
void Menu(){
     std::cout<<"1 - przelicz Fahr -> Celsius"<<std::endl;
std::cout<<"2 - przelicz Fahr -> Kelwin"<<std::endl;
std::cout<<"3 - przelicz Celsius -> Fahr"<<std::endl;
std::cout<<"4 - przelicz Celsius -> Kelwin"<<std::endl;
std::cout<<"5 - przelicz Kelwin -> Celsius"<<std::endl;
std::cout<<"6 - przelicz Kelwin -> Fahr"<<std::endl;
std::cout<<"7 - zakończ działanie programu"<<std::endl;
}
int main()
{
    int a;
      while (true) {
   Menu();
std::cout<<"podaj numer: ";
std::cin>>a;
 if (a >= 7) {
            std::cout << "Koniec działania programu." << std::endl;
            break;
        }
    float fahr, celcius, kelwin, temp;
    char stopnie;
    switch(a)
    {
        case 1:
    std::cout<<"Podaj temperaturę którą chcesz przeliczyć: ";       
   std::cin>>fahr;
   temp=fahr;
   stopnie = 'f';
   temp = check(temp, stopnie);
   if(temp==-9999){
            std::cout<<"nie ma takiej temperatury ";
      break; 
   }
   else{
      celcius = FtoC(fahr);
      std::cout<<fahr<<" "<<celcius<<std::endl;
      break;}
        case 2:
   std::cout<<"Podaj temperaturę którą chcesz przeliczyć: ";       
   std::cin>>fahr;
     
       temp=fahr;
   stopnie = 'f';
   temp = check(temp, stopnie);
   if(temp==-9999){
            std::cout<<"nie ma takiej temperatury ";
      break; }
      else{
           kelwin = FtoK(fahr);
      std::cout<<fahr<<" "<<kelwin<<std::endl;
      break;}
        case 3:
   std::cout<<"Podaj temperaturę którą chcesz przeliczyć: ";       
   std::cin>>celcius;
   temp = celcius;
   stopnie = 'c';
      temp = check(temp, stopnie);
   if(temp==-9999){
            std::cout<<"nie ma takiej temperatury ";
      break; }
      else{
      fahr = CtoF(celcius);
      std::cout<<celcius<<" "<<fahr<<std::endl;
     break;}
        case 4:
  std::cout<<"Podaj temperaturę którą chcesz przeliczyć: ";       
   std::cin>>celcius;
    temp = celcius;
   stopnie = 'c';
      temp = check(temp, stopnie);
   if(temp==-9999){
            std::cout<<"nie ma takiej temperatury ";
      break; }
      else{
      kelwin = CtoK(celcius);
       std::cout<<celcius<<" "<<kelwin<<std::endl;
     break;}
         case 5:
    std::cout<<"Podaj temperaturę którą chcesz przeliczyć: ";       
   std::cin>>kelwin;
    temp = kelwin;
   stopnie = 'k';
      temp = check(temp, stopnie);
   if(temp==-9999){
            std::cout<<"nie ma takiej temperatury ";
      break; }
      else{
      celcius = KtoC(kelwin);
      std::cout<<kelwin<<" "<<celcius<<std::endl;
           break;   }   
        case 6:
     std::cout<<"Podaj temperaturę którą chcesz przeliczyć: ";       
   std::cin>>kelwin;
    temp = kelwin;
   stopnie = 'k';
      temp = check(temp, stopnie);
   if(temp==-9999){
            std::cout<<"nie ma takiej temperatury ";
      break; }
      else{
      fahr = KtoF(kelwin);
       std::cout<<kelwin<<" "<<fahr<<std::endl;
           break; }
          default:
            std::cout << "nieprawidłowy wybor sprobuj ponownie\n";
            break; 
    }}
    return 0;
}
float FtoC(float stopnie) { //naglowek funkcji
   float wynik = (5.0 / 9.0) * (stopnie - 32.0);
   return wynik;
}
float FtoK(float stopnie) { //naglowek funkcji
   float wynik = (5.0 / 9.0) * (stopnie + 459.67);
   return wynik;
}
float CtoF(float stopnie) { //naglowek funkcji
   float wynik = (stopnie * 9.0 / 5.0) +(32);
   return wynik;
}
float CtoK(float stopnie) { //naglowek funkcji
   float wynik = (stopnie + 273.15);
   return wynik;
}
float KtoC(float stopnie) { //naglowek funkcji
   float wynik = (stopnie - 273.15);
   return wynik;
}
float KtoF(float stopnie) { //naglowek funkcji
   float wynik = (stopnie * 9.0/5.0)- (459.67);
   return wynik;
}
int check(float temp, char stopnie){
    switch(stopnie){
    case 'f':
        if(temp<-469.67){
            float wynik = -9999;
            return wynik;
        }
        else{
            float wynik = temp;
            return wynik;
        }
    case 'c':
    if(temp<-273.15){
            float wynik = -9999;
            return wynik;
        }
        else{
            float wynik = temp;
            return wynik;
        }
  case 'k':
    if(temp<0){
            float wynik = -9999;
            return wynik;
        }
        else{
            float wynik = temp;
            return wynik;
        }      
}
    
}