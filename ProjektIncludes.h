#ifndef PROJECT_INCLUDES
#define PROJECT_INCLUDES

#define USE_LIBTLS 

    #include <sys/time.h>
    #include <sys/types.h>
    #include <stdio.h>
    #include <limits>

    //FLTK
    #include <FL/Fl.H>
    #include <FL/Fl_Window.H>
    #include <FL/fl_draw.H>
    #include <FL/Fl_Button.H>
    #include <FL/Fl_Box.H>
    #include <FL/Fl_Input.H>
    #include <FL/Fl_Output.H>


void callback1(Fl_Widget* w, void* data);
void buttonCallback(Fl_Widget* w, void* data);

extern Fl_Box* __fbox;




#endif
