#include "stdafx.h"
#include "header.h"
Scanner::Scanner(char* stackStartPtr,SPRSmartPtr<SPRFile> eingabeDatei_i){
   char SPR_stack_dummy_var;
   eingabeDatei=eingabeDatei_i;
   dateiVollGelesen=0;
   SPRStackArrayConcrete<char,2> spr_StringScratch2f;strcpy(spr_StringScratch2f._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   tokenWert=::new String_16(stackStartPtr,spr_StringScratch2f);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
      dateiVollGelesen=1;
      
   }
   CT=T_UNGUELTIG;
   leseZeiger=0;
   
   
} //End Of Method

Scanner::Scanner(char* stackStartPtr,SPRSmartPtr<String_16> quellei){
   char SPR_stack_dummy_var;
   quelle=quellei;
   dateiVollGelesen=0;
   SPRStackArrayConcrete<char,2> spr_StringScratch30;strcpy(spr_StringScratch30._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   tokenWert=::new String_16(stackStartPtr,spr_StringScratch30);
   leseZeiger=0;
   CT=T_UNGUELTIG;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
      dateiVollGelesen=1;
      
   }
   
   
} //End Of Method

void Scanner::currentToken(char* stackStartPtr,Token& t,SPRSmartPtr<String_16>& wert){
   char SPR_stack_dummy_var;
   t=CT;
   wert=tokenWert;
   
   
} //End Of Method

