#include <gui/status_screen/StatusView.hpp>

StatusView::StatusView()
{

}

void StatusView::setupScreen()
{
    StatusViewBase::setupScreen();

    // Init screen for current WiFi state
    wifiState = presenter->getWifiState();
    statusWifiLogo.setVisible(wifiState);
    statusWifiLogo.invalidate();
}

void StatusView::tearDownScreen()
{
    StatusViewBase::tearDownScreen();
}
