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
          int spr_intScratch6b;spr_intScratch6b=i;chck_accs0(labeli,spr_intScratch6b,109)
   while(labeli._array[spr_intScratch6b]!=c0){
             int spr_intScratch6d;spr_intScratch6d=i;chck_accs0(label,spr_intScratch6d,111)
             int spr_intScratch6f;spr_intScratch6f=i;chck_accs0(labeli,spr_intScratch6f,113)
      label._array[spr_intScratch6d]=labeli._array[spr_intScratch6f];
      i++;
      spr_intScratch6b=i;chck_accs0(labeli,spr_intScratch6b,109)
      
   };
          int spr_intScratch71;spr_intScratch71=i;chck_accs0(label,spr_intScratch71,115)
   label._array[spr_intScratch71]=c0;
   
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
     
   int spr_intScratch73;
   spr_intScratch73=100000;
   if(spr_intScratch73<0)throw "invalid size requested for heap allocation";
   punkteX=new(spr_intScratch73) SPRArray<int>(spr_intScratch73)
   ;
   int spr_intScratch74;
   spr_intScratch74=100000;
   if(spr_intScratch74<0)throw "invalid size requested for heap allocation";
   punkteY=new(spr_intScratch74) SPRArray<int>(spr_intScratch74)
   ;
   int spr_intScratch75;
   spr_intScratch75=100000;
   if(spr_intScratch75<0)throw "invalid size requested for heap allocation";
   farbe=new(spr_intScratch75) SPRArray<int>(spr_intScratch75)
   ;
   punkteGueltig=0;
   int spr_intScratch76;
   spr_intScratch76=100;
   if(spr_intScratch76<0)throw "invalid size requested for heap allocation";
   labels=new(spr_intScratch76) SPRArray<SPRSmartPtr<SFlabel> >(spr_intScratch76)
   ;
   labelsGueltig=0;
   int spr_intScratch77;
   spr_intScratch77=1000;
   if(spr_intScratch77<0)throw "invalid size requested for heap allocation";
   lineX=new(spr_intScratch77) SPRArray<int>(spr_intScratch77)
   ;
   int spr_intScratch78;
   spr_intScratch78=1000;
   if(spr_intScratch78<0)throw "invalid size requested for heap allocation";
   lineY=new(spr_intScratch78) SPRArray<int>(spr_intScratch78)
   ;
   int spr_intScratch79;
   spr_intScratch79=1000;
   if(spr_intScratch79<0)throw "invalid size requested for heap allocation";
   lineXend=new(spr_intScratch79) SPRArray<int>(spr_intScratch79)
   ;
   int spr_intScratch7a;
   spr_intScratch7a=1000;
   if(spr_intScratch7a<0)throw "invalid size requested for heap allocation";
   lineYend=new(spr_intScratch7a) SPRArray<int>(spr_intScratch7a)
   ;
   int spr_intScratch7b;
   spr_intScratch7b=1000;
   if(spr_intScratch7b<0)throw "invalid size requested for heap allocation";
   lineFarbe=new(spr_intScratch7b) SPRArray<int>(spr_intScratch7b)
   ;
   linienGueltig=0;
   
   
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
   
         fl_begin_line();
      
   {//begin of SPR for statement
   int i;i=0;
   while(i<punkteGueltig){
             int spr_intScratch7c;spr_intScratch7c=i;chck_accs_p0(punkteX,spr_intScratch7c,126)
      int x;x=punkteX._theObject->_array[spr_intScratch7c];
             int spr_intScratch7e;spr_intScratch7e=i;chck_accs_p0(punkteY,spr_intScratch7e,128)
      int y;y=punkteY._theObject->_array[spr_intScratch7e];
      
               int yfenster = mb->y();
               int xfenster = mb->x();
               fl_color( farbe._theObject->_array[i] );
               fl_vertex( x + xfenster, y + yfenster );
               /*
               fl_point(x+xfenster   ,y+yfenster);
               fl_point(x+1+xfenster ,y+yfenster);
               fl_point(x+xfenster   ,y+1+yfenster);
               fl_point(x+1+xfenster ,y+1+yfenster);
               */
            
      i++;
      
   
   }
   }//end of SPR for statement
    fl_end_line(); 
   punkteGueltig=0;
   {//begin of SPR for statement
   int i;i=0;
   while(i<linienGueltig){
             int spr_intScratch80;spr_intScratch80=i;chck_accs_p0(lineX,spr_intScratch80,130)
      int x;x=lineX._theObject->_array[spr_intScratch80];
             int spr_intScratch82;spr_intScratch82=i;chck_accs_p0(lineY,spr_intScratch82,132)
      int y;y=lineY._theObject->_array[spr_intScratch82];
             int spr_intScratch84;spr_intScratch84=i;chck_accs_p0(lineXend,spr_intScratch84,134)
      int xEnd;xEnd=lineXend._theObject->_array[spr_intScratch84];
             int spr_intScratch86;spr_intScratch86=i;chck_accs_p0(lineYend,spr_intScratch86,136)
      int yEnd;yEnd=lineYend._theObject->_array[spr_intScratch86];
       
               fl_color( lineFarbe._theObject->_array[i] );
               fl_begin_line(); 
               int yfenster = mb->y();
               int xfenster = mb->x();
               fl_vertex( x + xfenster, y + yfenster );
               fl_vertex( xEnd + xfenster, yEnd + yfenster );
               fl_end_line(); 
            
      i++;
      
   
   }
   }//end of SPR for statement
   linienGueltig=0;
    fl_color(FL_BLACK); 
   {//begin of SPR for statement
   int i;i=0;
   while(i<labelsGueltig){
             int spr_intScratch88;spr_intScratch88=i;chck_accs_p0(labels,spr_intScratch88,138)
      SPRSmartPtr<SFlabel> l;l=labels._theObject->_array[spr_intScratch88];
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
      SPRStackArrayConcrete<char,31> spr_StringScratch8a;strcpy(spr_StringScratch8a._array,"zu vielen Punkte in der SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch8a).pr(stackStartPtr);
      return ;
      
   }
          int spr_intScratch8b;spr_intScratch8b=punkteGueltig;chck_accs_p0(punkteX,spr_intScratch8b,141)
   punkteX._theObject->_array[spr_intScratch8b]=x;
          int spr_intScratch8d;spr_intScratch8d=punkteGueltig;chck_accs_p0(punkteY,spr_intScratch8d,143)
   punkteY._theObject->_array[spr_intScratch8d]=y;
          int spr_intScratch8f;spr_intScratch8f=punkteGueltig;chck_accs_p0(farbe,spr_intScratch8f,145)
   farbe._theObject->_array[spr_intScratch8f]=farbei;
   punkteGueltig++;
   
   
} //End Of Method

void SFbox::addLine(char* stackStartPtr,int x,int y,int xEnd,int yEnd,int farbei){
   char SPR_stack_dummy_var;
   if(linienGueltig<lineX._theObject->_sz){
             int spr_intScratch91;spr_intScratch91=linienGueltig;chck_accs_p0(lineX,spr_intScratch91,147)
      lineX._theObject->_array[spr_intScratch91]=x;
             int spr_intScratch93;spr_intScratch93=linienGueltig;chck_accs_p0(lineY,spr_intScratch93,149)
      lineY._theObject->_array[spr_intScratch93]=y;
             int spr_intScratch95;spr_intScratch95=linienGueltig;chck_accs_p0(lineXend,spr_intScratch95,151)
      lineXend._theObject->_array[spr_intScratch95]=xEnd;
             int spr_intScratch97;spr_intScratch97=linienGueltig;chck_accs_p0(lineYend,spr_intScratch97,153)
      lineYend._theObject->_array[spr_intScratch97]=yEnd;
             int spr_intScratch99;spr_intScratch99=linienGueltig;chck_accs_p0(lineFarbe,spr_intScratch99,155)
      lineFarbe._theObject->_array[spr_intScratch99]=farbei;
      linienGueltig++;
      
   }
   else
   {
   PrintfClass pfc;
      SPRStackArrayConcrete<char,31> spr_StringScratch9b;strcpy(spr_StringScratch9b._array,"zu vielen Linien in der SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch9b).pr(stackStartPtr);
      return ;
      }
   
   
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
      int spr_intScratch9c;
      spr_intScratch9c=str.length(stackStartPtr)+1;
      if(spr_intScratch9c<0)throw "invalid size requested for heap allocation";
      SPRSmartPtr<SPRArray<char> > nl;nl=new(spr_intScratch9c) SPRArray<char>(spr_intScratch9c)
      ;
      {//begin of SPR for statement
      int i;i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<str.length(stackStartPtr)){
                int spr_intScratch9d;spr_intScratch9d=i;chck_accs_p0(nl,spr_intScratch9d,159)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         nl._theObject->_array[spr_intScratch9d]=str.getAt(stackStartPtr,i);
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch9f;spr_intScratch9f=str.length(stackStartPtr);chck_accs_p0(nl,spr_intScratch9f,161)
      nl._theObject->_array[spr_intScratch9f]='\0';
             int spr_intScratcha1;spr_intScratcha1=labelsGueltig;chck_accs_p0(labels,spr_intScratcha1,163)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      labels._theObject->_array[spr_intScratcha1]=::new SFlabel;
             int spr_intScratcha3;spr_intScratcha3=labelsGueltig;chck_accs_p0(labels,spr_intScratcha3,165)
      labels._theObject->_array[spr_intScratcha3]._theObject->x=x;
             int spr_intScratcha5;spr_intScratcha5=labelsGueltig;chck_accs_p0(labels,spr_intScratcha5,167)
      labels._theObject->_array[spr_intScratcha5]._theObject->y=y;
             int spr_intScratcha7;spr_intScratcha7=labelsGueltig;chck_accs_p0(labels,spr_intScratcha7,169)
      labels._theObject->_array[spr_intScratcha7]._theObject->strBuf=nl;
      labelsGueltig++;
      
   }
   else
   {
   PrintfClass pfc;
      SPRStackArrayConcrete<char,38> spr_StringScratcha9;strcpy(spr_StringScratcha9._array,"too many Strings to display in SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratcha9).pr(stackStartPtr);
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

