#include "stdafx.h"
#include "header.h"
String_16::String_16(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch16a;spr_intScratch16a=0;chck_accs0(_preAllocBuf,spr_intScratch16a,364)
   _preAllocBuf._array[spr_intScratch16a]='\0';
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
          int spr_intScratch16c;spr_intScratch16c=0;chck_accs0(_preAllocBuf,spr_intScratch16c,366)
   _preAllocBuf._array[spr_intScratch16c]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch16e;strcpy(spr_StringScratch16e._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch16e);
   
   
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
          int spr_intScratch16f;spr_intScratch16f=0;chck_accs_p0(spalten,spr_intScratch16f,369)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch16f].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch171;spr_intScratch171=ausgStelle;chck_accs_p0(spalten,spr_intScratch171,371)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch171].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch173;spr_intScratch173=ausgStelle;chck_accs_p0(spalten,spr_intScratch173,373)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch173].append(stackStartPtr,z);
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
          int spr_intScratch175;spr_intScratch175=groesse;chck_accs_p0(buf,spr_intScratch175,375)
   while(buf._theObject->_array[spr_intScratch175]!='\0'){
      groesse++;
      spr_intScratch175=groesse;chck_accs_p0(buf,spr_intScratch175,375)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch177;spr_intScratch177=stelle;chck_accs_p0(buf,spr_intScratch177,377)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch177]);
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
          int spr_intScratch179;spr_intScratch179=groesse;chck_accs0(str,spr_intScratch179,379)
   while(str._array[spr_intScratch179]!='\0'){
      groesse++;
      spr_intScratch179=groesse;chck_accs0(str,spr_intScratch179,379)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch17b;spr_intScratch17b=stelle;chck_accs0(str,spr_intScratch17b,381)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch17b]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch17d;spr_intScratch17d=i+pos;chck_accs0(str,spr_intScratch17d,383)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch17d]);
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
             int spr_intScratch17f;spr_intScratch17f=_length;chck_accs0(_preAllocBuf,spr_intScratch17f,385)
      _preAllocBuf._array[spr_intScratch17f]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch181;spr_intScratch181=_length;chck_accs_p0(_extendedBuf,spr_intScratch181,387)
      _extendedBuf._theObject->_array[spr_intScratch181]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_16::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch183;spr_intScratch183=l;chck_accs0(str,spr_intScratch183,389)
   while(str._array[spr_intScratch183]!='\0'){
      l=l+1;
      spr_intScratch183=l;chck_accs0(str,spr_intScratch183,389)
      
   };
   return l;
   
   
} //End Of Method

void String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch185;spr_intScratch185=0;chck_accs_p0(_extendedBuf,spr_intScratch185,391)
      _extendedBuf._theObject->_array[spr_intScratch185]='\0';
      
   }
          int spr_intScratch187;spr_intScratch187=0;chck_accs0(_preAllocBuf,spr_intScratch187,393)
   _preAllocBuf._array[spr_intScratch187]='\0';
   
   
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
          int spr_intScratch189;spr_intScratch189=0;chck_accs0(_preAllocBuf,spr_intScratch189,395)
   _preAllocBuf._array[spr_intScratch189]='\0';
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch18b;spr_intScratch18b=i;chck_accs0(str,spr_intScratch18b,397)
   while((i<str._sz)&&(str._array[spr_intScratch18b]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch18d;spr_intScratch18d=i;chck_accs0(str,spr_intScratch18d,399)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch18d]){
         return 0;
         
      }
      i++;
      spr_intScratch18b=i;chck_accs0(str,spr_intScratch18b,397)
      
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
                int spr_intScratch18f;spr_intScratch18f=_length;chck_accs_p0(_extendedBuf,spr_intScratch18f,401)
         _extendedBuf._theObject->_array[spr_intScratch18f]=c;
         
      }
      else
      {
             int spr_intScratch191;spr_intScratch191=_length;chck_accs0(_preAllocBuf,spr_intScratch191,403)
         _preAllocBuf._array[spr_intScratch191]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch193;spr_intScratch193=_length;chck_accs_p0(_extendedBuf,spr_intScratch193,405)
      _extendedBuf._theObject->_array[spr_intScratch193]=c;
      _length++;
      }
   
   
} //End Of Method

char String_16::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch195;spr_intScratch195=i;chck_accs_p0(_extendedBuf,spr_intScratch195,407)
      return _extendedBuf._theObject->_array[spr_intScratch195];
      
   }
   else
   {
          int spr_intScratch197;spr_intScratch197=i;chck_accs0(_preAllocBuf,spr_intScratch197,409)
      return _preAllocBuf._array[spr_intScratch197];
      }
   return '0';
   
   
} //End Of Method

