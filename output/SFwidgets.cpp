#include "stdafx.h"
#include "header.h"
SFbutton::SFbutton(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
       fb = NULL;
     
   
   
} //End Of Method

void SFbutton::create(char* stackStartPtr,int x,int y,int width,int height,SPRStackArray<char>& labeli){
   char SPR_stack_dummy_var;
   int i;i=0;
   char c0;c0=((char)0);
          int spr_intScratch38;spr_intScratch38=i;chck_accs0(labeli,spr_intScratch38,58)
   while(labeli._array[spr_intScratch38]!=c0){
             int spr_intScratch3a;spr_intScratch3a=i;chck_accs0(label,spr_intScratch3a,60)
             int spr_intScratch3c;spr_intScratch3c=i;chck_accs0(labeli,spr_intScratch3c,62)
      label._array[spr_intScratch3a]=labeli._array[spr_intScratch3c];
      i++;
      spr_intScratch38=i;chck_accs0(labeli,spr_intScratch38,58)
      
   };
          int spr_intScratch3e;spr_intScratch3e=i;chck_accs0(label,spr_intScratch3e,64)
   label._array[spr_intScratch3e]=c0;
   
          fb = new Fl_Button(x,y,width,height,label._array);
          fb->callback(buttonCallback,this);
      
   
   
} //End Of Method

void SFbutton::callback(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
   
} //End Of Method

SFinput::SFinput(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
     fi=NULL;   
   
   
} //End Of Method

void SFinput::create(char* stackStartPtr,int x,int y,int width,int height){
   char SPR_stack_dummy_var;
   
            fi = new Fl_Input(x,y,width,height);
       
   
   
} //End Of Method

void SFinput::get(char* stackStartPtr,String_16& value){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   value.clear(stackStartPtr);
   
         std::string vals = fi->value();
         char sp;
         value.ensureCapacity(&sp,vals.length());      
         for(int i=0; i < vals.length();i++) value.append(&sp,vals.at(i));
       
   
   
} //End Of Method

SFbox::SFbox(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
        mb = NULL;
     
   int spr_intScratch40;
   spr_intScratch40=100000;
   if(spr_intScratch40<0)throw "invalid size requested for heap allocation";
   punkteX=new(spr_intScratch40) SPRArray<int>(spr_intScratch40)
   ;
   int spr_intScratch41;
   spr_intScratch41=100000;
   if(spr_intScratch41<0)throw "invalid size requested for heap allocation";
   punkteY=new(spr_intScratch41) SPRArray<int>(spr_intScratch41)
   ;
   int spr_intScratch42;
   spr_intScratch42=100000;
   if(spr_intScratch42<0)throw "invalid size requested for heap allocation";
   farbe=new(spr_intScratch42) SPRArray<int>(spr_intScratch42)
   ;
   punkteGueltig=0;
   int spr_intScratch43;
   spr_intScratch43=100;
   if(spr_intScratch43<0)throw "invalid size requested for heap allocation";
   labels=new(spr_intScratch43) SPRArray<SPRSmartPtr<SFlabel> >(spr_intScratch43)
   ;
   labelsGueltig=0;
   
   
} //End Of Method

void SFbox::create(char* stackStartPtr,int x,int y,int w,int h){
   char SPR_stack_dummy_var;
   
         mb = new MyBox(this,x,y,w,h);
      
   
   
} //End Of Method

