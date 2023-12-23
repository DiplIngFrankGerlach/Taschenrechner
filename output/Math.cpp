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
      SPRStackArrayConcrete<char,27> spr_StringScratchaa;strcpy(spr_StringScratchaa._array,"Math::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchaa).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratchab;strcpy(spr_StringScratchab._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchab).sa(stackStartPtr,y).pr(stackStartPtr);
   y=y*1000000000.0;
   y=y*1000000000.0;
   y=y*1000000000.0;
   y=y*1000000000.0;
   SPRStackArrayConcrete<char,3> spr_StringScratchac;strcpy(spr_StringScratchac._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchac).sa(stackStartPtr,y).pr(stackStartPtr);
   SPRStackArrayConcrete<char,3> spr_StringScratchad;strcpy(spr_StringScratchad._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchad).saExp(stackStartPtr,y).pr(stackStartPtr);
   SPRStackArrayConcrete<char,3> spr_StringScratchae;strcpy(spr_StringScratchae._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchae).sa(stackStartPtr,this->e(stackStartPtr)).pr(stackStartPtr);
   SPRStackArrayConcrete<char,30> spr_StringScratchaf;strcpy(spr_StringScratchaf._array,"Math::UnitTest() erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchaf).pr(stackStartPtr);
   
   
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

double Math::wurzel(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double ret;
    ret = ::sqrt(x); 
   return ret;
   
   
} //End Of Method

double Math::fabs(char* stackStartPtr,double x){
   char SPR_stack_dummy_var;
   double n;n=0.0;
   if(x<n){
      return x*-1.0;
      
   }
   return x;
   
   
} //End Of Method