void String_16::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch199;spr_intScratch199=stelle;chck_accs_p0(_extendedBuf,spr_intScratch199,411)
      _extendedBuf._theObject->_array[spr_intScratch199]=zeichen;
      
   }
   else
   {
          int spr_intScratch19b;spr_intScratch19b=stelle;chck_accs0(_preAllocBuf,spr_intScratch19b,413)
      _preAllocBuf._array[spr_intScratch19b]=zeichen;
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
          int spr_intScratch19d;spr_intScratch19d=lother;chck_accs0(other,spr_intScratch19d,415)
   while((lother<other._sz)&&(other._array[spr_intScratch19d]!='\0')){
      lother++;
      spr_intScratch19d=lother;chck_accs0(other,spr_intScratch19d,415)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch19f;spr_intScratch19f=i;chck_accs0(other,spr_intScratch19f,417)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch19f]){
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
          int spr_intScratch1a1;spr_intScratch1a1=0;chck_accs0(buf,spr_intScratch1a1,419)
   buf._array[spr_intScratch1a1]='\0';
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
             int spr_intScratch1a3;spr_intScratch1a3=0;chck_accs0(feld,spr_intScratch1a3,421)
      feld._array[spr_intScratch1a3]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch1a5;spr_intScratch1a5=i;chck_accs0(feld,spr_intScratch1a5,423)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch1a5]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch1a7;spr_intScratch1a7=i;chck_accs0(feld,spr_intScratch1a7,425)
   feld._array[spr_intScratch1a7]='\0';
   
   
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
          int spr_intScratch1a9;spr_intScratch1a9=j;chck_accs0(end,spr_intScratch1a9,427)
   while((end._array[spr_intScratch1a9]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch1a9=j;chck_accs0(end,spr_intScratch1a9,427)
      
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
             int spr_intScratch1ab;spr_intScratch1ab=j;chck_accs0(end,spr_intScratch1ab,429)
      if(c!=end._array[spr_intScratch1ab]){
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
          int spr_intScratch1ad;spr_intScratch1ad=i;chck_accs0(buf,spr_intScratch1ad,431)
   while((i<l)&&(buf._array[spr_intScratch1ad]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1af;spr_intScratch1af=i;chck_accs0(buf,spr_intScratch1af,433)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch1af]){
         return 0;
         
      }
      i++;
      spr_intScratch1ad=i;chck_accs0(buf,spr_intScratch1ad,431)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch1b1;strcpy(spr_StringScratch1b1._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1b1);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1b2;strcpy(spr_StringScratch1b2._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1b2);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1b3;strcpy(spr_StringScratch1b3._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1b3);
            
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
         int spr_intScratch1b4;
         spr_intScratch1b4=minCapacity*2;
         if(spr_intScratch1b4<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch1b4) SPRArray<char>(spr_intScratch1b4)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch1b5;spr_intScratch1b5=i;chck_accs_p0(_extendedBuf,spr_intScratch1b5,439)
                   int spr_intScratch1b7;spr_intScratch1b7=i;chck_accs0(_preAllocBuf,spr_intScratch1b7,441)
            _extendedBuf._theObject->_array[spr_intScratch1b5]=_preAllocBuf._array[spr_intScratch1b7];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch1b9;
            spr_intScratch1b9=minCapacity*2;
            if(spr_intScratch1b9<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch1b9) SPRArray<char>(spr_intScratch1b9)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch1ba;spr_intScratch1ba=i;chck_accs_p0(newBuf,spr_intScratch1ba,444)
                      int spr_intScratch1bc;spr_intScratch1bc=i;chck_accs_p0(_extendedBuf,spr_intScratch1bc,446)
               newBuf._theObject->_array[spr_intScratch1ba]=_extendedBuf._theObject->_array[spr_intScratch1bc];
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
          int spr_intScratch1be;spr_intScratch1be=0;chck_accs0(_preAllocBuf,spr_intScratch1be,448)
   _preAllocBuf._array[spr_intScratch1be]='\0';
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
          int spr_intScratch1c0;spr_intScratch1c0=0;chck_accs0(_preAllocBuf,spr_intScratch1c0,450)
   _preAllocBuf._array[spr_intScratch1c0]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch1c2;strcpy(spr_StringScratch1c2._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch1c2);
   
   
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
          int spr_intScratch1c3;spr_intScratch1c3=0;chck_accs_p0(spalten,spr_intScratch1c3,453)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch1c3].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch1c5;spr_intScratch1c5=ausgStelle;chck_accs_p0(spalten,spr_intScratch1c5,455)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch1c5].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch1c7;spr_intScratch1c7=ausgStelle;chck_accs_p0(spalten,spr_intScratch1c7,457)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch1c7].append(stackStartPtr,z);
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
          int spr_intScratch1c9;spr_intScratch1c9=groesse;chck_accs_p0(buf,spr_intScratch1c9,459)
   while(buf._theObject->_array[spr_intScratch1c9]!='\0'){
      groesse++;
      spr_intScratch1c9=groesse;chck_accs_p0(buf,spr_intScratch1c9,459)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1cb;spr_intScratch1cb=stelle;chck_accs_p0(buf,spr_intScratch1cb,461)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch1cb]);
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
          int spr_intScratch1cd;spr_intScratch1cd=groesse;chck_accs0(str,spr_intScratch1cd,463)
   while(str._array[spr_intScratch1cd]!='\0'){
      groesse++;
      spr_intScratch1cd=groesse;chck_accs0(str,spr_intScratch1cd,463)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1cf;spr_intScratch1cf=stelle;chck_accs0(str,spr_intScratch1cf,465)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1cf]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch1d1;spr_intScratch1d1=i+pos;chck_accs0(str,spr_intScratch1d1,467)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1d1]);
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
             int spr_intScratch1d3;spr_intScratch1d3=_length;chck_accs0(_preAllocBuf,spr_intScratch1d3,469)
      _preAllocBuf._array[spr_intScratch1d3]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch1d5;spr_intScratch1d5=_length;chck_accs_p0(_extendedBuf,spr_intScratch1d5,471)
      _extendedBuf._theObject->_array[spr_intScratch1d5]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_32::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch1d7;spr_intScratch1d7=l;chck_accs0(str,spr_intScratch1d7,473)
   while(str._array[spr_intScratch1d7]!='\0'){
      l=l+1;
      spr_intScratch1d7=l;chck_accs0(str,spr_intScratch1d7,473)
      
   };
   return l;
   
   
} //End Of Method

void String_32::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch1d9;spr_intScratch1d9=0;chck_accs_p0(_extendedBuf,spr_intScratch1d9,475)
      _extendedBuf._theObject->_array[spr_intScratch1d9]='\0';
      
   }
          int spr_intScratch1db;spr_intScratch1db=0;chck_accs0(_preAllocBuf,spr_intScratch1db,477)
   _preAllocBuf._array[spr_intScratch1db]='\0';
   
   
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
          int spr_intScratch1dd;spr_intScratch1dd=0;chck_accs0(_preAllocBuf,spr_intScratch1dd,479)
   _preAllocBuf._array[spr_intScratch1dd]='\0';
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch1df;spr_intScratch1df=i;chck_accs0(str,spr_intScratch1df,481)
   while((i<str._sz)&&(str._array[spr_intScratch1df]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1e1;spr_intScratch1e1=i;chck_accs0(str,spr_intScratch1e1,483)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch1e1]){
         return 0;
         
      }
      i++;
      spr_intScratch1df=i;chck_accs0(str,spr_intScratch1df,481)
      
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
                int spr_intScratch1e3;spr_intScratch1e3=_length;chck_accs_p0(_extendedBuf,spr_intScratch1e3,485)
         _extendedBuf._theObject->_array[spr_intScratch1e3]=c;
         
      }
      else
      {
             int spr_intScratch1e5;spr_intScratch1e5=_length;chck_accs0(_preAllocBuf,spr_intScratch1e5,487)
         _preAllocBuf._array[spr_intScratch1e5]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch1e7;spr_intScratch1e7=_length;chck_accs_p0(_extendedBuf,spr_intScratch1e7,489)
      _extendedBuf._theObject->_array[spr_intScratch1e7]=c;
      _length++;
      }
   
   
} //End Of Method

char String_32::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch1e9;spr_intScratch1e9=i;chck_accs_p0(_extendedBuf,spr_intScratch1e9,491)
      return _extendedBuf._theObject->_array[spr_intScratch1e9];
      
   }
   else
   {
          int spr_intScratch1eb;spr_intScratch1eb=i;chck_accs0(_preAllocBuf,spr_intScratch1eb,493)
      return _preAllocBuf._array[spr_intScratch1eb];
      }
   return '0';
   
   
} //End Of Method

