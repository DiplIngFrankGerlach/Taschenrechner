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
      SPRStackArrayConcrete<char,13> spr_StringScratch4f;strcpy(spr_StringScratch4f._array,"BasisTooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch4f);
      return ;
      
   }
   if(zahl<llNull){
      SPRStackArrayConcrete<char,8> spr_StringScratch50;strcpy(spr_StringScratch50._array,"tooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch50);
      return ;
      
   }
   int z0;z0=((int)'0');
   int zA;zA=((int)'A');
   SPRStackArrayConcrete<char,66> puffer;
   int stelle;stelle=0;
   if((stelle==0)&&(zahl==llNull)){
             int spr_intScratch51;spr_intScratch51=0;chck_accs0(puffer,spr_intScratch51,83)
      puffer._array[spr_intScratch51]='0';
      stelle++;
      
   }
   while(zahl>llNull){
      int ziffer;ziffer=((int)zahl%basis);
      if(ziffer<10){
                int spr_intScratch53;spr_intScratch53=stelle;chck_accs0(puffer,spr_intScratch53,85)
         puffer._array[spr_intScratch53]=((char)(ziffer+z0));
         
      }
      else
      {
             int spr_intScratch55;spr_intScratch55=stelle;chck_accs0(puffer,spr_intScratch55,87)
         puffer._array[spr_intScratch55]=((char)((ziffer-10)+zA));
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
             int spr_intScratch57;spr_intScratch57=i;chck_accs0(puffer,spr_intScratch57,89)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,puffer._array[spr_intScratch57]);
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
   SPRStackArrayConcrete<char,17> spr_StringScratch59;strcpy(spr_StringScratch59._array,"123444443232222");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratch59);
   longlong ergebnis;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   longlong vergleich;
   vergleich=((longlong)123444);
   vergleich=vergleich*1000000000;
   vergleich=vergleich+443232222;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratch5a;strcpy(spr_StringScratch5a._array,"ZKNuetzlich::UnitTest() 1 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch5a).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch5b;strcpy(spr_StringScratch5b._array,"1");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch5b);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1);
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratch5c;strcpy(spr_StringScratch5c._array,"ZKNuetzlich::UnitTest() 2 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch5c).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,15> spr_StringScratch5d;strcpy(spr_StringScratch5d._array,"1000000000000");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch5d);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1000000000);
   vergleich=vergleich*1000;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratch5e;strcpy(spr_StringScratch5e._array,"ZKNuetzlich::UnitTest() 3 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch5e).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch5f;strcpy(spr_StringScratch5f._array,"ZKNuetzlich::UnitTest erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch5f).pr(stackStartPtr);
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
      SPRStackArrayConcrete<char,4> spr_StringScratch60;strcpy(spr_StringScratch60._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch60);
      SPRStackArrayConcrete<char,4> spr_StringScratch61;strcpy(spr_StringScratch61._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch61);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch62;strcpy(spr_StringScratch62._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch63;strcpy(spr_StringScratch63._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch62)!=1)||(s1.equals(stackStartPtr,spr_StringScratch63)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch64;strcpy(spr_StringScratch64._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch64).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch65;strcpy(spr_StringScratch65._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch65);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch66;strcpy(spr_StringScratch66._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch67;strcpy(spr_StringScratch67._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch66)!=1)||(s1.equals(stackStartPtr,spr_StringScratch67)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch68;strcpy(spr_StringScratch68._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch68).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch69;strcpy(spr_StringScratch69._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch69);
      String_16 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch6a;strcpy(spr_StringScratch6a._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch6a);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch6b;strcpy(spr_StringScratch6b._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch6c;strcpy(spr_StringScratch6c._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch6b)!=1)||(s2.equals(stackStartPtr,spr_StringScratch6c)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch6d;strcpy(spr_StringScratch6d._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch6d).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch6e;strcpy(spr_StringScratch6e._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch6e);
      SPRStackArrayConcrete<char,3> spr_StringScratch6f;strcpy(spr_StringScratch6f._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch6f);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch70;strcpy(spr_StringScratch70._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch71;strcpy(spr_StringScratch71._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch70)!=1)||(s1.equals(stackStartPtr,spr_StringScratch71)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch72;strcpy(spr_StringScratch72._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch72).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch73;strcpy(spr_StringScratch73._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch73);
      SPRStackArrayConcrete<char,4> spr_StringScratch74;strcpy(spr_StringScratch74._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch74);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch75;strcpy(spr_StringScratch75._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch76;strcpy(spr_StringScratch76._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch75)!=1)||(s1.equals(stackStartPtr,spr_StringScratch76)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch77;strcpy(spr_StringScratch77._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch77).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch78;strcpy(spr_StringScratch78._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch78);
      SPRStackArrayConcrete<char,4> spr_StringScratch79;strcpy(spr_StringScratch79._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch79);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch7a;strcpy(spr_StringScratch7a._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch7b;strcpy(spr_StringScratch7b._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch7a)!=1)||(s1.equals(stackStartPtr,spr_StringScratch7b)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch7c;strcpy(spr_StringScratch7c._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch7c).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch7d;strcpy(spr_StringScratch7d._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch7d);
      SPRStackArrayConcrete<char,4> spr_StringScratch7e;strcpy(spr_StringScratch7e._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch7e);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch7f;strcpy(spr_StringScratch7f._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch80;strcpy(spr_StringScratch80._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch7f)!=1)||(s1.equals(stackStartPtr,spr_StringScratch80)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch81;strcpy(spr_StringScratch81._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch81).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch82;strcpy(spr_StringScratch82._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch82);
      SPRStackArrayConcrete<char,23> spr_StringScratch83;strcpy(spr_StringScratch83._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch83);
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
      SPRStackArrayConcrete<char,7> spr_StringScratch84;strcpy(spr_StringScratch84._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch84)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch85;strcpy(spr_StringScratch85._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch85).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch86;strcpy(spr_StringScratch86._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch86);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,8> spr_StringScratch87;strcpy(spr_StringScratch87._array,"x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch87)!=1){
         SPRStackArrayConcrete<char,27> spr_StringScratch88;strcpy(spr_StringScratch88._array,"String unittest fail # 88");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch88).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratch89;strcpy(spr_StringScratch89._array,"docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch89)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratch8a;strcpy(spr_StringScratch8a._array,"String unittest fail # 88.2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch8a).pr(stackStartPtr);
         
      }
      SPRStackArrayConcrete<char,15> spr_StringScratch8b;strcpy(spr_StringScratch8b._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch8b);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratch8c;strcpy(spr_StringScratch8c._array,"html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch8c)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratch8d;strcpy(spr_StringScratch8d._array,"String unittest fail # 88.3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch8d).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 s;
      SPRStackArrayConcrete<char,5> spr_StringScratch8e;strcpy(spr_StringScratch8e._array,"abc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,spr_StringScratch8e);
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
      SPRStackArrayConcrete<char,31> spr_StringScratch8f;strcpy(spr_StringScratch8f._array,"abcabcdefghijklmnopqrstuvwxyz");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,spr_StringScratch8f)!=1){
         SPRStackArrayConcrete<char,34> spr_StringScratch90;strcpy(spr_StringScratch90._array,"Testcase ensureCapacity() failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch90).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,18> spr_StringScratch91;strcpy(spr_StringScratch91._array,"1234567890123456");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s(stackStartPtr,spr_StringScratch91);
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
         SPRStackArrayConcrete<char,30> spr_StringScratch92;strcpy(spr_StringScratch92._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch92).pr(stackStartPtr);
         
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
         SPRStackArrayConcrete<char,30> spr_StringScratch93;strcpy(spr_StringScratch93._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch93).pr(stackStartPtr);
         
      }
      
   }
   
   
} //End Of Method

