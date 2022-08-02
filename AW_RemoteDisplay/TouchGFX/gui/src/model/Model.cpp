#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include "stm32f7xx_hal.h"

extern RTC_HandleTypeDef hrtc;
extern RTC_TimeTypeDef RTC_Time;
extern RTC_DateTypeDef RTC_Date;

extern "C" {
    extern void wifi_enable_hw(bool enableState);
    extern bool wifi_connect_hw(char* ssid, char* pw);
}
#endif

Model::Model() : modelListener(0), wifiState(false), wifiConnected(false)
{
    tickCounter = 0;

    // Get initial time
    timeUpdate();
}

void Model::tick()
{
    tickCounter++;

    // Update time once a second
    if((tickCounter % 60) == 0)
    {
        timeUpdate();
        modelListener->updateTime(hour, minute, 0);
    }
}

void Model::timeUpdate()
{
#ifndef SIMULATOR
    HAL_RTC_GetTime(&hrtc, &RTC_Time, FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &RTC_Date, FORMAT_BIN);

    hour = RTC_Time.Hours;
    minute = RTC_Time.Minutes;
#endif
}

void Model::wifiEnable(bool enableState)
{
#ifndef SIMULATOR
    wifi_enable_hw(enableState);
#endif
}

bool Model::wifiConnect(char* ssid, char* pw)
{
#ifndef SIMULATOR
    wifiConnected =  wifi_connect_hw(ssid, pw);
    return wifiConnected;
#else
   return false;
#endif
}
