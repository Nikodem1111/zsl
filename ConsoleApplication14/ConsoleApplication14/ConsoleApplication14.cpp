// 
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "headerFile.h"

double history[6] = { 0 }; // Tablica przechowująca historię temperatur
char units[6] = { 0 };     // Tablica przechowująca jednostki temperatur
int dataCounter = 0;
void Menu() {
    std::cout << "1 - przelicz Fahr -> Celsius" << std::endl;
    std::cout << "2 - przelicz Fahr -> Kelwin" << std::endl;
    std::cout << "3 - przelicz Celsius -> Fahr" << std::endl;
    std::cout << "4 - przelicz Celsius -> Kelwin" << std::endl;
    std::cout << "5 - przelicz Kelwin -> Celsius" << std::endl;
    std::cout << "6 - przelicz Kelwin -> Fahr" << std::endl;
    std::cout << "7 - pokaz historie" << std::endl;
    std::cout << "-1 - zakończ działanie programu" << std::endl;
}
void Menu_2() {
    std::cout << "1 - Celcius" << std::endl;
    std::cout << "2 - Fahr" << std::endl;
    std::cout << "3 - Kelwin" << std::endl;
    std::cout << "4 - cała historia" << std::endl;

}
void removeHistory(int usun) {
    if (usun < 1 || usun >(dataCounter / 2)) {
        std::cout << "Nieprawidłowy numer wpisu!" << std::endl;
        return;
    }
    int startIndex = (usun - 1) * 2;
    for (int i = startIndex; i < (dataCounter - 1) * 2; i++) {
        history[i] = history[i + 2];
        units[i] = units[i + 2];
    }
    dataCounter--;
    std::cout << "Wpis usunięty!" << std::endl;
}
void showHistory() {
    std::cout << "Wybierz czego historie wybierasz\n";
    Menu_2();
    int q;
    std::cin >> q;
    switch (q) {
    case 1:
        if (dataCounter == 0) {
            std::cout << "brak danych" << std::endl;
        }
        else {
            for (int i = 0; i < dataCounter; i += 2) {
                if (units[i] == 'C') {
                    std::cout << "<" << (i / 2) + 1 << "> "
                        << history[i] << units[i] << " = "
                        << history[i + 1] << units[i + 1] << std::endl;
                }

                else {
                    continue;
                }
            }
        }
        break;
    case 2:
        if (dataCounter == 0) {
            std::cout << "brak danych" << std::endl;
        }
        else {
            for (int i = 0; i < dataCounter; i += 2) {
                if (units[i] == 'F') {
                    std::cout << "<" << (i / 2) + 1 << "> "
                        << history[i] << units[i] << " = "
                        << history[i + 1] << units[i + 1] << std::endl;
                }
                else {
                    continue;
                }
            }
        }
        break;
    case 3:
        if (dataCounter == 0) {
            std::cout << "brak danych" << std::endl;
        }
        else {
            for (int i = 0; i < dataCounter; i += 2) {
                if (units[i] == 'K') {
                    std::cout << "<" << (i / 2) + 1 << "> "
                        << history[i] << units[i] << " = "
                        << history[i + 1] << units[i + 1] << std::endl;
                }
                else {
                    continue;
                }
            }
        }
        break;
    case 4:
        if (dataCounter == 0) {
            std::cout << "brak danych" << std::endl;
        }
        else {
            for (int i = 0; i < dataCounter; i += 2) {

                std::cout << "<" << (i / 2) + 1 << "> "
                    << history[i] << units[i] << " = "
                    << history[i + 1] << units[i + 1] << std::endl;


            }
        }
        break;
    default:
        std::cout << "nieprawidłowy wybor sprobuj ponownie\n";
        clear();
        break;
    }
}
void clear() {
    std::cout << "Naciśnij Enter, aby kontynuować...";
    std::cin.ignore();
    std::cin.get();
    system("cls");

}
int main()
{
    int a;
    while (true) {
        Menu();
        std::cout << "podaj numer: ";
        std::cin >> a;
        if (a == -1) {
            std::cout << "Koniec działania programu." << std::endl;
            break;
        }
        float fahr, celcius, kelwin, temp;
        char stopnie, history_a, history_b;
        switch (a)
        {
        case 1:
            std::cout << "Podaj temperaturę którą chcesz przeliczyć: ";
            std::cin >> fahr;
            temp = fahr;
            stopnie = 'f';
            temp = check(temp, stopnie);
            if (temp == -9999) {
                std::cout << "nie ma takiej temperatury " << std::endl;
                clear();

            }
            else {
                celcius = FtoC(fahr);
                history_a = 'F';
                history_b = 'C';
                std::cout << fahr << " " << history_a << " to " << celcius << history_b << std::endl;
                if (dataCounter >= 6) {
                    std::cout << "Historia jest pełna. Nowe przeliczenie nie zostało zapisane." << std::endl;
                }
                else {
                    history[dataCounter++] = fahr;
                    units[dataCounter - 1] = history_a;
                    history[dataCounter++] = celcius;
                    units[dataCounter - 1] = history_b;
                }


            }
            clear();
            break;
        case 2:
            std::cout << "Podaj temperaturę którą chcesz przeliczyć: ";
            std::cin >> fahr;

            temp = fahr;
            stopnie = 'f';
            temp = check(temp, stopnie);
            if (temp == -9999) {
                std::cout << "nie ma takiej temperatury " << std::endl;

            }
            else {
                kelwin = FtoK(fahr);
                history_a = 'F';
                history_b = 'K';
                std::cout << fahr << " " << history_a << " to " << kelwin << history_b << std::endl;
                if (dataCounter >= 6) {
                    std::cout << "Historia jest pełna. Nowe przeliczenie nie zostało zapisane." << std::endl;
                }
                else {
                    history[dataCounter++] = fahr;
                    units[dataCounter - 1] = history_a;
                    history[dataCounter++] = kelwin;
                    units[dataCounter - 1] = history_b;
                }

   

            }
            clear();
            break;
        case 3:
            std::cout << "Podaj temperaturę którą chcesz przeliczyć: ";
            std::cin >> celcius;
            temp = celcius;
            stopnie = 'c';
            temp = check(temp, stopnie);
            if (temp == -9999) {
                std::cout << "nie ma takiej temperatury " << std::endl;

            }
            else {
                fahr = CtoF(celcius);
                history_a = 'C';
                history_b = 'F';
                std::cout << celcius << " " << history_a << " to " << fahr << history_b << std::endl;
                if (dataCounter >= 6) {
                    std::cout << "Historia jest pełna. Nowe przeliczenie nie zostało zapisane." << std::endl;
                }
                else {
                    history[dataCounter++] = celcius;
                    units[dataCounter - 1] = history_a;
                    history[dataCounter++] = fahr;
                    units[dataCounter - 1] = history_b;
                }


            }
            clear();
            break;
        case 4:
            std::cout << "Podaj temperaturę którą chcesz przeliczyć: ";
            std::cin >> celcius;
            temp = celcius;
            stopnie = 'c';
            temp = check(temp, stopnie);
            if (temp == -9999) {
                std::cout << "nie ma takiej temperatury " << std::endl;

            }
            else {
                kelwin = CtoK(celcius);
                std::cout << celcius << " " << kelwin << std::endl;
                history_a = 'C';
                history_b = 'K';
                std::cout << celcius << " " << history_a << " to " << kelwin << history_b << std::endl;
                if (dataCounter >= 6) {
                    std::cout << "Historia jest pełna. Nowe przeliczenie nie zostało zapisane." << std::endl;
                }
                else {
                    history[dataCounter++] = celcius;
                    units[dataCounter - 1] = history_a;
                    history[dataCounter++] = kelwin;
                    units[dataCounter - 1] = history_b;
                }

       
            }
            clear();
            break;
        case 5:
            std::cout << "Podaj temperaturę którą chcesz przeliczyć: ";
            std::cin >> kelwin;
            temp = kelwin;
            stopnie = 'k';
            temp = check(temp, stopnie);
            if (temp == -9999) {
                std::cout << "nie ma takiej temperatury " << std::endl;

            }
            else {
                celcius = KtoC(kelwin);

                history_a = 'K';
                history_b = 'C';
                std::cout << kelwin << " " << history_a << " to " << celcius << history_b << std::endl;
                if (dataCounter >= 6) {
                    std::cout << "Historia jest pełna. Nowe przeliczenie nie zostało zapisane." << std::endl;
                }
                else {
                    history[dataCounter++] = kelwin;
                    units[dataCounter - 1] = history_a;
                    history[dataCounter++] = celcius;
                    units[dataCounter - 1] = history_b;
                }


            }
            clear();
            break;
        case 6:
            std::cout << "Podaj temperaturę którą chcesz przeliczyć: ";
            std::cin >> kelwin;
            temp = kelwin;
            stopnie = 'k';
            temp = check(temp, stopnie);
            if (temp == -9999) {
                std::cout << "nie ma takiej temperatury " << std::endl;

            }
            else {
                fahr = KtoF(kelwin);

                history_a = 'K';
                history_b = 'F';
                std::cout << kelwin << " " << history_a << " to " << fahr << history_b << std::endl;
                if (dataCounter >= 6) {
                    std::cout << "Historia jest pełna. Nowe przeliczenie nie zostało zapisane." << std::endl;
                }
                else {
                    history[dataCounter++] = kelwin;
                    units[dataCounter - 1] = history_a;
                    history[dataCounter++] = fahr;
                    units[dataCounter - 1] = history_b;
                }


            }
            clear();
            break;
        default:
            std::cout << "nieprawidłowy wybor sprobuj ponownie\n";
            clear();
            break;
        case 7:
            showHistory();
            clear();
            break;
        case 8:

            //if (dataCounter == 0) {
            //    std::cout << "brak danych" << std::endl;
          //  }
        //    else {
                for (int i = 0; i < dataCounter; i += 2) {

                    std::cout << "<" << (i / 2) + 1 << "> "
                        << history[i] << units[i] << " = "
                        << history[i + 1] << units[i + 1] << std::endl;


              //  }
            }

            int usun;
            std::cout << "Podaj numer wpisu do usunięcia: ";
            std::cin >> usun;
            removeHistory(usun);
            clear();
            break;
        }

    }
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
    float wynik = (stopnie * 9.0 / 5.0) + (32);
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
    float wynik = (stopnie * 9.0 / 5.0) - (459.67);
    return wynik;
}
int check(float temp, char stopnie) {
    switch (stopnie) {
    case 'f':
        if (temp < -469.67) {
            float wynik = -9999;
            return wynik;
        }
        else {
            float wynik = temp;
            return wynik;
        }
    case 'c':
        if (temp < -273.15) {
            float wynik = -9999;
            return wynik;
        }
        else {
            float wynik = temp;
            return wynik;
        }
    case 'k':
        if (temp < 0) {
            float wynik = -9999;
            return wynik;
        }
        else {
            float wynik = temp;
            return wynik;
        }
    }

}