void SFbox::draw(char* stackStartPtr){
   char SPR_stack_dummy_var;
    
         //loesche die Box
         //fl_draw_box(FL_FLAT_BOX,mb->x(),mb->y(),mb->w(),mb->h(),FL_WHITE); 
         fl_color(FL_WHITE);
         fl_rectf(mb->x(),mb->y(),mb->w(),mb->h());
         //setze die aktuelle Farbe fuer folgende fl_point() Aufrufe
         fl_color(FL_BLACK);
      
   {//begin of SPR for statement
   int i;i=0;
   while(i<punkteGueltig){
             int spr_intScratch44;spr_intScratch44=i;chck_accs_p0(punkteX,spr_intScratch44,70)
      int x;x=punkteX._theObject->_array[spr_intScratch44];
             int spr_intScratch46;spr_intScratch46=i;chck_accs_p0(punkteY,spr_intScratch46,72)
      int y;y=punkteY._theObject->_array[spr_intScratch46];
      
               int yfenster = mb->y();
               int xfenster = mb->x();
               fl_color( farbe._theObject->_array[i] );
               fl_point(x+xfenster   ,y+yfenster);
               fl_point(x+1+xfenster ,y+yfenster);
               fl_point(x+xfenster   ,y+1+yfenster);
               fl_point(x+1+xfenster ,y+1+yfenster);
            
      i++;
      
   
   }
   }//end of SPR for statement
   punkteGueltig=0;
    fl_color(FL_BLACK); 
   {//begin of SPR for statement
   int i;i=0;
   while(i<labelsGueltig){
             int spr_intScratch48;spr_intScratch48=i;chck_accs_p0(labels,spr_intScratch48,74)
      SPRSmartPtr<SFlabel> l;l=labels._theObject->_array[spr_intScratch48];
      int x;x=l._theObject->x;
      int y;y=l._theObject->y;
      
              fl_draw(l._theObject->strBuf._theObject->_array, mb->x() + x, mb->y() + y);
            
      i++;
      
   
   }
   }//end of SPR for statement
   labelsGueltig=0;
   
   
} //End Of Method

void SFbox::loesche(char* stackStartPtr){
   char SPR_stack_dummy_var;
   punkteGueltig=0;
   static_cast<Fl_Box*>(mb)->box(FL_NO_BOX);
   
   
} //End Of Method

void SFbox::addPoint(char* stackStartPtr,int x,int y,int farbei){
   char SPR_stack_dummy_var;
   if(punkteGueltig==punkteX._theObject->_sz){
      PrintfClass pfc;
      SPRStackArrayConcrete<char,31> spr_StringScratch4a;strcpy(spr_StringScratch4a._array,"zu vielen Punkte in der SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch4a).pr(stackStartPtr);
      return ;
      
   }
          int spr_intScratch4b;spr_intScratch4b=punkteGueltig;chck_accs_p0(punkteX,spr_intScratch4b,77)
   punkteX._theObject->_array[spr_intScratch4b]=x;
          int spr_intScratch4d;spr_intScratch4d=punkteGueltig;chck_accs_p0(punkteY,spr_intScratch4d,79)
   punkteY._theObject->_array[spr_intScratch4d]=y;
          int spr_intScratch4f;spr_intScratch4f=punkteGueltig;chck_accs_p0(farbe,spr_intScratch4f,81)
   farbe._theObject->_array[spr_intScratch4f]=farbei;
   punkteGueltig++;
   
   
} //End Of Method

int SFbox::hoehe(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int ret;
    ret = mb->h();
   return ret;
   
   
} //End Of Method

void SFbox::redraw(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
       mb->redraw();
     
   
   
} //End Of Method

void SFbox::drawString(char* stackStartPtr,int x,int y,String_16& str){
   char SPR_stack_dummy_var;
   if(labels._theObject->_sz>labelsGueltig){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int spr_intScratch51;
      spr_intScratch51=str.length(stackStartPtr)+1;
      if(spr_intScratch51<0)throw "invalid size requested for heap allocation";
      SPRSmartPtr<SPRArray<char> > nl;nl=new(spr_intScratch51) SPRArray<char>(spr_intScratch51)
      ;
      {//begin of SPR for statement
      int i;i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<str.length(stackStartPtr)){
                int spr_intScratch52;spr_intScratch52=i;chck_accs_p0(nl,spr_intScratch52,84)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         nl._theObject->_array[spr_intScratch52]=str.getAt(stackStartPtr,i);
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch54;spr_intScratch54=str.length(stackStartPtr);chck_accs_p0(nl,spr_intScratch54,86)
      nl._theObject->_array[spr_intScratch54]='\0';
             int spr_intScratch56;spr_intScratch56=labelsGueltig;chck_accs_p0(labels,spr_intScratch56,88)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      labels._theObject->_array[spr_intScratch56]=::new SFlabel;
             int spr_intScratch58;spr_intScratch58=labelsGueltig;chck_accs_p0(labels,spr_intScratch58,90)
      labels._theObject->_array[spr_intScratch58]._theObject->x=x;
             int spr_intScratch5a;spr_intScratch5a=labelsGueltig;chck_accs_p0(labels,spr_intScratch5a,92)
      labels._theObject->_array[spr_intScratch5a]._theObject->y=y;
             int spr_intScratch5c;spr_intScratch5c=labelsGueltig;chck_accs_p0(labels,spr_intScratch5c,94)
      labels._theObject->_array[spr_intScratch5c]._theObject->strBuf=nl;
      labelsGueltig++;
      
   }
   else
   {
   PrintfClass pfc;
      SPRStackArrayConcrete<char,38> spr_StringScratch5e;strcpy(spr_StringScratch5e._array,"too many Strings to display in SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch5e).pr(stackStartPtr);
      }
   
   
} //End Of Method

int SFcolorCode::get_FL_BLACK(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 56;
   
   
} //End Of Method

int SFcolorCode::get_FL_RED(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 88;
   
   
} //End Of Method

int SFcolorCode::get_FL_GREEN(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 63;
   
   
} //End Of Method

int SFcolorCode::get_FL_YELLOW(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 95;
   
   
} //End Of Method

int SFcolorCode::get_FL_BLUE(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 216;
   
   
} //End Of Method

int SFcolorCode::get_FL_MAGENTA(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 248;
   
   
} //End Of Method

int SFcolorCode::get_FL_CYAN(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 223;
   
   
} //End Of Method

int SFcolorCode::get_FL_DARK_RED(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 72;
   
   
} //End Of Method

int SFcolorCode::get_FL_DARK_GREEN(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 60;
   
   
} //End Of Method

int SFcolorCode::get_FL_DARK_YELLOW(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 76;
   
   
} //End Of Method

int SFcolorCode::get_FL_DARK_BLUE(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 136;
   
   
} //End Of Method

int SFcolorCode::get_FL_DARK_MAGENTA(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 152;
   
   
} //End Of Method

int SFcolorCode::get_FL_DARK_CYAN(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 140;
   
   
} //End Of Method

int SFcolorCode::get_FL_WHITE(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 255;
   
   
} //End Of Method

int SFfont::getFontID_FL_HELVETICA_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 0;
   
   
} //End Of Method

int SFfont::getFontID_FL_HELVETICA_BOLD_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 1;
   
   
} //End Of Method

int SFfont::getFontID_FL_HELVETICA_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 2;
   
   
} //End Of Method

