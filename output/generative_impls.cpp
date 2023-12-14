#include "stdafx.h"
#include "header.h"
String_16::String_16(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch183;spr_intScratch183=0;chck_accs0(_preAllocBuf,spr_intScratch183,389)
   _preAllocBuf._array[spr_intScratch183]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_16::String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch185;spr_intScratch185=0;chck_accs0(_preAllocBuf,spr_intScratch185,391)
   _preAllocBuf._array[spr_intScratch185]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch187;strcpy(spr_StringScratch187._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch187);
   
   
} //End Of Method

int String_16::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

int String_16::teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_16> > spalten,char trenner){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   int ausgStelle;ausgStelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
          int spr_intScratch188;spr_intScratch188=0;chck_accs_p0(spalten,spr_intScratch188,394)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch188].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch18a;spr_intScratch18a=ausgStelle;chck_accs_p0(spalten,spr_intScratch18a,396)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch18a].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch18c;spr_intScratch18c=ausgStelle;chck_accs_p0(spalten,spr_intScratch18c,398)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch18c].append(stackStartPtr,z);
         }
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(stelle==this->length(stackStartPtr)){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_16::getKey(char* stackStartPtr,SPRSmartPtr<String_16> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,String_16& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while(i<l){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            return 0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   else
   {
   return 0;
      }
   return 1;
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch18e;spr_intScratch18e=groesse;chck_accs_p0(buf,spr_intScratch18e,400)
   while(buf._theObject->_array[spr_intScratch18e]!='\0'){
      groesse++;
      spr_intScratch18e=groesse;chck_accs_p0(buf,spr_intScratch18e,400)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch190;spr_intScratch190=stelle;chck_accs_p0(buf,spr_intScratch190,402)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch190]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

double String_16::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)>301){
      double notAnum;
       notAnum = NAN; 
      return notAnum;
      
   }
   double ret;
   SPRStackArrayConcrete<char,301> puffer;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->toCharArray(stackStartPtr,puffer);
   
                  ret=atof(puffer._array);
               
   return ret;
   
   
} //End Of Method

void String_16::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_16::assign(char* stackStartPtr,char zeichen){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,zeichen);
   
   
} //End Of Method

void String_16::assign(char* stackStartPtr,String_16& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_16::assign(char* stackStartPtr,SPRSmartPtr<String_16> anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch192;spr_intScratch192=groesse;chck_accs0(str,spr_intScratch192,404)
   while(str._array[spr_intScratch192]!='\0'){
      groesse++;
      spr_intScratch192=groesse;chck_accs0(str,spr_intScratch192,404)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch194;spr_intScratch194=stelle;chck_accs0(str,spr_intScratch194,406)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch194]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch196;spr_intScratch196=i+pos;chck_accs0(str,spr_intScratch196,408)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch196]);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,31> puffer;
   
                   snprintf(puffer._array,30,"%.10e",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_16::appendKurz(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,301> puffer;
   
                   snprintf(puffer._array,300,"%3.2lf",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,longlong l,int basis){
   char SPR_stack_dummy_var;
   String_16 zk16;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::wandle(stackStartPtr,l,basis,zk16);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+zk16.length(stackStartPtr));
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<zk16.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,zk16.getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_16::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->printNoLF(stackStartPtr);
    ::printf("\n"); 
   
   
} //End Of Method

void String_16::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+1);
   if(_extendedBuf==0U){
             int spr_intScratch198;spr_intScratch198=_length;chck_accs0(_preAllocBuf,spr_intScratch198,410)
      _preAllocBuf._array[spr_intScratch198]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch19a;spr_intScratch19a=_length;chck_accs_p0(_extendedBuf,spr_intScratch19a,412)
      _extendedBuf._theObject->_array[spr_intScratch19a]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_16::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch19c;spr_intScratch19c=l;chck_accs0(str,spr_intScratch19c,414)
   while(str._array[spr_intScratch19c]!='\0'){
      l=l+1;
      spr_intScratch19c=l;chck_accs0(str,spr_intScratch19c,414)
      
   };
   return l;
   
   
} //End Of Method

void String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch19e;spr_intScratch19e=0;chck_accs_p0(_extendedBuf,spr_intScratch19e,416)
      _extendedBuf._theObject->_array[spr_intScratch19e]='\0';
      
   }
          int spr_intScratch1a0;spr_intScratch1a0=0;chck_accs0(_preAllocBuf,spr_intScratch1a0,418)
   _preAllocBuf._array[spr_intScratch1a0]='\0';
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,String_16& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int groesse;groesse=other.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other.getAt(stackStartPtr,stelle));
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   _extendedBuf=0U;
          int spr_intScratch1a2;spr_intScratch1a2=0;chck_accs0(_preAllocBuf,spr_intScratch1a2,420)
   _preAllocBuf._array[spr_intScratch1a2]='\0';
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch1a4;spr_intScratch1a4=i;chck_accs0(str,spr_intScratch1a4,422)
   while((i<str._sz)&&(str._array[spr_intScratch1a4]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1a6;spr_intScratch1a6=i;chck_accs0(str,spr_intScratch1a6,424)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch1a6]){
         return 0;
         
      }
      i++;
      spr_intScratch1a4=i;chck_accs0(str,spr_intScratch1a4,422)
      
   };
   if(i==_length){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
      if(16<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
                int spr_intScratch1a8;spr_intScratch1a8=_length;chck_accs_p0(_extendedBuf,spr_intScratch1a8,426)
         _extendedBuf._theObject->_array[spr_intScratch1a8]=c;
         
      }
      else
      {
             int spr_intScratch1aa;spr_intScratch1aa=_length;chck_accs0(_preAllocBuf,spr_intScratch1aa,428)
         _preAllocBuf._array[spr_intScratch1aa]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch1ac;spr_intScratch1ac=_length;chck_accs_p0(_extendedBuf,spr_intScratch1ac,430)
      _extendedBuf._theObject->_array[spr_intScratch1ac]=c;
      _length++;
      }
   
   
} //End Of Method

char String_16::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch1ae;spr_intScratch1ae=i;chck_accs_p0(_extendedBuf,spr_intScratch1ae,432)
      return _extendedBuf._theObject->_array[spr_intScratch1ae];
      
   }
   else
   {
          int spr_intScratch1b0;spr_intScratch1b0=i;chck_accs0(_preAllocBuf,spr_intScratch1b0,434)
      return _preAllocBuf._array[spr_intScratch1b0];
      }
   return '0';
   
   
} //End Of Method

void String_16::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch1b2;spr_intScratch1b2=stelle;chck_accs_p0(_extendedBuf,spr_intScratch1b2,436)
      _extendedBuf._theObject->_array[spr_intScratch1b2]=zeichen;
      
   }
   else
   {
          int spr_intScratch1b4;spr_intScratch1b4=stelle;chck_accs0(_preAllocBuf,spr_intScratch1b4,438)
      _preAllocBuf._array[spr_intScratch1b4]=zeichen;
      }
   
   
} //End Of Method

