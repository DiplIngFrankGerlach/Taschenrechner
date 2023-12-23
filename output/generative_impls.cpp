#include "stdafx.h"
#include "header.h"
String_16::String_16(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch1ee;spr_intScratch1ee=0;chck_accs0(_preAllocBuf,spr_intScratch1ee,496)
   _preAllocBuf._array[spr_intScratch1ee]='\0';
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
          int spr_intScratch1f0;spr_intScratch1f0=0;chck_accs0(_preAllocBuf,spr_intScratch1f0,498)
   _preAllocBuf._array[spr_intScratch1f0]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch1f2;strcpy(spr_StringScratch1f2._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch1f2);
   
   
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
          int spr_intScratch1f3;spr_intScratch1f3=0;chck_accs_p0(spalten,spr_intScratch1f3,501)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch1f3].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch1f5;spr_intScratch1f5=ausgStelle;chck_accs_p0(spalten,spr_intScratch1f5,503)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch1f5].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch1f7;spr_intScratch1f7=ausgStelle;chck_accs_p0(spalten,spr_intScratch1f7,505)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch1f7].append(stackStartPtr,z);
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
          int spr_intScratch1f9;spr_intScratch1f9=groesse;chck_accs_p0(buf,spr_intScratch1f9,507)
   while(buf._theObject->_array[spr_intScratch1f9]!='\0'){
      groesse++;
      spr_intScratch1f9=groesse;chck_accs_p0(buf,spr_intScratch1f9,507)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1fb;spr_intScratch1fb=stelle;chck_accs_p0(buf,spr_intScratch1fb,509)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch1fb]);
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
          int spr_intScratch1fd;spr_intScratch1fd=groesse;chck_accs0(str,spr_intScratch1fd,511)
   while(str._array[spr_intScratch1fd]!='\0'){
      groesse++;
      spr_intScratch1fd=groesse;chck_accs0(str,spr_intScratch1fd,511)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1ff;spr_intScratch1ff=stelle;chck_accs0(str,spr_intScratch1ff,513)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1ff]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch201;spr_intScratch201=i+pos;chck_accs0(str,spr_intScratch201,515)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch201]);
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
             int spr_intScratch203;spr_intScratch203=_length;chck_accs0(_preAllocBuf,spr_intScratch203,517)
      _preAllocBuf._array[spr_intScratch203]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch205;spr_intScratch205=_length;chck_accs_p0(_extendedBuf,spr_intScratch205,519)
      _extendedBuf._theObject->_array[spr_intScratch205]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_16::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch207;spr_intScratch207=l;chck_accs0(str,spr_intScratch207,521)
   while(str._array[spr_intScratch207]!='\0'){
      l=l+1;
      spr_intScratch207=l;chck_accs0(str,spr_intScratch207,521)
      
   };
   return l;
   
   
} //End Of Method

void String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch209;spr_intScratch209=0;chck_accs_p0(_extendedBuf,spr_intScratch209,523)
      _extendedBuf._theObject->_array[spr_intScratch209]='\0';
      
   }
          int spr_intScratch20b;spr_intScratch20b=0;chck_accs0(_preAllocBuf,spr_intScratch20b,525)
   _preAllocBuf._array[spr_intScratch20b]='\0';
   
   
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
          int spr_intScratch20d;spr_intScratch20d=0;chck_accs0(_preAllocBuf,spr_intScratch20d,527)
   _preAllocBuf._array[spr_intScratch20d]='\0';
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch20f;spr_intScratch20f=i;chck_accs0(str,spr_intScratch20f,529)
   while((i<str._sz)&&(str._array[spr_intScratch20f]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch211;spr_intScratch211=i;chck_accs0(str,spr_intScratch211,531)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch211]){
         return 0;
         
      }
      i++;
      spr_intScratch20f=i;chck_accs0(str,spr_intScratch20f,529)
      
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
                int spr_intScratch213;spr_intScratch213=_length;chck_accs_p0(_extendedBuf,spr_intScratch213,533)
         _extendedBuf._theObject->_array[spr_intScratch213]=c;
         
      }
      else
      {
             int spr_intScratch215;spr_intScratch215=_length;chck_accs0(_preAllocBuf,spr_intScratch215,535)
         _preAllocBuf._array[spr_intScratch215]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch217;spr_intScratch217=_length;chck_accs_p0(_extendedBuf,spr_intScratch217,537)
      _extendedBuf._theObject->_array[spr_intScratch217]=c;
      _length++;
      }
   
   
} //End Of Method

char String_16::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch219;spr_intScratch219=i;chck_accs_p0(_extendedBuf,spr_intScratch219,539)
      return _extendedBuf._theObject->_array[spr_intScratch219];
      
   }
   else
   {
          int spr_intScratch21b;spr_intScratch21b=i;chck_accs0(_preAllocBuf,spr_intScratch21b,541)
      return _preAllocBuf._array[spr_intScratch21b];
      }
   return '0';
   
   
} //End Of Method

