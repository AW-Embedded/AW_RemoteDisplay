#ifndef MODEL_HPP
#define MODEL_HPP

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

protected:
    ModelListener* modelListener;

    int tickCounter = 0;
    bool wifiState;
};

#endif // MODEL_HPP