void String_16::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_16::~String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_16::rightOf(char* stackStartPtr,char divider,String_16& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::equals(char* stackStartPtr,String_16& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<l){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_16::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch1b6;spr_intScratch1b6=lother;chck_accs0(other,spr_intScratch1b6,440)
   while((lother<other._sz)&&(other._array[spr_intScratch1b6]!='\0')){
      lother++;
      spr_intScratch1b6=lother;chck_accs0(other,spr_intScratch1b6,440)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1b8;spr_intScratch1b8=i;chck_accs0(other,spr_intScratch1b8,442)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch1b8]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRSmartPtr<String_16> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   longlong xLL;xLL=((longlong)x);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_16::appendHexOctet(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch1ba;spr_intScratch1ba=0;chck_accs0(buf,spr_intScratch1ba,444)
   buf._array[spr_intScratch1ba]='\0';
    snprintf(buf._array,16,"%.2x",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_16::appendHex(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,16);
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_16::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch1bc;spr_intScratch1bc=0;chck_accs0(feld,spr_intScratch1bc,446)
      feld._array[spr_intScratch1bc]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch1be;spr_intScratch1be=i;chck_accs0(feld,spr_intScratch1be,448)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch1be]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch1c0;spr_intScratch1c0=i;chck_accs0(feld,spr_intScratch1c0,450)
   feld._array[spr_intScratch1c0]='\0';
   
   
} //End Of Method

int String_16::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_16::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

longlong String_16::asNumberLL(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   longlong ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_16::escape(char* stackStartPtr,String_16& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::deEscape(char* stackStartPtr,String_16& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch1c2;spr_intScratch1c2=j;chck_accs0(end,spr_intScratch1c2,452)
   while((end._array[spr_intScratch1c2]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch1c2=j;chck_accs0(end,spr_intScratch1c2,452)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch1c4;spr_intScratch1c4=j;chck_accs0(end,spr_intScratch1c4,454)
      if(c!=end._array[spr_intScratch1c4]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_16::endsWith(char* stackStartPtr,String_16& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_16::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch1c6;spr_intScratch1c6=i;chck_accs0(buf,spr_intScratch1c6,456)
   while((i<l)&&(buf._array[spr_intScratch1c6]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1c8;spr_intScratch1c8=i;chck_accs0(buf,spr_intScratch1c8,458)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch1c8]){
         return 0;
         
      }
      i++;
      spr_intScratch1c6=i;chck_accs0(buf,spr_intScratch1c6,456)
      
   };
   return 1;
   
   
} //End Of Method

void String_16::subString(char* stackStartPtr,String_16& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_16::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

void String_16::wandleKleinbuchstaben(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,i);
      if((z>='A')&&(z<='Z')){
         char zNeu;zNeu=((char)((((int)z)-((int)'A'))+((int)'a')));
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->setAt(stackStartPtr,i,zNeu);
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_16::wandleUmlaute(char* stackStartPtr,String_16& ausgabe){
   char SPR_stack_dummy_var;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<_length){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,i);
      switch(((int)zeichen)){
         case 0xE4:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1ca;strcpy(spr_StringScratch1ca._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1ca);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1cb;strcpy(spr_StringScratch1cb._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1cb);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1cc;strcpy(spr_StringScratch1cc._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1cc);
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,((char)zeichen));
            
         };
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::ensureCapacity(char* stackStartPtr,int minCapacity){
   char SPR_stack_dummy_var;
   if(16<minCapacity){
      if(_extendedBuf==0U){
         int spr_intScratch1cd;
         spr_intScratch1cd=minCapacity*2;
         if(spr_intScratch1cd<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch1cd) SPRArray<char>(spr_intScratch1cd)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch1ce;spr_intScratch1ce=i;chck_accs_p0(_extendedBuf,spr_intScratch1ce,464)
                   int spr_intScratch1d0;spr_intScratch1d0=i;chck_accs0(_preAllocBuf,spr_intScratch1d0,466)
            _extendedBuf._theObject->_array[spr_intScratch1ce]=_preAllocBuf._array[spr_intScratch1d0];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch1d2;
            spr_intScratch1d2=minCapacity*2;
            if(spr_intScratch1d2<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch1d2) SPRArray<char>(spr_intScratch1d2)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch1d3;spr_intScratch1d3=i;chck_accs_p0(newBuf,spr_intScratch1d3,469)
                      int spr_intScratch1d5;spr_intScratch1d5=i;chck_accs_p0(_extendedBuf,spr_intScratch1d5,471)
               newBuf._theObject->_array[spr_intScratch1d3]=_extendedBuf._theObject->_array[spr_intScratch1d5];
               i++;
               
            
            }
            }//end of SPR for statement
            _extendedBuf=newBuf;
            
         }
         }
      
   }
   
   
} //End Of Method

int Hash_String_16::hash(char* stackStartPtr,String_16& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_16::compare(char* stackStartPtr,String_16& s1,String_16& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_16::assign(char* stackStartPtr,String_16& s1,String_16& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

String_32::String_32(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch1d7;spr_intScratch1d7=0;chck_accs0(_preAllocBuf,spr_intScratch1d7,473)
   _preAllocBuf._array[spr_intScratch1d7]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_32::String_32(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch1d9;spr_intScratch1d9=0;chck_accs0(_preAllocBuf,spr_intScratch1d9,475)
   _preAllocBuf._array[spr_intScratch1d9]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch1db;strcpy(spr_StringScratch1db._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch1db);
   
   
} //End Of Method

int String_32::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

int String_32::teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_32> > spalten,char trenner){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   int ausgStelle;ausgStelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
          int spr_intScratch1dc;spr_intScratch1dc=0;chck_accs_p0(spalten,spr_intScratch1dc,478)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch1dc].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch1de;spr_intScratch1de=ausgStelle;chck_accs_p0(spalten,spr_intScratch1de,480)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch1de].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch1e0;spr_intScratch1e0=ausgStelle;chck_accs_p0(spalten,spr_intScratch1e0,482)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch1e0].append(stackStartPtr,z);
         }
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(stelle==this->length(stackStartPtr)){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_32::getKey(char* stackStartPtr,SPRSmartPtr<String_32> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,String_32& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while(i<l){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            return 0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   else
   {
   return 0;
      }
   return 1;
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch1e2;spr_intScratch1e2=groesse;chck_accs_p0(buf,spr_intScratch1e2,484)
   while(buf._theObject->_array[spr_intScratch1e2]!='\0'){
      groesse++;
      spr_intScratch1e2=groesse;chck_accs_p0(buf,spr_intScratch1e2,484)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1e4;spr_intScratch1e4=stelle;chck_accs_p0(buf,spr_intScratch1e4,486)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch1e4]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

double String_32::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)>301){
      double notAnum;
       notAnum = NAN; 
      return notAnum;
      
   }
   double ret;
   SPRStackArrayConcrete<char,301> puffer;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->toCharArray(stackStartPtr,puffer);
   
                  ret=atof(puffer._array);
               
   return ret;
   
   
} //End Of Method

void String_32::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_32::assign(char* stackStartPtr,char zeichen){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,zeichen);
   
   
} //End Of Method

void String_32::assign(char* stackStartPtr,String_32& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_32::assign(char* stackStartPtr,SPRSmartPtr<String_32> anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch1e6;spr_intScratch1e6=groesse;chck_accs0(str,spr_intScratch1e6,488)
   while(str._array[spr_intScratch1e6]!='\0'){
      groesse++;
      spr_intScratch1e6=groesse;chck_accs0(str,spr_intScratch1e6,488)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1e8;spr_intScratch1e8=stelle;chck_accs0(str,spr_intScratch1e8,490)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1e8]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch1ea;spr_intScratch1ea=i+pos;chck_accs0(str,spr_intScratch1ea,492)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1ea]);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,31> puffer;
   
                   snprintf(puffer._array,30,"%.10e",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_32::appendKurz(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,301> puffer;
   
                   snprintf(puffer._array,300,"%3.2lf",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,longlong l,int basis){
   char SPR_stack_dummy_var;
   String_16 zk16;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::wandle(stackStartPtr,l,basis,zk16);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+zk16.length(stackStartPtr));
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<zk16.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,zk16.getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_32::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->printNoLF(stackStartPtr);
    ::printf("\n"); 
   
   
} //End Of Method

void String_32::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+1);
   if(_extendedBuf==0U){
             int spr_intScratch1ec;spr_intScratch1ec=_length;chck_accs0(_preAllocBuf,spr_intScratch1ec,494)
      _preAllocBuf._array[spr_intScratch1ec]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch1ee;spr_intScratch1ee=_length;chck_accs_p0(_extendedBuf,spr_intScratch1ee,496)
      _extendedBuf._theObject->_array[spr_intScratch1ee]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_32::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch1f0;spr_intScratch1f0=l;chck_accs0(str,spr_intScratch1f0,498)
   while(str._array[spr_intScratch1f0]!='\0'){
      l=l+1;
      spr_intScratch1f0=l;chck_accs0(str,spr_intScratch1f0,498)
      
   };
   return l;
   
   
} //End Of Method

void String_32::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch1f2;spr_intScratch1f2=0;chck_accs_p0(_extendedBuf,spr_intScratch1f2,500)
      _extendedBuf._theObject->_array[spr_intScratch1f2]='\0';
      
   }
          int spr_intScratch1f4;spr_intScratch1f4=0;chck_accs0(_preAllocBuf,spr_intScratch1f4,502)
   _preAllocBuf._array[spr_intScratch1f4]='\0';
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,String_32& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int groesse;groesse=other.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other.getAt(stackStartPtr,stelle));
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   _extendedBuf=0U;
          int spr_intScratch1f6;spr_intScratch1f6=0;chck_accs0(_preAllocBuf,spr_intScratch1f6,504)
   _preAllocBuf._array[spr_intScratch1f6]='\0';
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch1f8;spr_intScratch1f8=i;chck_accs0(str,spr_intScratch1f8,506)
   while((i<str._sz)&&(str._array[spr_intScratch1f8]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1fa;spr_intScratch1fa=i;chck_accs0(str,spr_intScratch1fa,508)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch1fa]){
         return 0;
         
      }
      i++;
      spr_intScratch1f8=i;chck_accs0(str,spr_intScratch1f8,506)
      
   };
   if(i==_length){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
      if(32<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
                int spr_intScratch1fc;spr_intScratch1fc=_length;chck_accs_p0(_extendedBuf,spr_intScratch1fc,510)
         _extendedBuf._theObject->_array[spr_intScratch1fc]=c;
         
      }
      else
      {
             int spr_intScratch1fe;spr_intScratch1fe=_length;chck_accs0(_preAllocBuf,spr_intScratch1fe,512)
         _preAllocBuf._array[spr_intScratch1fe]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch200;spr_intScratch200=_length;chck_accs_p0(_extendedBuf,spr_intScratch200,514)
      _extendedBuf._theObject->_array[spr_intScratch200]=c;
      _length++;
      }
   
   
} //End Of Method

char String_32::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch202;spr_intScratch202=i;chck_accs_p0(_extendedBuf,spr_intScratch202,516)
      return _extendedBuf._theObject->_array[spr_intScratch202];
      
   }
   else
   {
          int spr_intScratch204;spr_intScratch204=i;chck_accs0(_preAllocBuf,spr_intScratch204,518)
      return _preAllocBuf._array[spr_intScratch204];
      }
   return '0';
   
   
} //End Of Method

void String_32::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch206;spr_intScratch206=stelle;chck_accs_p0(_extendedBuf,spr_intScratch206,520)
      _extendedBuf._theObject->_array[spr_intScratch206]=zeichen;
      
   }
   else
   {
          int spr_intScratch208;spr_intScratch208=stelle;chck_accs0(_preAllocBuf,spr_intScratch208,522)
      _preAllocBuf._array[spr_intScratch208]=zeichen;
      }
   
   
} //End Of Method

