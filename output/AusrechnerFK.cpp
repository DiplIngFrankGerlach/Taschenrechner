#include "stdafx.h"
#include "header.h"
AusrechnerFK::AusrechnerFK(char* stackStartPtr,String_16& dateiname){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SPRFile> eingabeDatei;eingabeDatei=::new SPRFile(stackStartPtr,dateiname,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(eingabeDatei._theObject->systemHandle(stackStartPtr)<1){
      PrintfClass pfc;
      SPRStackArrayConcrete<char,26> spr_StringScratchc;strcpy(spr_StringScratchc._array,"kann Datei nicht oeffnen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchc).pr(stackStartPtr);
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   scanner=::new Scanner(stackStartPtr,eingabeDatei);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   Token t;t=scanner._theObject->nextToken(stackStartPtr);
   
   
} //End Of Method

AusrechnerFK::AusrechnerFK(char* stackStartPtr,SPRSmartPtr<String_16> ausdruck){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   scanner=::new Scanner(stackStartPtr,ausdruck);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   Token t;t=scanner._theObject->nextToken(stackStartPtr);
   
   
} //End Of Method

double AusrechnerFK::Addition(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   Token t;
   SPRSmartPtr<String_16> tokVal;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   scanner._theObject->currentToken(stackStartPtr,t,tokVal);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double links;links=this->Multiplication(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   scanner._theObject->currentToken(stackStartPtr,t,tokVal);
   double summe;summe=links;
   while((t==T_PLUS)||(t==T_MINUS)){
      Token tAlt;tAlt=t;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      scanner._theObject->nextToken(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      double rechts;rechts=this->Multiplication(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      scanner._theObject->currentToken(stackStartPtr,t,tokVal);
      if(tAlt==T_PLUS){
         summe=summe+rechts;
         
      }
      else
      {
      summe=summe-rechts;
         }
      
   };
   return summe;
   
   
} //End Of Method

double AusrechnerFK::Multiplication(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   Token t;
   SPRSmartPtr<String_16> tokVal;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double links;links=this->Primary(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   scanner._theObject->currentToken(stackStartPtr,t,tokVal);
   double prod;prod=links;
   while((t==T_MAL)||(t==T_DURCH)){
      Token tAlt;tAlt=t;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      scanner._theObject->nextToken(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      double rechts;rechts=this->Primary(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      scanner._theObject->currentToken(stackStartPtr,t,tokVal);
      if(tAlt==T_MAL){
         prod=prod*rechts;
         
      }
      else
      {
      prod=prod/rechts;
         }
      
   };
   return prod;
   
   
} //End Of Method

double AusrechnerFK::Primary(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   Token t;
   SPRSmartPtr<String_16> tokVal;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   scanner._theObject->currentToken(stackStartPtr,t,tokVal);
   switch(t){
      case T_KLAMMER_AUF:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->nextToken(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         double ret;ret=this->Addition(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->currentToken(stackStartPtr,t,tokVal);
         if(t==T_KLAMMER_ZU){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->nextToken(stackStartPtr);
            
         }
         else
         {
         SPRStackArrayConcrete<char,12> spr_StringScratchd;strcpy(spr_StringScratchd._array,") erwartet");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->fehler(stackStartPtr,spr_StringScratchd);
            }
         return ret;
         
      };break;
      
      case T_ZAHL:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->currentToken(stackStartPtr,t,tokVal);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         double ret;ret=tokVal._theObject->asDouble(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->nextToken(stackStartPtr);
         return ret;
         
      };break;
      
      case T_WORT:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->currentToken(stackStartPtr,t,tokVal);
         SPRStackArrayConcrete<char,5> spr_StringScratche;strcpy(spr_StringScratche._array,"exp");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,5> spr_StringScratchf;strcpy(spr_StringScratchf._array,"log");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((tokVal._theObject->equals(stackStartPtr,spr_StringScratche)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratchf)==1)){
            String_16 funktionsTyp;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            funktionsTyp.assign(stackStartPtr,tokVal);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->currentToken(stackStartPtr,t,tokVal);
            if(t==T_KLAMMER_AUF){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               scanner._theObject->nextToken(stackStartPtr);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               double arg1;arg1=this->Addition(stackStartPtr);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               scanner._theObject->currentToken(stackStartPtr,t,tokVal);
               if(t==T_KOMMA){
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  scanner._theObject->nextToken(stackStartPtr);
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  scanner._theObject->currentToken(stackStartPtr,t,tokVal);
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  double arg2;arg2=this->Addition(stackStartPtr);
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  scanner._theObject->currentToken(stackStartPtr,t,tokVal);
                  if(t==T_KLAMMER_ZU){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     scanner._theObject->nextToken(stackStartPtr);
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     scanner._theObject->currentToken(stackStartPtr,t,tokVal);
                     Math m;
                     SPRStackArrayConcrete<char,5> spr_StringScratch10;strcpy(spr_StringScratch10._array,"exp");
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     if(funktionsTyp.equals(stackStartPtr,spr_StringScratch10)==1){
                        if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                        return m.aHochB(stackStartPtr,arg1,arg2);
                        
                     }
                     SPRStackArrayConcrete<char,5> spr_StringScratch11;strcpy(spr_StringScratch11._array,"log");
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     if(funktionsTyp.equals(stackStartPtr,spr_StringScratch11)==1){
                        double ret;
                        
                                                 ret = ::log(arg2)/::log(arg1);
                                               
                        return ret;
                        
                     }
                     
                  }
                  else
                  {
                  SPRStackArrayConcrete<char,14> spr_StringScratch12;strcpy(spr_StringScratch12._array,"')' erwartet");
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     pfc.fstr(stackStartPtr,spr_StringScratch12).pr(stackStartPtr);
                     return -1.0;
                     }
                  
               }
               else
               {
               SPRStackArrayConcrete<char,14> spr_StringScratch13;strcpy(spr_StringScratch13._array,"',' erwartet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  pfc.fstr(stackStartPtr,spr_StringScratch13).pr(stackStartPtr);
                  return -1.0;
                  }
               
            }
            else
            {
            SPRStackArrayConcrete<char,14> spr_StringScratch14;strcpy(spr_StringScratch14._array,"'(' erwartet");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch14).pr(stackStartPtr);
               return -1.0;
               }
            
         }
         SPRStackArrayConcrete<char,7> spr_StringScratch15;strcpy(spr_StringScratch15._array,"sinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,8> spr_StringScratch16;strcpy(spr_StringScratch16._array,"asinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,9> spr_StringScratch17;strcpy(spr_StringScratch17._array,"cosinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,10> spr_StringScratch18;strcpy(spr_StringScratch18._array,"acosinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,5> spr_StringScratch19;strcpy(spr_StringScratch19._array,"tan");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,6> spr_StringScratch1a;strcpy(spr_StringScratch1a._array,"atan");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,6> spr_StringScratch1b;strcpy(spr_StringScratch1b._array,"sqrt");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,5> spr_StringScratch1c;strcpy(spr_StringScratch1c._array,"abs");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,11> spr_StringScratch1d;strcpy(spr_StringScratch1d._array,"fakultaet");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,4> spr_StringScratch1e;strcpy(spr_StringScratch1e._array,"ln");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((tokVal._theObject->equals(stackStartPtr,spr_StringScratch15)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch16)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch17)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch18)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch19)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch1a)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch1b)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch1c)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch1d)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch1e)==1)){
            String_16 funktionsTyp;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            funktionsTyp.assign(stackStartPtr,*(tokVal.to()));
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->currentToken(stackStartPtr,t,tokVal);
            if(t==T_KLAMMER_AUF){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               scanner._theObject->nextToken(stackStartPtr);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               double winkel;winkel=this->Addition(stackStartPtr);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               scanner._theObject->currentToken(stackStartPtr,t,tokVal);
               if(t==T_KLAMMER_ZU){
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  scanner._theObject->nextToken(stackStartPtr);
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  scanner._theObject->currentToken(stackStartPtr,t,tokVal);
                  Math m;
                  double ret;
                  SPRStackArrayConcrete<char,7> spr_StringScratch1f;strcpy(spr_StringScratch1f._array,"sinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch1f)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.sinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,8> spr_StringScratch20;strcpy(spr_StringScratch20._array,"asinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch20)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.asinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,9> spr_StringScratch21;strcpy(spr_StringScratch21._array,"cosinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch21)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.cosinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,10> spr_StringScratch22;strcpy(spr_StringScratch22._array,"acosinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch22)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.acosinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,5> spr_StringScratch23;strcpy(spr_StringScratch23._array,"tan");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch23)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.tangens(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,10> spr_StringScratch24;strcpy(spr_StringScratch24._array,"acosinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch24)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.atangens(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,6> spr_StringScratch25;strcpy(spr_StringScratch25._array,"sqrt");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch25)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.wurzel(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,4> spr_StringScratch26;strcpy(spr_StringScratch26._array,"ln");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch26)==1){
                     
                                           ret = ::log(winkel);//ja, "winkel" hier unpassend
                                         
                     return ret;
                     
                  }
                  SPRStackArrayConcrete<char,5> spr_StringScratch27;strcpy(spr_StringScratch27._array,"abs");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch27)==1){
                     
                                           ret = ::std::abs(winkel);//ja, "winkel" hier unpassend
                                         
                     return ret;
                     
                  }
                  SPRStackArrayConcrete<char,11> spr_StringScratch28;strcpy(spr_StringScratch28._array,"fakultaet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch28)==1){
                     int xi;xi=((int)winkel);
                     ret=1.0;
                     {//begin of SPR for statement
                     int i;i=2;
                     while(i<=xi){
                        ret=ret*((double)i);
                        i++;
                        
                     
                     }
                     }//end of SPR for statement
                     return ret;
                     
                  }
                  
               }
               else
               {
               SPRStackArrayConcrete<char,14> spr_StringScratch29;strcpy(spr_StringScratch29._array,"')' erwartet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  pfc.fstr(stackStartPtr,spr_StringScratch29).pr(stackStartPtr);
                  return -1.0;
                  }
               
            }
            else
            {
            SPRStackArrayConcrete<char,14> spr_StringScratch2a;strcpy(spr_StringScratch2a._array,"'(' erwartet");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch2a).pr(stackStartPtr);
               return -1.0;
               }
            
         }
         Math m;
         SPRStackArrayConcrete<char,4> spr_StringScratch2b;strcpy(spr_StringScratch2b._array,"pi");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(tokVal._theObject->equals(stackStartPtr,spr_StringScratch2b)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            return m.pi(stackStartPtr);
            
         }
         SPRStackArrayConcrete<char,3> spr_StringScratch2c;strcpy(spr_StringScratch2c._array,"e");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(tokVal._theObject->equals(stackStartPtr,spr_StringScratch2c)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            return m.e(stackStartPtr);
            
         }
         double variableValue;variableValue=-1.0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(variableList.search(stackStartPtr,*(tokVal.to()),variableValue)!=1){
            SPRStackArrayConcrete<char,22> spr_StringScratch2d;strcpy(spr_StringScratch2d._array,"variable $ not found");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch2d).sa(stackStartPtr,tokVal).pr(stackStartPtr);
            return -1.0;
            
         }
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->nextToken(stackStartPtr);
         return variableValue;
         
      };break;
      
      default:{
         String_16 errm;
         SPRStackArrayConcrete<char,21> spr_StringScratch2e;strcpy(spr_StringScratch2e._array,"unerwarteter Token ");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,spr_StringScratch2e);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,tokVal);
         SPRStackArrayConcrete<char,14> spr_StringScratch2f;strcpy(spr_StringScratch2f._array,"in Primary()");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,spr_StringScratch2f);
         SPRStackArrayConcrete<char,3> spr_StringScratch30;strcpy(spr_StringScratch30._array,"$");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch30).sa(stackStartPtr,errm).pr(stackStartPtr);
         SystemControl sc;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         sc.exit(stackStartPtr);
         
      };
      
   }
   return -11111.0;
   
   
} //End Of Method

void AusrechnerFK::fehler(char* stackStartPtr,SPRStackArray<char> meldung){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,3> spr_StringScratch31;strcpy(spr_StringScratch31._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch31).sa(stackStartPtr,meldung).pr(stackStartPtr);
   SystemControl sc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sc.exit(stackStartPtr);
   
   
} //End Of Method

void AusrechnerFK::setVariableValue(char* stackStartPtr,String_16& varName,double value){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   variableList.insert(stackStartPtr,varName,value);
   
   
} //End Of Method

