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

    bool getWifiState()
    {
        return wifiState;
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

protected:
    ModelListener* modelListener;

    int tickCounter = 0;
    bool wifiState;
    uint8_t hour = 0;
    uint8_t minute = 0;

    void timeUpdate();
};

#endif // MODEL_HPP