void String_32::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_32::~String_32(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_32::rightOf(char* stackStartPtr,char divider,String_32& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::equals(char* stackStartPtr,String_32& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<l){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_32::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch20a;spr_intScratch20a=lother;chck_accs0(other,spr_intScratch20a,524)
   while((lother<other._sz)&&(other._array[spr_intScratch20a]!='\0')){
      lother++;
      spr_intScratch20a=lother;chck_accs0(other,spr_intScratch20a,524)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch20c;spr_intScratch20c=i;chck_accs0(other,spr_intScratch20c,526)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch20c]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRSmartPtr<String_32> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   longlong xLL;xLL=((longlong)x);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_32::appendHexOctet(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch20e;spr_intScratch20e=0;chck_accs0(buf,spr_intScratch20e,528)
   buf._array[spr_intScratch20e]='\0';
    snprintf(buf._array,16,"%.2x",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_32::appendHex(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,16);
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_32::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch210;spr_intScratch210=0;chck_accs0(feld,spr_intScratch210,530)
      feld._array[spr_intScratch210]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch212;spr_intScratch212=i;chck_accs0(feld,spr_intScratch212,532)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch212]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch214;spr_intScratch214=i;chck_accs0(feld,spr_intScratch214,534)
   feld._array[spr_intScratch214]='\0';
   
   
} //End Of Method

int String_32::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_32::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

longlong String_32::asNumberLL(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   longlong ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_32::escape(char* stackStartPtr,String_32& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::deEscape(char* stackStartPtr,String_32& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch216;spr_intScratch216=j;chck_accs0(end,spr_intScratch216,536)
   while((end._array[spr_intScratch216]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch216=j;chck_accs0(end,spr_intScratch216,536)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch218;spr_intScratch218=j;chck_accs0(end,spr_intScratch218,538)
      if(c!=end._array[spr_intScratch218]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_32::endsWith(char* stackStartPtr,String_32& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_32::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch21a;spr_intScratch21a=i;chck_accs0(buf,spr_intScratch21a,540)
   while((i<l)&&(buf._array[spr_intScratch21a]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch21c;spr_intScratch21c=i;chck_accs0(buf,spr_intScratch21c,542)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch21c]){
         return 0;
         
      }
      i++;
      spr_intScratch21a=i;chck_accs0(buf,spr_intScratch21a,540)
      
   };
   return 1;
   
   
} //End Of Method

void String_32::subString(char* stackStartPtr,String_32& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_32::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

void String_32::wandleKleinbuchstaben(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,i);
      if((z>='A')&&(z<='Z')){
         char zNeu;zNeu=((char)((((int)z)-((int)'A'))+((int)'a')));
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->setAt(stackStartPtr,i,zNeu);
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_32::wandleUmlaute(char* stackStartPtr,String_32& ausgabe){
   char SPR_stack_dummy_var;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<_length){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,i);
      switch(((int)zeichen)){
         case 0xE4:{
            SPRStackArrayConcrete<char,4> spr_StringScratch21e;strcpy(spr_StringScratch21e._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch21e);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch21f;strcpy(spr_StringScratch21f._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch21f);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch220;strcpy(spr_StringScratch220._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch220);
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,((char)zeichen));
            
         };
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::ensureCapacity(char* stackStartPtr,int minCapacity){
   char SPR_stack_dummy_var;
   if(32<minCapacity){
      if(_extendedBuf==0U){
         int spr_intScratch221;
         spr_intScratch221=minCapacity*2;
         if(spr_intScratch221<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch221) SPRArray<char>(spr_intScratch221)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch222;spr_intScratch222=i;chck_accs_p0(_extendedBuf,spr_intScratch222,548)
                   int spr_intScratch224;spr_intScratch224=i;chck_accs0(_preAllocBuf,spr_intScratch224,550)
            _extendedBuf._theObject->_array[spr_intScratch222]=_preAllocBuf._array[spr_intScratch224];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch226;
            spr_intScratch226=minCapacity*2;
            if(spr_intScratch226<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch226) SPRArray<char>(spr_intScratch226)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch227;spr_intScratch227=i;chck_accs_p0(newBuf,spr_intScratch227,553)
                      int spr_intScratch229;spr_intScratch229=i;chck_accs_p0(_extendedBuf,spr_intScratch229,555)
               newBuf._theObject->_array[spr_intScratch227]=_extendedBuf._theObject->_array[spr_intScratch229];
               i++;
               
            
            }
            }//end of SPR for statement
            _extendedBuf=newBuf;
            
         }
         }
      
   }
   
   
} //End Of Method

int Hash_String_32::hash(char* stackStartPtr,String_32& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_32::compare(char* stackStartPtr,String_32& s1,String_32& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_32::assign(char* stackStartPtr,String_32& s1,String_32& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

String_64::String_64(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch22b;spr_intScratch22b=0;chck_accs0(_preAllocBuf,spr_intScratch22b,557)
   _preAllocBuf._array[spr_intScratch22b]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_64::String_64(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch22d;spr_intScratch22d=0;chck_accs0(_preAllocBuf,spr_intScratch22d,559)
   _preAllocBuf._array[spr_intScratch22d]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch22f;strcpy(spr_StringScratch22f._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch22f);
   
   
} //End Of Method

int String_64::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

int String_64::teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_64> > spalten,char trenner){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   int ausgStelle;ausgStelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
          int spr_intScratch230;spr_intScratch230=0;chck_accs_p0(spalten,spr_intScratch230,562)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch230].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch232;spr_intScratch232=ausgStelle;chck_accs_p0(spalten,spr_intScratch232,564)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch232].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch234;spr_intScratch234=ausgStelle;chck_accs_p0(spalten,spr_intScratch234,566)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch234].append(stackStartPtr,z);
         }
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(stelle==this->length(stackStartPtr)){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_64::getKey(char* stackStartPtr,SPRSmartPtr<String_64> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,String_64& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while(i<l){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            return 0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   else
   {
   return 0;
      }
   return 1;
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch236;spr_intScratch236=groesse;chck_accs_p0(buf,spr_intScratch236,568)
   while(buf._theObject->_array[spr_intScratch236]!='\0'){
      groesse++;
      spr_intScratch236=groesse;chck_accs_p0(buf,spr_intScratch236,568)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch238;spr_intScratch238=stelle;chck_accs_p0(buf,spr_intScratch238,570)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch238]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

double String_64::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)>301){
      double notAnum;
       notAnum = NAN; 
      return notAnum;
      
   }
   double ret;
   SPRStackArrayConcrete<char,301> puffer;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->toCharArray(stackStartPtr,puffer);
   
                  ret=atof(puffer._array);
               
   return ret;
   
   
} //End Of Method

void String_64::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_64::assign(char* stackStartPtr,char zeichen){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,zeichen);
   
   
} //End Of Method

void String_64::assign(char* stackStartPtr,String_64& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_64::assign(char* stackStartPtr,SPRSmartPtr<String_64> anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch23a;spr_intScratch23a=groesse;chck_accs0(str,spr_intScratch23a,572)
   while(str._array[spr_intScratch23a]!='\0'){
      groesse++;
      spr_intScratch23a=groesse;chck_accs0(str,spr_intScratch23a,572)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch23c;spr_intScratch23c=stelle;chck_accs0(str,spr_intScratch23c,574)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch23c]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch23e;spr_intScratch23e=i+pos;chck_accs0(str,spr_intScratch23e,576)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch23e]);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,31> puffer;
   
                   snprintf(puffer._array,30,"%.10e",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_64::appendKurz(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,301> puffer;
   
                   snprintf(puffer._array,300,"%3.2lf",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,longlong l,int basis){
   char SPR_stack_dummy_var;
   String_16 zk16;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::wandle(stackStartPtr,l,basis,zk16);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+zk16.length(stackStartPtr));
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<zk16.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,zk16.getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_64::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->printNoLF(stackStartPtr);
    ::printf("\n"); 
   
   
} //End Of Method

void String_64::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+1);
   if(_extendedBuf==0U){
             int spr_intScratch240;spr_intScratch240=_length;chck_accs0(_preAllocBuf,spr_intScratch240,578)
      _preAllocBuf._array[spr_intScratch240]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch242;spr_intScratch242=_length;chck_accs_p0(_extendedBuf,spr_intScratch242,580)
      _extendedBuf._theObject->_array[spr_intScratch242]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_64::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch244;spr_intScratch244=l;chck_accs0(str,spr_intScratch244,582)
   while(str._array[spr_intScratch244]!='\0'){
      l=l+1;
      spr_intScratch244=l;chck_accs0(str,spr_intScratch244,582)
      
   };
   return l;
   
   
} //End Of Method

void String_64::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch246;spr_intScratch246=0;chck_accs_p0(_extendedBuf,spr_intScratch246,584)
      _extendedBuf._theObject->_array[spr_intScratch246]='\0';
      
   }
          int spr_intScratch248;spr_intScratch248=0;chck_accs0(_preAllocBuf,spr_intScratch248,586)
   _preAllocBuf._array[spr_intScratch248]='\0';
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,String_64& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int groesse;groesse=other.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other.getAt(stackStartPtr,stelle));
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   _extendedBuf=0U;
          int spr_intScratch24a;spr_intScratch24a=0;chck_accs0(_preAllocBuf,spr_intScratch24a,588)
   _preAllocBuf._array[spr_intScratch24a]='\0';
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch24c;spr_intScratch24c=i;chck_accs0(str,spr_intScratch24c,590)
   while((i<str._sz)&&(str._array[spr_intScratch24c]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch24e;spr_intScratch24e=i;chck_accs0(str,spr_intScratch24e,592)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch24e]){
         return 0;
         
      }
      i++;
      spr_intScratch24c=i;chck_accs0(str,spr_intScratch24c,590)
      
   };
   if(i==_length){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
      if(64<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
                int spr_intScratch250;spr_intScratch250=_length;chck_accs_p0(_extendedBuf,spr_intScratch250,594)
         _extendedBuf._theObject->_array[spr_intScratch250]=c;
         
      }
      else
      {
             int spr_intScratch252;spr_intScratch252=_length;chck_accs0(_preAllocBuf,spr_intScratch252,596)
         _preAllocBuf._array[spr_intScratch252]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch254;spr_intScratch254=_length;chck_accs_p0(_extendedBuf,spr_intScratch254,598)
      _extendedBuf._theObject->_array[spr_intScratch254]=c;
      _length++;
      }
   
   
} //End Of Method

char String_64::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch256;spr_intScratch256=i;chck_accs_p0(_extendedBuf,spr_intScratch256,600)
      return _extendedBuf._theObject->_array[spr_intScratch256];
      
   }
   else
   {
          int spr_intScratch258;spr_intScratch258=i;chck_accs0(_preAllocBuf,spr_intScratch258,602)
      return _preAllocBuf._array[spr_intScratch258];
      }
   return '0';
   
   
} //End Of Method

void String_64::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch25a;spr_intScratch25a=stelle;chck_accs_p0(_extendedBuf,spr_intScratch25a,604)
      _extendedBuf._theObject->_array[spr_intScratch25a]=zeichen;
      
   }
   else
   {
          int spr_intScratch25c;spr_intScratch25c=stelle;chck_accs0(_preAllocBuf,spr_intScratch25c,606)
      _preAllocBuf._array[spr_intScratch25c]=zeichen;
      }
   
   
} //End Of Method

