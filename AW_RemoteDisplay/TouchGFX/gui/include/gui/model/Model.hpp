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

    bool wifiState;
};

#endif // MODEL_HPP
