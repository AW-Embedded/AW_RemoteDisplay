#include <gui/status_screen/StatusView.hpp>

StatusView::StatusView()
{

}

void StatusView::setupScreen()
{
    StatusViewBase::setupScreen();

    // Init screen for current WiFi state
    wifiState = presenter->getWifiState();

    if(wifiState)
        statusWifiLogo.setAlpha(255);
    else
        statusWifiLogo.setAlpha(50);

    statusWifiLogo.invalidate();
}

void StatusView::tearDownScreen()
{
    StatusViewBase::tearDownScreen();
}
