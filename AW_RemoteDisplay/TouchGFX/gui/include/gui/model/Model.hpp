#ifndef MODEL_HPP
#define MODEL_HPP

#include <touchgfx/hal/Types.hpp>

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveWifiState(bool state)
    {
        wifiState = state;
    }

    // User has enabled / disabled WiFi
    bool getWifiState()
    {
        return wifiState;
    }

    // WiFi has an active connection
    bool getWifiConnected()
    {
        return wifiConnected;
    }

    uint8_t getMinutes()
    {
        return minute;
    }

    uint8_t getHours()
    {
        return hour;
    }

    void wifiEnable(bool enableState);
    bool wifiConnect(char* ssid, char* pw);

protected:
    ModelListener* modelListener;

    int tickCounter = 0;
    bool wifiState;
    bool wifiConnected;
    uint8_t hour = 0;
    uint8_t minute = 0;

    void timeUpdate();
};

#endif // MODEL_HPP