void String_64::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_64::~String_64(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_64::rightOf(char* stackStartPtr,char divider,String_64& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::equals(char* stackStartPtr,String_64& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<l){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_64::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch25e;spr_intScratch25e=lother;chck_accs0(other,spr_intScratch25e,608)
   while((lother<other._sz)&&(other._array[spr_intScratch25e]!='\0')){
      lother++;
      spr_intScratch25e=lother;chck_accs0(other,spr_intScratch25e,608)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch260;spr_intScratch260=i;chck_accs0(other,spr_intScratch260,610)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch260]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRSmartPtr<String_64> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   longlong xLL;xLL=((longlong)x);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_64::appendHexOctet(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch262;spr_intScratch262=0;chck_accs0(buf,spr_intScratch262,612)
   buf._array[spr_intScratch262]='\0';
    snprintf(buf._array,16,"%.2x",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_64::appendHex(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,16);
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_64::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch264;spr_intScratch264=0;chck_accs0(feld,spr_intScratch264,614)
      feld._array[spr_intScratch264]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch266;spr_intScratch266=i;chck_accs0(feld,spr_intScratch266,616)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch266]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch268;spr_intScratch268=i;chck_accs0(feld,spr_intScratch268,618)
   feld._array[spr_intScratch268]='\0';
   
   
} //End Of Method

int String_64::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_64::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

longlong String_64::asNumberLL(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   longlong ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_64::escape(char* stackStartPtr,String_64& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::deEscape(char* stackStartPtr,String_64& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch26a;spr_intScratch26a=j;chck_accs0(end,spr_intScratch26a,620)
   while((end._array[spr_intScratch26a]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch26a=j;chck_accs0(end,spr_intScratch26a,620)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch26c;spr_intScratch26c=j;chck_accs0(end,spr_intScratch26c,622)
      if(c!=end._array[spr_intScratch26c]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_64::endsWith(char* stackStartPtr,String_64& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_64::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch26e;spr_intScratch26e=i;chck_accs0(buf,spr_intScratch26e,624)
   while((i<l)&&(buf._array[spr_intScratch26e]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch270;spr_intScratch270=i;chck_accs0(buf,spr_intScratch270,626)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch270]){
         return 0;
         
      }
      i++;
      spr_intScratch26e=i;chck_accs0(buf,spr_intScratch26e,624)
      
   };
   return 1;
   
   
} //End Of Method

void String_64::subString(char* stackStartPtr,String_64& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_64::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

void String_64::wandleKleinbuchstaben(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,i);
      if((z>='A')&&(z<='Z')){
         char zNeu;zNeu=((char)((((int)z)-((int)'A'))+((int)'a')));
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->setAt(stackStartPtr,i,zNeu);
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_64::wandleUmlaute(char* stackStartPtr,String_64& ausgabe){
   char SPR_stack_dummy_var;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<_length){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,i);
      switch(((int)zeichen)){
         case 0xE4:{
            SPRStackArrayConcrete<char,4> spr_StringScratch272;strcpy(spr_StringScratch272._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch272);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch273;strcpy(spr_StringScratch273._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch273);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch274;strcpy(spr_StringScratch274._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch274);
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,((char)zeichen));
            
         };
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::ensureCapacity(char* stackStartPtr,int minCapacity){
   char SPR_stack_dummy_var;
   if(64<minCapacity){
      if(_extendedBuf==0U){
         int spr_intScratch275;
         spr_intScratch275=minCapacity*2;
         if(spr_intScratch275<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch275) SPRArray<char>(spr_intScratch275)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch276;spr_intScratch276=i;chck_accs_p0(_extendedBuf,spr_intScratch276,632)
                   int spr_intScratch278;spr_intScratch278=i;chck_accs0(_preAllocBuf,spr_intScratch278,634)
            _extendedBuf._theObject->_array[spr_intScratch276]=_preAllocBuf._array[spr_intScratch278];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch27a;
            spr_intScratch27a=minCapacity*2;
            if(spr_intScratch27a<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch27a) SPRArray<char>(spr_intScratch27a)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch27b;spr_intScratch27b=i;chck_accs_p0(newBuf,spr_intScratch27b,637)
                      int spr_intScratch27d;spr_intScratch27d=i;chck_accs_p0(_extendedBuf,spr_intScratch27d,639)
               newBuf._theObject->_array[spr_intScratch27b]=_extendedBuf._theObject->_array[spr_intScratch27d];
               i++;
               
            
            }
            }//end of SPR for statement
            _extendedBuf=newBuf;
            
         }
         }
      
   }
   
   
} //End Of Method

int Hash_String_64::hash(char* stackStartPtr,String_64& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_64::compare(char* stackStartPtr,String_64& s1,String_64& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_64::assign(char* stackStartPtr,String_64& s1,String_64& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

String_128::String_128(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch27f;spr_intScratch27f=0;chck_accs0(_preAllocBuf,spr_intScratch27f,641)
   _preAllocBuf._array[spr_intScratch27f]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_128::String_128(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch281;spr_intScratch281=0;chck_accs0(_preAllocBuf,spr_intScratch281,643)
   _preAllocBuf._array[spr_intScratch281]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch283;strcpy(spr_StringScratch283._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch283);
   
   
} //End Of Method

int String_128::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

int String_128::teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_128> > spalten,char trenner){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   int ausgStelle;ausgStelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
          int spr_intScratch284;spr_intScratch284=0;chck_accs_p0(spalten,spr_intScratch284,646)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch284].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch286;spr_intScratch286=ausgStelle;chck_accs_p0(spalten,spr_intScratch286,648)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch286].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch288;spr_intScratch288=ausgStelle;chck_accs_p0(spalten,spr_intScratch288,650)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch288].append(stackStartPtr,z);
         }
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(stelle==this->length(stackStartPtr)){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_128::getKey(char* stackStartPtr,SPRSmartPtr<String_128> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,String_128& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while(i<l){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            return 0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   else
   {
   return 0;
      }
   return 1;
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch28a;spr_intScratch28a=groesse;chck_accs_p0(buf,spr_intScratch28a,652)
   while(buf._theObject->_array[spr_intScratch28a]!='\0'){
      groesse++;
      spr_intScratch28a=groesse;chck_accs_p0(buf,spr_intScratch28a,652)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch28c;spr_intScratch28c=stelle;chck_accs_p0(buf,spr_intScratch28c,654)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch28c]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

double String_128::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)>301){
      double notAnum;
       notAnum = NAN; 
      return notAnum;
      
   }
   double ret;
   SPRStackArrayConcrete<char,301> puffer;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->toCharArray(stackStartPtr,puffer);
   
                  ret=atof(puffer._array);
               
   return ret;
   
   
} //End Of Method

void String_128::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_128::assign(char* stackStartPtr,char zeichen){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,zeichen);
   
   
} //End Of Method

void String_128::assign(char* stackStartPtr,String_128& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_128::assign(char* stackStartPtr,SPRSmartPtr<String_128> anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int groesse;groesse=0;
          int spr_intScratch28e;spr_intScratch28e=groesse;chck_accs0(str,spr_intScratch28e,656)
   while(str._array[spr_intScratch28e]!='\0'){
      groesse++;
      spr_intScratch28e=groesse;chck_accs0(str,spr_intScratch28e,656)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch290;spr_intScratch290=stelle;chck_accs0(str,spr_intScratch290,658)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch290]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch292;spr_intScratch292=i+pos;chck_accs0(str,spr_intScratch292,660)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch292]);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,31> puffer;
   
                   snprintf(puffer._array,30,"%.10e",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_128::appendKurz(char* stackStartPtr,double d){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,301> puffer;
   
                   snprintf(puffer._array,300,"%3.2lf",d);
               
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,puffer);
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,longlong l,int basis){
   char SPR_stack_dummy_var;
   String_16 zk16;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::wandle(stackStartPtr,l,basis,zk16);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+zk16.length(stackStartPtr));
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<zk16.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,zk16.getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_128::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->printNoLF(stackStartPtr);
    ::printf("\n"); 
   
   
} //End Of Method

void String_128::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+1);
   if(_extendedBuf==0U){
             int spr_intScratch294;spr_intScratch294=_length;chck_accs0(_preAllocBuf,spr_intScratch294,662)
      _preAllocBuf._array[spr_intScratch294]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch296;spr_intScratch296=_length;chck_accs_p0(_extendedBuf,spr_intScratch296,664)
      _extendedBuf._theObject->_array[spr_intScratch296]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_128::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch298;spr_intScratch298=l;chck_accs0(str,spr_intScratch298,666)
   while(str._array[spr_intScratch298]!='\0'){
      l=l+1;
      spr_intScratch298=l;chck_accs0(str,spr_intScratch298,666)
      
   };
   return l;
   
   
} //End Of Method

void String_128::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch29a;spr_intScratch29a=0;chck_accs_p0(_extendedBuf,spr_intScratch29a,668)
      _extendedBuf._theObject->_array[spr_intScratch29a]='\0';
      
   }
          int spr_intScratch29c;spr_intScratch29c=0;chck_accs0(_preAllocBuf,spr_intScratch29c,670)
   _preAllocBuf._array[spr_intScratch29c]='\0';
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,String_128& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int groesse;groesse=other.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other.getAt(stackStartPtr,stelle));
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   _extendedBuf=0U;
          int spr_intScratch29e;spr_intScratch29e=0;chck_accs0(_preAllocBuf,spr_intScratch29e,672)
   _preAllocBuf._array[spr_intScratch29e]='\0';
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch2a0;spr_intScratch2a0=i;chck_accs0(str,spr_intScratch2a0,674)
   while((i<str._sz)&&(str._array[spr_intScratch2a0]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2a2;spr_intScratch2a2=i;chck_accs0(str,spr_intScratch2a2,676)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch2a2]){
         return 0;
         
      }
      i++;
      spr_intScratch2a0=i;chck_accs0(str,spr_intScratch2a0,674)
      
   };
   if(i==_length){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
      if(128<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
                int spr_intScratch2a4;spr_intScratch2a4=_length;chck_accs_p0(_extendedBuf,spr_intScratch2a4,678)
         _extendedBuf._theObject->_array[spr_intScratch2a4]=c;
         
      }
      else
      {
             int spr_intScratch2a6;spr_intScratch2a6=_length;chck_accs0(_preAllocBuf,spr_intScratch2a6,680)
         _preAllocBuf._array[spr_intScratch2a6]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch2a8;spr_intScratch2a8=_length;chck_accs_p0(_extendedBuf,spr_intScratch2a8,682)
      _extendedBuf._theObject->_array[spr_intScratch2a8]=c;
      _length++;
      }
   
   
} //End Of Method

char String_128::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch2aa;spr_intScratch2aa=i;chck_accs_p0(_extendedBuf,spr_intScratch2aa,684)
      return _extendedBuf._theObject->_array[spr_intScratch2aa];
      
   }
   else
   {
          int spr_intScratch2ac;spr_intScratch2ac=i;chck_accs0(_preAllocBuf,spr_intScratch2ac,686)
      return _preAllocBuf._array[spr_intScratch2ac];
      }
   return '0';
   
   
} //End Of Method

void String_128::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch2ae;spr_intScratch2ae=stelle;chck_accs_p0(_extendedBuf,spr_intScratch2ae,688)
      _extendedBuf._theObject->_array[spr_intScratch2ae]=zeichen;
      
   }
   else
   {
          int spr_intScratch2b0;spr_intScratch2b0=stelle;chck_accs0(_preAllocBuf,spr_intScratch2b0,690)
      _preAllocBuf._array[spr_intScratch2b0]=zeichen;
      }
   
   
} //End Of Method

