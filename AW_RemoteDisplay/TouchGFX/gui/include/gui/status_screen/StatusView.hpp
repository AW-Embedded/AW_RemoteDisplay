#ifndef STATUSVIEW_HPP
#define STATUSVIEW_HPP

#include <gui_generated/status_screen/StatusViewBase.hpp>
#include <gui/status_screen/StatusPresenter.hpp>

class StatusView : public StatusViewBase
{
public:
    StatusView();
    virtual ~StatusView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STATUSVIEW_HPP
