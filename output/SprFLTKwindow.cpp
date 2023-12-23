#include "stdafx.h"
#include "header.h"
SprFLTKwindow::SprFLTKwindow(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
          fw = new FLTKwindow(this,900,900,"Sappeur FLTK Demo");
       
   
   
} //End Of Method

void SprFLTKwindow::draw(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
   
} //End Of Method

void SprFLTKwindow::SetLabel(char* stackStartPtr,String_16& label){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int spr_intScratch117;
   spr_intScratch117=label.length(stackStartPtr)+1;
   if(spr_intScratch117<0)throw "invalid size requested for heap allocation";
   labelBuffer=new(spr_intScratch117) SPRArray<char>(spr_intScratch117)
   ;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<label.length(stackStartPtr)){
             int spr_intScratch118;spr_intScratch118=i;chck_accs_p0(labelBuffer,spr_intScratch118,282)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      labelBuffer._theObject->_array[spr_intScratch118]=label.getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
          int spr_intScratch11a;spr_intScratch11a=label.length(stackStartPtr);chck_accs_p0(labelBuffer,spr_intScratch11a,284)
   labelBuffer._theObject->_array[spr_intScratch11a]='\0';
   
        fw->label(labelBuffer._theObject->_array);
      
   
   
} //End Of Method

void SprFLTKwindow::point(char* stackStartPtr,int x,int y){
   char SPR_stack_dummy_var;
   
       fl_point(x,y);
      
   
   
} //End Of Method

void SprFLTKwindow::show(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
       fw->show();
    
   
   
} //End Of Method

void SprFLTKwindow::run(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
        Fl::run();
      
   
   
} //End Of Method

void SprFLTKwindow::end(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
         fw->end();
    
   
   
} //End Of Method

void SprFLTKwindow::begin(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
         fw->begin();
    
   
   
} //End Of Method

