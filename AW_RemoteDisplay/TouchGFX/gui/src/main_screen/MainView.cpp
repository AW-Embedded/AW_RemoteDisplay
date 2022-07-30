#include <gui/main_screen/MainView.hpp>
#include <math.h>

MainView::MainView()
{
    tickCounter = 0;
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();

    // Init screen for current WiFi state
    wifiState = presenter->getWifiState();
    mainWifiLogo.setVisible(wifiState);
    mainWifiLogo.invalidate();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::handleTickEvent()
{
    bool isGreenVisible;
    tickCounter++;

    if((tickCounter % 3) == 0)
    {
        dynamicGraph1.addDataPoint((sinf(tickCounter * 0.07f) + 1) * 40 + rand() % 10);
    }

    if((tickCounter % 60) == 0)
    {
        isGreenVisible = mainStateGreen.isVisible();
        mainStateGreen.setVisible(!isGreenVisible);
        mainStateGreen.invalidate();
    }

}