void String_16::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch21d;spr_intScratch21d=stelle;chck_accs_p0(_extendedBuf,spr_intScratch21d,543)
      _extendedBuf._theObject->_array[spr_intScratch21d]=zeichen;
      
   }
   else
   {
          int spr_intScratch21f;spr_intScratch21f=stelle;chck_accs0(_preAllocBuf,spr_intScratch21f,545)
      _preAllocBuf._array[spr_intScratch21f]=zeichen;
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
          int spr_intScratch221;spr_intScratch221=lother;chck_accs0(other,spr_intScratch221,547)
   while((lother<other._sz)&&(other._array[spr_intScratch221]!='\0')){
      lother++;
      spr_intScratch221=lother;chck_accs0(other,spr_intScratch221,547)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch223;spr_intScratch223=i;chck_accs0(other,spr_intScratch223,549)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch223]){
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
          int spr_intScratch225;spr_intScratch225=0;chck_accs0(buf,spr_intScratch225,551)
   buf._array[spr_intScratch225]='\0';
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
             int spr_intScratch227;spr_intScratch227=0;chck_accs0(feld,spr_intScratch227,553)
      feld._array[spr_intScratch227]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch229;spr_intScratch229=i;chck_accs0(feld,spr_intScratch229,555)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch229]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch22b;spr_intScratch22b=i;chck_accs0(feld,spr_intScratch22b,557)
   feld._array[spr_intScratch22b]='\0';
   
   
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
          int spr_intScratch22d;spr_intScratch22d=j;chck_accs0(end,spr_intScratch22d,559)
   while((end._array[spr_intScratch22d]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch22d=j;chck_accs0(end,spr_intScratch22d,559)
      
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
             int spr_intScratch22f;spr_intScratch22f=j;chck_accs0(end,spr_intScratch22f,561)
      if(c!=end._array[spr_intScratch22f]){
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
          int spr_intScratch231;spr_intScratch231=i;chck_accs0(buf,spr_intScratch231,563)
   while((i<l)&&(buf._array[spr_intScratch231]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch233;spr_intScratch233=i;chck_accs0(buf,spr_intScratch233,565)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch233]){
         return 0;
         
      }
      i++;
      spr_intScratch231=i;chck_accs0(buf,spr_intScratch231,563)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch235;strcpy(spr_StringScratch235._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch235);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch236;strcpy(spr_StringScratch236._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch236);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch237;strcpy(spr_StringScratch237._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch237);
            
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
         int spr_intScratch238;
         spr_intScratch238=minCapacity*2;
         if(spr_intScratch238<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch238) SPRArray<char>(spr_intScratch238)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch239;spr_intScratch239=i;chck_accs_p0(_extendedBuf,spr_intScratch239,571)
                   int spr_intScratch23b;spr_intScratch23b=i;chck_accs0(_preAllocBuf,spr_intScratch23b,573)
            _extendedBuf._theObject->_array[spr_intScratch239]=_preAllocBuf._array[spr_intScratch23b];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch23d;
            spr_intScratch23d=minCapacity*2;
            if(spr_intScratch23d<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch23d) SPRArray<char>(spr_intScratch23d)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch23e;spr_intScratch23e=i;chck_accs_p0(newBuf,spr_intScratch23e,576)
                      int spr_intScratch240;spr_intScratch240=i;chck_accs_p0(_extendedBuf,spr_intScratch240,578)
               newBuf._theObject->_array[spr_intScratch23e]=_extendedBuf._theObject->_array[spr_intScratch240];
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
          int spr_intScratch242;spr_intScratch242=0;chck_accs0(_preAllocBuf,spr_intScratch242,580)
   _preAllocBuf._array[spr_intScratch242]='\0';
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
          int spr_intScratch244;spr_intScratch244=0;chck_accs0(_preAllocBuf,spr_intScratch244,582)
   _preAllocBuf._array[spr_intScratch244]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch246;strcpy(spr_StringScratch246._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch246);
   
   
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
          int spr_intScratch247;spr_intScratch247=0;chck_accs_p0(spalten,spr_intScratch247,585)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch247].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch249;spr_intScratch249=ausgStelle;chck_accs_p0(spalten,spr_intScratch249,587)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch249].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch24b;spr_intScratch24b=ausgStelle;chck_accs_p0(spalten,spr_intScratch24b,589)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch24b].append(stackStartPtr,z);
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
          int spr_intScratch24d;spr_intScratch24d=groesse;chck_accs_p0(buf,spr_intScratch24d,591)
   while(buf._theObject->_array[spr_intScratch24d]!='\0'){
      groesse++;
      spr_intScratch24d=groesse;chck_accs_p0(buf,spr_intScratch24d,591)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch24f;spr_intScratch24f=stelle;chck_accs_p0(buf,spr_intScratch24f,593)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch24f]);
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
          int spr_intScratch251;spr_intScratch251=groesse;chck_accs0(str,spr_intScratch251,595)
   while(str._array[spr_intScratch251]!='\0'){
      groesse++;
      spr_intScratch251=groesse;chck_accs0(str,spr_intScratch251,595)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch253;spr_intScratch253=stelle;chck_accs0(str,spr_intScratch253,597)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch253]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch255;spr_intScratch255=i+pos;chck_accs0(str,spr_intScratch255,599)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch255]);
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
             int spr_intScratch257;spr_intScratch257=_length;chck_accs0(_preAllocBuf,spr_intScratch257,601)
      _preAllocBuf._array[spr_intScratch257]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch259;spr_intScratch259=_length;chck_accs_p0(_extendedBuf,spr_intScratch259,603)
      _extendedBuf._theObject->_array[spr_intScratch259]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_32::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch25b;spr_intScratch25b=l;chck_accs0(str,spr_intScratch25b,605)
   while(str._array[spr_intScratch25b]!='\0'){
      l=l+1;
      spr_intScratch25b=l;chck_accs0(str,spr_intScratch25b,605)
      
   };
   return l;
   
   
} //End Of Method

void String_32::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch25d;spr_intScratch25d=0;chck_accs_p0(_extendedBuf,spr_intScratch25d,607)
      _extendedBuf._theObject->_array[spr_intScratch25d]='\0';
      
   }
          int spr_intScratch25f;spr_intScratch25f=0;chck_accs0(_preAllocBuf,spr_intScratch25f,609)
   _preAllocBuf._array[spr_intScratch25f]='\0';
   
   
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
          int spr_intScratch261;spr_intScratch261=0;chck_accs0(_preAllocBuf,spr_intScratch261,611)
   _preAllocBuf._array[spr_intScratch261]='\0';
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch263;spr_intScratch263=i;chck_accs0(str,spr_intScratch263,613)
   while((i<str._sz)&&(str._array[spr_intScratch263]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch265;spr_intScratch265=i;chck_accs0(str,spr_intScratch265,615)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch265]){
         return 0;
         
      }
      i++;
      spr_intScratch263=i;chck_accs0(str,spr_intScratch263,613)
      
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
                int spr_intScratch267;spr_intScratch267=_length;chck_accs_p0(_extendedBuf,spr_intScratch267,617)
         _extendedBuf._theObject->_array[spr_intScratch267]=c;
         
      }
      else
      {
             int spr_intScratch269;spr_intScratch269=_length;chck_accs0(_preAllocBuf,spr_intScratch269,619)
         _preAllocBuf._array[spr_intScratch269]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch26b;spr_intScratch26b=_length;chck_accs_p0(_extendedBuf,spr_intScratch26b,621)
      _extendedBuf._theObject->_array[spr_intScratch26b]=c;
      _length++;
      }
   
   
} //End Of Method

char String_32::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch26d;spr_intScratch26d=i;chck_accs_p0(_extendedBuf,spr_intScratch26d,623)
      return _extendedBuf._theObject->_array[spr_intScratch26d];
      
   }
   else
   {
          int spr_intScratch26f;spr_intScratch26f=i;chck_accs0(_preAllocBuf,spr_intScratch26f,625)
      return _preAllocBuf._array[spr_intScratch26f];
      }
   return '0';
   
   
} //End Of Method

