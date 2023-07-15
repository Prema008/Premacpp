//Weather App
//Prema 
//Vivekananda College of Engineering For Women//





#include <iostream>
#include <string>

class Weather {
private:
    std::string city;
    double temperature;
    double humidity;

public:
    Weather(const std::string& cityName, double temp, double humid)
        : city(cityName), temperature(temp), humidity(humid) {}

    void setCity(const std::string& cityName) {
        city = cityName;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    void setHumidity(double humid) {
        humidity = humid;
    }

    std::string getCity() const {
        return city;
    }

    double getTemperature() const {
        return temperature;
    }

    double getHumidity() const {
        return humidity;
    }

    void displayWeather() const {
        std::cout << "City: " << city << std::endl;
        std::cout << "Temperature: " << temperature << "°C" << std::endl;
        std::cout << "Humidity: " << humidity << "%" << std::endl;
    }
};

int main() {
    Weather weather("New York", 25.5, 60.0);
    weather.displayWeather();

    std::cout << "\nUpdating weather..." << std::endl;

    weather.setCity("London");
    weather.setTemperature(20.0);
    weather.setHumidity(75.0);

    std::cout << "\nUpdated weather:" << std::endl;
    weather.displayWeather();

    return 0;
}



