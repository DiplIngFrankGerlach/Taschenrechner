#include "stdafx.h"
#include "header.h"
MeinKnopf::MeinKnopf(char* stackStartPtr,SPRSmartPtr<TRKontext> trki){
   char SPR_stack_dummy_var;
   trk=trki;
   
   
} //End Of Method

void MeinKnopf::callback(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<String_16> ausdruck;ausdruck=::new String_16;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->ausdruckInput._theObject->get(stackStartPtr,*(ausdruck.to()));
   SPRStackArrayConcrete<char,20> spr_StringScratchb0;strcpy(spr_StringScratchb0._array,"Callback Sappeur $");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchb0).sa(stackStartPtr,ausdruck).pr(stackStartPtr);
   double varStart;
   double varEnd;
   String_16 zk;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->varStartInput._theObject->get(stackStartPtr,zk);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   varStart=zk.asDouble(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->varEndInput._theObject->get(stackStartPtr,zk);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   varEnd=zk.asDouble(stackStartPtr);
   String_16 varName;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->varInput._theObject->get(stackStartPtr,varName);
   double breite;breite=varEnd-varStart;
   Math m;
   MathLimits ml;
   int breitePixel;breitePixel=700;
   int spr_intScratchb1;
   spr_intScratchb1=breitePixel;
   if(spr_intScratchb1<0)throw "invalid size requested for heap allocation";
   SPRSmartPtr<SPRArray<double> > yWerte;yWerte=new(spr_intScratchb1) SPRArray<double>(spr_intScratchb1)
   ;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double yMin;yMin=ml.dblMax(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double yMax;yMax=ml.dblLowest(stackStartPtr);
   SPRStackArrayConcrete<char,5> spr_StringScratchb2;strcpy(spr_StringScratchb2._array,"x;y");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchb2).pr(stackStartPtr);
   {//begin of SPR for statement
   int i;i=0;
   while(i<breitePixel){
      double x;x=((((double)i)/((double)breitePixel-1))*breite)+varStart;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      AusrechnerFK ar(stackStartPtr,ausdruck);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ar.setVariableValue(stackStartPtr,varName,x);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      double y;y=ar.Addition(stackStartPtr);
             int spr_intScratchb3;spr_intScratchb3=i;chck_accs_p0(yWerte,spr_intScratchb3,181)
      yWerte._theObject->_array[spr_intScratchb3]=y;
      if(y>yMax){
         yMax=y;
         
      }
      if(y<yMin){
         yMin=y;
         
      }
      SPRStackArrayConcrete<char,5> spr_StringScratchb5;strcpy(spr_StringScratchb5._array,"$;$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchb5).sa(stackStartPtr,x).sa(stackStartPtr,y).pr(stackStartPtr);
      i++;
      
   
   }
   }//end of SPR for statement
   double yInterval;yInterval=yMax-yMin;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double displayHoehe;displayHoehe=trk._theObject->ausgabeBox._theObject->hoehe(stackStartPtr);
   SFcolorCode cc;
   {//begin of SPR for statement
   int i;i=0;
   while(i<breitePixel){
             int spr_intScratchb6;spr_intScratchb6=i;chck_accs_p0(yWerte,spr_intScratchb6,184)
      double yPixel;yPixel=((yWerte._theObject->_array[spr_intScratchb6]-yMin)/yInterval)*(displayHoehe-1);
      int yAusgabe;yAusgabe=((int)(displayHoehe-yPixel));
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      trk._theObject->ausgabeBox._theObject->addPoint(stackStartPtr,i,yAusgabe,cc.get_FL_BLUE(stackStartPtr));
      i++;
      
   
   }
   }//end of SPR for statement
   double yKonstant;yKonstant=yMin;
   String_16 ll;
   {//begin of SPR for statement
   int j;j=0;
   while(j<10){
      double yPixel;yPixel=((yKonstant-yMin)/(yMax-yMin))*(displayHoehe-1);
      int yAusgabe;yAusgabe=((int)(displayHoehe-yPixel));
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      trk._theObject->ausgabeBox._theObject->addLine(stackStartPtr,0,yAusgabe,breitePixel,yAusgabe,cc.get_FL_DARK_CYAN(stackStartPtr));
      int jm2;jm2=j%2;
      if(jm2==1){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ll.clear(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         StringUtil::appendDouble(stackStartPtr,yKonstant,ll,6);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         trk._theObject->ausgabeBox._theObject->drawString(stackStartPtr,5,yAusgabe+15,ll);
         
      }
      yKonstant=yKonstant+(yInterval/10.0);
      j++;
      
   
   }
   }//end of SPR for statement
   double yPixel;yPixel=((0.0-yMin)/(yMax-yMin))*(displayHoehe-1);
   int yAusgabe;yAusgabe=((int)(displayHoehe-yPixel));
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->ausgabeBox._theObject->addLine(stackStartPtr,0,yAusgabe,breitePixel,yAusgabe,cc.get_FL_RED(stackStartPtr));
   double xKonstant;xKonstant=varStart;
   {//begin of SPR for statement
   int j;j=0;
   while(j<10){
      double xPixel;xPixel=(xKonstant-varStart)/breite*breitePixel;
      int x;x=((int)xPixel);
      int jm2;jm2=j%2;
      if(jm2==1){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ll.clear(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         StringUtil::appendDouble(stackStartPtr,xKonstant,ll,6);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         trk._theObject->ausgabeBox._theObject->drawString(stackStartPtr,x+5,15,ll);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      trk._theObject->ausgabeBox._theObject->addLine(stackStartPtr,x,0,x,breitePixel,cc.get_FL_DARK_CYAN(stackStartPtr));
      xKonstant=xKonstant+((varEnd-varStart)/10.0);
      j++;
      
   
   }
   }//end of SPR for statement
   double xPixel;xPixel=(0.0-varStart)/breite*breitePixel;
   int x;x=((int)xPixel);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->ausgabeBox._theObject->addLine(stackStartPtr,x,0,x,breitePixel,cc.get_FL_RED(stackStartPtr));
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   trk._theObject->ausgabeBox._theObject->redraw(stackStartPtr);
   
   
} //End Of Method

LoeschKnopf::LoeschKnopf(char* stackStartPtr,SPRSmartPtr<SFbox> sfbi){
   char SPR_stack_dummy_var;
   sfb=sfbi;
   
   
} //End Of Method

void LoeschKnopf::callback(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfb._theObject->loesche(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfb._theObject->redraw(stackStartPtr);
   
   
} //End Of Method

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   CommandlineArgs cla;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(cla.numberOfArguments(stackStartPtr)==2){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRSmartPtr<String_16> ausdruck;ausdruck=::new String_16;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      cla.getArgument(stackStartPtr,1,*(ausdruck.to()));
      SPRStackArrayConcrete<char,10> spr_StringScratchb8;strcpy(spr_StringScratchb8._array,"-history");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ausdruck._theObject->equals(stackStartPtr,spr_StringScratchb8)==1){
         SPRStackArrayConcrete<char,32> spr_StringScratchb9;strcpy(spr_StringScratchb9._array,"Frank's Calculator Version 2.0");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchb9).pr(stackStartPtr);
         SPRStackArrayConcrete<char,38> spr_StringScratchba;strcpy(spr_StringScratchba._array,"Version 1.5: added Commandline Mode.");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchba).pr(stackStartPtr);
         SPRStackArrayConcrete<char,53> spr_StringScratchbb;strcpy(spr_StringScratchbb._array,"Version 1.6: Negative literals and functions added.");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchbb).pr(stackStartPtr);
         SPRStackArrayConcrete<char,45> spr_StringScratchbc;strcpy(spr_StringScratchbc._array,"Version 1.7: Constants Pi and E now usable.");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchbc).pr(stackStartPtr);
         SPRStackArrayConcrete<char,50> spr_StringScratchbd;strcpy(spr_StringScratchbd._array,"Version 1.8: Exponents added to number literals.");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchbd).pr(stackStartPtr);
         SPRStackArrayConcrete<char,48> spr_StringScratchbe;strcpy(spr_StringScratchbe._array,"Version 2.0: xy points now connected by lines.");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchbe).pr(stackStartPtr);
         return -1;
         
      }
      SPRStackArrayConcrete<char,7> spr_StringScratchbf;strcpy(spr_StringScratchbf._array,"-help");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ausdruck._theObject->equals(stackStartPtr,spr_StringScratchbf)==1){
         SPRStackArrayConcrete<char,32> spr_StringScratchc0;strcpy(spr_StringScratchc0._array,"Frank's Calculator Version 2.0");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchc0).pr(stackStartPtr);
         SPRStackArrayConcrete<char,28> spr_StringScratchc1;strcpy(spr_StringScratchc1._array,"GUI Mode: $ taschenrechner");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchc1).pr(stackStartPtr);
         SPRStackArrayConcrete<char,48> spr_StringScratchc2;strcpy(spr_StringScratchc2._array,"Command Line Mode: $ taschenrechner EXPRESSION");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchc2).pr(stackStartPtr);
         SPRStackArrayConcrete<char,64> spr_StringScratchc3;strcpy(spr_StringScratchc3._array,"   e.g.            $ taschenrechner \"sinus(0.7*pi)/(0.7*pi)\"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchc3).pr(stackStartPtr);
         SPRStackArrayConcrete<char,50> spr_StringScratchc4;strcpy(spr_StringScratchc4._array,"   e.g.            $ taschenrechner \"exp(2,8)\"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchc4).pr(stackStartPtr);
         return -1;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      AusrechnerFK ar(stackStartPtr,ausdruck);
      SPRStackArrayConcrete<char,3> spr_StringScratchc5;strcpy(spr_StringScratchc5._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchc5).sa(stackStartPtr,ar.Addition(stackStartPtr)).pr(stackStartPtr);
      return 1;
      
   }
   SprFLTKwindow swin;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.begin(stackStartPtr);
   SPRStackArrayConcrete<char,36> spr_StringScratchc6;strcpy(spr_StringScratchc6._array,"Franks Taschenrechner  Ausgabe 2.0");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 label(stackStartPtr,spr_StringScratchc6);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.SetLabel(stackStartPtr,label);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SFinput> sfi;sfi=::new SFinput;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfi._theObject->create(stackStartPtr,10,50,200,30);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SFbox> sfb;sfb=::new SFbox;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfb._theObject->create(stackStartPtr,10,100,700,700);
   String_16 l2;
   SPRStackArrayConcrete<char,7> spr_StringScratchc7;strcpy(spr_StringScratchc7._array,"Katze");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   l2.assign(stackStartPtr,spr_StringScratchc7);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SFinput> sfiVar;sfiVar=::new SFinput;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfiVar._theObject->create(stackStartPtr,220,50,50,30);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SFinput> sfiVarValStart;sfiVarValStart=::new SFinput;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfiVarValStart._theObject->create(stackStartPtr,280,50,50,30);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<SFinput> sfiVarValEnd;sfiVarValEnd=::new SFinput;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sfiVarValEnd._theObject->create(stackStartPtr,340,50,50,30);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRSmartPtr<TRKontext> trk;trk=::new TRKontext;
   trk._theObject->ausgabeBox=sfb;
   trk._theObject->ausdruckInput=sfi;
   trk._theObject->varInput=sfiVar;
   trk._theObject->varStartInput=sfiVarValStart;
   trk._theObject->varEndInput=sfiVarValEnd;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   MeinKnopf knopf(stackStartPtr,trk);
   SPRStackArrayConcrete<char,9> spr_StringScratchc8;strcpy(spr_StringScratchc8._array,"zeichne");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   knopf.create(stackStartPtr,10,10,200,30,spr_StringScratchc8);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   LoeschKnopf lknopf(stackStartPtr,sfb);
   SPRStackArrayConcrete<char,9> spr_StringScratchc9;strcpy(spr_StringScratchc9._array,"loesche");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   lknopf.create(stackStartPtr,210,10,100,30,spr_StringScratchc9);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.end(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.show(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.run(stackStartPtr);
   return 1;
   
   
} //End Of Method