void String_32::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch271;spr_intScratch271=stelle;chck_accs_p0(_extendedBuf,spr_intScratch271,627)
      _extendedBuf._theObject->_array[spr_intScratch271]=zeichen;
      
   }
   else
   {
          int spr_intScratch273;spr_intScratch273=stelle;chck_accs0(_preAllocBuf,spr_intScratch273,629)
      _preAllocBuf._array[spr_intScratch273]=zeichen;
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
          int spr_intScratch275;spr_intScratch275=lother;chck_accs0(other,spr_intScratch275,631)
   while((lother<other._sz)&&(other._array[spr_intScratch275]!='\0')){
      lother++;
      spr_intScratch275=lother;chck_accs0(other,spr_intScratch275,631)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch277;spr_intScratch277=i;chck_accs0(other,spr_intScratch277,633)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch277]){
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
          int spr_intScratch279;spr_intScratch279=0;chck_accs0(buf,spr_intScratch279,635)
   buf._array[spr_intScratch279]='\0';
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
             int spr_intScratch27b;spr_intScratch27b=0;chck_accs0(feld,spr_intScratch27b,637)
      feld._array[spr_intScratch27b]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch27d;spr_intScratch27d=i;chck_accs0(feld,spr_intScratch27d,639)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch27d]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch27f;spr_intScratch27f=i;chck_accs0(feld,spr_intScratch27f,641)
   feld._array[spr_intScratch27f]='\0';
   
   
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
          int spr_intScratch281;spr_intScratch281=j;chck_accs0(end,spr_intScratch281,643)
   while((end._array[spr_intScratch281]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch281=j;chck_accs0(end,spr_intScratch281,643)
      
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
             int spr_intScratch283;spr_intScratch283=j;chck_accs0(end,spr_intScratch283,645)
      if(c!=end._array[spr_intScratch283]){
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
          int spr_intScratch285;spr_intScratch285=i;chck_accs0(buf,spr_intScratch285,647)
   while((i<l)&&(buf._array[spr_intScratch285]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch287;spr_intScratch287=i;chck_accs0(buf,spr_intScratch287,649)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch287]){
         return 0;
         
      }
      i++;
      spr_intScratch285=i;chck_accs0(buf,spr_intScratch285,647)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch289;strcpy(spr_StringScratch289._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch289);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch28a;strcpy(spr_StringScratch28a._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch28a);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch28b;strcpy(spr_StringScratch28b._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch28b);
            
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
         int spr_intScratch28c;
         spr_intScratch28c=minCapacity*2;
         if(spr_intScratch28c<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch28c) SPRArray<char>(spr_intScratch28c)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch28d;spr_intScratch28d=i;chck_accs_p0(_extendedBuf,spr_intScratch28d,655)
                   int spr_intScratch28f;spr_intScratch28f=i;chck_accs0(_preAllocBuf,spr_intScratch28f,657)
            _extendedBuf._theObject->_array[spr_intScratch28d]=_preAllocBuf._array[spr_intScratch28f];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch291;
            spr_intScratch291=minCapacity*2;
            if(spr_intScratch291<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch291) SPRArray<char>(spr_intScratch291)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch292;spr_intScratch292=i;chck_accs_p0(newBuf,spr_intScratch292,660)
                      int spr_intScratch294;spr_intScratch294=i;chck_accs_p0(_extendedBuf,spr_intScratch294,662)
               newBuf._theObject->_array[spr_intScratch292]=_extendedBuf._theObject->_array[spr_intScratch294];
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
          int spr_intScratch296;spr_intScratch296=0;chck_accs0(_preAllocBuf,spr_intScratch296,664)
   _preAllocBuf._array[spr_intScratch296]='\0';
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
          int spr_intScratch298;spr_intScratch298=0;chck_accs0(_preAllocBuf,spr_intScratch298,666)
   _preAllocBuf._array[spr_intScratch298]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch29a;strcpy(spr_StringScratch29a._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch29a);
   
   
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
          int spr_intScratch29b;spr_intScratch29b=0;chck_accs_p0(spalten,spr_intScratch29b,669)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch29b].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch29d;spr_intScratch29d=ausgStelle;chck_accs_p0(spalten,spr_intScratch29d,671)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch29d].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch29f;spr_intScratch29f=ausgStelle;chck_accs_p0(spalten,spr_intScratch29f,673)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch29f].append(stackStartPtr,z);
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
          int spr_intScratch2a1;spr_intScratch2a1=groesse;chck_accs_p0(buf,spr_intScratch2a1,675)
   while(buf._theObject->_array[spr_intScratch2a1]!='\0'){
      groesse++;
      spr_intScratch2a1=groesse;chck_accs_p0(buf,spr_intScratch2a1,675)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch2a3;spr_intScratch2a3=stelle;chck_accs_p0(buf,spr_intScratch2a3,677)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch2a3]);
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
          int spr_intScratch2a5;spr_intScratch2a5=groesse;chck_accs0(str,spr_intScratch2a5,679)
   while(str._array[spr_intScratch2a5]!='\0'){
      groesse++;
      spr_intScratch2a5=groesse;chck_accs0(str,spr_intScratch2a5,679)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch2a7;spr_intScratch2a7=stelle;chck_accs0(str,spr_intScratch2a7,681)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch2a7]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch2a9;spr_intScratch2a9=i+pos;chck_accs0(str,spr_intScratch2a9,683)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch2a9]);
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
             int spr_intScratch2ab;spr_intScratch2ab=_length;chck_accs0(_preAllocBuf,spr_intScratch2ab,685)
      _preAllocBuf._array[spr_intScratch2ab]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch2ad;spr_intScratch2ad=_length;chck_accs_p0(_extendedBuf,spr_intScratch2ad,687)
      _extendedBuf._theObject->_array[spr_intScratch2ad]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_64::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch2af;spr_intScratch2af=l;chck_accs0(str,spr_intScratch2af,689)
   while(str._array[spr_intScratch2af]!='\0'){
      l=l+1;
      spr_intScratch2af=l;chck_accs0(str,spr_intScratch2af,689)
      
   };
   return l;
   
   
} //End Of Method

void String_64::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch2b1;spr_intScratch2b1=0;chck_accs_p0(_extendedBuf,spr_intScratch2b1,691)
      _extendedBuf._theObject->_array[spr_intScratch2b1]='\0';
      
   }
          int spr_intScratch2b3;spr_intScratch2b3=0;chck_accs0(_preAllocBuf,spr_intScratch2b3,693)
   _preAllocBuf._array[spr_intScratch2b3]='\0';
   
   
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
          int spr_intScratch2b5;spr_intScratch2b5=0;chck_accs0(_preAllocBuf,spr_intScratch2b5,695)
   _preAllocBuf._array[spr_intScratch2b5]='\0';
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch2b7;spr_intScratch2b7=i;chck_accs0(str,spr_intScratch2b7,697)
   while((i<str._sz)&&(str._array[spr_intScratch2b7]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2b9;spr_intScratch2b9=i;chck_accs0(str,spr_intScratch2b9,699)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch2b9]){
         return 0;
         
      }
      i++;
      spr_intScratch2b7=i;chck_accs0(str,spr_intScratch2b7,697)
      
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
                int spr_intScratch2bb;spr_intScratch2bb=_length;chck_accs_p0(_extendedBuf,spr_intScratch2bb,701)
         _extendedBuf._theObject->_array[spr_intScratch2bb]=c;
         
      }
      else
      {
             int spr_intScratch2bd;spr_intScratch2bd=_length;chck_accs0(_preAllocBuf,spr_intScratch2bd,703)
         _preAllocBuf._array[spr_intScratch2bd]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch2bf;spr_intScratch2bf=_length;chck_accs_p0(_extendedBuf,spr_intScratch2bf,705)
      _extendedBuf._theObject->_array[spr_intScratch2bf]=c;
      _length++;
      }
   
   
} //End Of Method

char String_64::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch2c1;spr_intScratch2c1=i;chck_accs_p0(_extendedBuf,spr_intScratch2c1,707)
      return _extendedBuf._theObject->_array[spr_intScratch2c1];
      
   }
   else
   {
          int spr_intScratch2c3;spr_intScratch2c3=i;chck_accs0(_preAllocBuf,spr_intScratch2c3,709)
      return _preAllocBuf._array[spr_intScratch2c3];
      }
   return '0';
   
   
} //End Of Method