int SFfont::getFontID_FL_HELVETICA_BOLD_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 3;
   
   
} //End Of Method

int SFfont::getFontID_FL_COURIER_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 4;
   
   
} //End Of Method

int SFfont::getFontID_FL_COURIER_BOLD_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 5;
   
   
} //End Of Method

int SFfont::getFontID_FL_COURIER_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 6;
   
   
} //End Of Method

int SFfont::getFontID_FL_COURIER_BOLD_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 7;
   
   
} //End Of Method

int SFfont::getFontID_FL_TIMES_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 8;
   
   
} //End Of Method

int SFfont::getFontID_FL_TIMES_BOLD_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 9;
   
   
} //End Of Method

int SFfont::getFontID_FL_TIMES_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 10;
   
   
} //End Of Method

int SFfont::getFontID_FL_TIMES_BOLD_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 11;
   
   
} //End Of Method

int SFfont::getFontID_FL_SYMBOL_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 12;
   
   
} //End Of Method

int SFfont::getFontID_FL_SCREEN_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 13;
   
   
} //End Of Method

int SFfont::getFontID_FL_SCREEN_BOLD_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 14;
   
   
} //End Of Method

int SFfont::getFontID_FL_ZAPF_DINGBATS_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 15;
   
   
} //End Of Method

int SFfont::getFontID_FL_FREE_FONT_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 16;
   
   
} //End Of Method

int SFfont::getFontID_FL_BOLD_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 1;
   
   
} //End Of Method

int SFfont::getFontID_FL_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 2;
   
   
} //End Of Method

int SFfont::getFontID_FL_BOLD_ITALIC_(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 3;
   
   
} //End Of Method

void SFfont::setFont(char* stackStartPtr,int font_id,int sizei){
   char SPR_stack_dummy_var;
   
         fl_font(font_id,sizei);
      
   
   
} //End Of Method

