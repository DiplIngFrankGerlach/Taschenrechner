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
          int spr_intScratch35;spr_intScratch35=i;chck_accs0(labeli,spr_intScratch35,55)
   while(labeli._array[spr_intScratch35]!=c0){
             int spr_intScratch37;spr_intScratch37=i;chck_accs0(label,spr_intScratch37,57)
             int spr_intScratch39;spr_intScratch39=i;chck_accs0(labeli,spr_intScratch39,59)
      label._array[spr_intScratch37]=labeli._array[spr_intScratch39];
      i++;
      spr_intScratch35=i;chck_accs0(labeli,spr_intScratch35,55)
      
   };
          int spr_intScratch3b;spr_intScratch3b=i;chck_accs0(label,spr_intScratch3b,61)
   label._array[spr_intScratch3b]=c0;
   
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
     
   int spr_intScratch3d;
   spr_intScratch3d=10000;
   if(spr_intScratch3d<0)throw "invalid size requested for heap allocation";
   punkteX=new(spr_intScratch3d) SPRArray<int>(spr_intScratch3d)
   ;
   int spr_intScratch3e;
   spr_intScratch3e=10000;
   if(spr_intScratch3e<0)throw "invalid size requested for heap allocation";
   punkteY=new(spr_intScratch3e) SPRArray<int>(spr_intScratch3e)
   ;
   punkteGueltig=0;
   
   
} //End Of Method

void SFbox::create(char* stackStartPtr,int x,int y,int w,int h){
   char SPR_stack_dummy_var;
   
         mb = new MyBox(this,x,y,w,h);
      
   
   
} //End Of Method

void SFbox::draw(char* stackStartPtr){
   char SPR_stack_dummy_var;
    
         //loesche die Box
         fl_draw_box(FL_FLAT_BOX,mb->x(),mb->y(),mb->w(),mb->h(),FL_WHITE); 
         //setze die aktuelle Farbe fuer folgende fl_point() Aufrufe
         fl_color(FL_BLACK);
      
   {//begin of SPR for statement
   int i;i=0;
   while(i<punkteGueltig){
             int spr_intScratch3f;spr_intScratch3f=i;chck_accs_p0(punkteX,spr_intScratch3f,65)
      int x;x=punkteX._theObject->_array[spr_intScratch3f];
             int spr_intScratch41;spr_intScratch41=i;chck_accs_p0(punkteY,spr_intScratch41,67)
      int y;y=punkteY._theObject->_array[spr_intScratch41];
      
               int yfenster = mb->y();
               int xfenster = mb->x();
               fl_point(x+xfenster   ,y+yfenster);
               fl_point(x+1+xfenster ,y+yfenster);
               fl_point(x+xfenster   ,y+1+yfenster);
               fl_point(x+1+xfenster ,y+1+yfenster);
            
      i++;
      
   
   }
   }//end of SPR for statement
   punkteGueltig=0;
   
   
} //End Of Method

void SFbox::loesche(char* stackStartPtr){
   char SPR_stack_dummy_var;
   punkteGueltig=0;
   
   
} //End Of Method

void SFbox::addPoint(char* stackStartPtr,int x,int y){
   char SPR_stack_dummy_var;
   if(punkteGueltig==punkteX._theObject->_sz){
      PrintfClass pfc;
      SPRStackArrayConcrete<char,31> spr_StringScratch43;strcpy(spr_StringScratch43._array,"zu vielen Punkte in der SFbox");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch43).pr(stackStartPtr);
      return ;
      
   }
          int spr_intScratch44;spr_intScratch44=punkteGueltig;chck_accs_p0(punkteX,spr_intScratch44,70)
   punkteX._theObject->_array[spr_intScratch44]=x;
          int spr_intScratch46;spr_intScratch46=punkteGueltig;chck_accs_p0(punkteY,spr_intScratch46,72)
   punkteY._theObject->_array[spr_intScratch46]=y;
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

