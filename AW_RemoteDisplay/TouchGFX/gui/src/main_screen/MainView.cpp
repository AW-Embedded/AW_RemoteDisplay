#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::handleTickEvent()
{
    bool isGreenVisible;
    tickCounter++;

    if((tickCounter % 60) == 0)
    {
        isGreenVisible = mainStateGreen.isVisible();
        mainStateGreen.setVisible(!isGreenVisible);
        mainStateGreen.invalidate();
        tickCounter = 0;
    }

}