void String_64::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch2c5;spr_intScratch2c5=stelle;chck_accs_p0(_extendedBuf,spr_intScratch2c5,711)
      _extendedBuf._theObject->_array[spr_intScratch2c5]=zeichen;
      
   }
   else
   {
          int spr_intScratch2c7;spr_intScratch2c7=stelle;chck_accs0(_preAllocBuf,spr_intScratch2c7,713)
      _preAllocBuf._array[spr_intScratch2c7]=zeichen;
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
          int spr_intScratch2c9;spr_intScratch2c9=lother;chck_accs0(other,spr_intScratch2c9,715)
   while((lother<other._sz)&&(other._array[spr_intScratch2c9]!='\0')){
      lother++;
      spr_intScratch2c9=lother;chck_accs0(other,spr_intScratch2c9,715)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2cb;spr_intScratch2cb=i;chck_accs0(other,spr_intScratch2cb,717)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch2cb]){
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
          int spr_intScratch2cd;spr_intScratch2cd=0;chck_accs0(buf,spr_intScratch2cd,719)
   buf._array[spr_intScratch2cd]='\0';
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
             int spr_intScratch2cf;spr_intScratch2cf=0;chck_accs0(feld,spr_intScratch2cf,721)
      feld._array[spr_intScratch2cf]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch2d1;spr_intScratch2d1=i;chck_accs0(feld,spr_intScratch2d1,723)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch2d1]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch2d3;spr_intScratch2d3=i;chck_accs0(feld,spr_intScratch2d3,725)
   feld._array[spr_intScratch2d3]='\0';
   
   
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
          int spr_intScratch2d5;spr_intScratch2d5=j;chck_accs0(end,spr_intScratch2d5,727)
   while((end._array[spr_intScratch2d5]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch2d5=j;chck_accs0(end,spr_intScratch2d5,727)
      
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
             int spr_intScratch2d7;spr_intScratch2d7=j;chck_accs0(end,spr_intScratch2d7,729)
      if(c!=end._array[spr_intScratch2d7]){
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
          int spr_intScratch2d9;spr_intScratch2d9=i;chck_accs0(buf,spr_intScratch2d9,731)
   while((i<l)&&(buf._array[spr_intScratch2d9]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2db;spr_intScratch2db=i;chck_accs0(buf,spr_intScratch2db,733)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch2db]){
         return 0;
         
      }
      i++;
      spr_intScratch2d9=i;chck_accs0(buf,spr_intScratch2d9,731)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch2dd;strcpy(spr_StringScratch2dd._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2dd);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2de;strcpy(spr_StringScratch2de._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2de);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2df;strcpy(spr_StringScratch2df._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2df);
            
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
         int spr_intScratch2e0;
         spr_intScratch2e0=minCapacity*2;
         if(spr_intScratch2e0<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch2e0) SPRArray<char>(spr_intScratch2e0)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch2e1;spr_intScratch2e1=i;chck_accs_p0(_extendedBuf,spr_intScratch2e1,739)
                   int spr_intScratch2e3;spr_intScratch2e3=i;chck_accs0(_preAllocBuf,spr_intScratch2e3,741)
            _extendedBuf._theObject->_array[spr_intScratch2e1]=_preAllocBuf._array[spr_intScratch2e3];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch2e5;
            spr_intScratch2e5=minCapacity*2;
            if(spr_intScratch2e5<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch2e5) SPRArray<char>(spr_intScratch2e5)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch2e6;spr_intScratch2e6=i;chck_accs_p0(newBuf,spr_intScratch2e6,744)
                      int spr_intScratch2e8;spr_intScratch2e8=i;chck_accs_p0(_extendedBuf,spr_intScratch2e8,746)
               newBuf._theObject->_array[spr_intScratch2e6]=_extendedBuf._theObject->_array[spr_intScratch2e8];
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
          int spr_intScratch2ea;spr_intScratch2ea=0;chck_accs0(_preAllocBuf,spr_intScratch2ea,748)
   _preAllocBuf._array[spr_intScratch2ea]='\0';
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
          int spr_intScratch2ec;spr_intScratch2ec=0;chck_accs0(_preAllocBuf,spr_intScratch2ec,750)
   _preAllocBuf._array[spr_intScratch2ec]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch2ee;strcpy(spr_StringScratch2ee._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch2ee);
   
   
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
          int spr_intScratch2ef;spr_intScratch2ef=0;chck_accs_p0(spalten,spr_intScratch2ef,753)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch2ef].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch2f1;spr_intScratch2f1=ausgStelle;chck_accs_p0(spalten,spr_intScratch2f1,755)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch2f1].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch2f3;spr_intScratch2f3=ausgStelle;chck_accs_p0(spalten,spr_intScratch2f3,757)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch2f3].append(stackStartPtr,z);
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
          int spr_intScratch2f5;spr_intScratch2f5=groesse;chck_accs_p0(buf,spr_intScratch2f5,759)
   while(buf._theObject->_array[spr_intScratch2f5]!='\0'){
      groesse++;
      spr_intScratch2f5=groesse;chck_accs_p0(buf,spr_intScratch2f5,759)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch2f7;spr_intScratch2f7=stelle;chck_accs_p0(buf,spr_intScratch2f7,761)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch2f7]);
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
          int spr_intScratch2f9;spr_intScratch2f9=groesse;chck_accs0(str,spr_intScratch2f9,763)
   while(str._array[spr_intScratch2f9]!='\0'){
      groesse++;
      spr_intScratch2f9=groesse;chck_accs0(str,spr_intScratch2f9,763)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch2fb;spr_intScratch2fb=stelle;chck_accs0(str,spr_intScratch2fb,765)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch2fb]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch2fd;spr_intScratch2fd=i+pos;chck_accs0(str,spr_intScratch2fd,767)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch2fd]);
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
             int spr_intScratch2ff;spr_intScratch2ff=_length;chck_accs0(_preAllocBuf,spr_intScratch2ff,769)
      _preAllocBuf._array[spr_intScratch2ff]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch301;spr_intScratch301=_length;chck_accs_p0(_extendedBuf,spr_intScratch301,771)
      _extendedBuf._theObject->_array[spr_intScratch301]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_128::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch303;spr_intScratch303=l;chck_accs0(str,spr_intScratch303,773)
   while(str._array[spr_intScratch303]!='\0'){
      l=l+1;
      spr_intScratch303=l;chck_accs0(str,spr_intScratch303,773)
      
   };
   return l;
   
   
} //End Of Method

void String_128::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch305;spr_intScratch305=0;chck_accs_p0(_extendedBuf,spr_intScratch305,775)
      _extendedBuf._theObject->_array[spr_intScratch305]='\0';
      
   }
          int spr_intScratch307;spr_intScratch307=0;chck_accs0(_preAllocBuf,spr_intScratch307,777)
   _preAllocBuf._array[spr_intScratch307]='\0';
   
   
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
          int spr_intScratch309;spr_intScratch309=0;chck_accs0(_preAllocBuf,spr_intScratch309,779)
   _preAllocBuf._array[spr_intScratch309]='\0';
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch30b;spr_intScratch30b=i;chck_accs0(str,spr_intScratch30b,781)
   while((i<str._sz)&&(str._array[spr_intScratch30b]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch30d;spr_intScratch30d=i;chck_accs0(str,spr_intScratch30d,783)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch30d]){
         return 0;
         
      }
      i++;
      spr_intScratch30b=i;chck_accs0(str,spr_intScratch30b,781)
      
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
                int spr_intScratch30f;spr_intScratch30f=_length;chck_accs_p0(_extendedBuf,spr_intScratch30f,785)
         _extendedBuf._theObject->_array[spr_intScratch30f]=c;
         
      }
      else
      {
             int spr_intScratch311;spr_intScratch311=_length;chck_accs0(_preAllocBuf,spr_intScratch311,787)
         _preAllocBuf._array[spr_intScratch311]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch313;spr_intScratch313=_length;chck_accs_p0(_extendedBuf,spr_intScratch313,789)
      _extendedBuf._theObject->_array[spr_intScratch313]=c;
      _length++;
      }
   
   
} //End Of Method

char String_128::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch315;spr_intScratch315=i;chck_accs_p0(_extendedBuf,spr_intScratch315,791)
      return _extendedBuf._theObject->_array[spr_intScratch315];
      
   }
   else
   {
          int spr_intScratch317;spr_intScratch317=i;chck_accs0(_preAllocBuf,spr_intScratch317,793)
      return _preAllocBuf._array[spr_intScratch317];
      }
   return '0';
   
   
} //End Of Method

