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

        modelListener->updateTime(RTC_Time.Hours, RTC_Time.Minutes, RTC_Time.Seconds);
    }
#endif
}