void String_32::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch1ed;spr_intScratch1ed=stelle;chck_accs_p0(_extendedBuf,spr_intScratch1ed,495)
      _extendedBuf._theObject->_array[spr_intScratch1ed]=zeichen;
      
   }
   else
   {
          int spr_intScratch1ef;spr_intScratch1ef=stelle;chck_accs0(_preAllocBuf,spr_intScratch1ef,497)
      _preAllocBuf._array[spr_intScratch1ef]=zeichen;
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
          int spr_intScratch1f1;spr_intScratch1f1=lother;chck_accs0(other,spr_intScratch1f1,499)
   while((lother<other._sz)&&(other._array[spr_intScratch1f1]!='\0')){
      lother++;
      spr_intScratch1f1=lother;chck_accs0(other,spr_intScratch1f1,499)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1f3;spr_intScratch1f3=i;chck_accs0(other,spr_intScratch1f3,501)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch1f3]){
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
          int spr_intScratch1f5;spr_intScratch1f5=0;chck_accs0(buf,spr_intScratch1f5,503)
   buf._array[spr_intScratch1f5]='\0';
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
             int spr_intScratch1f7;spr_intScratch1f7=0;chck_accs0(feld,spr_intScratch1f7,505)
      feld._array[spr_intScratch1f7]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch1f9;spr_intScratch1f9=i;chck_accs0(feld,spr_intScratch1f9,507)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch1f9]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch1fb;spr_intScratch1fb=i;chck_accs0(feld,spr_intScratch1fb,509)
   feld._array[spr_intScratch1fb]='\0';
   
   
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
          int spr_intScratch1fd;spr_intScratch1fd=j;chck_accs0(end,spr_intScratch1fd,511)
   while((end._array[spr_intScratch1fd]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch1fd=j;chck_accs0(end,spr_intScratch1fd,511)
      
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
             int spr_intScratch1ff;spr_intScratch1ff=j;chck_accs0(end,spr_intScratch1ff,513)
      if(c!=end._array[spr_intScratch1ff]){
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
          int spr_intScratch201;spr_intScratch201=i;chck_accs0(buf,spr_intScratch201,515)
   while((i<l)&&(buf._array[spr_intScratch201]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch203;spr_intScratch203=i;chck_accs0(buf,spr_intScratch203,517)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch203]){
         return 0;
         
      }
      i++;
      spr_intScratch201=i;chck_accs0(buf,spr_intScratch201,515)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch205;strcpy(spr_StringScratch205._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch205);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch206;strcpy(spr_StringScratch206._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch206);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch207;strcpy(spr_StringScratch207._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch207);
            
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
         int spr_intScratch208;
         spr_intScratch208=minCapacity*2;
         if(spr_intScratch208<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch208) SPRArray<char>(spr_intScratch208)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch209;spr_intScratch209=i;chck_accs_p0(_extendedBuf,spr_intScratch209,523)
                   int spr_intScratch20b;spr_intScratch20b=i;chck_accs0(_preAllocBuf,spr_intScratch20b,525)
            _extendedBuf._theObject->_array[spr_intScratch209]=_preAllocBuf._array[spr_intScratch20b];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch20d;
            spr_intScratch20d=minCapacity*2;
            if(spr_intScratch20d<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch20d) SPRArray<char>(spr_intScratch20d)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch20e;spr_intScratch20e=i;chck_accs_p0(newBuf,spr_intScratch20e,528)
                      int spr_intScratch210;spr_intScratch210=i;chck_accs_p0(_extendedBuf,spr_intScratch210,530)
               newBuf._theObject->_array[spr_intScratch20e]=_extendedBuf._theObject->_array[spr_intScratch210];
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
          int spr_intScratch212;spr_intScratch212=0;chck_accs0(_preAllocBuf,spr_intScratch212,532)
   _preAllocBuf._array[spr_intScratch212]='\0';
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
          int spr_intScratch214;spr_intScratch214=0;chck_accs0(_preAllocBuf,spr_intScratch214,534)
   _preAllocBuf._array[spr_intScratch214]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch216;strcpy(spr_StringScratch216._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch216);
   
   
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
          int spr_intScratch217;spr_intScratch217=0;chck_accs_p0(spalten,spr_intScratch217,537)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch217].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch219;spr_intScratch219=ausgStelle;chck_accs_p0(spalten,spr_intScratch219,539)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch219].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch21b;spr_intScratch21b=ausgStelle;chck_accs_p0(spalten,spr_intScratch21b,541)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch21b].append(stackStartPtr,z);
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
          int spr_intScratch21d;spr_intScratch21d=groesse;chck_accs_p0(buf,spr_intScratch21d,543)
   while(buf._theObject->_array[spr_intScratch21d]!='\0'){
      groesse++;
      spr_intScratch21d=groesse;chck_accs_p0(buf,spr_intScratch21d,543)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch21f;spr_intScratch21f=stelle;chck_accs_p0(buf,spr_intScratch21f,545)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch21f]);
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
          int spr_intScratch221;spr_intScratch221=groesse;chck_accs0(str,spr_intScratch221,547)
   while(str._array[spr_intScratch221]!='\0'){
      groesse++;
      spr_intScratch221=groesse;chck_accs0(str,spr_intScratch221,547)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch223;spr_intScratch223=stelle;chck_accs0(str,spr_intScratch223,549)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch223]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch225;spr_intScratch225=i+pos;chck_accs0(str,spr_intScratch225,551)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch225]);
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
             int spr_intScratch227;spr_intScratch227=_length;chck_accs0(_preAllocBuf,spr_intScratch227,553)
      _preAllocBuf._array[spr_intScratch227]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch229;spr_intScratch229=_length;chck_accs_p0(_extendedBuf,spr_intScratch229,555)
      _extendedBuf._theObject->_array[spr_intScratch229]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_64::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch22b;spr_intScratch22b=l;chck_accs0(str,spr_intScratch22b,557)
   while(str._array[spr_intScratch22b]!='\0'){
      l=l+1;
      spr_intScratch22b=l;chck_accs0(str,spr_intScratch22b,557)
      
   };
   return l;
   
   
} //End Of Method

void String_64::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch22d;spr_intScratch22d=0;chck_accs_p0(_extendedBuf,spr_intScratch22d,559)
      _extendedBuf._theObject->_array[spr_intScratch22d]='\0';
      
   }
          int spr_intScratch22f;spr_intScratch22f=0;chck_accs0(_preAllocBuf,spr_intScratch22f,561)
   _preAllocBuf._array[spr_intScratch22f]='\0';
   
   
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
          int spr_intScratch231;spr_intScratch231=0;chck_accs0(_preAllocBuf,spr_intScratch231,563)
   _preAllocBuf._array[spr_intScratch231]='\0';
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch233;spr_intScratch233=i;chck_accs0(str,spr_intScratch233,565)
   while((i<str._sz)&&(str._array[spr_intScratch233]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch235;spr_intScratch235=i;chck_accs0(str,spr_intScratch235,567)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch235]){
         return 0;
         
      }
      i++;
      spr_intScratch233=i;chck_accs0(str,spr_intScratch233,565)
      
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
                int spr_intScratch237;spr_intScratch237=_length;chck_accs_p0(_extendedBuf,spr_intScratch237,569)
         _extendedBuf._theObject->_array[spr_intScratch237]=c;
         
      }
      else
      {
             int spr_intScratch239;spr_intScratch239=_length;chck_accs0(_preAllocBuf,spr_intScratch239,571)
         _preAllocBuf._array[spr_intScratch239]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch23b;spr_intScratch23b=_length;chck_accs_p0(_extendedBuf,spr_intScratch23b,573)
      _extendedBuf._theObject->_array[spr_intScratch23b]=c;
      _length++;
      }
   
   
} //End Of Method

char String_64::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch23d;spr_intScratch23d=i;chck_accs_p0(_extendedBuf,spr_intScratch23d,575)
      return _extendedBuf._theObject->_array[spr_intScratch23d];
      
   }
   else
   {
          int spr_intScratch23f;spr_intScratch23f=i;chck_accs0(_preAllocBuf,spr_intScratch23f,577)
      return _preAllocBuf._array[spr_intScratch23f];
      }
   return '0';
   
   
} //End Of Method

