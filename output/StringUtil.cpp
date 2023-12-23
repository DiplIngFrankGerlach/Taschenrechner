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
          int spr_intScratchca;spr_intScratchca=i;chck_accs0(puffer,spr_intScratchca,204)
   while((i<anzStellen)&&(puffer._array[spr_intScratchca]!='\0')){
             int spr_intScratchcc;spr_intScratchcc=i;chck_accs0(puffer,spr_intScratchcc,206)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ausgabe.append(stackStartPtr,puffer._array[spr_intScratchcc]);
      i++;
      spr_intScratchca=i;chck_accs0(puffer,spr_intScratchca,204)
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void StringUtil::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,12> spr_StringScratchce;strcpy(spr_StringScratchce._array,"   123    ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratchce);
   String_16 sZiel;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,5> spr_StringScratchcf;strcpy(spr_StringScratchcf._array,"123");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchcf)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchd0;strcpy(spr_StringScratchd0._array,"StringUtil::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchd0).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,5> spr_StringScratchd1;strcpy(spr_StringScratchd1._array,"456");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchd1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,5> spr_StringScratchd2;strcpy(spr_StringScratchd2._array,"456");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchd2)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchd3;strcpy(spr_StringScratchd3._array,"StringUtil::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchd3).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,42> spr_StringScratchd4;strcpy(spr_StringScratchd4._array,"                              a         ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchd4);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratchd5;strcpy(spr_StringScratchd5._array,"a");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchd5)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchd6;strcpy(spr_StringScratchd6._array,"StringUtil::UnitTest() Fehler 3");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchd6).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratchd7;strcpy(spr_StringScratchd7._array,"Z         ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchd7);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratchd8;strcpy(spr_StringScratchd8._array,"Z");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchd8)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchd9;strcpy(spr_StringScratchd9._array,"StringUtil::UnitTest() Fehler 4");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchd9).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratchda;strcpy(spr_StringScratchda._array,"P");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchda);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratchdb;strcpy(spr_StringScratchdb._array,"P");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchdb)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchdc;strcpy(spr_StringScratchdc._array,"StringUtil::UnitTest() Fehler 5");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdc).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratchdd;strcpy(spr_StringScratchdd._array,"Zafelstein");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchdd);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,12> spr_StringScratchde;strcpy(spr_StringScratchde._array,"Zafelstein");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchde)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchdf;strcpy(spr_StringScratchdf._array,"StringUtil::UnitTest() Fehler 6");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdf).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,46> spr_StringScratche0;strcpy(spr_StringScratche0._array,"          Zafelstein                  11    ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratche0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,32> spr_StringScratche1;strcpy(spr_StringScratche1._array,"Zafelstein                  11");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratche1)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratche2;strcpy(spr_StringScratche2._array,"StringUtil::UnitTest() Fehler 7");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche2).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,2> spr_StringScratche3;strcpy(spr_StringScratche3._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratche3);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,2> spr_StringScratche4;strcpy(spr_StringScratche4._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratche4)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratche5;strcpy(spr_StringScratche5._array,"StringUtil::UnitTest() Fehler 8");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche5).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratche6;strcpy(spr_StringScratche6._array,"T");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratche6);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratche7;strcpy(spr_StringScratche7._array,"T");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratche7)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratche8;strcpy(spr_StringScratche8._array,"StringUtil::UnitTest() Fehler 8");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche8).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratche9;strcpy(spr_StringScratche9._array,"walter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 sk(stackStartPtr,spr_StringScratche9);
   SPRStackArrayConcrete<char,8> spr_StringScratchea;strcpy(spr_StringScratchea._array,"WalTER");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 sg(stackStartPtr,spr_StringScratchea);
   int ergebnis;ergebnis=-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratcheb;strcpy(spr_StringScratcheb._array,"StringUtil::UnitTest() Fehler 9");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratcheb).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratchec;strcpy(spr_StringScratchec._array,"W4lter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratchec);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=-1){
      SPRStackArrayConcrete<char,34> spr_StringScratched;strcpy(spr_StringScratched._array,"StringUtil::UnitTest() Fehler 10");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratched).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratchee;strcpy(spr_StringScratchee._array,"Walter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratchee);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,34> spr_StringScratchef;strcpy(spr_StringScratchef._array,"StringUtil::UnitTest() Fehler 11");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchef).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,74> spr_StringScratchf0;strcpy(spr_StringScratchf0._array,"11111111111111111111111111111111111111111111111111111111111111111111WELT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratchf0);
   SPRStackArrayConcrete<char,74> spr_StringScratchf1;strcpy(spr_StringScratchf1._array,"11111111111111111111111111111111111111111111111111111111111111111111welt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sk.assign(stackStartPtr,spr_StringScratchf1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,34> spr_StringScratchf2;strcpy(spr_StringScratchf2._array,"StringUtil::UnitTest() Fehler 12");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchf2).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,38> spr_StringScratchf3;strcpy(spr_StringScratchf3._array,"StringUtil::UnitTest() Erfolgreich !");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchf3).pr(stackStartPtr);
   
   
} //End Of Method

