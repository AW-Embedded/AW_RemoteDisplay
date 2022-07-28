/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoMainScreenNoTransition();
    }

    // Main
    void gotoMainScreenNoTransition();

    // Settings
    void gotoSettingsScreenNoTransition();

    // Status
    void gotoStatusScreenNoTransition();

    // About
    void gotoAboutScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Main
    void gotoMainScreenNoTransitionImpl();

    // Settings
    void gotoSettingsScreenNoTransitionImpl();

    // Status
    void gotoStatusScreenNoTransitionImpl();

    // About
    void gotoAboutScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
