#include "stdafx.h"
#include "header.h"
Scanner::Scanner(char* stackStartPtr,SPRSmartPtr<SPRFile> eingabeDatei_i){
   char SPR_stack_dummy_var;
   eingabeDatei=eingabeDatei_i;
   dateiVollGelesen=0;
   SPRStackArrayConcrete<char,2> spr_StringScratchf4;strcpy(spr_StringScratchf4._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   tokenWert=::new String_16(stackStartPtr,spr_StringScratchf4);
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
   SPRStackArrayConcrete<char,2> spr_StringScratchf5;strcpy(spr_StringScratchf5._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   tokenWert=::new String_16(stackStartPtr,spr_StringScratchf5);
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
         SPRStackArrayConcrete<char,14> spr_StringScratchf6;strcpy(spr_StringScratchf6._array,"T_DATEI_ENDE");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchf6).pr(stackStartPtr);
         
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
               SPRStackArrayConcrete<char,14> spr_StringScratchf7;strcpy(spr_StringScratchf7._array,"T_DATEI_ENDE");
               pfc.fstr(stackStartPtr,spr_StringScratchf7).pr(stackStartPtr);
               
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
            SPRStackArrayConcrete<char,14> spr_StringScratchf8;strcpy(spr_StringScratchf8._array,"T_DATEI_ENDE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchf8).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,14> spr_StringScratchf9;strcpy(spr_StringScratchf9._array,"T_NEUE_ZEILE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchf9).pr(stackStartPtr);
            
         }
         return T_NEUE_ZEILE;
         
      }
      else
      {
      SPRStackArrayConcrete<char,40> spr_StringScratchfa;strcpy(spr_StringScratchfa._array,"einzelnes \\r gefunden. Beende Scanner");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchfa).pr(stackStartPtr);
         CT=T_DATEI_ENDE;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratchfb;strcpy(spr_StringScratchfb._array,"T_DATEI_ENDE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchfb).pr(stackStartPtr);
            
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
                  SPRStackArrayConcrete<char,8> spr_StringScratchfc;strcpy(spr_StringScratchfc._array,"T_WORT");
                  pfc.fstr(stackStartPtr,spr_StringScratchfc).pr(stackStartPtr);
                  
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
            SPRStackArrayConcrete<char,8> spr_StringScratchfd;strcpy(spr_StringScratchfd._array,"T_WORT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchfd).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,15> spr_StringScratchfe;strcpy(spr_StringScratchfe._array,"T_KLAMMER_AUF");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchfe).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,14> spr_StringScratchff;strcpy(spr_StringScratchff._array,"T_KLAMMER_ZU");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchff).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,19> spr_StringScratch100;strcpy(spr_StringScratch100._array,"T_ECK_KLAMMER_AUF");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch100).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,19> spr_StringScratch101;strcpy(spr_StringScratch101._array,"T_ECK_KLAMMER_AUF");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch101).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,9> spr_StringScratch102;strcpy(spr_StringScratch102._array,"T_KOMMA");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch102).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,16> spr_StringScratch103;strcpy(spr_StringScratch103._array,"T_DOPPEL_PUNKT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch103).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,8> spr_StringScratch104;strcpy(spr_StringScratch104._array,"T_PIPE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch104).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,8> spr_StringScratch105;strcpy(spr_StringScratch105._array,"T_PLUS");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch105).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,6> spr_StringScratch106;strcpy(spr_StringScratch106._array,"T_AT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch106).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,9> spr_StringScratch107;strcpy(spr_StringScratch107._array,"T_PUNKT");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch107).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,9> spr_StringScratch108;strcpy(spr_StringScratch108._array,"T_MINUS");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch108).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,8> spr_StringScratch109;strcpy(spr_StringScratch109._array,"T_SEMI");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch109).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,7> spr_StringScratch10a;strcpy(spr_StringScratch10a._array,"T_MAL");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch10a).pr(stackStartPtr);
            
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
            SPRStackArrayConcrete<char,9> spr_StringScratch10b;strcpy(spr_StringScratch10b._array,"T_DURCH");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch10b).pr(stackStartPtr);
            
         }
         return T_DURCH;
         
      };break;
      
      case '\n':{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
            dateiVollGelesen=1;
            
         }
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch10c;strcpy(spr_StringScratch10c._array,"T_NEUE_ZEILE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch10c).pr(stackStartPtr);
            
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
                  SPRStackArrayConcrete<char,14> spr_StringScratch10d;strcpy(spr_StringScratch10d._array,"T_DATEI_ENDE");
                  pfc.fstr(stackStartPtr,spr_StringScratch10d).pr(stackStartPtr);
                  
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
            SPRStackArrayConcrete<char,16> spr_StringScratch10e;strcpy(spr_StringScratch10e._array,"T_ZEICHENKETTE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch10e).pr(stackStartPtr);
            
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
                  SPRStackArrayConcrete<char,8> spr_StringScratch10f;strcpy(spr_StringScratch10f._array,"T_ZAHL");
                  pfc.fstr(stackStartPtr,spr_StringScratch10f).pr(stackStartPtr);
                  
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
         if((aktuellesZeichen=='E')||(aktuellesZeichen=='e')){
            SPRStackArrayConcrete<char,3> spr_StringScratch110;strcpy(spr_StringScratch110._array,"e");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            tokenWert._theObject->append(stackStartPtr,spr_StringScratch110);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
               SPRStackArrayConcrete<char,19> spr_StringScratch111;strcpy(spr_StringScratch111._array,"exponent erwartet");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch111).pr(stackStartPtr);
               CT=T_DATEI_ENDE;
               return T_DATEI_ENDE;
               
            }
            if((aktuellesZeichen=='-')||(aktuellesZeichen=='+')){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if(this->readChar(stackStartPtr,aktuellesZeichen)<1){
                  dateiVollGelesen=1;
                  SPRStackArrayConcrete<char,19> spr_StringScratch112;strcpy(spr_StringScratch112._array,"exponent erwartet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  pfc.fstr(stackStartPtr,spr_StringScratch112).pr(stackStartPtr);
                  CT=T_DATEI_ENDE;
                  return T_DATEI_ENDE;
                  
               }
               
            }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               if(zkn.istZiffer(stackStartPtr,aktuellesZeichen)==1){
                  tokenWert._theObject->append(stackStartPtr,aktuellesZeichen);
                  istZahl=1;
                  
               }
               else
               {
               istZahl=0;
                  }
               if((istZahl==1)&&(this->readChar(stackStartPtr,aktuellesZeichen)<1)){
                  dateiVollGelesen=1;
                  CT=T_ZAHL;
                  if(debug){
                     SPRStackArrayConcrete<char,8> spr_StringScratch113;strcpy(spr_StringScratch113._array,"T_ZAHL");
                     pfc.fstr(stackStartPtr,spr_StringScratch113).pr(stackStartPtr);
                     
                  }
                  return T_ZAHL;
                  
               }
               
            }
            while(istZahl==1);
            
         }
         CT=T_ZAHL;
         if(debug){
            SPRStackArrayConcrete<char,8> spr_StringScratch114;strcpy(spr_StringScratch114._array,"T_ZAHL");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch114).pr(stackStartPtr);
            
         }
         return T_ZAHL;
         
      };break;
      
      default:{
         CT=T_DATEI_ENDE;
         if(debug){
            SPRStackArrayConcrete<char,14> spr_StringScratch115;strcpy(spr_StringScratch115._array,"T_DATEI_ENDE");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch115).pr(stackStartPtr);
            
         }
         return T_DATEI_ENDE;
         
      };
      
   }
   CT=T_DATEI_ENDE;
   if(debug){
      SPRStackArrayConcrete<char,14> spr_StringScratch116;strcpy(spr_StringScratch116._array,"T_DATEI_ENDE");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch116).pr(stackStartPtr);
      
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