int Scanner::istWortFolgezeichen(char* stackStartPtr,char z){
   char SPR_stack_dummy_var;
   switch(z){
      case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':case 'y':case 'z':case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':case 'G':case 'H':case 'I':case 'J':case 'K':case 'L':case 'M':case 'N':case 'O':case 'P':case 'Q':case 'R':case 'S':case 'T':case 'U':case 'V':case 'W':case 'X':case 'Y':case 'Z':case '_':case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };break;
      
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

void Scanner::esseZeichen(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((dateiVollGelesen==0)&&(this->readChar(stackStartPtr,aktuellesZeichen)<1)){
      dateiVollGelesen=1;
      
   }
   
   
} //End Of Method

enum Token Scanner::nextToken(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int debug;debug=0;
   if(dateiVollGelesen==1){
      CT=T_DATEI_ENDE;
      if(debug){
         SPRStackArrayConcrete<char,14> spr_StringScratch31;strcpy(spr_StringScratch31._array,"T_DATEI_ENDE");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch31).pr(stackStartPtr);
         
      }
      return T_DATEI_ENDE;
      
   }
   int lzLesen;lzLesen=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   do{
      if(this->istLeerzeichen(stackStartPtr,aktuellesZeichen)==1){
         if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
            dateiVollGelesen=1;
            CT=T_DATEI_ENDE;
            if(debug){
               SPRStackArrayConcrete<char,14> spr_StringScratch32;strcpy(spr_StringScratch32._array,"T_DATEI_ENDE");
               pfc.fstr(stackStartPtr,spr_StringScratch32).pr(stackStartPtr);
               
            }
            return T_DATEI_ENDE;
            
         }
         
      }
      else
      {
      lzLesen=0;
         }
      
   }
   while(lzLesen==1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   tokenWert._theObject->clear(stackStartPtr);
   if(aktuellesZeichen==13){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
         dateiVollGelesen=1;
         CT=T_DATEI_ENDE;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch33;strcpy(spr_StringScratch33._array,"T_DATEI_ENDE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch33).pr(stackStartPtr);
            
         }
         return T_DATEI_ENDE;
         
      }
      if(aktuellesZeichen=='\n'){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
            dateiVollGelesen=1;
            
         }
         CT=T_NEUE_ZEILE;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch34;strcpy(spr_StringScratch34._array,"T_NEUE_ZEILE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch34).pr(stackStartPtr);
            
         }
         return T_NEUE_ZEILE;
         
      }
      else
      {
      SPRStackArrayConcrete<char,40> spr_StringScratch35;strcpy(spr_StringScratch35._array,"einzelnes \\r gefunden. Beende Scanner");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch35).pr(stackStartPtr);
         CT=T_DATEI_ENDE;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch36;strcpy(spr_StringScratch36._array,"T_DATEI_ENDE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch36).pr(stackStartPtr);
            
         }
         return T_DATEI_ENDE;
         }
      
   }
   switch(aktuellesZeichen){
      case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':case 'y':case 'z':case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':case 'G':case 'H':case 'I':case 'J':case 'K':case 'L':case 'M':case 'N':case 'O':case 'P':case 'Q':case 'R':case 'S':case 'T':case 'U':case 'V':case 'W':case 'X':case 'Y':case 'Z':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
         int istWZ;istWZ=1;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         do{
            if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
               dateiVollGelesen=1;
               CT=T_WORT;
               if(debug){
                  SPRStackArrayConcrete<char,8> spr_StringScratch37;strcpy(spr_StringScratch37._array,"T_WORT");
                  pfc.fstr(stackStartPtr,spr_StringScratch37).pr(stackStartPtr);
                  
               }
               return T_WORT;
               
            }
            if(this->istWortFolgezeichen(stackStartPtr,aktuellesZeichen)==1){
               tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
               
            }
            else
            {
            istWZ=0;
               }
            
         }
         while(istWZ==1);
         CT=T_WORT;
         if(debug){
            SPRStackArrayConcrete<char,8> spr_StringScratch38;strcpy(spr_StringScratch38._array,"T_WORT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch38).pr(stackStartPtr);
            
         }
         return T_WORT;
         
      };break;
      
      case '(':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_KLAMMER_AUF;
         if(debug){
            SPRStackArrayConcrete<char,15> spr_StringScratch39;strcpy(spr_StringScratch39._array,"T_KLAMMER_AUF");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch39).pr(stackStartPtr);
            
         }
         return T_KLAMMER_AUF;
         
      };break;
      
      case ')':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_KLAMMER_ZU;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch3a;strcpy(spr_StringScratch3a._array,"T_KLAMMER_ZU");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch3a).pr(stackStartPtr);
            
         }
         return T_KLAMMER_ZU;
         
      };break;
      
      case '[':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_ECK_KLAMMER_AUF;
         if(debug){
            SPRStackArrayConcrete<char,19> spr_StringScratch3b;strcpy(spr_StringScratch3b._array,"T_ECK_KLAMMER_AUF");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch3b).pr(stackStartPtr);
            
         }
         return T_ECK_KLAMMER_AUF;
         
      };break;
      
      case ']':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_ECK_KLAMMER_ZU;
         if(debug){
            SPRStackArrayConcrete<char,19> spr_StringScratch3c;strcpy(spr_StringScratch3c._array,"T_ECK_KLAMMER_AUF");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch3c).pr(stackStartPtr);
            
         }
         return T_ECK_KLAMMER_ZU;
         
      };break;
      
      case ',':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_KOMMA;
         if(debug){
            SPRStackArrayConcrete<char,9> spr_StringScratch3d;strcpy(spr_StringScratch3d._array,"T_KOMMA");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch3d).pr(stackStartPtr);
            
         }
         return T_KOMMA;
         
      };break;
      
      case ':':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_DOPPEL_PUNKT;
         if(debug){
            SPRStackArrayConcrete<char,16> spr_StringScratch3e;strcpy(spr_StringScratch3e._array,"T_DOPPEL_PUNKT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch3e).pr(stackStartPtr);
            
         }
         return T_DOPPEL_PUNKT;
         
      };break;
      
      case '|':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_PIPE;
         if(debug){
            SPRStackArrayConcrete<char,8> spr_StringScratch3f;strcpy(spr_StringScratch3f._array,"T_PIPE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch3f).pr(stackStartPtr);
            
         }
         return T_PIPE;
         
      };break;
      
      case '+':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_PLUS;
         if(debug){
            SPRStackArrayConcrete<char,8> spr_StringScratch40;strcpy(spr_StringScratch40._array,"T_PLUS");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch40).pr(stackStartPtr);
            
         }
         return T_PLUS;
         
      };break;
      
      case '@':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_AT;
         if(debug){
            SPRStackArrayConcrete<char,6> spr_StringScratch41;strcpy(spr_StringScratch41._array,"T_AT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch41).pr(stackStartPtr);
            
         }
         return T_AT;
         
      };break;
      
      case '.':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_PUNKT;
         if(debug){
            SPRStackArrayConcrete<char,9> spr_StringScratch42;strcpy(spr_StringScratch42._array,"T_PUNKT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch42).pr(stackStartPtr);
            
         }
         return T_PUNKT;
         
      };break;
      
      case '-':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_MINUS;
         if(debug){
            SPRStackArrayConcrete<char,9> spr_StringScratch43;strcpy(spr_StringScratch43._array,"T_MINUS");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch43).pr(stackStartPtr);
            
         }
         return T_MINUS;
         
      };break;
      
      case ';':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_SEMI;
         if(debug){
            SPRStackArrayConcrete<char,8> spr_StringScratch44;strcpy(spr_StringScratch44._array,"T_SEMI");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch44).pr(stackStartPtr);
            
         }
         return T_SEMI;
         
      };break;
      
      case '*':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_MAL;
         if(debug){
            SPRStackArrayConcrete<char,7> spr_StringScratch45;strcpy(spr_StringScratch45._array,"T_MAL");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch45).pr(stackStartPtr);
            
         }
         return T_MAL;
         
      };break;
      
      case '/':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->assign(stackStartPtr,aktuellesZeichen);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->esseZeichen(stackStartPtr);
         CT=T_DURCH;
         if(debug){
            SPRStackArrayConcrete<char,9> spr_StringScratch46;strcpy(spr_StringScratch46._array,"T_DURCH");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch46).pr(stackStartPtr);
            
         }
         return T_DURCH;
         
      };break;
      
      case '\n':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
            dateiVollGelesen=1;
            
         }
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch47;strcpy(spr_StringScratch47._array,"T_NEUE_ZEILE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch47).pr(stackStartPtr);
            
         }
         CT=T_NEUE_ZEILE;
         return T_NEUE_ZEILE;
         
      };break;
      
      case '"':{
         int istZK;istZK=1;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         do{
            if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
               dateiVollGelesen=1;
               CT=T_DATEI_ENDE;
               if(debug){
                  SPRStackArrayConcrete<char,14> spr_StringScratch48;strcpy(spr_StringScratch48._array,"T_DATEI_ENDE");
                  pfc.fstr(stackStartPtr,spr_StringScratch48).pr(stackStartPtr);
                  
               }
               return T_DATEI_ENDE;
               
            }
            if(aktuellesZeichen!='"'){
               tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
               
            }
            else
            {
            istZK=0;
               }
            
         }
         while(istZK==1);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
            dateiVollGelesen=1;
            
         }
         if(debug){
            SPRStackArrayConcrete<char,16> spr_StringScratch49;strcpy(spr_StringScratch49._array,"T_ZEICHENKETTE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch49).pr(stackStartPtr);
            
         }
         CT=T_ZEICHENKETTE;
         return T_ZEICHENKETTE;
         
      };break;
      
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
         int istZahl;istZahl=1;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         do{
            if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
               dateiVollGelesen=1;
               CT=T_ZAHL;
               if(debug){
                  SPRStackArrayConcrete<char,8> spr_StringScratch4a;strcpy(spr_StringScratch4a._array,"T_ZAHL");
                  pfc.fstr(stackStartPtr,spr_StringScratch4a).pr(stackStartPtr);
                  
               }
               return T_ZAHL;
               
            }
            if(zkn.istZiffer(stackStartPtr,aktuellesZeichen)==1){
               tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
               
            }
            else
            {
            if(aktuellesZeichen=='.'){
                  tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
                  
               }
               else
               {
               istZahl=0;
                  }
               }
            
         }
         while(istZahl==1);
         CT=T_ZAHL;
         if(debug){
            SPRStackArrayConcrete<char,8> spr_StringScratch4b;strcpy(spr_StringScratch4b._array,"T_ZAHL");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch4b).pr(stackStartPtr);
            
         }
         return T_ZAHL;
         
      };break;
      
      default:{
         CT=T_DATEI_ENDE;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch4c;strcpy(spr_StringScratch4c._array,"T_DATEI_ENDE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch4c).pr(stackStartPtr);
            
         }
         return T_DATEI_ENDE;
         
      };
      
   }
   CT=T_DATEI_ENDE;
   if(debug){
      SPRStackArrayConcrete<char,14> spr_StringScratch4d;strcpy(spr_StringScratch4d._array,"T_DATEI_ENDE");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch4d).pr(stackStartPtr);
      
   }
   return T_DATEI_ENDE;
   
   
} //End Of Method

int Scanner::istLeerzeichen(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(((int)c)){
      case 32:case 9:{
         return 1;
         
      };break;
      
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int Scanner::readChar(char* stackStartPtr,char& zeichen){
   char SPR_stack_dummy_var;
   if(quelle!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(leseZeiger==quelle._theObject->length(stackStartPtr)){
         return -1;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      zeichen=quelle._theObject->getAt(stackStartPtr,leseZeiger);
      leseZeiger++;
      return 1;
      
   }
   else
   {
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      return eingabeDatei._theObject->readChar(stackStartPtr,aktuellesZeichen);
      }
   return -1;
   
   
} //End Of Method

