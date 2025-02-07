#include "ProjektIncludes.h"




#include <iostream>
#include <queue>
#include <atomic>

#include "header.h"



using namespace std;



void callback1(Fl_Widget* widget,void* data)
{
}


void buttonCallback(Fl_Widget* widget,void* data)
{
   SFbutton* sfb = (SFbutton*)data; 
   char sp;
   sfb->callback(&sp); 
}

void checkbox_callback(Fl_Widget *w, void *data) 
{
    Fl_Check_Button *check = (Fl_Check_Button*)w;
    
    //cout << "checkbox_callback() " << w << endl;
    SFbutton* sfb = (SFbutton*)data; 
    char sp;
    sfb->callback(&sp);
}

void choice_callback(Fl_Widget *w, void *data) 
{
    Fl_Choice* flChoice = (Fl_Choice*) w;
    
    SFChoice* sfc = (SFChoice*)data; 
    char sp;
    sfc->callback(&sp, flChoice->value() );
}

void scrollbar_callback(Fl_Widget* w, void* data)
{
    Fl_Scrollbar* flScrollbar = (Fl_Scrollbar*)w;

    SFScrollbar* ssb = (SFScrollbar*)data;
    char sp;
    ssb->callback(&sp, flScrollbar->value());
}


