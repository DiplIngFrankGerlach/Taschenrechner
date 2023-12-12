#include "stdafx.h"
#include "header.h"
AusrechnerFK::AusrechnerFK(char* stackStartPtr,String_16& dateiname){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SPRFile> eingabeDatei;eingabeDatei=::new SPRFile(stackStartPtr,dateiname,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(eingabeDatei._theObject->systemHandle(stackStartPtr)<1){
      PrintfClass pfc;
      SPRStackArrayConcrete<char,26> spr_StringScratchb;strcpy(spr_StringScratchb._array,"kann Datei nicht oeffnen");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchb).pr(stackStartPtr);
      
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
         SPRStackArrayConcrete<char,12> spr_StringScratchc;strcpy(spr_StringScratchc._array,") erwartet");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->fehler(stackStartPtr,spr_StringScratchc);
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
         double variableValue;variableValue=-1.0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(variableList.search(stackStartPtr,*(tokVal.to()),variableValue)!=1){
            SPRStackArrayConcrete<char,22> spr_StringScratchd;strcpy(spr_StringScratchd._array,"variable $ not found");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchd).sa(stackStartPtr,tokVal).pr(stackStartPtr);
            return -1.0;
            
         }
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         scanner._theObject->nextToken(stackStartPtr);
         return variableValue;
         
      };break;
      
      default:{
         String_16 errm;
         SPRStackArrayConcrete<char,21> spr_StringScratche;strcpy(spr_StringScratche._array,"unerwarteter Token ");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,spr_StringScratche);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,tokVal);
         SPRStackArrayConcrete<char,14> spr_StringScratchf;strcpy(spr_StringScratchf._array,"in Primary()");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         errm.append(stackStartPtr,spr_StringScratchf);
         SPRStackArrayConcrete<char,3> spr_StringScratch10;strcpy(spr_StringScratch10._array,"$");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch10).sa(stackStartPtr,errm).pr(stackStartPtr);
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
   SPRStackArrayConcrete<char,3> spr_StringScratch11;strcpy(spr_StringScratch11._array,"$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch11).sa(stackStartPtr,meldung).pr(stackStartPtr);
   SystemControl sc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sc.exit(stackStartPtr);
   
   
} //End Of Method

void AusrechnerFK::setVariableValue(char* stackStartPtr,String_16& varName,double value){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   variableList.insert(stackStartPtr,varName,value);
   
   
} //End Of Method