void String_128::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_128::~String_128(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_128::rightOf(char* stackStartPtr,char divider,String_128& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::equals(char* stackStartPtr,String_128& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<l){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_128::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch2b2;spr_intScratch2b2=lother;chck_accs0(other,spr_intScratch2b2,692)
   while((lother<other._sz)&&(other._array[spr_intScratch2b2]!='\0')){
      lother++;
      spr_intScratch2b2=lother;chck_accs0(other,spr_intScratch2b2,692)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2b4;spr_intScratch2b4=i;chck_accs0(other,spr_intScratch2b4,694)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch2b4]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRSmartPtr<String_128> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   longlong xLL;xLL=((longlong)x);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_128::appendHexOctet(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch2b6;spr_intScratch2b6=0;chck_accs0(buf,spr_intScratch2b6,696)
   buf._array[spr_intScratch2b6]='\0';
    snprintf(buf._array,16,"%.2x",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_128::appendHex(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,16);
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,longlong x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,x,10);
   
   
} //End Of Method

void String_128::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch2b8;spr_intScratch2b8=0;chck_accs0(feld,spr_intScratch2b8,698)
      feld._array[spr_intScratch2b8]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch2ba;spr_intScratch2ba=i;chck_accs0(feld,spr_intScratch2ba,700)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch2ba]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch2bc;spr_intScratch2bc=i;chck_accs0(feld,spr_intScratch2bc,702)
   feld._array[spr_intScratch2bc]='\0';
   
   
} //End Of Method

int String_128::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_128::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

longlong String_128::asNumberLL(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   longlong ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_128::escape(char* stackStartPtr,String_128& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::deEscape(char* stackStartPtr,String_128& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch2be;spr_intScratch2be=j;chck_accs0(end,spr_intScratch2be,704)
   while((end._array[spr_intScratch2be]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch2be=j;chck_accs0(end,spr_intScratch2be,704)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch2c0;spr_intScratch2c0=j;chck_accs0(end,spr_intScratch2c0,706)
      if(c!=end._array[spr_intScratch2c0]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_128::endsWith(char* stackStartPtr,String_128& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_128::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch2c2;spr_intScratch2c2=i;chck_accs0(buf,spr_intScratch2c2,708)
   while((i<l)&&(buf._array[spr_intScratch2c2]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2c4;spr_intScratch2c4=i;chck_accs0(buf,spr_intScratch2c4,710)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch2c4]){
         return 0;
         
      }
      i++;
      spr_intScratch2c2=i;chck_accs0(buf,spr_intScratch2c2,708)
      
   };
   return 1;
   
   
} //End Of Method

void String_128::subString(char* stackStartPtr,String_128& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_128::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

void String_128::wandleKleinbuchstaben(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,i);
      if((z>='A')&&(z<='Z')){
         char zNeu;zNeu=((char)((((int)z)-((int)'A'))+((int)'a')));
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->setAt(stackStartPtr,i,zNeu);
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_128::wandleUmlaute(char* stackStartPtr,String_128& ausgabe){
   char SPR_stack_dummy_var;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<_length){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,i);
      switch(((int)zeichen)){
         case 0xE4:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2c6;strcpy(spr_StringScratch2c6._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2c6);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2c7;strcpy(spr_StringScratch2c7._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2c7);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2c8;strcpy(spr_StringScratch2c8._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2c8);
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,((char)zeichen));
            
         };
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::ensureCapacity(char* stackStartPtr,int minCapacity){
   char SPR_stack_dummy_var;
   if(128<minCapacity){
      if(_extendedBuf==0U){
         int spr_intScratch2c9;
         spr_intScratch2c9=minCapacity*2;
         if(spr_intScratch2c9<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch2c9) SPRArray<char>(spr_intScratch2c9)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch2ca;spr_intScratch2ca=i;chck_accs_p0(_extendedBuf,spr_intScratch2ca,716)
                   int spr_intScratch2cc;spr_intScratch2cc=i;chck_accs0(_preAllocBuf,spr_intScratch2cc,718)
            _extendedBuf._theObject->_array[spr_intScratch2ca]=_preAllocBuf._array[spr_intScratch2cc];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch2ce;
            spr_intScratch2ce=minCapacity*2;
            if(spr_intScratch2ce<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch2ce) SPRArray<char>(spr_intScratch2ce)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch2cf;spr_intScratch2cf=i;chck_accs_p0(newBuf,spr_intScratch2cf,721)
                      int spr_intScratch2d1;spr_intScratch2d1=i;chck_accs_p0(_extendedBuf,spr_intScratch2d1,723)
               newBuf._theObject->_array[spr_intScratch2cf]=_extendedBuf._theObject->_array[spr_intScratch2d1];
               i++;
               
            
            }
            }//end of SPR for statement
            _extendedBuf=newBuf;
            
         }
         }
      
   }
   
   
} //End Of Method

int Hash_String_128::hash(char* stackStartPtr,String_128& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_128::compare(char* stackStartPtr,String_128& s1,String_128& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_128::assign(char* stackStartPtr,String_128& s1,String_128& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

Hashtable4_Hashable4_KeyType4::Hashtable4_Hashable4_KeyType4(char* stackStartPtr,int initialCapacity){
   char SPR_stack_dummy_var;
   _numUsed=0;
   int spr_intScratch2d3;
   spr_intScratch2d3=initialCapacity;
   if(spr_intScratch2d3<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch2d3) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch2d3)
   ;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   int minCap;minCap=((int)_numUsed*1.2f+2);
   if(_elements._theObject->_sz<=minCap){
      int newCap;newCap=_elements._theObject->_sz*2;
      SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > oldArray;
      oldArray=_elements;
      int spr_intScratch2d4;
      spr_intScratch2d4=newCap;
      if(spr_intScratch2d4<0)throw "invalid size requested for heap allocation";
      _elements=new(spr_intScratch2d4) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch2d4)
      ;
      {//begin of SPR for statement
      int i;i=0;
      while(i<oldArray._theObject->_sz){
                int spr_intScratch2d5;spr_intScratch2d5=i;chck_accs_p0(oldArray,spr_intScratch2d5,727)
         if(oldArray._theObject->_array[spr_intScratch2d5]!=0U){
                   int spr_intScratch2d7;spr_intScratch2d7=i;chck_accs_p0(oldArray,spr_intScratch2d7,729)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,oldArray._theObject->_array[spr_intScratch2d7]);
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   _numUsed++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->insertInternally(stackStartPtr,x);
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insertInternally(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   SPRSmartPtr<KeyType4> key;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   x._theObject->getKey(stackStartPtr,key);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key._theObject->getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
          int spr_intScratch2d9;spr_intScratch2d9=code;chck_accs_p0(_elements,spr_intScratch2d9,731)
   while(_elements._theObject->_array[spr_intScratch2d9]!=0U){
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch2d9=code;chck_accs_p0(_elements,spr_intScratch2d9,731)
      
   };
          int spr_intScratch2db;spr_intScratch2db=code;chck_accs_p0(_elements,spr_intScratch2db,733)
   _elements._theObject->_array[spr_intScratch2db]=x;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key.getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
   int searching;searching=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
          int spr_intScratch2e3;do{
             int spr_intScratch2dd;spr_intScratch2dd=code;chck_accs_p0(_elements,spr_intScratch2dd,735)
      if(_elements._theObject->_array[spr_intScratch2dd]!=0U){
         SPRSmartPtr<KeyType4> key2;
                int spr_intScratch2df;spr_intScratch2df=code;chck_accs_p0(_elements,spr_intScratch2df,737)
         _elements._theObject->_array[spr_intScratch2df]._theObject->getKey(stackStartPtr,key2);
         if(key2._theObject->compare(stackStartPtr,key)==1){
                   int spr_intScratch2e1;spr_intScratch2e1=code;chck_accs_p0(_elements,spr_intScratch2e1,739)
            oValue=_elements._theObject->_array[spr_intScratch2e1];
            searching=0;
            
         }
         
      }
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch2e3=code;chck_accs_p0(_elements,spr_intScratch2e3,741)
      
   }
   while((_elements._theObject->_array[spr_intScratch2e3]!=0U)&&(searching==1));
   
   
} //End Of Method

int Hashtable4_Hashable4_KeyType4::numElements(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return _numUsed;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::getFirst(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   _readPtr=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->getNext(stackStartPtr,oValue);
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::getNext(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   int stepping;stepping=1;
   while((_readPtr<_elements._theObject->_sz)&&(stepping==1)){
             int spr_intScratch2e5;spr_intScratch2e5=_readPtr;chck_accs_p0(_elements,spr_intScratch2e5,743)
      if(_elements._theObject->_array[spr_intScratch2e5]==0U){
         _readPtr++;
         
      }
      else
      {
      stepping=0;
         }
      
   };
   if(_readPtr<_elements._theObject->_sz){
             int spr_intScratch2e7;spr_intScratch2e7=_readPtr;chck_accs_p0(_elements,spr_intScratch2e7,745)
      oValue=_elements._theObject->_array[spr_intScratch2e7];
      _readPtr++;
      
   }
   else
   {
   oValue=0U;
      }
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<_elements._theObject->_sz){
             int spr_intScratch2e9;spr_intScratch2e9=i;chck_accs_p0(_elements,spr_intScratch2e9,747)
      _elements._theObject->_array[spr_intScratch2e9]=0U;
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

SPHT_Entry_String_16_String_16::SPHT_Entry_String_16_String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   is_used=0;
   
   
} //End Of Method

SPHT_String_16_String_16::SPHT_String_16_String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   
   
} //End Of Method

void SPHT_String_16_String_16::resetIterator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   iterator_pos=0;
   iterator_next=0U;
   
   
} //End Of Method

void SPHT_String_16_String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   numberOfEntries=0;
   int spr_intScratch2eb;
   spr_intScratch2eb=3;
   if(spr_intScratch2eb<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch2eb) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch2eb)
   ;
   
   
} //End Of Method

int SPHT_String_16_String_16::nextElem(char* stackStartPtr,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if(iterator_next!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,iterator_next._theObject->key);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,iterator_next._theObject->value);
      iterator_next=iterator_next._theObject->next;
      
   }
   else
   {
   int found;found=0;
      while((iterator_pos<_elements._theObject->_sz)&&(found==0)){
                int spr_intScratch2ec;spr_intScratch2ec=iterator_pos;chck_accs_p0(_elements,spr_intScratch2ec,750)
         if(_elements._theObject->_array[spr_intScratch2ec].is_used==0){
            iterator_pos++;
            
         }
         else
         {
         found=1;
            }
         
      };
      if(iterator_pos==_elements._theObject->_sz){
         return 0;
         
      }
             int spr_intScratch2ee;spr_intScratch2ee=iterator_pos;chck_accs_p0(_elements,spr_intScratch2ee,752)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch2ee].key);
             int spr_intScratch2f0;spr_intScratch2f0=iterator_pos;chck_accs_p0(_elements,spr_intScratch2f0,754)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch2f0].value);
             int spr_intScratch2f2;spr_intScratch2f2=iterator_pos;chck_accs_p0(_elements,spr_intScratch2f2,756)
      iterator_next=_elements._theObject->_array[spr_intScratch2f2].next;
      iterator_pos++;
      }
   return 1;
   
   
} //End Of Method

int SPHT_String_16_String_16::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return numberOfEntries;
   
   
} //End Of Method

void SPHT_String_16_String_16::insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > bins,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%bins._theObject->_sz;
          int spr_intScratch2f4;spr_intScratch2f4=pos;chck_accs_p0(bins,spr_intScratch2f4,758)
          int spr_intScratch2f6;spr_intScratch2f6=pos;chck_accs_p0(bins,spr_intScratch2f6,760)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch2f4].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch2f6].key,key)==0)){
             int spr_intScratch2f8;spr_intScratch2f8=pos;chck_accs_p0(bins,spr_intScratch2f8,762)
      SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=bins._theObject->_array[spr_intScratch2f8].next;
      if(entry==0U){
                int spr_intScratch2fa;spr_intScratch2fa=pos;chck_accs_p0(bins,spr_intScratch2fa,764)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch2fa].next=::new SPHT_Entry_String_16_String_16;
                int spr_intScratch2fc;spr_intScratch2fc=pos;chck_accs_p0(bins,spr_intScratch2fc,766)
         bins._theObject->_array[spr_intScratch2fc].next._theObject->is_used=1;
                int spr_intScratch2fe;spr_intScratch2fe=pos;chck_accs_p0(bins,spr_intScratch2fe,768)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2fe].next._theObject->key,key);
                int spr_intScratch300;spr_intScratch300=pos;chck_accs_p0(bins,spr_intScratch300,770)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch300].next._theObject->value,value);
         
      }
      else
      {
      int inserted;inserted=0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while((inserted==0)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0)){
            if(entry._theObject->next==0U){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               entry._theObject->next=::new SPHT_Entry_String_16_String_16;
               entry._theObject->next._theObject->is_used=1;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               ak.assign(stackStartPtr,entry._theObject->next._theObject->key,key);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,entry._theObject->next._theObject->value,value);
               inserted=1;
               
            }
            else
            {
            entry=entry._theObject->next;
               }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         if(inserted==0){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,entry._theObject->key,key);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,entry._theObject->value,value);
            
         }
         }
      
   }
   else
   {
          int spr_intScratch302;spr_intScratch302=pos;chck_accs_p0(bins,spr_intScratch302,772)
      bins._theObject->_array[spr_intScratch302].is_used=1;
             int spr_intScratch304;spr_intScratch304=pos;chck_accs_p0(bins,spr_intScratch304,774)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch304].key,key);
             int spr_intScratch306;spr_intScratch306=pos;chck_accs_p0(bins,spr_intScratch306,776)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch306].value,value);
      }
   
   
} //End Of Method

int SPHT_String_16_String_16::search(char* stackStartPtr,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch308;spr_intScratch308=pos;chck_accs_p0(_elements,spr_intScratch308,778)
   if(_elements._theObject->_array[spr_intScratch308].is_used==1){
             int spr_intScratch30a;spr_intScratch30a=pos;chck_accs_p0(_elements,spr_intScratch30a,780)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch30a].key)==1){
                int spr_intScratch30c;spr_intScratch30c=pos;chck_accs_p0(_elements,spr_intScratch30c,782)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch30c].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch30e;spr_intScratch30e=pos;chck_accs_p0(_elements,spr_intScratch30e,784)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch30e].next;
         while(entry!=0U){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(coac.compare(stackStartPtr,entry._theObject->key,key)==1){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,value,entry._theObject->value);
               return 1;
               
            }
            entry=entry._theObject->next;
            
         };
         return 0;
         }
      
   }
   return 0;
   
   
} //End Of Method

void SPHT_String_16_String_16::insert(char* stackStartPtr,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   if(numberOfEntries<200000000){
      int nep1;nep1=numberOfEntries+1;
      int limit;limit=((_elements._theObject->_sz*7)/10);
      if(nep1>limit){
         int newCap;newCap=(_elements._theObject->_sz+1)*2;
         int spr_intScratch310;
         spr_intScratch310=newCap;
         if(spr_intScratch310<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > newElements;newElements=new(spr_intScratch310) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch310)
         ;
         String_16 key2;
         String_16 value2;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->resetIterator(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while(this->nextElem(stackStartPtr,key2,value2)){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,newElements,key2,value2);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         _elements=newElements;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->insertInternally(stackStartPtr,_elements,key,value);
      numberOfEntries++;
      
   }
   
   
} //End Of Method

void SPHT_String_16_String_16::del(char* stackStartPtr,String_16& key){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch311;spr_intScratch311=pos;chck_accs_p0(_elements,spr_intScratch311,787)
   if(_elements._theObject->_array[spr_intScratch311].is_used==1){
             int spr_intScratch313;spr_intScratch313=pos;chck_accs_p0(_elements,spr_intScratch313,789)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch313].key,key)==0){
                int spr_intScratch315;spr_intScratch315=pos;chck_accs_p0(_elements,spr_intScratch315,791)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch315].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch317;spr_intScratch317=pos;chck_accs_p0(_elements,spr_intScratch317,793)
            _elements._theObject->_array[spr_intScratch317].next=entry._theObject->next;
            numberOfEntries=numberOfEntries-1;
            
         }
         else
         {
         SPRSmartPtr<SPHT_Entry_String_16_String_16> previousEntry;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               previousEntry=entry;
               entry=entry._theObject->next;
               
            }
            while((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0));
            if(entry!=0U){
               previousEntry._theObject->next=entry._theObject->next;
               numberOfEntries=numberOfEntries-1;
               
            }
            }
         
      }
      else
      {
             int spr_intScratch319;spr_intScratch319=pos;chck_accs_p0(_elements,spr_intScratch319,795)
         if(_elements._theObject->_array[spr_intScratch319].next!=0U){
                   int spr_intScratch31b;spr_intScratch31b=pos;chck_accs_p0(_elements,spr_intScratch31b,797)
            SPRSmartPtr<SPHT_Entry_String_16_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch31b].next;
                   int spr_intScratch31d;spr_intScratch31d=pos;chck_accs_p0(_elements,spr_intScratch31d,799)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch31d].key,entryNext._theObject->key);
                   int spr_intScratch31f;spr_intScratch31f=pos;chck_accs_p0(_elements,spr_intScratch31f,801)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch31f].value,entryNext._theObject->value);
                   int spr_intScratch321;spr_intScratch321=pos;chck_accs_p0(_elements,spr_intScratch321,803)
            _elements._theObject->_array[spr_intScratch321].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch323;spr_intScratch323=pos;chck_accs_p0(_elements,spr_intScratch323,805)
            _elements._theObject->_array[spr_intScratch323].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