void String_128::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch319;spr_intScratch319=stelle;chck_accs_p0(_extendedBuf,spr_intScratch319,795)
      _extendedBuf._theObject->_array[spr_intScratch319]=zeichen;
      
   }
   else
   {
          int spr_intScratch31b;spr_intScratch31b=stelle;chck_accs0(_preAllocBuf,spr_intScratch31b,797)
      _preAllocBuf._array[spr_intScratch31b]=zeichen;
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
          int spr_intScratch31d;spr_intScratch31d=lother;chck_accs0(other,spr_intScratch31d,799)
   while((lother<other._sz)&&(other._array[spr_intScratch31d]!='\0')){
      lother++;
      spr_intScratch31d=lother;chck_accs0(other,spr_intScratch31d,799)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch31f;spr_intScratch31f=i;chck_accs0(other,spr_intScratch31f,801)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch31f]){
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
          int spr_intScratch321;spr_intScratch321=0;chck_accs0(buf,spr_intScratch321,803)
   buf._array[spr_intScratch321]='\0';
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
             int spr_intScratch323;spr_intScratch323=0;chck_accs0(feld,spr_intScratch323,805)
      feld._array[spr_intScratch323]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch325;spr_intScratch325=i;chck_accs0(feld,spr_intScratch325,807)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch325]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch327;spr_intScratch327=i;chck_accs0(feld,spr_intScratch327,809)
   feld._array[spr_intScratch327]='\0';
   
   
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
          int spr_intScratch329;spr_intScratch329=j;chck_accs0(end,spr_intScratch329,811)
   while((end._array[spr_intScratch329]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch329=j;chck_accs0(end,spr_intScratch329,811)
      
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
             int spr_intScratch32b;spr_intScratch32b=j;chck_accs0(end,spr_intScratch32b,813)
      if(c!=end._array[spr_intScratch32b]){
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
          int spr_intScratch32d;spr_intScratch32d=i;chck_accs0(buf,spr_intScratch32d,815)
   while((i<l)&&(buf._array[spr_intScratch32d]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch32f;spr_intScratch32f=i;chck_accs0(buf,spr_intScratch32f,817)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch32f]){
         return 0;
         
      }
      i++;
      spr_intScratch32d=i;chck_accs0(buf,spr_intScratch32d,815)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch331;strcpy(spr_StringScratch331._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch331);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch332;strcpy(spr_StringScratch332._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch332);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch333;strcpy(spr_StringScratch333._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch333);
            
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
         int spr_intScratch334;
         spr_intScratch334=minCapacity*2;
         if(spr_intScratch334<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch334) SPRArray<char>(spr_intScratch334)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch335;spr_intScratch335=i;chck_accs_p0(_extendedBuf,spr_intScratch335,823)
                   int spr_intScratch337;spr_intScratch337=i;chck_accs0(_preAllocBuf,spr_intScratch337,825)
            _extendedBuf._theObject->_array[spr_intScratch335]=_preAllocBuf._array[spr_intScratch337];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch339;
            spr_intScratch339=minCapacity*2;
            if(spr_intScratch339<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch339) SPRArray<char>(spr_intScratch339)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch33a;spr_intScratch33a=i;chck_accs_p0(newBuf,spr_intScratch33a,828)
                      int spr_intScratch33c;spr_intScratch33c=i;chck_accs_p0(_extendedBuf,spr_intScratch33c,830)
               newBuf._theObject->_array[spr_intScratch33a]=_extendedBuf._theObject->_array[spr_intScratch33c];
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
   int spr_intScratch33e;
   spr_intScratch33e=initialCapacity;
   if(spr_intScratch33e<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch33e) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch33e)
   ;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   int minCap;minCap=((int)_numUsed*1.2f+2);
   if(_elements._theObject->_sz<=minCap){
      int newCap;newCap=_elements._theObject->_sz*2;
      SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > oldArray;
      oldArray=_elements;
      int spr_intScratch33f;
      spr_intScratch33f=newCap;
      if(spr_intScratch33f<0)throw "invalid size requested for heap allocation";
      _elements=new(spr_intScratch33f) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch33f)
      ;
      {//begin of SPR for statement
      int i;i=0;
      while(i<oldArray._theObject->_sz){
                int spr_intScratch340;spr_intScratch340=i;chck_accs_p0(oldArray,spr_intScratch340,834)
         if(oldArray._theObject->_array[spr_intScratch340]!=0U){
                   int spr_intScratch342;spr_intScratch342=i;chck_accs_p0(oldArray,spr_intScratch342,836)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,oldArray._theObject->_array[spr_intScratch342]);
            
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
          int spr_intScratch344;spr_intScratch344=code;chck_accs_p0(_elements,spr_intScratch344,838)
   while(_elements._theObject->_array[spr_intScratch344]!=0U){
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch344=code;chck_accs_p0(_elements,spr_intScratch344,838)
      
   };
          int spr_intScratch346;spr_intScratch346=code;chck_accs_p0(_elements,spr_intScratch346,840)
   _elements._theObject->_array[spr_intScratch346]=x;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key.getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
   int searching;searching=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
          int spr_intScratch34e;do{
             int spr_intScratch348;spr_intScratch348=code;chck_accs_p0(_elements,spr_intScratch348,842)
      if(_elements._theObject->_array[spr_intScratch348]!=0U){
         SPRSmartPtr<KeyType4> key2;
                int spr_intScratch34a;spr_intScratch34a=code;chck_accs_p0(_elements,spr_intScratch34a,844)
         _elements._theObject->_array[spr_intScratch34a]._theObject->getKey(stackStartPtr,key2);
         if(key2._theObject->compare(stackStartPtr,key)==1){
                   int spr_intScratch34c;spr_intScratch34c=code;chck_accs_p0(_elements,spr_intScratch34c,846)
            oValue=_elements._theObject->_array[spr_intScratch34c];
            searching=0;
            
         }
         
      }
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch34e=code;chck_accs_p0(_elements,spr_intScratch34e,848)
      
   }
   while((_elements._theObject->_array[spr_intScratch34e]!=0U)&&(searching==1));
   
   
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
             int spr_intScratch350;spr_intScratch350=_readPtr;chck_accs_p0(_elements,spr_intScratch350,850)
      if(_elements._theObject->_array[spr_intScratch350]==0U){
         _readPtr++;
         
      }
      else
      {
      stepping=0;
         }
      
   };
   if(_readPtr<_elements._theObject->_sz){
             int spr_intScratch352;spr_intScratch352=_readPtr;chck_accs_p0(_elements,spr_intScratch352,852)
      oValue=_elements._theObject->_array[spr_intScratch352];
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
             int spr_intScratch354;spr_intScratch354=i;chck_accs_p0(_elements,spr_intScratch354,854)
      _elements._theObject->_array[spr_intScratch354]=0U;
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
   int spr_intScratch356;
   spr_intScratch356=3;
   if(spr_intScratch356<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch356) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch356)
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
                int spr_intScratch357;spr_intScratch357=iterator_pos;chck_accs_p0(_elements,spr_intScratch357,857)
         if(_elements._theObject->_array[spr_intScratch357].is_used==0){
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
             int spr_intScratch359;spr_intScratch359=iterator_pos;chck_accs_p0(_elements,spr_intScratch359,859)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch359].key);
             int spr_intScratch35b;spr_intScratch35b=iterator_pos;chck_accs_p0(_elements,spr_intScratch35b,861)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch35b].value);
             int spr_intScratch35d;spr_intScratch35d=iterator_pos;chck_accs_p0(_elements,spr_intScratch35d,863)
      iterator_next=_elements._theObject->_array[spr_intScratch35d].next;
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
          int spr_intScratch35f;spr_intScratch35f=pos;chck_accs_p0(bins,spr_intScratch35f,865)
          int spr_intScratch361;spr_intScratch361=pos;chck_accs_p0(bins,spr_intScratch361,867)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch35f].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch361].key,key)==0)){
             int spr_intScratch363;spr_intScratch363=pos;chck_accs_p0(bins,spr_intScratch363,869)
      SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=bins._theObject->_array[spr_intScratch363].next;
      if(entry==0U){
                int spr_intScratch365;spr_intScratch365=pos;chck_accs_p0(bins,spr_intScratch365,871)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch365].next=::new SPHT_Entry_String_16_String_16;
                int spr_intScratch367;spr_intScratch367=pos;chck_accs_p0(bins,spr_intScratch367,873)
         bins._theObject->_array[spr_intScratch367].next._theObject->is_used=1;
                int spr_intScratch369;spr_intScratch369=pos;chck_accs_p0(bins,spr_intScratch369,875)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch369].next._theObject->key,key);
                int spr_intScratch36b;spr_intScratch36b=pos;chck_accs_p0(bins,spr_intScratch36b,877)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch36b].next._theObject->value,value);
         
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
          int spr_intScratch36d;spr_intScratch36d=pos;chck_accs_p0(bins,spr_intScratch36d,879)
      bins._theObject->_array[spr_intScratch36d].is_used=1;
             int spr_intScratch36f;spr_intScratch36f=pos;chck_accs_p0(bins,spr_intScratch36f,881)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch36f].key,key);
             int spr_intScratch371;spr_intScratch371=pos;chck_accs_p0(bins,spr_intScratch371,883)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch371].value,value);
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
          int spr_intScratch373;spr_intScratch373=pos;chck_accs_p0(_elements,spr_intScratch373,885)
   if(_elements._theObject->_array[spr_intScratch373].is_used==1){
             int spr_intScratch375;spr_intScratch375=pos;chck_accs_p0(_elements,spr_intScratch375,887)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch375].key)==1){
                int spr_intScratch377;spr_intScratch377=pos;chck_accs_p0(_elements,spr_intScratch377,889)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch377].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch379;spr_intScratch379=pos;chck_accs_p0(_elements,spr_intScratch379,891)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch379].next;
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
         int spr_intScratch37b;
         spr_intScratch37b=newCap;
         if(spr_intScratch37b<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > newElements;newElements=new(spr_intScratch37b) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch37b)
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
          int spr_intScratch37c;spr_intScratch37c=pos;chck_accs_p0(_elements,spr_intScratch37c,894)
   if(_elements._theObject->_array[spr_intScratch37c].is_used==1){
             int spr_intScratch37e;spr_intScratch37e=pos;chck_accs_p0(_elements,spr_intScratch37e,896)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch37e].key,key)==0){
                int spr_intScratch380;spr_intScratch380=pos;chck_accs_p0(_elements,spr_intScratch380,898)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch380].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch382;spr_intScratch382=pos;chck_accs_p0(_elements,spr_intScratch382,900)
            _elements._theObject->_array[spr_intScratch382].next=entry._theObject->next;
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
             int spr_intScratch384;spr_intScratch384=pos;chck_accs_p0(_elements,spr_intScratch384,902)
         if(_elements._theObject->_array[spr_intScratch384].next!=0U){
                   int spr_intScratch386;spr_intScratch386=pos;chck_accs_p0(_elements,spr_intScratch386,904)
            SPRSmartPtr<SPHT_Entry_String_16_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch386].next;
                   int spr_intScratch388;spr_intScratch388=pos;chck_accs_p0(_elements,spr_intScratch388,906)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch388].key,entryNext._theObject->key);
                   int spr_intScratch38a;spr_intScratch38a=pos;chck_accs_p0(_elements,spr_intScratch38a,908)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch38a].value,entryNext._theObject->value);
                   int spr_intScratch38c;spr_intScratch38c=pos;chck_accs_p0(_elements,spr_intScratch38c,910)
            _elements._theObject->_array[spr_intScratch38c].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch38e;spr_intScratch38e=pos;chck_accs_p0(_elements,spr_intScratch38e,912)
            _elements._theObject->_array[spr_intScratch38e].is_used=0;
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
   int spr_intScratch390;
   spr_intScratch390=3;
   if(spr_intScratch390<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch390) SPRArray<SPHT_Entry_int_int>(spr_intScratch390)
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
                int spr_intScratch391;spr_intScratch391=iterator_pos;chck_accs_p0(_elements,spr_intScratch391,915)
         if(_elements._theObject->_array[spr_intScratch391].is_used==0){
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
             int spr_intScratch393;spr_intScratch393=iterator_pos;chck_accs_p0(_elements,spr_intScratch393,917)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch393].key);
             int spr_intScratch395;spr_intScratch395=iterator_pos;chck_accs_p0(_elements,spr_intScratch395,919)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch395].value);
             int spr_intScratch397;spr_intScratch397=iterator_pos;chck_accs_p0(_elements,spr_intScratch397,921)
      iterator_next=_elements._theObject->_array[spr_intScratch397].next;
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
          int spr_intScratch399;spr_intScratch399=pos;chck_accs_p0(bins,spr_intScratch399,923)
          int spr_intScratch39b;spr_intScratch39b=pos;chck_accs_p0(bins,spr_intScratch39b,925)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch399].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch39b].key,key)==0)){
             int spr_intScratch39d;spr_intScratch39d=pos;chck_accs_p0(bins,spr_intScratch39d,927)
      SPRSmartPtr<SPHT_Entry_int_int> entry;entry=bins._theObject->_array[spr_intScratch39d].next;
      if(entry==0U){
                int spr_intScratch39f;spr_intScratch39f=pos;chck_accs_p0(bins,spr_intScratch39f,929)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch39f].next=::new SPHT_Entry_int_int;
                int spr_intScratch3a1;spr_intScratch3a1=pos;chck_accs_p0(bins,spr_intScratch3a1,931)
         bins._theObject->_array[spr_intScratch3a1].next._theObject->is_used=1;
                int spr_intScratch3a3;spr_intScratch3a3=pos;chck_accs_p0(bins,spr_intScratch3a3,933)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3a3].next._theObject->key,key);
                int spr_intScratch3a5;spr_intScratch3a5=pos;chck_accs_p0(bins,spr_intScratch3a5,935)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3a5].next._theObject->value,value);
         
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
          int spr_intScratch3a7;spr_intScratch3a7=pos;chck_accs_p0(bins,spr_intScratch3a7,937)
      bins._theObject->_array[spr_intScratch3a7].is_used=1;
             int spr_intScratch3a9;spr_intScratch3a9=pos;chck_accs_p0(bins,spr_intScratch3a9,939)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3a9].key,key);
             int spr_intScratch3ab;spr_intScratch3ab=pos;chck_accs_p0(bins,spr_intScratch3ab,941)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3ab].value,value);
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
          int spr_intScratch3ad;spr_intScratch3ad=pos;chck_accs_p0(_elements,spr_intScratch3ad,943)
   if(_elements._theObject->_array[spr_intScratch3ad].is_used==1){
             int spr_intScratch3af;spr_intScratch3af=pos;chck_accs_p0(_elements,spr_intScratch3af,945)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3af].key)==1){
                int spr_intScratch3b1;spr_intScratch3b1=pos;chck_accs_p0(_elements,spr_intScratch3b1,947)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3b1].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3b3;spr_intScratch3b3=pos;chck_accs_p0(_elements,spr_intScratch3b3,949)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch3b3].next;
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
         int spr_intScratch3b5;
         spr_intScratch3b5=newCap;
         if(spr_intScratch3b5<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > newElements;newElements=new(spr_intScratch3b5) SPRArray<SPHT_Entry_int_int>(spr_intScratch3b5)
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
          int spr_intScratch3b6;spr_intScratch3b6=pos;chck_accs_p0(_elements,spr_intScratch3b6,952)
   if(_elements._theObject->_array[spr_intScratch3b6].is_used==1){
             int spr_intScratch3b8;spr_intScratch3b8=pos;chck_accs_p0(_elements,spr_intScratch3b8,954)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3b8].key,key)==0){
                int spr_intScratch3ba;spr_intScratch3ba=pos;chck_accs_p0(_elements,spr_intScratch3ba,956)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch3ba].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3bc;spr_intScratch3bc=pos;chck_accs_p0(_elements,spr_intScratch3bc,958)
            _elements._theObject->_array[spr_intScratch3bc].next=entry._theObject->next;
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
             int spr_intScratch3be;spr_intScratch3be=pos;chck_accs_p0(_elements,spr_intScratch3be,960)
         if(_elements._theObject->_array[spr_intScratch3be].next!=0U){
                   int spr_intScratch3c0;spr_intScratch3c0=pos;chck_accs_p0(_elements,spr_intScratch3c0,962)
            SPRSmartPtr<SPHT_Entry_int_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3c0].next;
                   int spr_intScratch3c2;spr_intScratch3c2=pos;chck_accs_p0(_elements,spr_intScratch3c2,964)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3c2].key,entryNext._theObject->key);
                   int spr_intScratch3c4;spr_intScratch3c4=pos;chck_accs_p0(_elements,spr_intScratch3c4,966)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3c4].value,entryNext._theObject->value);
                   int spr_intScratch3c6;spr_intScratch3c6=pos;chck_accs_p0(_elements,spr_intScratch3c6,968)
            _elements._theObject->_array[spr_intScratch3c6].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch3c8;spr_intScratch3c8=pos;chck_accs_p0(_elements,spr_intScratch3c8,970)
            _elements._theObject->_array[spr_intScratch3c8].is_used=0;
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
   int spr_intScratch3ca;
   spr_intScratch3ca=3;
   if(spr_intScratch3ca<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch3ca) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch3ca)
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
                int spr_intScratch3cb;spr_intScratch3cb=iterator_pos;chck_accs_p0(_elements,spr_intScratch3cb,973)
         if(_elements._theObject->_array[spr_intScratch3cb].is_used==0){
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
             int spr_intScratch3cd;spr_intScratch3cd=iterator_pos;chck_accs_p0(_elements,spr_intScratch3cd,975)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3cd].key);
             int spr_intScratch3cf;spr_intScratch3cf=iterator_pos;chck_accs_p0(_elements,spr_intScratch3cf,977)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3cf].value);
             int spr_intScratch3d1;spr_intScratch3d1=iterator_pos;chck_accs_p0(_elements,spr_intScratch3d1,979)
      iterator_next=_elements._theObject->_array[spr_intScratch3d1].next;
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
          int spr_intScratch3d3;spr_intScratch3d3=pos;chck_accs_p0(bins,spr_intScratch3d3,981)
          int spr_intScratch3d5;spr_intScratch3d5=pos;chck_accs_p0(bins,spr_intScratch3d5,983)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch3d3].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch3d5].key,key)==0)){
             int spr_intScratch3d7;spr_intScratch3d7=pos;chck_accs_p0(bins,spr_intScratch3d7,985)
      SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=bins._theObject->_array[spr_intScratch3d7].next;
      if(entry==0U){
                int spr_intScratch3d9;spr_intScratch3d9=pos;chck_accs_p0(bins,spr_intScratch3d9,987)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch3d9].next=::new SPHT_Entry_String_16_int;
                int spr_intScratch3db;spr_intScratch3db=pos;chck_accs_p0(bins,spr_intScratch3db,989)
         bins._theObject->_array[spr_intScratch3db].next._theObject->is_used=1;
                int spr_intScratch3dd;spr_intScratch3dd=pos;chck_accs_p0(bins,spr_intScratch3dd,991)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3dd].next._theObject->key,key);
                int spr_intScratch3df;spr_intScratch3df=pos;chck_accs_p0(bins,spr_intScratch3df,993)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3df].next._theObject->value,value);
         
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
          int spr_intScratch3e1;spr_intScratch3e1=pos;chck_accs_p0(bins,spr_intScratch3e1,995)
      bins._theObject->_array[spr_intScratch3e1].is_used=1;
             int spr_intScratch3e3;spr_intScratch3e3=pos;chck_accs_p0(bins,spr_intScratch3e3,997)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3e3].key,key);
             int spr_intScratch3e5;spr_intScratch3e5=pos;chck_accs_p0(bins,spr_intScratch3e5,999)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3e5].value,value);
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
          int spr_intScratch3e7;spr_intScratch3e7=pos;chck_accs_p0(_elements,spr_intScratch3e7,1001)
   if(_elements._theObject->_array[spr_intScratch3e7].is_used==1){
             int spr_intScratch3e9;spr_intScratch3e9=pos;chck_accs_p0(_elements,spr_intScratch3e9,1003)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3e9].key)==1){
                int spr_intScratch3eb;spr_intScratch3eb=pos;chck_accs_p0(_elements,spr_intScratch3eb,1005)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3eb].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3ed;spr_intScratch3ed=pos;chck_accs_p0(_elements,spr_intScratch3ed,1007)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch3ed].next;
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
         int spr_intScratch3ef;
         spr_intScratch3ef=newCap;
         if(spr_intScratch3ef<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > newElements;newElements=new(spr_intScratch3ef) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch3ef)
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
          int spr_intScratch3f0;spr_intScratch3f0=pos;chck_accs_p0(_elements,spr_intScratch3f0,1010)
   if(_elements._theObject->_array[spr_intScratch3f0].is_used==1){
             int spr_intScratch3f2;spr_intScratch3f2=pos;chck_accs_p0(_elements,spr_intScratch3f2,1012)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3f2].key,key)==0){
                int spr_intScratch3f4;spr_intScratch3f4=pos;chck_accs_p0(_elements,spr_intScratch3f4,1014)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch3f4].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3f6;spr_intScratch3f6=pos;chck_accs_p0(_elements,spr_intScratch3f6,1016)
            _elements._theObject->_array[spr_intScratch3f6].next=entry._theObject->next;
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
             int spr_intScratch3f8;spr_intScratch3f8=pos;chck_accs_p0(_elements,spr_intScratch3f8,1018)
         if(_elements._theObject->_array[spr_intScratch3f8].next!=0U){
                   int spr_intScratch3fa;spr_intScratch3fa=pos;chck_accs_p0(_elements,spr_intScratch3fa,1020)
            SPRSmartPtr<SPHT_Entry_String_16_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3fa].next;
                   int spr_intScratch3fc;spr_intScratch3fc=pos;chck_accs_p0(_elements,spr_intScratch3fc,1022)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3fc].key,entryNext._theObject->key);
                   int spr_intScratch3fe;spr_intScratch3fe=pos;chck_accs_p0(_elements,spr_intScratch3fe,1024)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3fe].value,entryNext._theObject->value);
                   int spr_intScratch400;spr_intScratch400=pos;chck_accs_p0(_elements,spr_intScratch400,1026)
            _elements._theObject->_array[spr_intScratch400].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch402;spr_intScratch402=pos;chck_accs_p0(_elements,spr_intScratch402,1028)
            _elements._theObject->_array[spr_intScratch402].is_used=0;
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
   int spr_intScratch404;
   spr_intScratch404=3;
   if(spr_intScratch404<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch404) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch404)
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
                int spr_intScratch405;spr_intScratch405=iterator_pos;chck_accs_p0(_elements,spr_intScratch405,1031)
         if(_elements._theObject->_array[spr_intScratch405].is_used==0){
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
             int spr_intScratch407;spr_intScratch407=iterator_pos;chck_accs_p0(_elements,spr_intScratch407,1033)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch407].key);
             int spr_intScratch409;spr_intScratch409=iterator_pos;chck_accs_p0(_elements,spr_intScratch409,1035)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch409].value);
             int spr_intScratch40b;spr_intScratch40b=iterator_pos;chck_accs_p0(_elements,spr_intScratch40b,1037)
      iterator_next=_elements._theObject->_array[spr_intScratch40b].next;
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
          int spr_intScratch40d;spr_intScratch40d=pos;chck_accs_p0(bins,spr_intScratch40d,1039)
          int spr_intScratch40f;spr_intScratch40f=pos;chck_accs_p0(bins,spr_intScratch40f,1041)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch40d].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch40f].key,key)==0)){
             int spr_intScratch411;spr_intScratch411=pos;chck_accs_p0(bins,spr_intScratch411,1043)
      SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=bins._theObject->_array[spr_intScratch411].next;
      if(entry==0U){
                int spr_intScratch413;spr_intScratch413=pos;chck_accs_p0(bins,spr_intScratch413,1045)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch413].next=::new SPHT_Entry_int_String_16;
                int spr_intScratch415;spr_intScratch415=pos;chck_accs_p0(bins,spr_intScratch415,1047)
         bins._theObject->_array[spr_intScratch415].next._theObject->is_used=1;
                int spr_intScratch417;spr_intScratch417=pos;chck_accs_p0(bins,spr_intScratch417,1049)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch417].next._theObject->key,key);
                int spr_intScratch419;spr_intScratch419=pos;chck_accs_p0(bins,spr_intScratch419,1051)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch419].next._theObject->value,value);
         
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
          int spr_intScratch41b;spr_intScratch41b=pos;chck_accs_p0(bins,spr_intScratch41b,1053)
      bins._theObject->_array[spr_intScratch41b].is_used=1;
             int spr_intScratch41d;spr_intScratch41d=pos;chck_accs_p0(bins,spr_intScratch41d,1055)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch41d].key,key);
             int spr_intScratch41f;spr_intScratch41f=pos;chck_accs_p0(bins,spr_intScratch41f,1057)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch41f].value,value);
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
          int spr_intScratch421;spr_intScratch421=pos;chck_accs_p0(_elements,spr_intScratch421,1059)
   if(_elements._theObject->_array[spr_intScratch421].is_used==1){
             int spr_intScratch423;spr_intScratch423=pos;chck_accs_p0(_elements,spr_intScratch423,1061)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch423].key)==1){
                int spr_intScratch425;spr_intScratch425=pos;chck_accs_p0(_elements,spr_intScratch425,1063)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch425].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch427;spr_intScratch427=pos;chck_accs_p0(_elements,spr_intScratch427,1065)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch427].next;
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
         int spr_intScratch429;
         spr_intScratch429=newCap;
         if(spr_intScratch429<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > newElements;newElements=new(spr_intScratch429) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch429)
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
          int spr_intScratch42a;spr_intScratch42a=pos;chck_accs_p0(_elements,spr_intScratch42a,1068)
   if(_elements._theObject->_array[spr_intScratch42a].is_used==1){
             int spr_intScratch42c;spr_intScratch42c=pos;chck_accs_p0(_elements,spr_intScratch42c,1070)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch42c].key,key)==0){
                int spr_intScratch42e;spr_intScratch42e=pos;chck_accs_p0(_elements,spr_intScratch42e,1072)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch42e].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch430;spr_intScratch430=pos;chck_accs_p0(_elements,spr_intScratch430,1074)
            _elements._theObject->_array[spr_intScratch430].next=entry._theObject->next;
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
             int spr_intScratch432;spr_intScratch432=pos;chck_accs_p0(_elements,spr_intScratch432,1076)
         if(_elements._theObject->_array[spr_intScratch432].next!=0U){
                   int spr_intScratch434;spr_intScratch434=pos;chck_accs_p0(_elements,spr_intScratch434,1078)
            SPRSmartPtr<SPHT_Entry_int_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch434].next;
                   int spr_intScratch436;spr_intScratch436=pos;chck_accs_p0(_elements,spr_intScratch436,1080)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch436].key,entryNext._theObject->key);
                   int spr_intScratch438;spr_intScratch438=pos;chck_accs_p0(_elements,spr_intScratch438,1082)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch438].value,entryNext._theObject->value);
                   int spr_intScratch43a;spr_intScratch43a=pos;chck_accs_p0(_elements,spr_intScratch43a,1084)
            _elements._theObject->_array[spr_intScratch43a].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch43c;spr_intScratch43c=pos;chck_accs_p0(_elements,spr_intScratch43c,1086)
            _elements._theObject->_array[spr_intScratch43c].is_used=0;
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
   int spr_intScratch43e;
   spr_intScratch43e=3;
   if(spr_intScratch43e<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch43e) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch43e)
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
                int spr_intScratch43f;spr_intScratch43f=iterator_pos;chck_accs_p0(_elements,spr_intScratch43f,1089)
         if(_elements._theObject->_array[spr_intScratch43f].is_used==0){
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
             int spr_intScratch441;spr_intScratch441=iterator_pos;chck_accs_p0(_elements,spr_intScratch441,1091)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch441].key);
             int spr_intScratch443;spr_intScratch443=iterator_pos;chck_accs_p0(_elements,spr_intScratch443,1093)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch443].value);
             int spr_intScratch445;spr_intScratch445=iterator_pos;chck_accs_p0(_elements,spr_intScratch445,1095)
      iterator_next=_elements._theObject->_array[spr_intScratch445].next;
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
          int spr_intScratch447;spr_intScratch447=pos;chck_accs_p0(bins,spr_intScratch447,1097)
          int spr_intScratch449;spr_intScratch449=pos;chck_accs_p0(bins,spr_intScratch449,1099)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch447].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch449].key,key)==0)){
             int spr_intScratch44b;spr_intScratch44b=pos;chck_accs_p0(bins,spr_intScratch44b,1101)
      SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=bins._theObject->_array[spr_intScratch44b].next;
      if(entry==0U){
                int spr_intScratch44d;spr_intScratch44d=pos;chck_accs_p0(bins,spr_intScratch44d,1103)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch44d].next=::new SPHT_Entry_String_16_double;
                int spr_intScratch44f;spr_intScratch44f=pos;chck_accs_p0(bins,spr_intScratch44f,1105)
         bins._theObject->_array[spr_intScratch44f].next._theObject->is_used=1;
                int spr_intScratch451;spr_intScratch451=pos;chck_accs_p0(bins,spr_intScratch451,1107)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch451].next._theObject->key,key);
                int spr_intScratch453;spr_intScratch453=pos;chck_accs_p0(bins,spr_intScratch453,1109)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch453].next._theObject->value,value);
         
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
          int spr_intScratch455;spr_intScratch455=pos;chck_accs_p0(bins,spr_intScratch455,1111)
      bins._theObject->_array[spr_intScratch455].is_used=1;
             int spr_intScratch457;spr_intScratch457=pos;chck_accs_p0(bins,spr_intScratch457,1113)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch457].key,key);
             int spr_intScratch459;spr_intScratch459=pos;chck_accs_p0(bins,spr_intScratch459,1115)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch459].value,value);
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
          int spr_intScratch45b;spr_intScratch45b=pos;chck_accs_p0(_elements,spr_intScratch45b,1117)
   if(_elements._theObject->_array[spr_intScratch45b].is_used==1){
             int spr_intScratch45d;spr_intScratch45d=pos;chck_accs_p0(_elements,spr_intScratch45d,1119)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch45d].key)==1){
                int spr_intScratch45f;spr_intScratch45f=pos;chck_accs_p0(_elements,spr_intScratch45f,1121)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch45f].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch461;spr_intScratch461=pos;chck_accs_p0(_elements,spr_intScratch461,1123)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch461].next;
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
         int spr_intScratch463;
         spr_intScratch463=newCap;
         if(spr_intScratch463<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > newElements;newElements=new(spr_intScratch463) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch463)
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
          int spr_intScratch464;spr_intScratch464=pos;chck_accs_p0(_elements,spr_intScratch464,1126)
   if(_elements._theObject->_array[spr_intScratch464].is_used==1){
             int spr_intScratch466;spr_intScratch466=pos;chck_accs_p0(_elements,spr_intScratch466,1128)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch466].key,key)==0){
                int spr_intScratch468;spr_intScratch468=pos;chck_accs_p0(_elements,spr_intScratch468,1130)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch468].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch46a;spr_intScratch46a=pos;chck_accs_p0(_elements,spr_intScratch46a,1132)
            _elements._theObject->_array[spr_intScratch46a].next=entry._theObject->next;
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
             int spr_intScratch46c;spr_intScratch46c=pos;chck_accs_p0(_elements,spr_intScratch46c,1134)
         if(_elements._theObject->_array[spr_intScratch46c].next!=0U){
                   int spr_intScratch46e;spr_intScratch46e=pos;chck_accs_p0(_elements,spr_intScratch46e,1136)
            SPRSmartPtr<SPHT_Entry_String_16_double> entryNext;entryNext=_elements._theObject->_array[spr_intScratch46e].next;
                   int spr_intScratch470;spr_intScratch470=pos;chck_accs_p0(_elements,spr_intScratch470,1138)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch470].key,entryNext._theObject->key);
                   int spr_intScratch472;spr_intScratch472=pos;chck_accs_p0(_elements,spr_intScratch472,1140)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch472].value,entryNext._theObject->value);
                   int spr_intScratch474;spr_intScratch474=pos;chck_accs_p0(_elements,spr_intScratch474,1142)
            _elements._theObject->_array[spr_intScratch474].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch476;spr_intScratch476=pos;chck_accs_p0(_elements,spr_intScratch476,1144)
            _elements._theObject->_array[spr_intScratch476].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

