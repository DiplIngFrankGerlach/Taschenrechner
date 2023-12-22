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
          int spr_intScratch57;spr_intScratch57=i;chck_accs0(labeli,spr_intScratch57,89)
   while(labeli._array[spr_intScratch57]!=c0){
             int spr_intScratch59;spr_intScratch59=i;chck_accs0(label,spr_intScratch59,91)
             int spr_intScratch5b;spr_intScratch5b=i;chck_accs0(labeli,spr_intScratch5b,93)
      label._array[spr_intScratch59]=labeli._array[spr_intScratch5b];
      i++;
      spr_intScratch57=i;chck_accs0(labeli,spr_intScratch57,89)
      
   };
          int spr_intScratch5d;spr_intScratch5d=i;chck_accs0(label,spr_intScratch5d,95)
   label._array[spr_intScratch5d]=c0;
   
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
     
   int spr_intScratch5f;
   spr_intScratch5f=100000;
   if(spr_intScratch5f<0)throw "invalid size requested for heap allocation";
   punkteX=new(spr_intScratch5f) SPRArray<int>(spr_intScratch5f)
   ;
   int spr_intScratch60;
   spr_intScratch60=100000;
   if(spr_intScratch60<0)throw "invalid size requested for heap allocation";
   punkteY=new(spr_intScratch60) SPRArray<int>(spr_intScratch60)
   ;
   int spr_intScratch61;
   spr_intScratch61=100000;
   if(spr_intScratch61<0)throw "invalid size requested for heap allocation";
   farbe=new(spr_intScratch61) SPRArray<int>(spr_intScratch61)
   ;
   punkteGueltig=0;
   int spr_intScratch62;
   spr_intScratch62=100;
   if(spr_intScratch62<0)throw "invalid size requested for heap allocation";
   labels=new(spr_intScratch62) SPRArray<SPRSmartPtr<SFlabel> >(spr_intScratch62)
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
             int spr_intScratch63;spr_intScratch63=i;chck_accs_p0(punkteX,spr_intScratch63,101)
      int x;x=punkteX._theObject->_array[spr_intScratch63];
             int spr_intScratch65;spr_intScratch65=i;chck_accs_p0(punkteY,spr_intScratch65,103)
      int y;y=punkteY._theObject->_array[spr_intScratch65];
      
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
             int spr_intScratch67;spr_intScratch67=i;chck_accs_p0(labels,spr_intScratch67,105)
      SPRSmartPtr<SFlabel> l;l=labels._theObject->_array[spr_intScratch67];
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
      SPRStackArrayConcrete<char,31> spr_StringScratch69;strcpy(spr_StringScratch69._array,"zu vielen Punkte in der SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch69).pr(stackStartPtr);
      return ;
      
   }
          int spr_intScratch6a;spr_intScratch6a=punkteGueltig;chck_accs_p0(punkteX,spr_intScratch6a,108)
   punkteX._theObject->_array[spr_intScratch6a]=x;
          int spr_intScratch6c;spr_intScratch6c=punkteGueltig;chck_accs_p0(punkteY,spr_intScratch6c,110)
   punkteY._theObject->_array[spr_intScratch6c]=y;
          int spr_intScratch6e;spr_intScratch6e=punkteGueltig;chck_accs_p0(farbe,spr_intScratch6e,112)
   farbe._theObject->_array[spr_intScratch6e]=farbei;
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
      int spr_intScratch70;
      spr_intScratch70=str.length(stackStartPtr)+1;
      if(spr_intScratch70<0)throw "invalid size requested for heap allocation";
      SPRSmartPtr<SPRArray<char> > nl;nl=new(spr_intScratch70) SPRArray<char>(spr_intScratch70)
      ;
      {//begin of SPR for statement
      int i;i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<str.length(stackStartPtr)){
                int spr_intScratch71;spr_intScratch71=i;chck_accs_p0(nl,spr_intScratch71,115)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         nl._theObject->_array[spr_intScratch71]=str.getAt(stackStartPtr,i);
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch73;spr_intScratch73=str.length(stackStartPtr);chck_accs_p0(nl,spr_intScratch73,117)
      nl._theObject->_array[spr_intScratch73]='\0';
             int spr_intScratch75;spr_intScratch75=labelsGueltig;chck_accs_p0(labels,spr_intScratch75,119)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      labels._theObject->_array[spr_intScratch75]=::new SFlabel;
             int spr_intScratch77;spr_intScratch77=labelsGueltig;chck_accs_p0(labels,spr_intScratch77,121)
      labels._theObject->_array[spr_intScratch77]._theObject->x=x;
             int spr_intScratch79;spr_intScratch79=labelsGueltig;chck_accs_p0(labels,spr_intScratch79,123)
      labels._theObject->_array[spr_intScratch79]._theObject->y=y;
             int spr_intScratch7b;spr_intScratch7b=labelsGueltig;chck_accs_p0(labels,spr_intScratch7b,125)
      labels._theObject->_array[spr_intScratch7b]._theObject->strBuf=nl;
      labelsGueltig++;
      
   }
   else
   {
   PrintfClass pfc;
      SPRStackArrayConcrete<char,38> spr_StringScratch7d;strcpy(spr_StringScratch7d._array,"too many Strings to display in SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch7d).pr(stackStartPtr);
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