SPHT_Entry_int_int::SPHT_Entry_int_int(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   is_used=0;
   
   
} //End Of Method

SPHT_int_int::SPHT_int_int(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   
   
} //End Of Method

void SPHT_int_int::resetIterator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   iterator_pos=0;
   iterator_next=0U;
   
   
} //End Of Method

void SPHT_int_int::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   numberOfEntries=0;
   int spr_intScratch325;
   spr_intScratch325=3;
   if(spr_intScratch325<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch325) SPRArray<SPHT_Entry_int_int>(spr_intScratch325)
   ;
   
   
} //End Of Method

int SPHT_int_int::nextElem(char* stackStartPtr,int& key,int& value){
   char SPR_stack_dummy_var;
   Assigner_int ak;
   Assigner_int av;
   if(iterator_next!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,iterator_next._theObject->key);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,iterator_next._theObject->value);
      iterator_next=iterator_next._theObject->next;
      
   }
   else
   {
   int found;found=0;
      while((iterator_pos<_elements._theObject->_sz)&&(found==0)){
                int spr_intScratch326;spr_intScratch326=iterator_pos;chck_accs_p0(_elements,spr_intScratch326,808)
         if(_elements._theObject->_array[spr_intScratch326].is_used==0){
            iterator_pos++;
            
         }
         else
         {
         found=1;
            }
         
      };
      if(iterator_pos==_elements._theObject->_sz){
         return 0;
         
      }
             int spr_intScratch328;spr_intScratch328=iterator_pos;chck_accs_p0(_elements,spr_intScratch328,810)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch328].key);
             int spr_intScratch32a;spr_intScratch32a=iterator_pos;chck_accs_p0(_elements,spr_intScratch32a,812)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch32a].value);
             int spr_intScratch32c;spr_intScratch32c=iterator_pos;chck_accs_p0(_elements,spr_intScratch32c,814)
      iterator_next=_elements._theObject->_array[spr_intScratch32c].next;
      iterator_pos++;
      }
   return 1;
   
   
} //End Of Method

int SPHT_int_int::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return numberOfEntries;
   
   
} //End Of Method

void SPHT_int_int::insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > bins,int& key,int& value){
   char SPR_stack_dummy_var;
   Hash_int hac;
   Compare_int coac;
   Assigner_int ak;
   Assigner_int av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%bins._theObject->_sz;
          int spr_intScratch32e;spr_intScratch32e=pos;chck_accs_p0(bins,spr_intScratch32e,816)
          int spr_intScratch330;spr_intScratch330=pos;chck_accs_p0(bins,spr_intScratch330,818)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch32e].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch330].key,key)==0)){
             int spr_intScratch332;spr_intScratch332=pos;chck_accs_p0(bins,spr_intScratch332,820)
      SPRSmartPtr<SPHT_Entry_int_int> entry;entry=bins._theObject->_array[spr_intScratch332].next;
      if(entry==0U){
                int spr_intScratch334;spr_intScratch334=pos;chck_accs_p0(bins,spr_intScratch334,822)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch334].next=::new SPHT_Entry_int_int;
                int spr_intScratch336;spr_intScratch336=pos;chck_accs_p0(bins,spr_intScratch336,824)
         bins._theObject->_array[spr_intScratch336].next._theObject->is_used=1;
                int spr_intScratch338;spr_intScratch338=pos;chck_accs_p0(bins,spr_intScratch338,826)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch338].next._theObject->key,key);
                int spr_intScratch33a;spr_intScratch33a=pos;chck_accs_p0(bins,spr_intScratch33a,828)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch33a].next._theObject->value,value);
         
      }
      else
      {
      int inserted;inserted=0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while((inserted==0)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0)){
            if(entry._theObject->next==0U){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               entry._theObject->next=::new SPHT_Entry_int_int;
               entry._theObject->next._theObject->is_used=1;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               ak.assign(stackStartPtr,entry._theObject->next._theObject->key,key);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,entry._theObject->next._theObject->value,value);
               inserted=1;
               
            }
            else
            {
            entry=entry._theObject->next;
               }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         if(inserted==0){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,entry._theObject->key,key);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,entry._theObject->value,value);
            
         }
         }
      
   }
   else
   {
          int spr_intScratch33c;spr_intScratch33c=pos;chck_accs_p0(bins,spr_intScratch33c,830)
      bins._theObject->_array[spr_intScratch33c].is_used=1;
             int spr_intScratch33e;spr_intScratch33e=pos;chck_accs_p0(bins,spr_intScratch33e,832)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch33e].key,key);
             int spr_intScratch340;spr_intScratch340=pos;chck_accs_p0(bins,spr_intScratch340,834)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch340].value,value);
      }
   
   
} //End Of Method

int SPHT_int_int::search(char* stackStartPtr,int& key,int& value){
   char SPR_stack_dummy_var;
   Hash_int hac;
   Compare_int coac;
   Assigner_int ak;
   Assigner_int av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch342;spr_intScratch342=pos;chck_accs_p0(_elements,spr_intScratch342,836)
   if(_elements._theObject->_array[spr_intScratch342].is_used==1){
             int spr_intScratch344;spr_intScratch344=pos;chck_accs_p0(_elements,spr_intScratch344,838)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch344].key)==1){
                int spr_intScratch346;spr_intScratch346=pos;chck_accs_p0(_elements,spr_intScratch346,840)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch346].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch348;spr_intScratch348=pos;chck_accs_p0(_elements,spr_intScratch348,842)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch348].next;
         while(entry!=0U){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(coac.compare(stackStartPtr,entry._theObject->key,key)==1){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,value,entry._theObject->value);
               return 1;
               
            }
            entry=entry._theObject->next;
            
         };
         return 0;
         }
      
   }
   return 0;
   
   
} //End Of Method

void SPHT_int_int::insert(char* stackStartPtr,int& key,int& value){
   char SPR_stack_dummy_var;
   if(numberOfEntries<200000000){
      int nep1;nep1=numberOfEntries+1;
      int limit;limit=((_elements._theObject->_sz*7)/10);
      if(nep1>limit){
         int newCap;newCap=(_elements._theObject->_sz+1)*2;
         int spr_intScratch34a;
         spr_intScratch34a=newCap;
         if(spr_intScratch34a<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > newElements;newElements=new(spr_intScratch34a) SPRArray<SPHT_Entry_int_int>(spr_intScratch34a)
         ;
         int key2;
         int value2;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->resetIterator(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while(this->nextElem(stackStartPtr,key2,value2)){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,newElements,key2,value2);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         _elements=newElements;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->insertInternally(stackStartPtr,_elements,key,value);
      numberOfEntries++;
      
   }
   
   
} //End Of Method

void SPHT_int_int::del(char* stackStartPtr,int& key){
   char SPR_stack_dummy_var;
   Hash_int hac;
   Compare_int coac;
   Assigner_int ak;
   Assigner_int av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch34b;spr_intScratch34b=pos;chck_accs_p0(_elements,spr_intScratch34b,845)
   if(_elements._theObject->_array[spr_intScratch34b].is_used==1){
             int spr_intScratch34d;spr_intScratch34d=pos;chck_accs_p0(_elements,spr_intScratch34d,847)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch34d].key,key)==0){
                int spr_intScratch34f;spr_intScratch34f=pos;chck_accs_p0(_elements,spr_intScratch34f,849)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch34f].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch351;spr_intScratch351=pos;chck_accs_p0(_elements,spr_intScratch351,851)
            _elements._theObject->_array[spr_intScratch351].next=entry._theObject->next;
            numberOfEntries=numberOfEntries-1;
            
         }
         else
         {
         SPRSmartPtr<SPHT_Entry_int_int> previousEntry;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               previousEntry=entry;
               entry=entry._theObject->next;
               
            }
            while((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0));
            if(entry!=0U){
               previousEntry._theObject->next=entry._theObject->next;
               numberOfEntries=numberOfEntries-1;
               
            }
            }
         
      }
      else
      {
             int spr_intScratch353;spr_intScratch353=pos;chck_accs_p0(_elements,spr_intScratch353,853)
         if(_elements._theObject->_array[spr_intScratch353].next!=0U){
                   int spr_intScratch355;spr_intScratch355=pos;chck_accs_p0(_elements,spr_intScratch355,855)
            SPRSmartPtr<SPHT_Entry_int_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch355].next;
                   int spr_intScratch357;spr_intScratch357=pos;chck_accs_p0(_elements,spr_intScratch357,857)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch357].key,entryNext._theObject->key);
                   int spr_intScratch359;spr_intScratch359=pos;chck_accs_p0(_elements,spr_intScratch359,859)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch359].value,entryNext._theObject->value);
                   int spr_intScratch35b;spr_intScratch35b=pos;chck_accs_p0(_elements,spr_intScratch35b,861)
            _elements._theObject->_array[spr_intScratch35b].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch35d;spr_intScratch35d=pos;chck_accs_p0(_elements,spr_intScratch35d,863)
            _elements._theObject->_array[spr_intScratch35d].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

SPHT_Entry_String_16_int::SPHT_Entry_String_16_int(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   is_used=0;
   
   
} //End Of Method

SPHT_String_16_int::SPHT_String_16_int(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   
   
} //End Of Method

void SPHT_String_16_int::resetIterator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   iterator_pos=0;
   iterator_next=0U;
   
   
} //End Of Method

void SPHT_String_16_int::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   numberOfEntries=0;
   int spr_intScratch35f;
   spr_intScratch35f=3;
   if(spr_intScratch35f<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch35f) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch35f)
   ;
   
   
} //End Of Method

int SPHT_String_16_int::nextElem(char* stackStartPtr,String_16& key,int& value){
   char SPR_stack_dummy_var;
   Assigner_String_16 ak;
   Assigner_int av;
   if(iterator_next!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,iterator_next._theObject->key);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,iterator_next._theObject->value);
      iterator_next=iterator_next._theObject->next;
      
   }
   else
   {
   int found;found=0;
      while((iterator_pos<_elements._theObject->_sz)&&(found==0)){
                int spr_intScratch360;spr_intScratch360=iterator_pos;chck_accs_p0(_elements,spr_intScratch360,866)
         if(_elements._theObject->_array[spr_intScratch360].is_used==0){
            iterator_pos++;
            
         }
         else
         {
         found=1;
            }
         
      };
      if(iterator_pos==_elements._theObject->_sz){
         return 0;
         
      }
             int spr_intScratch362;spr_intScratch362=iterator_pos;chck_accs_p0(_elements,spr_intScratch362,868)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch362].key);
             int spr_intScratch364;spr_intScratch364=iterator_pos;chck_accs_p0(_elements,spr_intScratch364,870)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch364].value);
             int spr_intScratch366;spr_intScratch366=iterator_pos;chck_accs_p0(_elements,spr_intScratch366,872)
      iterator_next=_elements._theObject->_array[spr_intScratch366].next;
      iterator_pos++;
      }
   return 1;
   
   
} //End Of Method

int SPHT_String_16_int::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return numberOfEntries;
   
   
} //End Of Method

