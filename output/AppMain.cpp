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
   SPRStackArrayConcrete<char,20> spr_StringScratch0;strcpy(spr_StringScratch0._array,"Callback Sappeur $");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch0).sa(stackStartPtr,ausdruck).pr(stackStartPtr);
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
   int spr_intScratch1;
   spr_intScratch1=breitePixel;
   if(spr_intScratch1<0)throw "invalid size requested for heap allocation";
   SPRSmartPtr<SPRArray<double> > yWerte;yWerte=new(spr_intScratch1) SPRArray<double>(spr_intScratch1)
   ;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double yMin;yMin=ml.dblMax(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double yMax;yMax=ml.dblLowest(stackStartPtr);
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
             int spr_intScratch2;spr_intScratch2=i;chck_accs_p0(yWerte,spr_intScratch2,4)
      yWerte._theObject->_array[spr_intScratch2]=y;
      if(y>yMax){
         yMax=y;
         
      }
      if(y<yMin){
         yMin=y;
         
      }
      SPRStackArrayConcrete<char,9> spr_StringScratch4;strcpy(spr_StringScratch4._array,"x:$ y:$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch4).sa(stackStartPtr,x).sa(stackStartPtr,y).pr(stackStartPtr);
      i++;
      
   
   }
   }//end of SPR for statement
   SPRStackArrayConcrete<char,13> spr_StringScratch5;strcpy(spr_StringScratch5._array,"min:$ max:$");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch5).sa(stackStartPtr,yMin).sa(stackStartPtr,yMax).pr(stackStartPtr);
   double yInterval;yInterval=yMax-yMin;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   double displayHoehe;displayHoehe=trk._theObject->ausgabeBox._theObject->hoehe(stackStartPtr);
   SFcolorCode cc;
   {//begin of SPR for statement
   int i;i=0;
   while(i<breitePixel){
             int spr_intScratch6;spr_intScratch6=i;chck_accs_p0(yWerte,spr_intScratch6,8)
      double yPixel;yPixel=((yWerte._theObject->_array[spr_intScratch6]-yMin)/yInterval)*(displayHoehe-1);
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
      {//begin of SPR for statement
      int i;i=0;
      while(i<breitePixel){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         trk._theObject->ausgabeBox._theObject->addPoint(stackStartPtr,i,yAusgabe,cc.get_FL_DARK_CYAN(stackStartPtr));
         i++;
         
      
      }
      }//end of SPR for statement
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
      {//begin of SPR for statement
      int y;y=0;
      while(y<displayHoehe){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         trk._theObject->ausgabeBox._theObject->addPoint(stackStartPtr,x,y,cc.get_FL_BLACK(stackStartPtr));
         y++;
         
      
      }
      }//end of SPR for statement
      xKonstant=xKonstant+((varEnd-varStart)/10.0);
      j++;
      
   
   }
   }//end of SPR for statement
   String_16 s;
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
   CommandlineArgs cla;
   PrintfClass pfc;
   SprFLTKwindow swin;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.begin(stackStartPtr);
   SPRStackArrayConcrete<char,36> spr_StringScratch8;strcpy(spr_StringScratch8._array,"Franks Taschenrechner  Ausgabe 1.4");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 label(stackStartPtr,spr_StringScratch8);
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
   SPRStackArrayConcrete<char,7> spr_StringScratch9;strcpy(spr_StringScratch9._array,"Katze");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   l2.assign(stackStartPtr,spr_StringScratch9);
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
   SPRStackArrayConcrete<char,9> spr_StringScratcha;strcpy(spr_StringScratcha._array,"zeichne");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   knopf.create(stackStartPtr,10,10,200,30,spr_StringScratcha);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   LoeschKnopf lknopf(stackStartPtr,sfb);
   SPRStackArrayConcrete<char,9> spr_StringScratchb;strcpy(spr_StringScratchb._array,"loesche");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   lknopf.create(stackStartPtr,210,10,100,30,spr_StringScratchb);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.end(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.show(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   swin.run(stackStartPtr);
   return 1;
   
   
} //End Of Method

