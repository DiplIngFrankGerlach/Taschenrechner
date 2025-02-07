#ifndef PROJECT_INCLUDES
#define PROJECT_INCLUDES

#define USE_LIBTLS 

    #include <sys/time.h>
    #include <sys/types.h>
    #include <stdio.h>
    #include <limits>
    #include <list>

    //FLTK
#define WIN32 1 //gebraucht fuer fltk

    #include <FL/Fl.H>
    #include <FL/Fl_Window.H>
    #include <FL/fl_draw.H>
    #include <FL/Fl_Button.H>
    #include <FL/Fl_Box.H>
    #include <FL/Fl_Input.H>
    #include <FL/Fl_Output.H>
    #include <FL/Fl_Check_Button.H>
    #include <FL/Fl_Choice.H>
    #include <FL/Fl_Text_Display.H>
    #include <FL/Fl_Output.H>
    #include <FL/fl_ask.H>
    #include <FL/Fl_Table.H>
    #include <FL/Fl_Table_Row.H>

void callback1(Fl_Widget* w, void* data);
void buttonCallback(Fl_Widget* w, void* data);
void checkbox_callback(Fl_Widget *w, void *data);
void choice_callback(Fl_Widget *w, void *data);
void scrollbar_callback(Fl_Widget* w, void* data);

void fltk_rbs_handle_message(void* data);


extern Fl_Box* __fbox;




#endif
