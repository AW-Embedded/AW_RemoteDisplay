#include <gui/main_screen/MainView.hpp>
#include <math.h>

MainView::MainView()
{
    tickCounter = 0;
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();

    // Get last time from model on entry
    digitalClock1.setTime24Hour(presenter->getHours(), presenter->getMinutes(), 0);
    digitalClock1.invalidate();

    // Init screen for current WiFi state
    wifiState = presenter->getWifiState();

    if(wifiState)
        mainWifiLogo.setAlpha(255);
    else
        mainWifiLogo.setAlpha(50);

    mainWifiLogo.invalidate();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::handleTickEvent()
{
    //bool isGreenVisible;
    tickCounter++;

    if((tickCounter % 3) == 0)
    {
        dynamicGraph1.addDataPoint((sinf(tickCounter * 0.07f) + 1) * 40 + rand() % 10);
    }

//    if((tickCounter % 60) == 0)
//    {
//        isGreenVisible = mainStateGreen.isVisible();
//        mainStateGreen.setVisible(!isGreenVisible);
//        mainStateGreen.invalidate();
//    }
}

void MainView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
    digitalClock1.setTime24Hour(hour, minute, second);
    digitalClock1.invalidate();
}
