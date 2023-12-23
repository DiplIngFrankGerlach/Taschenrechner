#include "stdafx.h"
#include "header.h"
AusrechnerFK::AusrechnerFK(char* stackStartPtr,String_16& dateiname){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SPRFile> eingabeDatei;eingabeDatei=::new SPRFile(stackStartPtr,dateiname,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(eingabeDatei._theObject->systemHandle(stackStartPtr)<1){
      PrintfClass pfc;
      SPRStackArrayConcrete<char,26> spr_StringScratch45;strcpy(spr_StringScratch45._array,"kann Datei nicht oeffnen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch45).pr(stackStartPtr);
      
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
         SPRStackArrayConcrete<char,12> spr_StringScratch46;strcpy(spr_StringScratch46._array,") erwartet");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->fehler(stackStartPtr,spr_StringScratch46);
            }
         return ret;
         
      };break;
      
      case T_MINUS:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->nextToken(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         return this->Primary(stackStartPtr)*-1.0;
         
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
         SPRStackArrayConcrete<char,5> spr_StringScratch47;strcpy(spr_StringScratch47._array,"exp");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,5> spr_StringScratch48;strcpy(spr_StringScratch48._array,"log");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((tokVal._theObject->equals(stackStartPtr,spr_StringScratch47)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch48)==1)){
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
                     SPRStackArrayConcrete<char,5> spr_StringScratch49;strcpy(spr_StringScratch49._array,"exp");
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     if(funktionsTyp.equals(stackStartPtr,spr_StringScratch49)==1){
                        if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                        return m.aHochB(stackStartPtr,arg1,arg2);
                        
                     }
                     SPRStackArrayConcrete<char,5> spr_StringScratch4a;strcpy(spr_StringScratch4a._array,"log");
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     if(funktionsTyp.equals(stackStartPtr,spr_StringScratch4a)==1){
                        double ret;
                        
                                                 ret = ::log(arg2)/::log(arg1);
                                               
                        return ret;
                        
                     }
                     
                  }
                  else
                  {
                  SPRStackArrayConcrete<char,14> spr_StringScratch4b;strcpy(spr_StringScratch4b._array,"')' erwartet");
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     pfc.fstr(stackStartPtr,spr_StringScratch4b).pr(stackStartPtr);
                     return -1.0;
                     }
                  
               }
               else
               {
               SPRStackArrayConcrete<char,14> spr_StringScratch4c;strcpy(spr_StringScratch4c._array,"',' erwartet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  pfc.fstr(stackStartPtr,spr_StringScratch4c).pr(stackStartPtr);
                  return -1.0;
                  }
               
            }
            else
            {
            SPRStackArrayConcrete<char,14> spr_StringScratch4d;strcpy(spr_StringScratch4d._array,"'(' erwartet");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch4d).pr(stackStartPtr);
               return -1.0;
               }
            
         }
         SPRStackArrayConcrete<char,7> spr_StringScratch4e;strcpy(spr_StringScratch4e._array,"sinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,8> spr_StringScratch4f;strcpy(spr_StringScratch4f._array,"asinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,9> spr_StringScratch50;strcpy(spr_StringScratch50._array,"cosinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,10> spr_StringScratch51;strcpy(spr_StringScratch51._array,"acosinus");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,5> spr_StringScratch52;strcpy(spr_StringScratch52._array,"tan");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,6> spr_StringScratch53;strcpy(spr_StringScratch53._array,"atan");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,6> spr_StringScratch54;strcpy(spr_StringScratch54._array,"sqrt");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,5> spr_StringScratch55;strcpy(spr_StringScratch55._array,"abs");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,11> spr_StringScratch56;strcpy(spr_StringScratch56._array,"fakultaet");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,4> spr_StringScratch57;strcpy(spr_StringScratch57._array,"ln");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((tokVal._theObject->equals(stackStartPtr,spr_StringScratch4e)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch4f)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch50)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch51)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch52)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch53)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch54)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch55)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch56)==1)||(tokVal._theObject->equals(stackStartPtr,spr_StringScratch57)==1)){
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
                  SPRStackArrayConcrete<char,7> spr_StringScratch58;strcpy(spr_StringScratch58._array,"sinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch58)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.sinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,8> spr_StringScratch59;strcpy(spr_StringScratch59._array,"asinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch59)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.asinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,9> spr_StringScratch5a;strcpy(spr_StringScratch5a._array,"cosinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch5a)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.cosinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,10> spr_StringScratch5b;strcpy(spr_StringScratch5b._array,"acosinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch5b)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.acosinus(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,5> spr_StringScratch5c;strcpy(spr_StringScratch5c._array,"tan");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch5c)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.tangens(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,10> spr_StringScratch5d;strcpy(spr_StringScratch5d._array,"acosinus");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch5d)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.atangens(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,6> spr_StringScratch5e;strcpy(spr_StringScratch5e._array,"sqrt");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch5e)==1){
                     if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                     return m.wurzel(stackStartPtr,winkel);
                     
                  }
                  SPRStackArrayConcrete<char,4> spr_StringScratch5f;strcpy(spr_StringScratch5f._array,"ln");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch5f)==1){
                     
                                           ret = ::log(winkel);//ja, "winkel" hier unpassend
                                         
                     return ret;
                     
                  }
                  SPRStackArrayConcrete<char,5> spr_StringScratch60;strcpy(spr_StringScratch60._array,"abs");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch60)==1){
                     
                                           ret = ::std::abs(winkel);//ja, "winkel" hier unpassend
                                         
                     return ret;
                     
                  }
                  SPRStackArrayConcrete<char,11> spr_StringScratch61;strcpy(spr_StringScratch61._array,"fakultaet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if(funktionsTyp.equals(stackStartPtr,spr_StringScratch61)==1){
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
               SPRStackArrayConcrete<char,14> spr_StringScratch62;strcpy(spr_StringScratch62._array,"')' erwartet");
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                  pfc.fstr(stackStartPtr,spr_StringScratch62).pr(stackStartPtr);
                  return -1.0;
                  }
               
            }
            else
            {
            SPRStackArrayConcrete<char,14> spr_StringScratch63;strcpy(spr_StringScratch63._array,"'(' erwartet");
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               pfc.fstr(stackStartPtr,spr_StringScratch63).pr(stackStartPtr);
               return -1.0;
               }
            
         }
         Math m;
         SPRStackArrayConcrete<char,4> spr_StringScratch64;strcpy(spr_StringScratch64._array,"pi");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(tokVal._theObject->equals(stackStartPtr,spr_StringScratch64)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            return m.pi(stackStartPtr);
            
         }
         SPRStackArrayConcrete<char,3> spr_StringScratch65;strcpy(spr_StringScratch65._array,"e");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(tokVal._theObject->equals(stackStartPtr,spr_StringScratch65)==1){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            scanner._theObject->nextToken(stackStartPtr);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            return m.e(stackStartPtr);
            
         }
         double variableValue;variableValue=-1.0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(variableList.search(stackStartPtr,*(tokVal.to()),variableValue)!=1){
            SPRStackArrayConcrete<char,22> spr_StringScratch66;strcpy(spr_StringScratch66._array,"variable $ not found");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch66).sa(stackStartPtr,tokVal).pr(stackStartPtr);
            return -1.0;
            
         }
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->nextToken(stackStartPtr);
         return variableValue;
         
      };break;
      
      default:{
         String_16 errm;
         SPRStackArrayConcrete<char,21> spr_StringScratch67;strcpy(spr_StringScratch67._array,"unerwarteter Token ");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,spr_StringScratch67);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,tokVal);
         SPRStackArrayConcrete<char,14> spr_StringScratch68;strcpy(spr_StringScratch68._array,"in Primary()");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,spr_StringScratch68);
         SPRStackArrayConcrete<char,3> spr_StringScratch69;strcpy(spr_StringScratch69._array,"$");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch69).sa(stackStartPtr,errm).pr(stackStartPtr);
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
   SPRStackArrayConcrete<char,3> spr_StringScratch6a;strcpy(spr_StringScratch6a._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch6a).sa(stackStartPtr,meldung).pr(stackStartPtr);
   SystemControl sc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sc.exit(stackStartPtr);
   
   
} //End Of Method

void AusrechnerFK::setVariableValue(char* stackStartPtr,String_16& varName,double value){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   variableList.insert(stackStartPtr,varName,value);
   
   
} //End Of Method

