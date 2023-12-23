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
      SPRStackArrayConcrete<char,13> spr_StringScratch0;strcpy(spr_StringScratch0._array,"BasisTooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch0);
      return ;
      
   }
   if(zahl<llNull){
      SPRStackArrayConcrete<char,8> spr_StringScratch1;strcpy(spr_StringScratch1._array,"tooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch1);
      return ;
      
   }
   int z0;z0=((int)'0');
   int zA;zA=((int)'A');
   SPRStackArrayConcrete<char,66> puffer;
   int stelle;stelle=0;
   if((stelle==0)&&(zahl==llNull)){
             int spr_intScratch2;spr_intScratch2=0;chck_accs0(puffer,spr_intScratch2,4)
      puffer._array[spr_intScratch2]='0';
      stelle++;
      
   }
   while(zahl>llNull){
      int ziffer;ziffer=((int)zahl%basis);
      if(ziffer<10){
                int spr_intScratch4;spr_intScratch4=stelle;chck_accs0(puffer,spr_intScratch4,6)
         puffer._array[spr_intScratch4]=((char)(ziffer+z0));
         
      }
      else
      {
             int spr_intScratch6;spr_intScratch6=stelle;chck_accs0(puffer,spr_intScratch6,8)
         puffer._array[spr_intScratch6]=((char)((ziffer-10)+zA));
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
             int spr_intScratch8;spr_intScratch8=i;chck_accs0(puffer,spr_intScratch8,10)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,puffer._array[spr_intScratch8]);
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
   SPRStackArrayConcrete<char,17> spr_StringScratcha;strcpy(spr_StringScratcha._array,"123444443232222");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratcha);
   longlong ergebnis;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   longlong vergleich;
   vergleich=((longlong)123444);
   vergleich=vergleich*1000000000;
   vergleich=vergleich+443232222;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratchb;strcpy(spr_StringScratchb._array,"ZKNuetzlich::UnitTest() 1 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchb).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratchc;strcpy(spr_StringScratchc._array,"1");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchc);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1);
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratchd;strcpy(spr_StringScratchd._array,"ZKNuetzlich::UnitTest() 2 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchd).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,15> spr_StringScratche;strcpy(spr_StringScratche._array,"1000000000000");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratche);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1000000000);
   vergleich=vergleich*1000;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratchf;strcpy(spr_StringScratchf._array,"ZKNuetzlich::UnitTest() 3 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchf).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch10;strcpy(spr_StringScratch10._array,"ZKNuetzlich::UnitTest erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch10).pr(stackStartPtr);
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
      SPRStackArrayConcrete<char,4> spr_StringScratch11;strcpy(spr_StringScratch11._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch11);
      SPRStackArrayConcrete<char,4> spr_StringScratch12;strcpy(spr_StringScratch12._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch12);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch13;strcpy(spr_StringScratch13._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch14;strcpy(spr_StringScratch14._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch13)!=1)||(s1.equals(stackStartPtr,spr_StringScratch14)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch15;strcpy(spr_StringScratch15._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch15).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch16;strcpy(spr_StringScratch16._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch16);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch17;strcpy(spr_StringScratch17._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch18;strcpy(spr_StringScratch18._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch17)!=1)||(s1.equals(stackStartPtr,spr_StringScratch18)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch19;strcpy(spr_StringScratch19._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch19).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch1a;strcpy(spr_StringScratch1a._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch1a);
      String_16 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch1b;strcpy(spr_StringScratch1b._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch1b);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch1c;strcpy(spr_StringScratch1c._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch1d;strcpy(spr_StringScratch1d._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch1c)!=1)||(s2.equals(stackStartPtr,spr_StringScratch1d)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch1e;strcpy(spr_StringScratch1e._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch1e).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch1f;strcpy(spr_StringScratch1f._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch1f);
      SPRStackArrayConcrete<char,3> spr_StringScratch20;strcpy(spr_StringScratch20._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch20);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch21;strcpy(spr_StringScratch21._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch22;strcpy(spr_StringScratch22._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch21)!=1)||(s1.equals(stackStartPtr,spr_StringScratch22)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch23;strcpy(spr_StringScratch23._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch23).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch24;strcpy(spr_StringScratch24._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch24);
      SPRStackArrayConcrete<char,4> spr_StringScratch25;strcpy(spr_StringScratch25._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch25);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch26;strcpy(spr_StringScratch26._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch27;strcpy(spr_StringScratch27._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch26)!=1)||(s1.equals(stackStartPtr,spr_StringScratch27)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch28;strcpy(spr_StringScratch28._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch28).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch29;strcpy(spr_StringScratch29._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch29);
      SPRStackArrayConcrete<char,4> spr_StringScratch2a;strcpy(spr_StringScratch2a._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch2a);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch2b;strcpy(spr_StringScratch2b._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch2c;strcpy(spr_StringScratch2c._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch2b)!=1)||(s1.equals(stackStartPtr,spr_StringScratch2c)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch2d;strcpy(spr_StringScratch2d._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2d).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch2e;strcpy(spr_StringScratch2e._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch2e);
      SPRStackArrayConcrete<char,4> spr_StringScratch2f;strcpy(spr_StringScratch2f._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch2f);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch30;strcpy(spr_StringScratch30._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch31;strcpy(spr_StringScratch31._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch30)!=1)||(s1.equals(stackStartPtr,spr_StringScratch31)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch32;strcpy(spr_StringScratch32._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch32).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch33;strcpy(spr_StringScratch33._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch33);
      SPRStackArrayConcrete<char,23> spr_StringScratch34;strcpy(spr_StringScratch34._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch34);
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
      SPRStackArrayConcrete<char,7> spr_StringScratch35;strcpy(spr_StringScratch35._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch35)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch36;strcpy(spr_StringScratch36._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch36).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch37;strcpy(spr_StringScratch37._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch37);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,8> spr_StringScratch38;strcpy(spr_StringScratch38._array,"x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch38)!=1){
         SPRStackArrayConcrete<char,27> spr_StringScratch39;strcpy(spr_StringScratch39._array,"String unittest fail # 88");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch39).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratch3a;strcpy(spr_StringScratch3a._array,"docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch3a)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratch3b;strcpy(spr_StringScratch3b._array,"String unittest fail # 88.2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3b).pr(stackStartPtr);
         
      }
      SPRStackArrayConcrete<char,15> spr_StringScratch3c;strcpy(spr_StringScratch3c._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch3c);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratch3d;strcpy(spr_StringScratch3d._array,"html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch3d)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratch3e;strcpy(spr_StringScratch3e._array,"String unittest fail # 88.3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3e).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 s;
      SPRStackArrayConcrete<char,5> spr_StringScratch3f;strcpy(spr_StringScratch3f._array,"abc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,spr_StringScratch3f);
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
      SPRStackArrayConcrete<char,31> spr_StringScratch40;strcpy(spr_StringScratch40._array,"abcabcdefghijklmnopqrstuvwxyz");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,spr_StringScratch40)!=1){
         SPRStackArrayConcrete<char,34> spr_StringScratch41;strcpy(spr_StringScratch41._array,"Testcase ensureCapacity() failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch41).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,18> spr_StringScratch42;strcpy(spr_StringScratch42._array,"1234567890123456");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s(stackStartPtr,spr_StringScratch42);
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
         SPRStackArrayConcrete<char,30> spr_StringScratch43;strcpy(spr_StringScratch43._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch43).pr(stackStartPtr);
         
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
         SPRStackArrayConcrete<char,30> spr_StringScratch44;strcpy(spr_StringScratch44._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch44).pr(stackStartPtr);
         
      }
      
   }
   
   
} //End Of Method

