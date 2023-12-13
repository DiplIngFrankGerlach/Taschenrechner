#include "stdafx.h"
#include "header.h"
int Math::shlC(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   int i;
   
        int save=x&0x80000000;     
        x=x<<1;
        if(save != 0) x=x|1;
      
   return x;
   
   
} //End Of Method

int Math::shlC(char* stackStartPtr,int x,int n){
   char SPR_stack_dummy_var;
   int i;
   
        int linkeBits;
        linkeBits=x>>(32-n);
        x=x<<n;
        x=x|linkeBits;
      
   return x;
   
   
} //End Of Method

double Math::sinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = sin(rad);
      
   return y;
   
   
} //End Of Method

double Math::asinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = asin(rad);
      
   return y;
   
   
} //End Of Method

double Math::cosinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = cos(rad);
      
   return y;
   
   
} //End Of Method

double Math::acosinus(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = acos(rad);
      
   return y;
   
   
} //End Of Method

double Math::tangens(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = tan(rad);
      
   return y;
   
   
} //End Of Method

double Math::atangens(char* stackStartPtr,double rad){
   char SPR_stack_dummy_var;
   double y;
   
          y = atan(rad);
      
   return y;
   
   
} //End Of Method

double Math::aHochB(char* stackStartPtr,double a,double b){
   char SPR_stack_dummy_var;
   double y;
   
          y = ::pow(a,b);
      
   return y;
   
   
} //End Of Method

double Math::euler(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double y;
   
          y = exp(x);
      
   return y;
   
   
} //End Of Method

double Math::pi(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 3.14159265358979323846264338327950288;
   
   
} //End Of Method

double Math::e(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return 2.71828182845904523536028747135266249;
   
   
} //End Of Method

void Math::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double y;y=this->sinus(stackStartPtr,45.0/360.0*2.0*3.1415);
   double unten;unten=0.7070;
   double oben;oben=0.7072;
   if((y<unten)||(y>oben)){
      SPRStackArrayConcrete<char,27> spr_StringScratch16;strcpy(spr_StringScratch16._array,"Math::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch16).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch17;strcpy(spr_StringScratch17._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch17).sa(stackStartPtr,y).pr(stackStartPtr);
   y=y*1000000000.0;
   y=y*1000000000.0;
   y=y*1000000000.0;
   y=y*1000000000.0;
   SPRStackArrayConcrete<char,3> spr_StringScratch18;strcpy(spr_StringScratch18._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch18).sa(stackStartPtr,y).pr(stackStartPtr);
   SPRStackArrayConcrete<char,3> spr_StringScratch19;strcpy(spr_StringScratch19._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch19).saExp(stackStartPtr,y).pr(stackStartPtr);
   SPRStackArrayConcrete<char,3> spr_StringScratch1a;strcpy(spr_StringScratch1a._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1a).sa(stackStartPtr,this->e(stackStartPtr)).pr(stackStartPtr);
   SPRStackArrayConcrete<char,30> spr_StringScratch1b;strcpy(spr_StringScratch1b._array,"Math::UnitTest() erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1b).pr(stackStartPtr);
   
   
} //End Of Method

int Math::log2(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   int i;i=0;
   while(x!=0){
      x=x>>1;
      i++;
      
   };
   return i-1;
   
   
} //End Of Method

int Math::pruefeZwP(char* stackStartPtr,int n){
   char SPR_stack_dummy_var;
   int verundet;verundet=n&(n-1);
   if((n>0)&&(verundet==0)){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

double Math::fabs(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double n;n=0.0;
   if(x<n){
      return x*-1.0;
      
   }
   return x;
   
   
} //End Of Method

