#include "header.h"


void callback1(Fl_Widget* widget,void* data)
{
}


void buttonCallback(Fl_Widget* widget,void* data)
{
   SFbutton* sfb = (SFbutton*)data; 
   char sp;
   sfb->callback(&sp); 
}
