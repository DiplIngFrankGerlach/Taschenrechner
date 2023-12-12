#include "stdafx.h"
#include "header.h"
int Hash_longlong::hash(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   longlong ret;ret=x^(x<<17)^(x>>29)^(x>>15)^(x*167364762);
   ret=(ret*9289283921)+(ret*9878765221)+x;
   return ((int)ret)^((int)(ret>>32));
   
   
} //End Of Method

int Compare_longlong::compare(char* stackStartPtr,longlong x1,longlong x2){
   char SPR_stack_dummy_var;
   if(x1==x2){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_longlong::assign(char* stackStartPtr,longlong& x1,longlong& x2){
   char SPR_stack_dummy_var;
   x1=x2;
   
   
} //End Of Method

int Hash_int::hash(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   int ret;ret=x^(x<<17)^(x>>18)^(x>>6)^(x*1674762);
   ret=(ret*92893921)+(ret*98785221)+x;
   return ret;
   
   
} //End Of Method

int Compare_int::compare(char* stackStartPtr,int x1,int x2){
   char SPR_stack_dummy_var;
   if(x1==x2){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_int::assign(char* stackStartPtr,int& x1,int& x2){
   char SPR_stack_dummy_var;
   x1=x2;
   
   
} //End Of Method

void Assigner_double::assign(char* stackStartPtr,double& x1,double& x2){
   char SPR_stack_dummy_var;
   x1=x2;
   
   
} //End Of Method