void String_64::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch241;spr_intScratch241=stelle;chck_accs_p0(_extendedBuf,spr_intScratch241,579)
      _extendedBuf._theObject->_array[spr_intScratch241]=zeichen;
      
   }
   else
   {
          int spr_intScratch243;spr_intScratch243=stelle;chck_accs0(_preAllocBuf,spr_intScratch243,581)
      _preAllocBuf._array[spr_intScratch243]=zeichen;
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
          int spr_intScratch245;spr_intScratch245=lother;chck_accs0(other,spr_intScratch245,583)
   while((lother<other._sz)&&(other._array[spr_intScratch245]!='\0')){
      lother++;
      spr_intScratch245=lother;chck_accs0(other,spr_intScratch245,583)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch247;spr_intScratch247=i;chck_accs0(other,spr_intScratch247,585)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch247]){
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
          int spr_intScratch249;spr_intScratch249=0;chck_accs0(buf,spr_intScratch249,587)
   buf._array[spr_intScratch249]='\0';
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
             int spr_intScratch24b;spr_intScratch24b=0;chck_accs0(feld,spr_intScratch24b,589)
      feld._array[spr_intScratch24b]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch24d;spr_intScratch24d=i;chck_accs0(feld,spr_intScratch24d,591)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch24d]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch24f;spr_intScratch24f=i;chck_accs0(feld,spr_intScratch24f,593)
   feld._array[spr_intScratch24f]='\0';
   
   
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
          int spr_intScratch251;spr_intScratch251=j;chck_accs0(end,spr_intScratch251,595)
   while((end._array[spr_intScratch251]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch251=j;chck_accs0(end,spr_intScratch251,595)
      
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
             int spr_intScratch253;spr_intScratch253=j;chck_accs0(end,spr_intScratch253,597)
      if(c!=end._array[spr_intScratch253]){
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
          int spr_intScratch255;spr_intScratch255=i;chck_accs0(buf,spr_intScratch255,599)
   while((i<l)&&(buf._array[spr_intScratch255]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch257;spr_intScratch257=i;chck_accs0(buf,spr_intScratch257,601)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch257]){
         return 0;
         
      }
      i++;
      spr_intScratch255=i;chck_accs0(buf,spr_intScratch255,599)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch259;strcpy(spr_StringScratch259._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch259);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch25a;strcpy(spr_StringScratch25a._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch25a);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch25b;strcpy(spr_StringScratch25b._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch25b);
            
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
         int spr_intScratch25c;
         spr_intScratch25c=minCapacity*2;
         if(spr_intScratch25c<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch25c) SPRArray<char>(spr_intScratch25c)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch25d;spr_intScratch25d=i;chck_accs_p0(_extendedBuf,spr_intScratch25d,607)
                   int spr_intScratch25f;spr_intScratch25f=i;chck_accs0(_preAllocBuf,spr_intScratch25f,609)
            _extendedBuf._theObject->_array[spr_intScratch25d]=_preAllocBuf._array[spr_intScratch25f];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch261;
            spr_intScratch261=minCapacity*2;
            if(spr_intScratch261<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch261) SPRArray<char>(spr_intScratch261)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch262;spr_intScratch262=i;chck_accs_p0(newBuf,spr_intScratch262,612)
                      int spr_intScratch264;spr_intScratch264=i;chck_accs_p0(_extendedBuf,spr_intScratch264,614)
               newBuf._theObject->_array[spr_intScratch262]=_extendedBuf._theObject->_array[spr_intScratch264];
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
          int spr_intScratch266;spr_intScratch266=0;chck_accs0(_preAllocBuf,spr_intScratch266,616)
   _preAllocBuf._array[spr_intScratch266]='\0';
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
          int spr_intScratch268;spr_intScratch268=0;chck_accs0(_preAllocBuf,spr_intScratch268,618)
   _preAllocBuf._array[spr_intScratch268]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch26a;strcpy(spr_StringScratch26a._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch26a);
   
   
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
          int spr_intScratch26b;spr_intScratch26b=0;chck_accs_p0(spalten,spr_intScratch26b,621)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch26b].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch26d;spr_intScratch26d=ausgStelle;chck_accs_p0(spalten,spr_intScratch26d,623)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch26d].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch26f;spr_intScratch26f=ausgStelle;chck_accs_p0(spalten,spr_intScratch26f,625)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch26f].append(stackStartPtr,z);
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
          int spr_intScratch271;spr_intScratch271=groesse;chck_accs_p0(buf,spr_intScratch271,627)
   while(buf._theObject->_array[spr_intScratch271]!='\0'){
      groesse++;
      spr_intScratch271=groesse;chck_accs_p0(buf,spr_intScratch271,627)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch273;spr_intScratch273=stelle;chck_accs_p0(buf,spr_intScratch273,629)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch273]);
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
          int spr_intScratch275;spr_intScratch275=groesse;chck_accs0(str,spr_intScratch275,631)
   while(str._array[spr_intScratch275]!='\0'){
      groesse++;
      spr_intScratch275=groesse;chck_accs0(str,spr_intScratch275,631)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch277;spr_intScratch277=stelle;chck_accs0(str,spr_intScratch277,633)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch277]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch279;spr_intScratch279=i+pos;chck_accs0(str,spr_intScratch279,635)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch279]);
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
             int spr_intScratch27b;spr_intScratch27b=_length;chck_accs0(_preAllocBuf,spr_intScratch27b,637)
      _preAllocBuf._array[spr_intScratch27b]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch27d;spr_intScratch27d=_length;chck_accs_p0(_extendedBuf,spr_intScratch27d,639)
      _extendedBuf._theObject->_array[spr_intScratch27d]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_128::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch27f;spr_intScratch27f=l;chck_accs0(str,spr_intScratch27f,641)
   while(str._array[spr_intScratch27f]!='\0'){
      l=l+1;
      spr_intScratch27f=l;chck_accs0(str,spr_intScratch27f,641)
      
   };
   return l;
   
   
} //End Of Method

void String_128::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch281;spr_intScratch281=0;chck_accs_p0(_extendedBuf,spr_intScratch281,643)
      _extendedBuf._theObject->_array[spr_intScratch281]='\0';
      
   }
          int spr_intScratch283;spr_intScratch283=0;chck_accs0(_preAllocBuf,spr_intScratch283,645)
   _preAllocBuf._array[spr_intScratch283]='\0';
   
   
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
          int spr_intScratch285;spr_intScratch285=0;chck_accs0(_preAllocBuf,spr_intScratch285,647)
   _preAllocBuf._array[spr_intScratch285]='\0';
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch287;spr_intScratch287=i;chck_accs0(str,spr_intScratch287,649)
   while((i<str._sz)&&(str._array[spr_intScratch287]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch289;spr_intScratch289=i;chck_accs0(str,spr_intScratch289,651)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch289]){
         return 0;
         
      }
      i++;
      spr_intScratch287=i;chck_accs0(str,spr_intScratch287,649)
      
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
                int spr_intScratch28b;spr_intScratch28b=_length;chck_accs_p0(_extendedBuf,spr_intScratch28b,653)
         _extendedBuf._theObject->_array[spr_intScratch28b]=c;
         
      }
      else
      {
             int spr_intScratch28d;spr_intScratch28d=_length;chck_accs0(_preAllocBuf,spr_intScratch28d,655)
         _preAllocBuf._array[spr_intScratch28d]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch28f;spr_intScratch28f=_length;chck_accs_p0(_extendedBuf,spr_intScratch28f,657)
      _extendedBuf._theObject->_array[spr_intScratch28f]=c;
      _length++;
      }
   
   
} //End Of Method

char String_128::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch291;spr_intScratch291=i;chck_accs_p0(_extendedBuf,spr_intScratch291,659)
      return _extendedBuf._theObject->_array[spr_intScratch291];
      
   }
   else
   {
          int spr_intScratch293;spr_intScratch293=i;chck_accs0(_preAllocBuf,spr_intScratch293,661)
      return _preAllocBuf._array[spr_intScratch293];
      }
   return '0';
   
   
} //End Of Method

