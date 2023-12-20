#include "stdafx.h"
#include "header.h"
void StringUtil::trim(char* stackStartPtr,String_16& eingabe,String_16& ausgabe){
   char SPR_stack_dummy_var;
   ZKNuetzlich zkn;
   int links;links=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int el;el=eingabe.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   char z;z=eingabe.getAt(stackStartPtr,links);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.clear(stackStartPtr);
   if(el==0){
      return ;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((links<el)&&(zkn.istLeerzeichen(stackStartPtr,z)==1)){
      links++;
      if(links<el){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         z=eingabe.getAt(stackStartPtr,links);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   int rechts;rechts=el-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   z=eingabe.getAt(stackStartPtr,rechts);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((rechts>links)&&(zkn.istLeerzeichen(stackStartPtr,z)==1)){
      rechts=rechts-1;
      if(rechts>links){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         z=eingabe.getAt(stackStartPtr,rechts);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if((links>=0)&&(links<=rechts)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      eingabe.subString(stackStartPtr,ausgabe,links,rechts);
      
   }
   
   
} //End Of Method

void StringUtil::gross(char* stackStartPtr,char c,char& ausgabe){
   char SPR_stack_dummy_var;
   switch(c){
      case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':case 'y':case 'z':{
         int n;n=((int)c);
         n=n-((int)'a');
         n=n+((int)'A');
         ausgabe=((char)n);
         
      };break;
      
      default:{
         ausgabe=c;
         
      };
      
   }
   
   
} //End Of Method

void StringUtil::vergleichGK(char* stackStartPtr,String_16& s1,String_16& s2,int& ergebnis){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.length(stackStartPtr)!=s2.length(stackStartPtr)){
      ergebnis=-1;
      return ;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=s1.length(stackStartPtr);
   {//begin of SPR for statement
   int i;i=0;
   while(i<l){
      char g1;
      char g2;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      StringUtil::gross(stackStartPtr,s1.getAt(stackStartPtr,i),g1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      StringUtil::gross(stackStartPtr,s2.getAt(stackStartPtr,i),g2);
      if(g1!=g2){
         ergebnis=-1;
         return ;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   ergebnis=1;
   
   
} //End Of Method

void StringUtil::appendDouble(char* stackStartPtr,double x,String_16& ausgabe,int anzStellen){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,31> puffer;
   
          snprintf(puffer._array,30,"%f",x); 
       
   {//begin of SPR for statement
   int i;i=0;
          int spr_intScratch19c;spr_intScratch19c=i;chck_accs0(puffer,spr_intScratch19c,414)
   while((i<anzStellen)&&(puffer._array[spr_intScratch19c]!='\0')){
             int spr_intScratch19e;spr_intScratch19e=i;chck_accs0(puffer,spr_intScratch19e,416)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ausgabe.append(stackStartPtr,puffer._array[spr_intScratch19e]);
      i++;
      spr_intScratch19c=i;chck_accs0(puffer,spr_intScratch19c,414)
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void StringUtil::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,12> spr_StringScratch1a0;strcpy(spr_StringScratch1a0._array,"   123    ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratch1a0);
   String_16 sZiel;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,5> spr_StringScratch1a1;strcpy(spr_StringScratch1a1._array,"123");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1a1)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1a2;strcpy(spr_StringScratch1a2._array,"StringUtil::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1a2).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,5> spr_StringScratch1a3;strcpy(spr_StringScratch1a3._array,"456");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1a3);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,5> spr_StringScratch1a4;strcpy(spr_StringScratch1a4._array,"456");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1a4)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1a5;strcpy(spr_StringScratch1a5._array,"StringUtil::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1a5).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,42> spr_StringScratch1a6;strcpy(spr_StringScratch1a6._array,"                              a         ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1a6);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratch1a7;strcpy(spr_StringScratch1a7._array,"a");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1a7)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1a8;strcpy(spr_StringScratch1a8._array,"StringUtil::UnitTest() Fehler 3");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1a8).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratch1a9;strcpy(spr_StringScratch1a9._array,"Z         ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1a9);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratch1aa;strcpy(spr_StringScratch1aa._array,"Z");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1aa)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1ab;strcpy(spr_StringScratch1ab._array,"StringUtil::UnitTest() Fehler 4");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1ab).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch1ac;strcpy(spr_StringScratch1ac._array,"P");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1ac);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratch1ad;strcpy(spr_StringScratch1ad._array,"P");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1ad)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1ae;strcpy(spr_StringScratch1ae._array,"StringUtil::UnitTest() Fehler 5");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1ae).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratch1af;strcpy(spr_StringScratch1af._array,"Zafelstein");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1af);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,12> spr_StringScratch1b0;strcpy(spr_StringScratch1b0._array,"Zafelstein");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1b0)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1b1;strcpy(spr_StringScratch1b1._array,"StringUtil::UnitTest() Fehler 6");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1b1).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,46> spr_StringScratch1b2;strcpy(spr_StringScratch1b2._array,"          Zafelstein                  11    ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1b2);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,32> spr_StringScratch1b3;strcpy(spr_StringScratch1b3._array,"Zafelstein                  11");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1b3)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1b4;strcpy(spr_StringScratch1b4._array,"StringUtil::UnitTest() Fehler 7");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1b4).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,2> spr_StringScratch1b5;strcpy(spr_StringScratch1b5._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1b5);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,2> spr_StringScratch1b6;strcpy(spr_StringScratch1b6._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1b6)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1b7;strcpy(spr_StringScratch1b7._array,"StringUtil::UnitTest() Fehler 8");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1b7).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch1b8;strcpy(spr_StringScratch1b8._array,"T");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1b8);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratch1b9;strcpy(spr_StringScratch1b9._array,"T");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1b9)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1ba;strcpy(spr_StringScratch1ba._array,"StringUtil::UnitTest() Fehler 8");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1ba).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratch1bb;strcpy(spr_StringScratch1bb._array,"walter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 sk(stackStartPtr,spr_StringScratch1bb);
   SPRStackArrayConcrete<char,8> spr_StringScratch1bc;strcpy(spr_StringScratch1bc._array,"WalTER");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 sg(stackStartPtr,spr_StringScratch1bc);
   int ergebnis;ergebnis=-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1bd;strcpy(spr_StringScratch1bd._array,"StringUtil::UnitTest() Fehler 9");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1bd).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratch1be;strcpy(spr_StringScratch1be._array,"W4lter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratch1be);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=-1){
      SPRStackArrayConcrete<char,34> spr_StringScratch1bf;strcpy(spr_StringScratch1bf._array,"StringUtil::UnitTest() Fehler 10");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1bf).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratch1c0;strcpy(spr_StringScratch1c0._array,"Walter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratch1c0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,34> spr_StringScratch1c1;strcpy(spr_StringScratch1c1._array,"StringUtil::UnitTest() Fehler 11");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1c1).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,74> spr_StringScratch1c2;strcpy(spr_StringScratch1c2._array,"11111111111111111111111111111111111111111111111111111111111111111111WELT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratch1c2);
   SPRStackArrayConcrete<char,74> spr_StringScratch1c3;strcpy(spr_StringScratch1c3._array,"11111111111111111111111111111111111111111111111111111111111111111111welt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sk.assign(stackStartPtr,spr_StringScratch1c3);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,34> spr_StringScratch1c4;strcpy(spr_StringScratch1c4._array,"StringUtil::UnitTest() Fehler 12");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1c4).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,38> spr_StringScratch1c5;strcpy(spr_StringScratch1c5._array,"StringUtil::UnitTest() Erfolgreich !");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1c5).pr(stackStartPtr);
   
   
} //End Of Method