void SPHT_String_16_int::insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > bins,String_16& key,int& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_int av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%bins._theObject->_sz;
          int spr_intScratch368;spr_intScratch368=pos;chck_accs_p0(bins,spr_intScratch368,874)
          int spr_intScratch36a;spr_intScratch36a=pos;chck_accs_p0(bins,spr_intScratch36a,876)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch368].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch36a].key,key)==0)){
             int spr_intScratch36c;spr_intScratch36c=pos;chck_accs_p0(bins,spr_intScratch36c,878)
      SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=bins._theObject->_array[spr_intScratch36c].next;
      if(entry==0U){
                int spr_intScratch36e;spr_intScratch36e=pos;chck_accs_p0(bins,spr_intScratch36e,880)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch36e].next=::new SPHT_Entry_String_16_int;
                int spr_intScratch370;spr_intScratch370=pos;chck_accs_p0(bins,spr_intScratch370,882)
         bins._theObject->_array[spr_intScratch370].next._theObject->is_used=1;
                int spr_intScratch372;spr_intScratch372=pos;chck_accs_p0(bins,spr_intScratch372,884)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch372].next._theObject->key,key);
                int spr_intScratch374;spr_intScratch374=pos;chck_accs_p0(bins,spr_intScratch374,886)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch374].next._theObject->value,value);
         
      }
      else
      {
      int inserted;inserted=0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while((inserted==0)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0)){
            if(entry._theObject->next==0U){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               entry._theObject->next=::new SPHT_Entry_String_16_int;
               entry._theObject->next._theObject->is_used=1;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               ak.assign(stackStartPtr,entry._theObject->next._theObject->key,key);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,entry._theObject->next._theObject->value,value);
               inserted=1;
               
            }
            else
            {
            entry=entry._theObject->next;
               }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         if(inserted==0){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,entry._theObject->key,key);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,entry._theObject->value,value);
            
         }
         }
      
   }
   else
   {
          int spr_intScratch376;spr_intScratch376=pos;chck_accs_p0(bins,spr_intScratch376,888)
      bins._theObject->_array[spr_intScratch376].is_used=1;
             int spr_intScratch378;spr_intScratch378=pos;chck_accs_p0(bins,spr_intScratch378,890)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch378].key,key);
             int spr_intScratch37a;spr_intScratch37a=pos;chck_accs_p0(bins,spr_intScratch37a,892)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch37a].value,value);
      }
   
   
} //End Of Method

int SPHT_String_16_int::search(char* stackStartPtr,String_16& key,int& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_int av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch37c;spr_intScratch37c=pos;chck_accs_p0(_elements,spr_intScratch37c,894)
   if(_elements._theObject->_array[spr_intScratch37c].is_used==1){
             int spr_intScratch37e;spr_intScratch37e=pos;chck_accs_p0(_elements,spr_intScratch37e,896)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch37e].key)==1){
                int spr_intScratch380;spr_intScratch380=pos;chck_accs_p0(_elements,spr_intScratch380,898)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch380].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch382;spr_intScratch382=pos;chck_accs_p0(_elements,spr_intScratch382,900)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch382].next;
         while(entry!=0U){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(coac.compare(stackStartPtr,entry._theObject->key,key)==1){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,value,entry._theObject->value);
               return 1;
               
            }
            entry=entry._theObject->next;
            
         };
         return 0;
         }
      
   }
   return 0;
   
   
} //End Of Method

void SPHT_String_16_int::insert(char* stackStartPtr,String_16& key,int& value){
   char SPR_stack_dummy_var;
   if(numberOfEntries<200000000){
      int nep1;nep1=numberOfEntries+1;
      int limit;limit=((_elements._theObject->_sz*7)/10);
      if(nep1>limit){
         int newCap;newCap=(_elements._theObject->_sz+1)*2;
         int spr_intScratch384;
         spr_intScratch384=newCap;
         if(spr_intScratch384<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > newElements;newElements=new(spr_intScratch384) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch384)
         ;
         String_16 key2;
         int value2;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->resetIterator(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while(this->nextElem(stackStartPtr,key2,value2)){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,newElements,key2,value2);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         _elements=newElements;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->insertInternally(stackStartPtr,_elements,key,value);
      numberOfEntries++;
      
   }
   
   
} //End Of Method

void SPHT_String_16_int::del(char* stackStartPtr,String_16& key){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_int av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch385;spr_intScratch385=pos;chck_accs_p0(_elements,spr_intScratch385,903)
   if(_elements._theObject->_array[spr_intScratch385].is_used==1){
             int spr_intScratch387;spr_intScratch387=pos;chck_accs_p0(_elements,spr_intScratch387,905)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch387].key,key)==0){
                int spr_intScratch389;spr_intScratch389=pos;chck_accs_p0(_elements,spr_intScratch389,907)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch389].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch38b;spr_intScratch38b=pos;chck_accs_p0(_elements,spr_intScratch38b,909)
            _elements._theObject->_array[spr_intScratch38b].next=entry._theObject->next;
            numberOfEntries=numberOfEntries-1;
            
         }
         else
         {
         SPRSmartPtr<SPHT_Entry_String_16_int> previousEntry;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               previousEntry=entry;
               entry=entry._theObject->next;
               
            }
            while((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0));
            if(entry!=0U){
               previousEntry._theObject->next=entry._theObject->next;
               numberOfEntries=numberOfEntries-1;
               
            }
            }
         
      }
      else
      {
             int spr_intScratch38d;spr_intScratch38d=pos;chck_accs_p0(_elements,spr_intScratch38d,911)
         if(_elements._theObject->_array[spr_intScratch38d].next!=0U){
                   int spr_intScratch38f;spr_intScratch38f=pos;chck_accs_p0(_elements,spr_intScratch38f,913)
            SPRSmartPtr<SPHT_Entry_String_16_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch38f].next;
                   int spr_intScratch391;spr_intScratch391=pos;chck_accs_p0(_elements,spr_intScratch391,915)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch391].key,entryNext._theObject->key);
                   int spr_intScratch393;spr_intScratch393=pos;chck_accs_p0(_elements,spr_intScratch393,917)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch393].value,entryNext._theObject->value);
                   int spr_intScratch395;spr_intScratch395=pos;chck_accs_p0(_elements,spr_intScratch395,919)
            _elements._theObject->_array[spr_intScratch395].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch397;spr_intScratch397=pos;chck_accs_p0(_elements,spr_intScratch397,921)
            _elements._theObject->_array[spr_intScratch397].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

SPHT_Entry_int_String_16::SPHT_Entry_int_String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   is_used=0;
   
   
} //End Of Method

SPHT_int_String_16::SPHT_int_String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   
   
} //End Of Method

void SPHT_int_String_16::resetIterator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   iterator_pos=0;
   iterator_next=0U;
   
   
} //End Of Method

void SPHT_int_String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   numberOfEntries=0;
   int spr_intScratch399;
   spr_intScratch399=3;
   if(spr_intScratch399<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch399) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch399)
   ;
   
   
} //End Of Method

int SPHT_int_String_16::nextElem(char* stackStartPtr,int& key,String_16& value){
   char SPR_stack_dummy_var;
   Assigner_int ak;
   Assigner_String_16 av;
   if(iterator_next!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,iterator_next._theObject->key);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,iterator_next._theObject->value);
      iterator_next=iterator_next._theObject->next;
      
   }
   else
   {
   int found;found=0;
      while((iterator_pos<_elements._theObject->_sz)&&(found==0)){
                int spr_intScratch39a;spr_intScratch39a=iterator_pos;chck_accs_p0(_elements,spr_intScratch39a,924)
         if(_elements._theObject->_array[spr_intScratch39a].is_used==0){
            iterator_pos++;
            
         }
         else
         {
         found=1;
            }
         
      };
      if(iterator_pos==_elements._theObject->_sz){
         return 0;
         
      }
             int spr_intScratch39c;spr_intScratch39c=iterator_pos;chck_accs_p0(_elements,spr_intScratch39c,926)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch39c].key);
             int spr_intScratch39e;spr_intScratch39e=iterator_pos;chck_accs_p0(_elements,spr_intScratch39e,928)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch39e].value);
             int spr_intScratch3a0;spr_intScratch3a0=iterator_pos;chck_accs_p0(_elements,spr_intScratch3a0,930)
      iterator_next=_elements._theObject->_array[spr_intScratch3a0].next;
      iterator_pos++;
      }
   return 1;
   
   
} //End Of Method

int SPHT_int_String_16::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return numberOfEntries;
   
   
} //End Of Method

void SPHT_int_String_16::insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > bins,int& key,String_16& value){
   char SPR_stack_dummy_var;
   Hash_int hac;
   Compare_int coac;
   Assigner_int ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%bins._theObject->_sz;
          int spr_intScratch3a2;spr_intScratch3a2=pos;chck_accs_p0(bins,spr_intScratch3a2,932)
          int spr_intScratch3a4;spr_intScratch3a4=pos;chck_accs_p0(bins,spr_intScratch3a4,934)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch3a2].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch3a4].key,key)==0)){
             int spr_intScratch3a6;spr_intScratch3a6=pos;chck_accs_p0(bins,spr_intScratch3a6,936)
      SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=bins._theObject->_array[spr_intScratch3a6].next;
      if(entry==0U){
                int spr_intScratch3a8;spr_intScratch3a8=pos;chck_accs_p0(bins,spr_intScratch3a8,938)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch3a8].next=::new SPHT_Entry_int_String_16;
                int spr_intScratch3aa;spr_intScratch3aa=pos;chck_accs_p0(bins,spr_intScratch3aa,940)
         bins._theObject->_array[spr_intScratch3aa].next._theObject->is_used=1;
                int spr_intScratch3ac;spr_intScratch3ac=pos;chck_accs_p0(bins,spr_intScratch3ac,942)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3ac].next._theObject->key,key);
                int spr_intScratch3ae;spr_intScratch3ae=pos;chck_accs_p0(bins,spr_intScratch3ae,944)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3ae].next._theObject->value,value);
         
      }
      else
      {
      int inserted;inserted=0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while((inserted==0)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0)){
            if(entry._theObject->next==0U){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               entry._theObject->next=::new SPHT_Entry_int_String_16;
               entry._theObject->next._theObject->is_used=1;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               ak.assign(stackStartPtr,entry._theObject->next._theObject->key,key);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,entry._theObject->next._theObject->value,value);
               inserted=1;
               
            }
            else
            {
            entry=entry._theObject->next;
               }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         if(inserted==0){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,entry._theObject->key,key);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,entry._theObject->value,value);
            
         }
         }
      
   }
   else
   {
          int spr_intScratch3b0;spr_intScratch3b0=pos;chck_accs_p0(bins,spr_intScratch3b0,946)
      bins._theObject->_array[spr_intScratch3b0].is_used=1;
             int spr_intScratch3b2;spr_intScratch3b2=pos;chck_accs_p0(bins,spr_intScratch3b2,948)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3b2].key,key);
             int spr_intScratch3b4;spr_intScratch3b4=pos;chck_accs_p0(bins,spr_intScratch3b4,950)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3b4].value,value);
      }
   
   
} //End Of Method

int SPHT_int_String_16::search(char* stackStartPtr,int& key,String_16& value){
   char SPR_stack_dummy_var;
   Hash_int hac;
   Compare_int coac;
   Assigner_int ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch3b6;spr_intScratch3b6=pos;chck_accs_p0(_elements,spr_intScratch3b6,952)
   if(_elements._theObject->_array[spr_intScratch3b6].is_used==1){
             int spr_intScratch3b8;spr_intScratch3b8=pos;chck_accs_p0(_elements,spr_intScratch3b8,954)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3b8].key)==1){
                int spr_intScratch3ba;spr_intScratch3ba=pos;chck_accs_p0(_elements,spr_intScratch3ba,956)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3ba].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3bc;spr_intScratch3bc=pos;chck_accs_p0(_elements,spr_intScratch3bc,958)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch3bc].next;
         while(entry!=0U){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(coac.compare(stackStartPtr,entry._theObject->key,key)==1){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,value,entry._theObject->value);
               return 1;
               
            }
            entry=entry._theObject->next;
            
         };
         return 0;
         }
      
   }
   return 0;
   
   
} //End Of Method

