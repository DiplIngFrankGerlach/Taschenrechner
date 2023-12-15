#include "stdafx.h"
#include "header.h"
int ZKNuetzlich::istLeerzeichen(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(((int)c)){
      case 32:case 9:case 10:case 13:{
         return 1;
         
      };break;
      
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int ZKNuetzlich::istZiffer(char* stackStartPtr,char z){
   char SPR_stack_dummy_var;
   switch(z){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };break;
      
      
   }
   return 0;
   
   
} //End Of Method

void ZKNuetzlich::wandle(char* stackStartPtr,longlong zahl,int basis,String_16& ziel){
   char SPR_stack_dummy_var;
   longlong llNull;llNull=((longlong)0);
   int istNegativ;istNegativ=0;
   if(zahl<llNull){
      zahl=zahl*((longlong)-1);
      istNegativ=1;
      
   }
   if(basis>36){
      SPRStackArrayConcrete<char,13> spr_StringScratch77;strcpy(spr_StringScratch77._array,"BasisTooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch77);
      return ;
      
   }
   if(zahl<llNull){
      SPRStackArrayConcrete<char,8> spr_StringScratch78;strcpy(spr_StringScratch78._array,"tooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch78);
      return ;
      
   }
   int z0;z0=((int)'0');
   int zA;zA=((int)'A');
   SPRStackArrayConcrete<char,66> puffer;
   int stelle;stelle=0;
   if((stelle==0)&&(zahl==llNull)){
             int spr_intScratch79;spr_intScratch79=0;chck_accs0(puffer,spr_intScratch79,123)
      puffer._array[spr_intScratch79]='0';
      stelle++;
      
   }
   while(zahl>llNull){
      int ziffer;ziffer=((int)zahl%basis);
      if(ziffer<10){
                int spr_intScratch7b;spr_intScratch7b=stelle;chck_accs0(puffer,spr_intScratch7b,125)
         puffer._array[spr_intScratch7b]=((char)(ziffer+z0));
         
      }
      else
      {
             int spr_intScratch7d;spr_intScratch7d=stelle;chck_accs0(puffer,spr_intScratch7d,127)
         puffer._array[spr_intScratch7d]=((char)((ziffer-10)+zA));
         }
      zahl=zahl/basis;
      stelle++;
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ziel.ensureCapacity(stackStartPtr,ziel.length(stackStartPtr)+stelle+1);
   if(istNegativ){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,'-');
      
   }
   {//begin of SPR for statement
   int i;i=stelle-1;
   while(i>=0){
             int spr_intScratch7f;spr_intScratch7f=i;chck_accs0(puffer,spr_intScratch7f,129)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,puffer._array[spr_intScratch7f]);
      i=i-1;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void ZKNuetzlich::appendInAnfz(char* stackStartPtr,String_16& zk,int x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,'"');
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,x);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,'"');
   
   
} //End Of Method

void ZKNuetzlich::UnitTest(char* stackStartPtr,int& ergebnisUT){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,17> spr_StringScratch81;strcpy(spr_StringScratch81._array,"123444443232222");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratch81);
   longlong ergebnis;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   longlong vergleich;
   vergleich=((longlong)123444);
   vergleich=vergleich*1000000000;
   vergleich=vergleich+443232222;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratch82;strcpy(spr_StringScratch82._array,"ZKNuetzlich::UnitTest() 1 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch82).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch83;strcpy(spr_StringScratch83._array,"1");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch83);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1);
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratch84;strcpy(spr_StringScratch84._array,"ZKNuetzlich::UnitTest() 2 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch84).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,15> spr_StringScratch85;strcpy(spr_StringScratch85._array,"1000000000000");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch85);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1000000000);
   vergleich=vergleich*1000;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratch86;strcpy(spr_StringScratch86._array,"ZKNuetzlich::UnitTest() 3 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch86).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch87;strcpy(spr_StringScratch87._array,"ZKNuetzlich::UnitTest erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch87).pr(stackStartPtr);
   ergebnisUT=1;
   
   
} //End Of Method

void ZKNuetzlich::strNachLonglong(char* stackStartPtr,String_16& eingabe,longlong& ausgabe){
   char SPR_stack_dummy_var;
   ausgabe=((longlong)0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int egLm1;egLm1=eingabe.length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=0;
   while(i<=egLm1){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=eingabe.getAt(stackStartPtr,i);
      ausgabe=ausgabe+((int)zeichen)-((int)'0');
      if(i<egLm1){
         ausgabe=ausgabe*10;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void StringUnitTest::run(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch88;strcpy(spr_StringScratch88._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch88);
      SPRStackArrayConcrete<char,4> spr_StringScratch89;strcpy(spr_StringScratch89._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch89);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch8a;strcpy(spr_StringScratch8a._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch8b;strcpy(spr_StringScratch8b._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch8a)!=1)||(s1.equals(stackStartPtr,spr_StringScratch8b)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch8c;strcpy(spr_StringScratch8c._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch8c).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch8d;strcpy(spr_StringScratch8d._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch8d);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch8e;strcpy(spr_StringScratch8e._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch8f;strcpy(spr_StringScratch8f._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch8e)!=1)||(s1.equals(stackStartPtr,spr_StringScratch8f)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch90;strcpy(spr_StringScratch90._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch90).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch91;strcpy(spr_StringScratch91._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch91);
      String_16 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch92;strcpy(spr_StringScratch92._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch92);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch93;strcpy(spr_StringScratch93._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch94;strcpy(spr_StringScratch94._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch93)!=1)||(s2.equals(stackStartPtr,spr_StringScratch94)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch95;strcpy(spr_StringScratch95._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch95).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch96;strcpy(spr_StringScratch96._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch96);
      SPRStackArrayConcrete<char,3> spr_StringScratch97;strcpy(spr_StringScratch97._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch97);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch98;strcpy(spr_StringScratch98._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch99;strcpy(spr_StringScratch99._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch98)!=1)||(s1.equals(stackStartPtr,spr_StringScratch99)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch9a;strcpy(spr_StringScratch9a._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch9a).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch9b;strcpy(spr_StringScratch9b._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch9b);
      SPRStackArrayConcrete<char,4> spr_StringScratch9c;strcpy(spr_StringScratch9c._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch9c);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch9d;strcpy(spr_StringScratch9d._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch9e;strcpy(spr_StringScratch9e._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch9d)!=1)||(s1.equals(stackStartPtr,spr_StringScratch9e)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch9f;strcpy(spr_StringScratch9f._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch9f).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratcha0;strcpy(spr_StringScratcha0._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratcha0);
      SPRStackArrayConcrete<char,4> spr_StringScratcha1;strcpy(spr_StringScratcha1._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratcha1);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratcha2;strcpy(spr_StringScratcha2._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratcha3;strcpy(spr_StringScratcha3._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratcha2)!=1)||(s1.equals(stackStartPtr,spr_StringScratcha3)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratcha4;strcpy(spr_StringScratcha4._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratcha4).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratcha5;strcpy(spr_StringScratcha5._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratcha5);
      SPRStackArrayConcrete<char,4> spr_StringScratcha6;strcpy(spr_StringScratcha6._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratcha6);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratcha7;strcpy(spr_StringScratcha7._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratcha8;strcpy(spr_StringScratcha8._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratcha7)!=1)||(s1.equals(stackStartPtr,spr_StringScratcha8)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratcha9;strcpy(spr_StringScratcha9._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratcha9).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratchaa;strcpy(spr_StringScratchaa._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratchaa);
      SPRStackArrayConcrete<char,23> spr_StringScratchab;strcpy(spr_StringScratchab._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratchab);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      int expLength;expLength=10*21+21;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratchac;strcpy(spr_StringScratchac._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratchac)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratchad;strcpy(spr_StringScratchad._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchad).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratchae;strcpy(spr_StringScratchae._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratchae);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,8> spr_StringScratchaf;strcpy(spr_StringScratchaf._array,"x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratchaf)!=1){
         SPRStackArrayConcrete<char,27> spr_StringScratchb0;strcpy(spr_StringScratchb0._array,"String unittest fail # 88");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchb0).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratchb1;strcpy(spr_StringScratchb1._array,"docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratchb1)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratchb2;strcpy(spr_StringScratchb2._array,"String unittest fail # 88.2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchb2).pr(stackStartPtr);
         
      }
      SPRStackArrayConcrete<char,15> spr_StringScratchb3;strcpy(spr_StringScratchb3._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratchb3);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratchb4;strcpy(spr_StringScratchb4._array,"html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratchb4)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratchb5;strcpy(spr_StringScratchb5._array,"String unittest fail # 88.3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchb5).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 s;
      SPRStackArrayConcrete<char,5> spr_StringScratchb6;strcpy(spr_StringScratchb6._array,"abc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,spr_StringScratchb6);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.ensureCapacity(stackStartPtr,300);
      int i;
      {//begin of SPR for statement
      i=0;
      while(i<26){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s.append(stackStartPtr,((char)(i+(((int)'a')))));
         i++;
         
      
      }
      }//end of SPR for statement
      SPRStackArrayConcrete<char,31> spr_StringScratchb7;strcpy(spr_StringScratchb7._array,"abcabcdefghijklmnopqrstuvwxyz");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,spr_StringScratchb7)!=1){
         SPRStackArrayConcrete<char,34> spr_StringScratchb8;strcpy(spr_StringScratchb8._array,"Testcase ensureCapacity() failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchb8).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,18> spr_StringScratchb9;strcpy(spr_StringScratchb9._array,"1234567890123456");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s(stackStartPtr,spr_StringScratchb9);
      String_16 s2;
      int i;
      {//begin of SPR for statement
      i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<s.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s2.append(stackStartPtr,s.getAt(stackStartPtr,i));
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,s2)!=1){
         SPRStackArrayConcrete<char,30> spr_StringScratchba;strcpy(spr_StringScratchba._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchba).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,'a');
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,'b');
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,'c');
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.clear(stackStartPtr);
      {//begin of SPR for statement
      i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<s.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s2.append(stackStartPtr,s.getAt(stackStartPtr,i));
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,s2)!=1){
         SPRStackArrayConcrete<char,30> spr_StringScratchbb;strcpy(spr_StringScratchbb._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchbb).pr(stackStartPtr);
         
      }
      
   }
   
   
} //End Of Method

