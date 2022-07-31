#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include "stm32f7xx_hal.h"

extern RTC_HandleTypeDef hrtc;
extern RTC_TimeTypeDef RTC_Time;
extern RTC_DateTypeDef RTC_Date;
#endif

Model::Model() : modelListener(0), wifiState(false)
{
    tickCounter = 0;

#ifndef SIMULATOR
    // Get initial time
    HAL_RTC_GetTime(&hrtc, &RTC_Time, FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &RTC_Date, FORMAT_BIN);

    hour = RTC_Time.Hours;
    minute = RTC_Time.Minutes;
#endif
}

void Model::tick()
{
#ifndef SIMULATOR
    tickCounter++;

    // Update time once a second
    if((tickCounter % 60) == 0)
    {
        HAL_RTC_GetTime(&hrtc, &RTC_Time, FORMAT_BIN);
        HAL_RTC_GetDate(&hrtc, &RTC_Date, FORMAT_BIN);

        hour = RTC_Time.Hours;
        minute = RTC_Time.Minutes;

        modelListener->updateTime(RTC_Time.Hours, RTC_Time.Minutes, RTC_Time.Seconds);
    }
#endif
}
