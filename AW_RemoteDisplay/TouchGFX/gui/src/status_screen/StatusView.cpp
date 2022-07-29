#include <gui/status_screen/StatusView.hpp>

StatusView::StatusView()
{

}

void StatusView::setupScreen()
{
    StatusViewBase::setupScreen();

    wifiState = presenter->getWifiState();
    statusWifiLogo.setVisible(wifiState);
    statusWifiLogo.invalidate();
}

void StatusView::tearDownScreen()
{
    StatusViewBase::tearDownScreen();
}