void String_128::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch295;spr_intScratch295=stelle;chck_accs_p0(_extendedBuf,spr_intScratch295,663)
      _extendedBuf._theObject->_array[spr_intScratch295]=zeichen;
      
   }
   else
   {
          int spr_intScratch297;spr_intScratch297=stelle;chck_accs0(_preAllocBuf,spr_intScratch297,665)
      _preAllocBuf._array[spr_intScratch297]=zeichen;
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
          int spr_intScratch299;spr_intScratch299=lother;chck_accs0(other,spr_intScratch299,667)
   while((lother<other._sz)&&(other._array[spr_intScratch299]!='\0')){
      lother++;
      spr_intScratch299=lother;chck_accs0(other,spr_intScratch299,667)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch29b;spr_intScratch29b=i;chck_accs0(other,spr_intScratch29b,669)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch29b]){
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
          int spr_intScratch29d;spr_intScratch29d=0;chck_accs0(buf,spr_intScratch29d,671)
   buf._array[spr_intScratch29d]='\0';
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
             int spr_intScratch29f;spr_intScratch29f=0;chck_accs0(feld,spr_intScratch29f,673)
      feld._array[spr_intScratch29f]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch2a1;spr_intScratch2a1=i;chck_accs0(feld,spr_intScratch2a1,675)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch2a1]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch2a3;spr_intScratch2a3=i;chck_accs0(feld,spr_intScratch2a3,677)
   feld._array[spr_intScratch2a3]='\0';
   
   
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
          int spr_intScratch2a5;spr_intScratch2a5=j;chck_accs0(end,spr_intScratch2a5,679)
   while((end._array[spr_intScratch2a5]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch2a5=j;chck_accs0(end,spr_intScratch2a5,679)
      
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
             int spr_intScratch2a7;spr_intScratch2a7=j;chck_accs0(end,spr_intScratch2a7,681)
      if(c!=end._array[spr_intScratch2a7]){
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
          int spr_intScratch2a9;spr_intScratch2a9=i;chck_accs0(buf,spr_intScratch2a9,683)
   while((i<l)&&(buf._array[spr_intScratch2a9]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2ab;spr_intScratch2ab=i;chck_accs0(buf,spr_intScratch2ab,685)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch2ab]){
         return 0;
         
      }
      i++;
      spr_intScratch2a9=i;chck_accs0(buf,spr_intScratch2a9,683)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch2ad;strcpy(spr_StringScratch2ad._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2ad);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2ae;strcpy(spr_StringScratch2ae._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2ae);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2af;strcpy(spr_StringScratch2af._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2af);
            
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
         int spr_intScratch2b0;
         spr_intScratch2b0=minCapacity*2;
         if(spr_intScratch2b0<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch2b0) SPRArray<char>(spr_intScratch2b0)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch2b1;spr_intScratch2b1=i;chck_accs_p0(_extendedBuf,spr_intScratch2b1,691)
                   int spr_intScratch2b3;spr_intScratch2b3=i;chck_accs0(_preAllocBuf,spr_intScratch2b3,693)
            _extendedBuf._theObject->_array[spr_intScratch2b1]=_preAllocBuf._array[spr_intScratch2b3];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch2b5;
            spr_intScratch2b5=minCapacity*2;
            if(spr_intScratch2b5<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch2b5) SPRArray<char>(spr_intScratch2b5)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch2b6;spr_intScratch2b6=i;chck_accs_p0(newBuf,spr_intScratch2b6,696)
                      int spr_intScratch2b8;spr_intScratch2b8=i;chck_accs_p0(_extendedBuf,spr_intScratch2b8,698)
               newBuf._theObject->_array[spr_intScratch2b6]=_extendedBuf._theObject->_array[spr_intScratch2b8];
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
   int spr_intScratch2ba;
   spr_intScratch2ba=initialCapacity;
   if(spr_intScratch2ba<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch2ba) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch2ba)
   ;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   int minCap;minCap=((int)_numUsed*1.2f+2);
   if(_elements._theObject->_sz<=minCap){
      int newCap;newCap=_elements._theObject->_sz*2;
      SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > oldArray;
      oldArray=_elements;
      int spr_intScratch2bb;
      spr_intScratch2bb=newCap;
      if(spr_intScratch2bb<0)throw "invalid size requested for heap allocation";
      _elements=new(spr_intScratch2bb) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch2bb)
      ;
      {//begin of SPR for statement
      int i;i=0;
      while(i<oldArray._theObject->_sz){
                int spr_intScratch2bc;spr_intScratch2bc=i;chck_accs_p0(oldArray,spr_intScratch2bc,702)
         if(oldArray._theObject->_array[spr_intScratch2bc]!=0U){
                   int spr_intScratch2be;spr_intScratch2be=i;chck_accs_p0(oldArray,spr_intScratch2be,704)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,oldArray._theObject->_array[spr_intScratch2be]);
            
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
          int spr_intScratch2c0;spr_intScratch2c0=code;chck_accs_p0(_elements,spr_intScratch2c0,706)
   while(_elements._theObject->_array[spr_intScratch2c0]!=0U){
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch2c0=code;chck_accs_p0(_elements,spr_intScratch2c0,706)
      
   };
          int spr_intScratch2c2;spr_intScratch2c2=code;chck_accs_p0(_elements,spr_intScratch2c2,708)
   _elements._theObject->_array[spr_intScratch2c2]=x;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key.getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
   int searching;searching=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
          int spr_intScratch2ca;do{
             int spr_intScratch2c4;spr_intScratch2c4=code;chck_accs_p0(_elements,spr_intScratch2c4,710)
      if(_elements._theObject->_array[spr_intScratch2c4]!=0U){
         SPRSmartPtr<KeyType4> key2;
                int spr_intScratch2c6;spr_intScratch2c6=code;chck_accs_p0(_elements,spr_intScratch2c6,712)
         _elements._theObject->_array[spr_intScratch2c6]._theObject->getKey(stackStartPtr,key2);
         if(key2._theObject->compare(stackStartPtr,key)==1){
                   int spr_intScratch2c8;spr_intScratch2c8=code;chck_accs_p0(_elements,spr_intScratch2c8,714)
            oValue=_elements._theObject->_array[spr_intScratch2c8];
            searching=0;
            
         }
         
      }
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch2ca=code;chck_accs_p0(_elements,spr_intScratch2ca,716)
      
   }
   while((_elements._theObject->_array[spr_intScratch2ca]!=0U)&&(searching==1));
   
   
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
             int spr_intScratch2cc;spr_intScratch2cc=_readPtr;chck_accs_p0(_elements,spr_intScratch2cc,718)
      if(_elements._theObject->_array[spr_intScratch2cc]==0U){
         _readPtr++;
         
      }
      else
      {
      stepping=0;
         }
      
   };
   if(_readPtr<_elements._theObject->_sz){
             int spr_intScratch2ce;spr_intScratch2ce=_readPtr;chck_accs_p0(_elements,spr_intScratch2ce,720)
      oValue=_elements._theObject->_array[spr_intScratch2ce];
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
             int spr_intScratch2d0;spr_intScratch2d0=i;chck_accs_p0(_elements,spr_intScratch2d0,722)
      _elements._theObject->_array[spr_intScratch2d0]=0U;
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
   int spr_intScratch2d2;
   spr_intScratch2d2=3;
   if(spr_intScratch2d2<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch2d2) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch2d2)
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
                int spr_intScratch2d3;spr_intScratch2d3=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d3,725)
         if(_elements._theObject->_array[spr_intScratch2d3].is_used==0){
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
             int spr_intScratch2d5;spr_intScratch2d5=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d5,727)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch2d5].key);
             int spr_intScratch2d7;spr_intScratch2d7=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d7,729)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch2d7].value);
             int spr_intScratch2d9;spr_intScratch2d9=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d9,731)
      iterator_next=_elements._theObject->_array[spr_intScratch2d9].next;
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
          int spr_intScratch2db;spr_intScratch2db=pos;chck_accs_p0(bins,spr_intScratch2db,733)
          int spr_intScratch2dd;spr_intScratch2dd=pos;chck_accs_p0(bins,spr_intScratch2dd,735)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch2db].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch2dd].key,key)==0)){
             int spr_intScratch2df;spr_intScratch2df=pos;chck_accs_p0(bins,spr_intScratch2df,737)
      SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=bins._theObject->_array[spr_intScratch2df].next;
      if(entry==0U){
                int spr_intScratch2e1;spr_intScratch2e1=pos;chck_accs_p0(bins,spr_intScratch2e1,739)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch2e1].next=::new SPHT_Entry_String_16_String_16;
                int spr_intScratch2e3;spr_intScratch2e3=pos;chck_accs_p0(bins,spr_intScratch2e3,741)
         bins._theObject->_array[spr_intScratch2e3].next._theObject->is_used=1;
                int spr_intScratch2e5;spr_intScratch2e5=pos;chck_accs_p0(bins,spr_intScratch2e5,743)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2e5].next._theObject->key,key);
                int spr_intScratch2e7;spr_intScratch2e7=pos;chck_accs_p0(bins,spr_intScratch2e7,745)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2e7].next._theObject->value,value);
         
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
          int spr_intScratch2e9;spr_intScratch2e9=pos;chck_accs_p0(bins,spr_intScratch2e9,747)
      bins._theObject->_array[spr_intScratch2e9].is_used=1;
             int spr_intScratch2eb;spr_intScratch2eb=pos;chck_accs_p0(bins,spr_intScratch2eb,749)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2eb].key,key);
             int spr_intScratch2ed;spr_intScratch2ed=pos;chck_accs_p0(bins,spr_intScratch2ed,751)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2ed].value,value);
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
          int spr_intScratch2ef;spr_intScratch2ef=pos;chck_accs_p0(_elements,spr_intScratch2ef,753)
   if(_elements._theObject->_array[spr_intScratch2ef].is_used==1){
             int spr_intScratch2f1;spr_intScratch2f1=pos;chck_accs_p0(_elements,spr_intScratch2f1,755)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch2f1].key)==1){
                int spr_intScratch2f3;spr_intScratch2f3=pos;chck_accs_p0(_elements,spr_intScratch2f3,757)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch2f3].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch2f5;spr_intScratch2f5=pos;chck_accs_p0(_elements,spr_intScratch2f5,759)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch2f5].next;
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
         int spr_intScratch2f7;
         spr_intScratch2f7=newCap;
         if(spr_intScratch2f7<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > newElements;newElements=new(spr_intScratch2f7) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch2f7)
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
          int spr_intScratch2f8;spr_intScratch2f8=pos;chck_accs_p0(_elements,spr_intScratch2f8,762)
   if(_elements._theObject->_array[spr_intScratch2f8].is_used==1){
             int spr_intScratch2fa;spr_intScratch2fa=pos;chck_accs_p0(_elements,spr_intScratch2fa,764)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch2fa].key,key)==0){
                int spr_intScratch2fc;spr_intScratch2fc=pos;chck_accs_p0(_elements,spr_intScratch2fc,766)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch2fc].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch2fe;spr_intScratch2fe=pos;chck_accs_p0(_elements,spr_intScratch2fe,768)
            _elements._theObject->_array[spr_intScratch2fe].next=entry._theObject->next;
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
             int spr_intScratch300;spr_intScratch300=pos;chck_accs_p0(_elements,spr_intScratch300,770)
         if(_elements._theObject->_array[spr_intScratch300].next!=0U){
                   int spr_intScratch302;spr_intScratch302=pos;chck_accs_p0(_elements,spr_intScratch302,772)
            SPRSmartPtr<SPHT_Entry_String_16_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch302].next;
                   int spr_intScratch304;spr_intScratch304=pos;chck_accs_p0(_elements,spr_intScratch304,774)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch304].key,entryNext._theObject->key);
                   int spr_intScratch306;spr_intScratch306=pos;chck_accs_p0(_elements,spr_intScratch306,776)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch306].value,entryNext._theObject->value);
                   int spr_intScratch308;spr_intScratch308=pos;chck_accs_p0(_elements,spr_intScratch308,778)
            _elements._theObject->_array[spr_intScratch308].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch30a;spr_intScratch30a=pos;chck_accs_p0(_elements,spr_intScratch30a,780)
            _elements._theObject->_array[spr_intScratch30a].is_used=0;
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
   int spr_intScratch30c;
   spr_intScratch30c=3;
   if(spr_intScratch30c<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch30c) SPRArray<SPHT_Entry_int_int>(spr_intScratch30c)
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
                int spr_intScratch30d;spr_intScratch30d=iterator_pos;chck_accs_p0(_elements,spr_intScratch30d,783)
         if(_elements._theObject->_array[spr_intScratch30d].is_used==0){
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
             int spr_intScratch30f;spr_intScratch30f=iterator_pos;chck_accs_p0(_elements,spr_intScratch30f,785)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch30f].key);
             int spr_intScratch311;spr_intScratch311=iterator_pos;chck_accs_p0(_elements,spr_intScratch311,787)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch311].value);
             int spr_intScratch313;spr_intScratch313=iterator_pos;chck_accs_p0(_elements,spr_intScratch313,789)
      iterator_next=_elements._theObject->_array[spr_intScratch313].next;
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
          int spr_intScratch315;spr_intScratch315=pos;chck_accs_p0(bins,spr_intScratch315,791)
          int spr_intScratch317;spr_intScratch317=pos;chck_accs_p0(bins,spr_intScratch317,793)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch315].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch317].key,key)==0)){
             int spr_intScratch319;spr_intScratch319=pos;chck_accs_p0(bins,spr_intScratch319,795)
      SPRSmartPtr<SPHT_Entry_int_int> entry;entry=bins._theObject->_array[spr_intScratch319].next;
      if(entry==0U){
                int spr_intScratch31b;spr_intScratch31b=pos;chck_accs_p0(bins,spr_intScratch31b,797)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch31b].next=::new SPHT_Entry_int_int;
                int spr_intScratch31d;spr_intScratch31d=pos;chck_accs_p0(bins,spr_intScratch31d,799)
         bins._theObject->_array[spr_intScratch31d].next._theObject->is_used=1;
                int spr_intScratch31f;spr_intScratch31f=pos;chck_accs_p0(bins,spr_intScratch31f,801)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch31f].next._theObject->key,key);
                int spr_intScratch321;spr_intScratch321=pos;chck_accs_p0(bins,spr_intScratch321,803)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch321].next._theObject->value,value);
         
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
          int spr_intScratch323;spr_intScratch323=pos;chck_accs_p0(bins,spr_intScratch323,805)
      bins._theObject->_array[spr_intScratch323].is_used=1;
             int spr_intScratch325;spr_intScratch325=pos;chck_accs_p0(bins,spr_intScratch325,807)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch325].key,key);
             int spr_intScratch327;spr_intScratch327=pos;chck_accs_p0(bins,spr_intScratch327,809)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch327].value,value);
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
          int spr_intScratch329;spr_intScratch329=pos;chck_accs_p0(_elements,spr_intScratch329,811)
   if(_elements._theObject->_array[spr_intScratch329].is_used==1){
             int spr_intScratch32b;spr_intScratch32b=pos;chck_accs_p0(_elements,spr_intScratch32b,813)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch32b].key)==1){
                int spr_intScratch32d;spr_intScratch32d=pos;chck_accs_p0(_elements,spr_intScratch32d,815)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch32d].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch32f;spr_intScratch32f=pos;chck_accs_p0(_elements,spr_intScratch32f,817)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch32f].next;
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
         int spr_intScratch331;
         spr_intScratch331=newCap;
         if(spr_intScratch331<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > newElements;newElements=new(spr_intScratch331) SPRArray<SPHT_Entry_int_int>(spr_intScratch331)
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
          int spr_intScratch332;spr_intScratch332=pos;chck_accs_p0(_elements,spr_intScratch332,820)
   if(_elements._theObject->_array[spr_intScratch332].is_used==1){
             int spr_intScratch334;spr_intScratch334=pos;chck_accs_p0(_elements,spr_intScratch334,822)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch334].key,key)==0){
                int spr_intScratch336;spr_intScratch336=pos;chck_accs_p0(_elements,spr_intScratch336,824)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch336].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch338;spr_intScratch338=pos;chck_accs_p0(_elements,spr_intScratch338,826)
            _elements._theObject->_array[spr_intScratch338].next=entry._theObject->next;
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
             int spr_intScratch33a;spr_intScratch33a=pos;chck_accs_p0(_elements,spr_intScratch33a,828)
         if(_elements._theObject->_array[spr_intScratch33a].next!=0U){
                   int spr_intScratch33c;spr_intScratch33c=pos;chck_accs_p0(_elements,spr_intScratch33c,830)
            SPRSmartPtr<SPHT_Entry_int_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch33c].next;
                   int spr_intScratch33e;spr_intScratch33e=pos;chck_accs_p0(_elements,spr_intScratch33e,832)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch33e].key,entryNext._theObject->key);
                   int spr_intScratch340;spr_intScratch340=pos;chck_accs_p0(_elements,spr_intScratch340,834)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch340].value,entryNext._theObject->value);
                   int spr_intScratch342;spr_intScratch342=pos;chck_accs_p0(_elements,spr_intScratch342,836)
            _elements._theObject->_array[spr_intScratch342].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch344;spr_intScratch344=pos;chck_accs_p0(_elements,spr_intScratch344,838)
            _elements._theObject->_array[spr_intScratch344].is_used=0;
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
   int spr_intScratch346;
   spr_intScratch346=3;
   if(spr_intScratch346<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch346) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch346)
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
                int spr_intScratch347;spr_intScratch347=iterator_pos;chck_accs_p0(_elements,spr_intScratch347,841)
         if(_elements._theObject->_array[spr_intScratch347].is_used==0){
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
             int spr_intScratch349;spr_intScratch349=iterator_pos;chck_accs_p0(_elements,spr_intScratch349,843)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch349].key);
             int spr_intScratch34b;spr_intScratch34b=iterator_pos;chck_accs_p0(_elements,spr_intScratch34b,845)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch34b].value);
             int spr_intScratch34d;spr_intScratch34d=iterator_pos;chck_accs_p0(_elements,spr_intScratch34d,847)
      iterator_next=_elements._theObject->_array[spr_intScratch34d].next;
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
          int spr_intScratch34f;spr_intScratch34f=pos;chck_accs_p0(bins,spr_intScratch34f,849)
          int spr_intScratch351;spr_intScratch351=pos;chck_accs_p0(bins,spr_intScratch351,851)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch34f].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch351].key,key)==0)){
             int spr_intScratch353;spr_intScratch353=pos;chck_accs_p0(bins,spr_intScratch353,853)
      SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=bins._theObject->_array[spr_intScratch353].next;
      if(entry==0U){
                int spr_intScratch355;spr_intScratch355=pos;chck_accs_p0(bins,spr_intScratch355,855)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch355].next=::new SPHT_Entry_String_16_int;
                int spr_intScratch357;spr_intScratch357=pos;chck_accs_p0(bins,spr_intScratch357,857)
         bins._theObject->_array[spr_intScratch357].next._theObject->is_used=1;
                int spr_intScratch359;spr_intScratch359=pos;chck_accs_p0(bins,spr_intScratch359,859)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch359].next._theObject->key,key);
                int spr_intScratch35b;spr_intScratch35b=pos;chck_accs_p0(bins,spr_intScratch35b,861)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch35b].next._theObject->value,value);
         
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
          int spr_intScratch35d;spr_intScratch35d=pos;chck_accs_p0(bins,spr_intScratch35d,863)
      bins._theObject->_array[spr_intScratch35d].is_used=1;
             int spr_intScratch35f;spr_intScratch35f=pos;chck_accs_p0(bins,spr_intScratch35f,865)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch35f].key,key);
             int spr_intScratch361;spr_intScratch361=pos;chck_accs_p0(bins,spr_intScratch361,867)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch361].value,value);
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
          int spr_intScratch363;spr_intScratch363=pos;chck_accs_p0(_elements,spr_intScratch363,869)
   if(_elements._theObject->_array[spr_intScratch363].is_used==1){
             int spr_intScratch365;spr_intScratch365=pos;chck_accs_p0(_elements,spr_intScratch365,871)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch365].key)==1){
                int spr_intScratch367;spr_intScratch367=pos;chck_accs_p0(_elements,spr_intScratch367,873)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch367].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch369;spr_intScratch369=pos;chck_accs_p0(_elements,spr_intScratch369,875)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch369].next;
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
         int spr_intScratch36b;
         spr_intScratch36b=newCap;
         if(spr_intScratch36b<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > newElements;newElements=new(spr_intScratch36b) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch36b)
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
          int spr_intScratch36c;spr_intScratch36c=pos;chck_accs_p0(_elements,spr_intScratch36c,878)
   if(_elements._theObject->_array[spr_intScratch36c].is_used==1){
             int spr_intScratch36e;spr_intScratch36e=pos;chck_accs_p0(_elements,spr_intScratch36e,880)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch36e].key,key)==0){
                int spr_intScratch370;spr_intScratch370=pos;chck_accs_p0(_elements,spr_intScratch370,882)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch370].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch372;spr_intScratch372=pos;chck_accs_p0(_elements,spr_intScratch372,884)
            _elements._theObject->_array[spr_intScratch372].next=entry._theObject->next;
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
             int spr_intScratch374;spr_intScratch374=pos;chck_accs_p0(_elements,spr_intScratch374,886)
         if(_elements._theObject->_array[spr_intScratch374].next!=0U){
                   int spr_intScratch376;spr_intScratch376=pos;chck_accs_p0(_elements,spr_intScratch376,888)
            SPRSmartPtr<SPHT_Entry_String_16_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch376].next;
                   int spr_intScratch378;spr_intScratch378=pos;chck_accs_p0(_elements,spr_intScratch378,890)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch378].key,entryNext._theObject->key);
                   int spr_intScratch37a;spr_intScratch37a=pos;chck_accs_p0(_elements,spr_intScratch37a,892)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch37a].value,entryNext._theObject->value);
                   int spr_intScratch37c;spr_intScratch37c=pos;chck_accs_p0(_elements,spr_intScratch37c,894)
            _elements._theObject->_array[spr_intScratch37c].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch37e;spr_intScratch37e=pos;chck_accs_p0(_elements,spr_intScratch37e,896)
            _elements._theObject->_array[spr_intScratch37e].is_used=0;
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
   int spr_intScratch380;
   spr_intScratch380=3;
   if(spr_intScratch380<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch380) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch380)
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
                int spr_intScratch381;spr_intScratch381=iterator_pos;chck_accs_p0(_elements,spr_intScratch381,899)
         if(_elements._theObject->_array[spr_intScratch381].is_used==0){
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
             int spr_intScratch383;spr_intScratch383=iterator_pos;chck_accs_p0(_elements,spr_intScratch383,901)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch383].key);
             int spr_intScratch385;spr_intScratch385=iterator_pos;chck_accs_p0(_elements,spr_intScratch385,903)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch385].value);
             int spr_intScratch387;spr_intScratch387=iterator_pos;chck_accs_p0(_elements,spr_intScratch387,905)
      iterator_next=_elements._theObject->_array[spr_intScratch387].next;
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
          int spr_intScratch389;spr_intScratch389=pos;chck_accs_p0(bins,spr_intScratch389,907)
          int spr_intScratch38b;spr_intScratch38b=pos;chck_accs_p0(bins,spr_intScratch38b,909)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch389].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch38b].key,key)==0)){
             int spr_intScratch38d;spr_intScratch38d=pos;chck_accs_p0(bins,spr_intScratch38d,911)
      SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=bins._theObject->_array[spr_intScratch38d].next;
      if(entry==0U){
                int spr_intScratch38f;spr_intScratch38f=pos;chck_accs_p0(bins,spr_intScratch38f,913)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch38f].next=::new SPHT_Entry_int_String_16;
                int spr_intScratch391;spr_intScratch391=pos;chck_accs_p0(bins,spr_intScratch391,915)
         bins._theObject->_array[spr_intScratch391].next._theObject->is_used=1;
                int spr_intScratch393;spr_intScratch393=pos;chck_accs_p0(bins,spr_intScratch393,917)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch393].next._theObject->key,key);
                int spr_intScratch395;spr_intScratch395=pos;chck_accs_p0(bins,spr_intScratch395,919)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch395].next._theObject->value,value);
         
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
          int spr_intScratch397;spr_intScratch397=pos;chck_accs_p0(bins,spr_intScratch397,921)
      bins._theObject->_array[spr_intScratch397].is_used=1;
             int spr_intScratch399;spr_intScratch399=pos;chck_accs_p0(bins,spr_intScratch399,923)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch399].key,key);
             int spr_intScratch39b;spr_intScratch39b=pos;chck_accs_p0(bins,spr_intScratch39b,925)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch39b].value,value);
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
          int spr_intScratch39d;spr_intScratch39d=pos;chck_accs_p0(_elements,spr_intScratch39d,927)
   if(_elements._theObject->_array[spr_intScratch39d].is_used==1){
             int spr_intScratch39f;spr_intScratch39f=pos;chck_accs_p0(_elements,spr_intScratch39f,929)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch39f].key)==1){
                int spr_intScratch3a1;spr_intScratch3a1=pos;chck_accs_p0(_elements,spr_intScratch3a1,931)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3a1].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3a3;spr_intScratch3a3=pos;chck_accs_p0(_elements,spr_intScratch3a3,933)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch3a3].next;
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
         int spr_intScratch3a5;
         spr_intScratch3a5=newCap;
         if(spr_intScratch3a5<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > newElements;newElements=new(spr_intScratch3a5) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch3a5)
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
          int spr_intScratch3a6;spr_intScratch3a6=pos;chck_accs_p0(_elements,spr_intScratch3a6,936)
   if(_elements._theObject->_array[spr_intScratch3a6].is_used==1){
             int spr_intScratch3a8;spr_intScratch3a8=pos;chck_accs_p0(_elements,spr_intScratch3a8,938)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3a8].key,key)==0){
                int spr_intScratch3aa;spr_intScratch3aa=pos;chck_accs_p0(_elements,spr_intScratch3aa,940)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch3aa].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3ac;spr_intScratch3ac=pos;chck_accs_p0(_elements,spr_intScratch3ac,942)
            _elements._theObject->_array[spr_intScratch3ac].next=entry._theObject->next;
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
             int spr_intScratch3ae;spr_intScratch3ae=pos;chck_accs_p0(_elements,spr_intScratch3ae,944)
         if(_elements._theObject->_array[spr_intScratch3ae].next!=0U){
                   int spr_intScratch3b0;spr_intScratch3b0=pos;chck_accs_p0(_elements,spr_intScratch3b0,946)
            SPRSmartPtr<SPHT_Entry_int_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3b0].next;
                   int spr_intScratch3b2;spr_intScratch3b2=pos;chck_accs_p0(_elements,spr_intScratch3b2,948)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3b2].key,entryNext._theObject->key);
                   int spr_intScratch3b4;spr_intScratch3b4=pos;chck_accs_p0(_elements,spr_intScratch3b4,950)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3b4].value,entryNext._theObject->value);
                   int spr_intScratch3b6;spr_intScratch3b6=pos;chck_accs_p0(_elements,spr_intScratch3b6,952)
            _elements._theObject->_array[spr_intScratch3b6].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch3b8;spr_intScratch3b8=pos;chck_accs_p0(_elements,spr_intScratch3b8,954)
            _elements._theObject->_array[spr_intScratch3b8].is_used=0;
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
   int spr_intScratch3ba;
   spr_intScratch3ba=3;
   if(spr_intScratch3ba<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch3ba) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch3ba)
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
                int spr_intScratch3bb;spr_intScratch3bb=iterator_pos;chck_accs_p0(_elements,spr_intScratch3bb,957)
         if(_elements._theObject->_array[spr_intScratch3bb].is_used==0){
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
             int spr_intScratch3bd;spr_intScratch3bd=iterator_pos;chck_accs_p0(_elements,spr_intScratch3bd,959)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3bd].key);
             int spr_intScratch3bf;spr_intScratch3bf=iterator_pos;chck_accs_p0(_elements,spr_intScratch3bf,961)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3bf].value);
             int spr_intScratch3c1;spr_intScratch3c1=iterator_pos;chck_accs_p0(_elements,spr_intScratch3c1,963)
      iterator_next=_elements._theObject->_array[spr_intScratch3c1].next;
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
          int spr_intScratch3c3;spr_intScratch3c3=pos;chck_accs_p0(bins,spr_intScratch3c3,965)
          int spr_intScratch3c5;spr_intScratch3c5=pos;chck_accs_p0(bins,spr_intScratch3c5,967)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch3c3].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch3c5].key,key)==0)){
             int spr_intScratch3c7;spr_intScratch3c7=pos;chck_accs_p0(bins,spr_intScratch3c7,969)
      SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=bins._theObject->_array[spr_intScratch3c7].next;
      if(entry==0U){
                int spr_intScratch3c9;spr_intScratch3c9=pos;chck_accs_p0(bins,spr_intScratch3c9,971)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch3c9].next=::new SPHT_Entry_String_16_double;
                int spr_intScratch3cb;spr_intScratch3cb=pos;chck_accs_p0(bins,spr_intScratch3cb,973)
         bins._theObject->_array[spr_intScratch3cb].next._theObject->is_used=1;
                int spr_intScratch3cd;spr_intScratch3cd=pos;chck_accs_p0(bins,spr_intScratch3cd,975)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3cd].next._theObject->key,key);
                int spr_intScratch3cf;spr_intScratch3cf=pos;chck_accs_p0(bins,spr_intScratch3cf,977)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3cf].next._theObject->value,value);
         
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
          int spr_intScratch3d1;spr_intScratch3d1=pos;chck_accs_p0(bins,spr_intScratch3d1,979)
      bins._theObject->_array[spr_intScratch3d1].is_used=1;
             int spr_intScratch3d3;spr_intScratch3d3=pos;chck_accs_p0(bins,spr_intScratch3d3,981)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3d3].key,key);
             int spr_intScratch3d5;spr_intScratch3d5=pos;chck_accs_p0(bins,spr_intScratch3d5,983)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3d5].value,value);
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
          int spr_intScratch3d7;spr_intScratch3d7=pos;chck_accs_p0(_elements,spr_intScratch3d7,985)
   if(_elements._theObject->_array[spr_intScratch3d7].is_used==1){
             int spr_intScratch3d9;spr_intScratch3d9=pos;chck_accs_p0(_elements,spr_intScratch3d9,987)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3d9].key)==1){
                int spr_intScratch3db;spr_intScratch3db=pos;chck_accs_p0(_elements,spr_intScratch3db,989)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3db].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3dd;spr_intScratch3dd=pos;chck_accs_p0(_elements,spr_intScratch3dd,991)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch3dd].next;
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
         int spr_intScratch3df;
         spr_intScratch3df=newCap;
         if(spr_intScratch3df<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > newElements;newElements=new(spr_intScratch3df) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch3df)
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
          int spr_intScratch3e0;spr_intScratch3e0=pos;chck_accs_p0(_elements,spr_intScratch3e0,994)
   if(_elements._theObject->_array[spr_intScratch3e0].is_used==1){
             int spr_intScratch3e2;spr_intScratch3e2=pos;chck_accs_p0(_elements,spr_intScratch3e2,996)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3e2].key,key)==0){
                int spr_intScratch3e4;spr_intScratch3e4=pos;chck_accs_p0(_elements,spr_intScratch3e4,998)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch3e4].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3e6;spr_intScratch3e6=pos;chck_accs_p0(_elements,spr_intScratch3e6,1000)
            _elements._theObject->_array[spr_intScratch3e6].next=entry._theObject->next;
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
             int spr_intScratch3e8;spr_intScratch3e8=pos;chck_accs_p0(_elements,spr_intScratch3e8,1002)
         if(_elements._theObject->_array[spr_intScratch3e8].next!=0U){
                   int spr_intScratch3ea;spr_intScratch3ea=pos;chck_accs_p0(_elements,spr_intScratch3ea,1004)
            SPRSmartPtr<SPHT_Entry_String_16_double> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3ea].next;
                   int spr_intScratch3ec;spr_intScratch3ec=pos;chck_accs_p0(_elements,spr_intScratch3ec,1006)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3ec].key,entryNext._theObject->key);
                   int spr_intScratch3ee;spr_intScratch3ee=pos;chck_accs_p0(_elements,spr_intScratch3ee,1008)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3ee].value,entryNext._theObject->value);
                   int spr_intScratch3f0;spr_intScratch3f0=pos;chck_accs_p0(_elements,spr_intScratch3f0,1010)
            _elements._theObject->_array[spr_intScratch3f0].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch3f2;spr_intScratch3f2=pos;chck_accs_p0(_elements,spr_intScratch3f2,1012)
            _elements._theObject->_array[spr_intScratch3f2].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