void SPHT_int_String_16::insert(char* stackStartPtr,int& key,String_16& value){
   char SPR_stack_dummy_var;
   if(numberOfEntries<200000000){
      int nep1;nep1=numberOfEntries+1;
      int limit;limit=((_elements._theObject->_sz*7)/10);
      if(nep1>limit){
         int newCap;newCap=(_elements._theObject->_sz+1)*2;
         int spr_intScratch3be;
         spr_intScratch3be=newCap;
         if(spr_intScratch3be<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > newElements;newElements=new(spr_intScratch3be) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch3be)
         ;
         int key2;
         String_16 value2;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->resetIterator(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while(this->nextElem(stackStartPtr,key2,value2)){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,newElements,key2,value2);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         _elements=newElements;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->insertInternally(stackStartPtr,_elements,key,value);
      numberOfEntries++;
      
   }
   
   
} //End Of Method

void SPHT_int_String_16::del(char* stackStartPtr,int& key){
   char SPR_stack_dummy_var;
   Hash_int hac;
   Compare_int coac;
   Assigner_int ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch3bf;spr_intScratch3bf=pos;chck_accs_p0(_elements,spr_intScratch3bf,961)
   if(_elements._theObject->_array[spr_intScratch3bf].is_used==1){
             int spr_intScratch3c1;spr_intScratch3c1=pos;chck_accs_p0(_elements,spr_intScratch3c1,963)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3c1].key,key)==0){
                int spr_intScratch3c3;spr_intScratch3c3=pos;chck_accs_p0(_elements,spr_intScratch3c3,965)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch3c3].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3c5;spr_intScratch3c5=pos;chck_accs_p0(_elements,spr_intScratch3c5,967)
            _elements._theObject->_array[spr_intScratch3c5].next=entry._theObject->next;
            numberOfEntries=numberOfEntries-1;
            
         }
         else
         {
         SPRSmartPtr<SPHT_Entry_int_String_16> previousEntry;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               previousEntry=entry;
               entry=entry._theObject->next;
               
            }
            while((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0));
            if(entry!=0U){
               previousEntry._theObject->next=entry._theObject->next;
               numberOfEntries=numberOfEntries-1;
               
            }
            }
         
      }
      else
      {
             int spr_intScratch3c7;spr_intScratch3c7=pos;chck_accs_p0(_elements,spr_intScratch3c7,969)
         if(_elements._theObject->_array[spr_intScratch3c7].next!=0U){
                   int spr_intScratch3c9;spr_intScratch3c9=pos;chck_accs_p0(_elements,spr_intScratch3c9,971)
            SPRSmartPtr<SPHT_Entry_int_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3c9].next;
                   int spr_intScratch3cb;spr_intScratch3cb=pos;chck_accs_p0(_elements,spr_intScratch3cb,973)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3cb].key,entryNext._theObject->key);
                   int spr_intScratch3cd;spr_intScratch3cd=pos;chck_accs_p0(_elements,spr_intScratch3cd,975)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3cd].value,entryNext._theObject->value);
                   int spr_intScratch3cf;spr_intScratch3cf=pos;chck_accs_p0(_elements,spr_intScratch3cf,977)
            _elements._theObject->_array[spr_intScratch3cf].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch3d1;spr_intScratch3d1=pos;chck_accs_p0(_elements,spr_intScratch3d1,979)
            _elements._theObject->_array[spr_intScratch3d1].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

SPHT_Entry_String_16_double::SPHT_Entry_String_16_double(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   is_used=0;
   
   
} //End Of Method

SPHT_String_16_double::SPHT_String_16_double(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   
   
} //End Of Method

void SPHT_String_16_double::resetIterator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   iterator_pos=0;
   iterator_next=0U;
   
   
} //End Of Method

void SPHT_String_16_double::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   numberOfEntries=0;
   int spr_intScratch3d3;
   spr_intScratch3d3=3;
   if(spr_intScratch3d3<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch3d3) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch3d3)
   ;
   
   
} //End Of Method

int SPHT_String_16_double::nextElem(char* stackStartPtr,String_16& key,double& value){
   char SPR_stack_dummy_var;
   Assigner_String_16 ak;
   Assigner_double av;
   if(iterator_next!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,iterator_next._theObject->key);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,iterator_next._theObject->value);
      iterator_next=iterator_next._theObject->next;
      
   }
   else
   {
   int found;found=0;
      while((iterator_pos<_elements._theObject->_sz)&&(found==0)){
                int spr_intScratch3d4;spr_intScratch3d4=iterator_pos;chck_accs_p0(_elements,spr_intScratch3d4,982)
         if(_elements._theObject->_array[spr_intScratch3d4].is_used==0){
            iterator_pos++;
            
         }
         else
         {
         found=1;
            }
         
      };
      if(iterator_pos==_elements._theObject->_sz){
         return 0;
         
      }
             int spr_intScratch3d6;spr_intScratch3d6=iterator_pos;chck_accs_p0(_elements,spr_intScratch3d6,984)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3d6].key);
             int spr_intScratch3d8;spr_intScratch3d8=iterator_pos;chck_accs_p0(_elements,spr_intScratch3d8,986)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3d8].value);
             int spr_intScratch3da;spr_intScratch3da=iterator_pos;chck_accs_p0(_elements,spr_intScratch3da,988)
      iterator_next=_elements._theObject->_array[spr_intScratch3da].next;
      iterator_pos++;
      }
   return 1;
   
   
} //End Of Method

int SPHT_String_16_double::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return numberOfEntries;
   
   
} //End Of Method

void SPHT_String_16_double::insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > bins,String_16& key,double& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_double av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%bins._theObject->_sz;
          int spr_intScratch3dc;spr_intScratch3dc=pos;chck_accs_p0(bins,spr_intScratch3dc,990)
          int spr_intScratch3de;spr_intScratch3de=pos;chck_accs_p0(bins,spr_intScratch3de,992)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch3dc].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch3de].key,key)==0)){
             int spr_intScratch3e0;spr_intScratch3e0=pos;chck_accs_p0(bins,spr_intScratch3e0,994)
      SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=bins._theObject->_array[spr_intScratch3e0].next;
      if(entry==0U){
                int spr_intScratch3e2;spr_intScratch3e2=pos;chck_accs_p0(bins,spr_intScratch3e2,996)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch3e2].next=::new SPHT_Entry_String_16_double;
                int spr_intScratch3e4;spr_intScratch3e4=pos;chck_accs_p0(bins,spr_intScratch3e4,998)
         bins._theObject->_array[spr_intScratch3e4].next._theObject->is_used=1;
                int spr_intScratch3e6;spr_intScratch3e6=pos;chck_accs_p0(bins,spr_intScratch3e6,1000)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3e6].next._theObject->key,key);
                int spr_intScratch3e8;spr_intScratch3e8=pos;chck_accs_p0(bins,spr_intScratch3e8,1002)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3e8].next._theObject->value,value);
         
      }
      else
      {
      int inserted;inserted=0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while((inserted==0)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0)){
            if(entry._theObject->next==0U){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               entry._theObject->next=::new SPHT_Entry_String_16_double;
               entry._theObject->next._theObject->is_used=1;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               ak.assign(stackStartPtr,entry._theObject->next._theObject->key,key);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,entry._theObject->next._theObject->value,value);
               inserted=1;
               
            }
            else
            {
            entry=entry._theObject->next;
               }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         if(inserted==0){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,entry._theObject->key,key);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,entry._theObject->value,value);
            
         }
         }
      
   }
   else
   {
          int spr_intScratch3ea;spr_intScratch3ea=pos;chck_accs_p0(bins,spr_intScratch3ea,1004)
      bins._theObject->_array[spr_intScratch3ea].is_used=1;
             int spr_intScratch3ec;spr_intScratch3ec=pos;chck_accs_p0(bins,spr_intScratch3ec,1006)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3ec].key,key);
             int spr_intScratch3ee;spr_intScratch3ee=pos;chck_accs_p0(bins,spr_intScratch3ee,1008)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3ee].value,value);
      }
   
   
} //End Of Method

int SPHT_String_16_double::search(char* stackStartPtr,String_16& key,double& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_double av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch3f0;spr_intScratch3f0=pos;chck_accs_p0(_elements,spr_intScratch3f0,1010)
   if(_elements._theObject->_array[spr_intScratch3f0].is_used==1){
             int spr_intScratch3f2;spr_intScratch3f2=pos;chck_accs_p0(_elements,spr_intScratch3f2,1012)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3f2].key)==1){
                int spr_intScratch3f4;spr_intScratch3f4=pos;chck_accs_p0(_elements,spr_intScratch3f4,1014)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3f4].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3f6;spr_intScratch3f6=pos;chck_accs_p0(_elements,spr_intScratch3f6,1016)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch3f6].next;
         while(entry!=0U){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(coac.compare(stackStartPtr,entry._theObject->key,key)==1){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,value,entry._theObject->value);
               return 1;
               
            }
            entry=entry._theObject->next;
            
         };
         return 0;
         }
      
   }
   return 0;
   
   
} //End Of Method

void SPHT_String_16_double::insert(char* stackStartPtr,String_16& key,double& value){
   char SPR_stack_dummy_var;
   if(numberOfEntries<200000000){
      int nep1;nep1=numberOfEntries+1;
      int limit;limit=((_elements._theObject->_sz*7)/10);
      if(nep1>limit){
         int newCap;newCap=(_elements._theObject->_sz+1)*2;
         int spr_intScratch3f8;
         spr_intScratch3f8=newCap;
         if(spr_intScratch3f8<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > newElements;newElements=new(spr_intScratch3f8) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch3f8)
         ;
         String_16 key2;
         double value2;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->resetIterator(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while(this->nextElem(stackStartPtr,key2,value2)){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,newElements,key2,value2);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         _elements=newElements;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->insertInternally(stackStartPtr,_elements,key,value);
      numberOfEntries++;
      
   }
   
   
} //End Of Method

void SPHT_String_16_double::del(char* stackStartPtr,String_16& key){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_double av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch3f9;spr_intScratch3f9=pos;chck_accs_p0(_elements,spr_intScratch3f9,1019)
   if(_elements._theObject->_array[spr_intScratch3f9].is_used==1){
             int spr_intScratch3fb;spr_intScratch3fb=pos;chck_accs_p0(_elements,spr_intScratch3fb,1021)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3fb].key,key)==0){
                int spr_intScratch3fd;spr_intScratch3fd=pos;chck_accs_p0(_elements,spr_intScratch3fd,1023)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch3fd].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3ff;spr_intScratch3ff=pos;chck_accs_p0(_elements,spr_intScratch3ff,1025)
            _elements._theObject->_array[spr_intScratch3ff].next=entry._theObject->next;
            numberOfEntries=numberOfEntries-1;
            
         }
         else
         {
         SPRSmartPtr<SPHT_Entry_String_16_double> previousEntry;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               previousEntry=entry;
               entry=entry._theObject->next;
               
            }
            while((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0));
            if(entry!=0U){
               previousEntry._theObject->next=entry._theObject->next;
               numberOfEntries=numberOfEntries-1;
               
            }
            }
         
      }
      else
      {
             int spr_intScratch401;spr_intScratch401=pos;chck_accs_p0(_elements,spr_intScratch401,1027)
         if(_elements._theObject->_array[spr_intScratch401].next!=0U){
                   int spr_intScratch403;spr_intScratch403=pos;chck_accs_p0(_elements,spr_intScratch403,1029)
            SPRSmartPtr<SPHT_Entry_String_16_double> entryNext;entryNext=_elements._theObject->_array[spr_intScratch403].next;
                   int spr_intScratch405;spr_intScratch405=pos;chck_accs_p0(_elements,spr_intScratch405,1031)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch405].key,entryNext._theObject->key);
                   int spr_intScratch407;spr_intScratch407=pos;chck_accs_p0(_elements,spr_intScratch407,1033)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch407].value,entryNext._theObject->value);
                   int spr_intScratch409;spr_intScratch409=pos;chck_accs_p0(_elements,spr_intScratch409,1035)
            _elements._theObject->_array[spr_intScratch409].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch40b;spr_intScratch40b=pos;chck_accs_p0(_elements,spr_intScratch40b,1037)
            _elements._theObject->_array[spr_intScratch40b].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

