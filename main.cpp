#include <iostream>
#include <string>

class Car {
private:
    // Prywatne atrybuty klasy Car
    std::string brand;    // Marka samochodu
    std::string model;    // Model samochodu
    int year;             // Rok produkcji

public:
    // Konstruktor domyślny
    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    // Konstruktor z parametrami
    Car(const std::string& brand, const std::string& model, int year) 
        : brand(brand), model(model), year(year) {}

    // Getter dla marki samochodu
    std::string getBrand() const {
        return brand;
    }

    // Setter dla marki samochodu
    void setBrand(const std::string& brand) {
        this->brand = brand;
    }

    // Getter dla modelu samochodu
    std::string getModel() const {
        return model;
    }

    // Setter dla modelu samochodu
    void setModel(const std::string& model) {
        this->model = model;
    }

    // Getter dla roku produkcji samochodu
    int getYear() const {
        return year;
    }

    // Setter dla roku produkcji samochodu
    void setYear(int year) {
        if (year > 1885) { // Rok produkcji samochodu nie może być mniejszy niż 1886
            this->year = year;
        } else {
            std::cout << "Błędny rok produkcji! Samochody zaczęto produkować w 1886.\n";
        }
    }

    // Funkcja wyświetlająca informacje o samochodzie
    void displayInfo() const {
        std::cout << "Marka: " << brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Rok produkcji: " << year << "\n";
    }
};

int main() {
    // Tworzenie obiektu klasy Car
    Car myCar("Toyota", "Corolla", 2020);

    // Wyświetlanie informacji o samochodzie
    myCar.displayInfo();

    // Zmiana roku produkcji na 2018 za pomocą settera
    myCar.setYear(2018);

    // Wyświetlanie informacji o samochodzie po zmianie
    std::cout << "\nPo zmianie roku produkcji:\n";
    myCar.displayInfo();

    // Próba ustawienia nieprawidłowego roku produkcji
    myCar.setYear(1800); // Wyświetli błąd

    return 0;
}
