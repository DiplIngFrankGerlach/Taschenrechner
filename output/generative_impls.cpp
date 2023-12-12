#include "stdafx.h"
#include "header.h"
String_16::String_16(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
          int spr_intScratch166;spr_intScratch166=0;chck_accs0(_preAllocBuf,spr_intScratch166,360)
   _preAllocBuf._array[spr_intScratch166]='\0';
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
          int spr_intScratch168;spr_intScratch168=0;chck_accs0(_preAllocBuf,spr_intScratch168,362)
   _preAllocBuf._array[spr_intScratch168]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch16a;strcpy(spr_StringScratch16a._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch16a);
   
   
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
          int spr_intScratch16b;spr_intScratch16b=0;chck_accs_p0(spalten,spr_intScratch16b,365)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch16b].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch16d;spr_intScratch16d=ausgStelle;chck_accs_p0(spalten,spr_intScratch16d,367)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch16d].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch16f;spr_intScratch16f=ausgStelle;chck_accs_p0(spalten,spr_intScratch16f,369)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch16f].append(stackStartPtr,z);
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
          int spr_intScratch171;spr_intScratch171=groesse;chck_accs_p0(buf,spr_intScratch171,371)
   while(buf._theObject->_array[spr_intScratch171]!='\0'){
      groesse++;
      spr_intScratch171=groesse;chck_accs_p0(buf,spr_intScratch171,371)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch173;spr_intScratch173=stelle;chck_accs_p0(buf,spr_intScratch173,373)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch173]);
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
          int spr_intScratch175;spr_intScratch175=groesse;chck_accs0(str,spr_intScratch175,375)
   while(str._array[spr_intScratch175]!='\0'){
      groesse++;
      spr_intScratch175=groesse;chck_accs0(str,spr_intScratch175,375)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch177;spr_intScratch177=stelle;chck_accs0(str,spr_intScratch177,377)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch177]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch179;spr_intScratch179=i+pos;chck_accs0(str,spr_intScratch179,379)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch179]);
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
             int spr_intScratch17b;spr_intScratch17b=_length;chck_accs0(_preAllocBuf,spr_intScratch17b,381)
      _preAllocBuf._array[spr_intScratch17b]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch17d;spr_intScratch17d=_length;chck_accs_p0(_extendedBuf,spr_intScratch17d,383)
      _extendedBuf._theObject->_array[spr_intScratch17d]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_16::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch17f;spr_intScratch17f=l;chck_accs0(str,spr_intScratch17f,385)
   while(str._array[spr_intScratch17f]!='\0'){
      l=l+1;
      spr_intScratch17f=l;chck_accs0(str,spr_intScratch17f,385)
      
   };
   return l;
   
   
} //End Of Method

void String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch181;spr_intScratch181=0;chck_accs_p0(_extendedBuf,spr_intScratch181,387)
      _extendedBuf._theObject->_array[spr_intScratch181]='\0';
      
   }
          int spr_intScratch183;spr_intScratch183=0;chck_accs0(_preAllocBuf,spr_intScratch183,389)
   _preAllocBuf._array[spr_intScratch183]='\0';
   
   
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
          int spr_intScratch185;spr_intScratch185=0;chck_accs0(_preAllocBuf,spr_intScratch185,391)
   _preAllocBuf._array[spr_intScratch185]='\0';
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch187;spr_intScratch187=i;chck_accs0(str,spr_intScratch187,393)
   while((i<str._sz)&&(str._array[spr_intScratch187]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch189;spr_intScratch189=i;chck_accs0(str,spr_intScratch189,395)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch189]){
         return 0;
         
      }
      i++;
      spr_intScratch187=i;chck_accs0(str,spr_intScratch187,393)
      
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
                int spr_intScratch18b;spr_intScratch18b=_length;chck_accs_p0(_extendedBuf,spr_intScratch18b,397)
         _extendedBuf._theObject->_array[spr_intScratch18b]=c;
         
      }
      else
      {
             int spr_intScratch18d;spr_intScratch18d=_length;chck_accs0(_preAllocBuf,spr_intScratch18d,399)
         _preAllocBuf._array[spr_intScratch18d]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch18f;spr_intScratch18f=_length;chck_accs_p0(_extendedBuf,spr_intScratch18f,401)
      _extendedBuf._theObject->_array[spr_intScratch18f]=c;
      _length++;
      }
   
   
} //End Of Method

char String_16::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch191;spr_intScratch191=i;chck_accs_p0(_extendedBuf,spr_intScratch191,403)
      return _extendedBuf._theObject->_array[spr_intScratch191];
      
   }
   else
   {
          int spr_intScratch193;spr_intScratch193=i;chck_accs0(_preAllocBuf,spr_intScratch193,405)
      return _preAllocBuf._array[spr_intScratch193];
      }
   return '0';
   
   
} //End Of Method

void String_16::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch195;spr_intScratch195=stelle;chck_accs_p0(_extendedBuf,spr_intScratch195,407)
      _extendedBuf._theObject->_array[spr_intScratch195]=zeichen;
      
   }
   else
   {
          int spr_intScratch197;spr_intScratch197=stelle;chck_accs0(_preAllocBuf,spr_intScratch197,409)
      _preAllocBuf._array[spr_intScratch197]=zeichen;
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
          int spr_intScratch199;spr_intScratch199=lother;chck_accs0(other,spr_intScratch199,411)
   while((lother<other._sz)&&(other._array[spr_intScratch199]!='\0')){
      lother++;
      spr_intScratch199=lother;chck_accs0(other,spr_intScratch199,411)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch19b;spr_intScratch19b=i;chck_accs0(other,spr_intScratch19b,413)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch19b]){
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
          int spr_intScratch19d;spr_intScratch19d=0;chck_accs0(buf,spr_intScratch19d,415)
   buf._array[spr_intScratch19d]='\0';
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
             int spr_intScratch19f;spr_intScratch19f=0;chck_accs0(feld,spr_intScratch19f,417)
      feld._array[spr_intScratch19f]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch1a1;spr_intScratch1a1=i;chck_accs0(feld,spr_intScratch1a1,419)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch1a1]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch1a3;spr_intScratch1a3=i;chck_accs0(feld,spr_intScratch1a3,421)
   feld._array[spr_intScratch1a3]='\0';
   
   
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
          int spr_intScratch1a5;spr_intScratch1a5=j;chck_accs0(end,spr_intScratch1a5,423)
   while((end._array[spr_intScratch1a5]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch1a5=j;chck_accs0(end,spr_intScratch1a5,423)
      
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
             int spr_intScratch1a7;spr_intScratch1a7=j;chck_accs0(end,spr_intScratch1a7,425)
      if(c!=end._array[spr_intScratch1a7]){
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
          int spr_intScratch1a9;spr_intScratch1a9=i;chck_accs0(buf,spr_intScratch1a9,427)
   while((i<l)&&(buf._array[spr_intScratch1a9]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1ab;spr_intScratch1ab=i;chck_accs0(buf,spr_intScratch1ab,429)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch1ab]){
         return 0;
         
      }
      i++;
      spr_intScratch1a9=i;chck_accs0(buf,spr_intScratch1a9,427)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch1ad;strcpy(spr_StringScratch1ad._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1ad);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1ae;strcpy(spr_StringScratch1ae._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1ae);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch1af;strcpy(spr_StringScratch1af._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch1af);
            
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
         int spr_intScratch1b0;
         spr_intScratch1b0=minCapacity*2;
         if(spr_intScratch1b0<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch1b0) SPRArray<char>(spr_intScratch1b0)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch1b1;spr_intScratch1b1=i;chck_accs_p0(_extendedBuf,spr_intScratch1b1,435)
                   int spr_intScratch1b3;spr_intScratch1b3=i;chck_accs0(_preAllocBuf,spr_intScratch1b3,437)
            _extendedBuf._theObject->_array[spr_intScratch1b1]=_preAllocBuf._array[spr_intScratch1b3];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch1b5;
            spr_intScratch1b5=minCapacity*2;
            if(spr_intScratch1b5<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch1b5) SPRArray<char>(spr_intScratch1b5)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch1b6;spr_intScratch1b6=i;chck_accs_p0(newBuf,spr_intScratch1b6,440)
                      int spr_intScratch1b8;spr_intScratch1b8=i;chck_accs_p0(_extendedBuf,spr_intScratch1b8,442)
               newBuf._theObject->_array[spr_intScratch1b6]=_extendedBuf._theObject->_array[spr_intScratch1b8];
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
          int spr_intScratch1ba;spr_intScratch1ba=0;chck_accs0(_preAllocBuf,spr_intScratch1ba,444)
   _preAllocBuf._array[spr_intScratch1ba]='\0';
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
          int spr_intScratch1bc;spr_intScratch1bc=0;chck_accs0(_preAllocBuf,spr_intScratch1bc,446)
   _preAllocBuf._array[spr_intScratch1bc]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch1be;strcpy(spr_StringScratch1be._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch1be);
   
   
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
          int spr_intScratch1bf;spr_intScratch1bf=0;chck_accs_p0(spalten,spr_intScratch1bf,449)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch1bf].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch1c1;spr_intScratch1c1=ausgStelle;chck_accs_p0(spalten,spr_intScratch1c1,451)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch1c1].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch1c3;spr_intScratch1c3=ausgStelle;chck_accs_p0(spalten,spr_intScratch1c3,453)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch1c3].append(stackStartPtr,z);
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
          int spr_intScratch1c5;spr_intScratch1c5=groesse;chck_accs_p0(buf,spr_intScratch1c5,455)
   while(buf._theObject->_array[spr_intScratch1c5]!='\0'){
      groesse++;
      spr_intScratch1c5=groesse;chck_accs_p0(buf,spr_intScratch1c5,455)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1c7;spr_intScratch1c7=stelle;chck_accs_p0(buf,spr_intScratch1c7,457)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch1c7]);
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
          int spr_intScratch1c9;spr_intScratch1c9=groesse;chck_accs0(str,spr_intScratch1c9,459)
   while(str._array[spr_intScratch1c9]!='\0'){
      groesse++;
      spr_intScratch1c9=groesse;chck_accs0(str,spr_intScratch1c9,459)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch1cb;spr_intScratch1cb=stelle;chck_accs0(str,spr_intScratch1cb,461)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1cb]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch1cd;spr_intScratch1cd=i+pos;chck_accs0(str,spr_intScratch1cd,463)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch1cd]);
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
             int spr_intScratch1cf;spr_intScratch1cf=_length;chck_accs0(_preAllocBuf,spr_intScratch1cf,465)
      _preAllocBuf._array[spr_intScratch1cf]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch1d1;spr_intScratch1d1=_length;chck_accs_p0(_extendedBuf,spr_intScratch1d1,467)
      _extendedBuf._theObject->_array[spr_intScratch1d1]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_32::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch1d3;spr_intScratch1d3=l;chck_accs0(str,spr_intScratch1d3,469)
   while(str._array[spr_intScratch1d3]!='\0'){
      l=l+1;
      spr_intScratch1d3=l;chck_accs0(str,spr_intScratch1d3,469)
      
   };
   return l;
   
   
} //End Of Method

void String_32::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch1d5;spr_intScratch1d5=0;chck_accs_p0(_extendedBuf,spr_intScratch1d5,471)
      _extendedBuf._theObject->_array[spr_intScratch1d5]='\0';
      
   }
          int spr_intScratch1d7;spr_intScratch1d7=0;chck_accs0(_preAllocBuf,spr_intScratch1d7,473)
   _preAllocBuf._array[spr_intScratch1d7]='\0';
   
   
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
          int spr_intScratch1d9;spr_intScratch1d9=0;chck_accs0(_preAllocBuf,spr_intScratch1d9,475)
   _preAllocBuf._array[spr_intScratch1d9]='\0';
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch1db;spr_intScratch1db=i;chck_accs0(str,spr_intScratch1db,477)
   while((i<str._sz)&&(str._array[spr_intScratch1db]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1dd;spr_intScratch1dd=i;chck_accs0(str,spr_intScratch1dd,479)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch1dd]){
         return 0;
         
      }
      i++;
      spr_intScratch1db=i;chck_accs0(str,spr_intScratch1db,477)
      
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
                int spr_intScratch1df;spr_intScratch1df=_length;chck_accs_p0(_extendedBuf,spr_intScratch1df,481)
         _extendedBuf._theObject->_array[spr_intScratch1df]=c;
         
      }
      else
      {
             int spr_intScratch1e1;spr_intScratch1e1=_length;chck_accs0(_preAllocBuf,spr_intScratch1e1,483)
         _preAllocBuf._array[spr_intScratch1e1]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch1e3;spr_intScratch1e3=_length;chck_accs_p0(_extendedBuf,spr_intScratch1e3,485)
      _extendedBuf._theObject->_array[spr_intScratch1e3]=c;
      _length++;
      }
   
   
} //End Of Method

char String_32::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch1e5;spr_intScratch1e5=i;chck_accs_p0(_extendedBuf,spr_intScratch1e5,487)
      return _extendedBuf._theObject->_array[spr_intScratch1e5];
      
   }
   else
   {
          int spr_intScratch1e7;spr_intScratch1e7=i;chck_accs0(_preAllocBuf,spr_intScratch1e7,489)
      return _preAllocBuf._array[spr_intScratch1e7];
      }
   return '0';
   
   
} //End Of Method

void String_32::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch1e9;spr_intScratch1e9=stelle;chck_accs_p0(_extendedBuf,spr_intScratch1e9,491)
      _extendedBuf._theObject->_array[spr_intScratch1e9]=zeichen;
      
   }
   else
   {
          int spr_intScratch1eb;spr_intScratch1eb=stelle;chck_accs0(_preAllocBuf,spr_intScratch1eb,493)
      _preAllocBuf._array[spr_intScratch1eb]=zeichen;
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
          int spr_intScratch1ed;spr_intScratch1ed=lother;chck_accs0(other,spr_intScratch1ed,495)
   while((lother<other._sz)&&(other._array[spr_intScratch1ed]!='\0')){
      lother++;
      spr_intScratch1ed=lother;chck_accs0(other,spr_intScratch1ed,495)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1ef;spr_intScratch1ef=i;chck_accs0(other,spr_intScratch1ef,497)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch1ef]){
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
          int spr_intScratch1f1;spr_intScratch1f1=0;chck_accs0(buf,spr_intScratch1f1,499)
   buf._array[spr_intScratch1f1]='\0';
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
             int spr_intScratch1f3;spr_intScratch1f3=0;chck_accs0(feld,spr_intScratch1f3,501)
      feld._array[spr_intScratch1f3]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch1f5;spr_intScratch1f5=i;chck_accs0(feld,spr_intScratch1f5,503)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch1f5]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch1f7;spr_intScratch1f7=i;chck_accs0(feld,spr_intScratch1f7,505)
   feld._array[spr_intScratch1f7]='\0';
   
   
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
          int spr_intScratch1f9;spr_intScratch1f9=j;chck_accs0(end,spr_intScratch1f9,507)
   while((end._array[spr_intScratch1f9]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch1f9=j;chck_accs0(end,spr_intScratch1f9,507)
      
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
             int spr_intScratch1fb;spr_intScratch1fb=j;chck_accs0(end,spr_intScratch1fb,509)
      if(c!=end._array[spr_intScratch1fb]){
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
          int spr_intScratch1fd;spr_intScratch1fd=i;chck_accs0(buf,spr_intScratch1fd,511)
   while((i<l)&&(buf._array[spr_intScratch1fd]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch1ff;spr_intScratch1ff=i;chck_accs0(buf,spr_intScratch1ff,513)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch1ff]){
         return 0;
         
      }
      i++;
      spr_intScratch1fd=i;chck_accs0(buf,spr_intScratch1fd,511)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch201;strcpy(spr_StringScratch201._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch201);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch202;strcpy(spr_StringScratch202._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch202);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch203;strcpy(spr_StringScratch203._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch203);
            
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
         int spr_intScratch204;
         spr_intScratch204=minCapacity*2;
         if(spr_intScratch204<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch204) SPRArray<char>(spr_intScratch204)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch205;spr_intScratch205=i;chck_accs_p0(_extendedBuf,spr_intScratch205,519)
                   int spr_intScratch207;spr_intScratch207=i;chck_accs0(_preAllocBuf,spr_intScratch207,521)
            _extendedBuf._theObject->_array[spr_intScratch205]=_preAllocBuf._array[spr_intScratch207];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch209;
            spr_intScratch209=minCapacity*2;
            if(spr_intScratch209<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch209) SPRArray<char>(spr_intScratch209)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch20a;spr_intScratch20a=i;chck_accs_p0(newBuf,spr_intScratch20a,524)
                      int spr_intScratch20c;spr_intScratch20c=i;chck_accs_p0(_extendedBuf,spr_intScratch20c,526)
               newBuf._theObject->_array[spr_intScratch20a]=_extendedBuf._theObject->_array[spr_intScratch20c];
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
          int spr_intScratch20e;spr_intScratch20e=0;chck_accs0(_preAllocBuf,spr_intScratch20e,528)
   _preAllocBuf._array[spr_intScratch20e]='\0';
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
          int spr_intScratch210;spr_intScratch210=0;chck_accs0(_preAllocBuf,spr_intScratch210,530)
   _preAllocBuf._array[spr_intScratch210]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch212;strcpy(spr_StringScratch212._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch212);
   
   
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
          int spr_intScratch213;spr_intScratch213=0;chck_accs_p0(spalten,spr_intScratch213,533)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch213].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch215;spr_intScratch215=ausgStelle;chck_accs_p0(spalten,spr_intScratch215,535)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch215].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch217;spr_intScratch217=ausgStelle;chck_accs_p0(spalten,spr_intScratch217,537)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch217].append(stackStartPtr,z);
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
          int spr_intScratch219;spr_intScratch219=groesse;chck_accs_p0(buf,spr_intScratch219,539)
   while(buf._theObject->_array[spr_intScratch219]!='\0'){
      groesse++;
      spr_intScratch219=groesse;chck_accs_p0(buf,spr_intScratch219,539)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch21b;spr_intScratch21b=stelle;chck_accs_p0(buf,spr_intScratch21b,541)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch21b]);
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
          int spr_intScratch21d;spr_intScratch21d=groesse;chck_accs0(str,spr_intScratch21d,543)
   while(str._array[spr_intScratch21d]!='\0'){
      groesse++;
      spr_intScratch21d=groesse;chck_accs0(str,spr_intScratch21d,543)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch21f;spr_intScratch21f=stelle;chck_accs0(str,spr_intScratch21f,545)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch21f]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch221;spr_intScratch221=i+pos;chck_accs0(str,spr_intScratch221,547)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch221]);
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
             int spr_intScratch223;spr_intScratch223=_length;chck_accs0(_preAllocBuf,spr_intScratch223,549)
      _preAllocBuf._array[spr_intScratch223]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch225;spr_intScratch225=_length;chck_accs_p0(_extendedBuf,spr_intScratch225,551)
      _extendedBuf._theObject->_array[spr_intScratch225]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_64::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch227;spr_intScratch227=l;chck_accs0(str,spr_intScratch227,553)
   while(str._array[spr_intScratch227]!='\0'){
      l=l+1;
      spr_intScratch227=l;chck_accs0(str,spr_intScratch227,553)
      
   };
   return l;
   
   
} //End Of Method

void String_64::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch229;spr_intScratch229=0;chck_accs_p0(_extendedBuf,spr_intScratch229,555)
      _extendedBuf._theObject->_array[spr_intScratch229]='\0';
      
   }
          int spr_intScratch22b;spr_intScratch22b=0;chck_accs0(_preAllocBuf,spr_intScratch22b,557)
   _preAllocBuf._array[spr_intScratch22b]='\0';
   
   
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
          int spr_intScratch22d;spr_intScratch22d=0;chck_accs0(_preAllocBuf,spr_intScratch22d,559)
   _preAllocBuf._array[spr_intScratch22d]='\0';
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch22f;spr_intScratch22f=i;chck_accs0(str,spr_intScratch22f,561)
   while((i<str._sz)&&(str._array[spr_intScratch22f]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch231;spr_intScratch231=i;chck_accs0(str,spr_intScratch231,563)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch231]){
         return 0;
         
      }
      i++;
      spr_intScratch22f=i;chck_accs0(str,spr_intScratch22f,561)
      
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
                int spr_intScratch233;spr_intScratch233=_length;chck_accs_p0(_extendedBuf,spr_intScratch233,565)
         _extendedBuf._theObject->_array[spr_intScratch233]=c;
         
      }
      else
      {
             int spr_intScratch235;spr_intScratch235=_length;chck_accs0(_preAllocBuf,spr_intScratch235,567)
         _preAllocBuf._array[spr_intScratch235]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch237;spr_intScratch237=_length;chck_accs_p0(_extendedBuf,spr_intScratch237,569)
      _extendedBuf._theObject->_array[spr_intScratch237]=c;
      _length++;
      }
   
   
} //End Of Method

char String_64::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch239;spr_intScratch239=i;chck_accs_p0(_extendedBuf,spr_intScratch239,571)
      return _extendedBuf._theObject->_array[spr_intScratch239];
      
   }
   else
   {
          int spr_intScratch23b;spr_intScratch23b=i;chck_accs0(_preAllocBuf,spr_intScratch23b,573)
      return _preAllocBuf._array[spr_intScratch23b];
      }
   return '0';
   
   
} //End Of Method

void String_64::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch23d;spr_intScratch23d=stelle;chck_accs_p0(_extendedBuf,spr_intScratch23d,575)
      _extendedBuf._theObject->_array[spr_intScratch23d]=zeichen;
      
   }
   else
   {
          int spr_intScratch23f;spr_intScratch23f=stelle;chck_accs0(_preAllocBuf,spr_intScratch23f,577)
      _preAllocBuf._array[spr_intScratch23f]=zeichen;
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
          int spr_intScratch241;spr_intScratch241=lother;chck_accs0(other,spr_intScratch241,579)
   while((lother<other._sz)&&(other._array[spr_intScratch241]!='\0')){
      lother++;
      spr_intScratch241=lother;chck_accs0(other,spr_intScratch241,579)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch243;spr_intScratch243=i;chck_accs0(other,spr_intScratch243,581)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch243]){
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
          int spr_intScratch245;spr_intScratch245=0;chck_accs0(buf,spr_intScratch245,583)
   buf._array[spr_intScratch245]='\0';
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
             int spr_intScratch247;spr_intScratch247=0;chck_accs0(feld,spr_intScratch247,585)
      feld._array[spr_intScratch247]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch249;spr_intScratch249=i;chck_accs0(feld,spr_intScratch249,587)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch249]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch24b;spr_intScratch24b=i;chck_accs0(feld,spr_intScratch24b,589)
   feld._array[spr_intScratch24b]='\0';
   
   
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
          int spr_intScratch24d;spr_intScratch24d=j;chck_accs0(end,spr_intScratch24d,591)
   while((end._array[spr_intScratch24d]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch24d=j;chck_accs0(end,spr_intScratch24d,591)
      
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
             int spr_intScratch24f;spr_intScratch24f=j;chck_accs0(end,spr_intScratch24f,593)
      if(c!=end._array[spr_intScratch24f]){
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
          int spr_intScratch251;spr_intScratch251=i;chck_accs0(buf,spr_intScratch251,595)
   while((i<l)&&(buf._array[spr_intScratch251]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch253;spr_intScratch253=i;chck_accs0(buf,spr_intScratch253,597)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch253]){
         return 0;
         
      }
      i++;
      spr_intScratch251=i;chck_accs0(buf,spr_intScratch251,595)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch255;strcpy(spr_StringScratch255._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch255);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch256;strcpy(spr_StringScratch256._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch256);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch257;strcpy(spr_StringScratch257._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch257);
            
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
         int spr_intScratch258;
         spr_intScratch258=minCapacity*2;
         if(spr_intScratch258<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch258) SPRArray<char>(spr_intScratch258)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch259;spr_intScratch259=i;chck_accs_p0(_extendedBuf,spr_intScratch259,603)
                   int spr_intScratch25b;spr_intScratch25b=i;chck_accs0(_preAllocBuf,spr_intScratch25b,605)
            _extendedBuf._theObject->_array[spr_intScratch259]=_preAllocBuf._array[spr_intScratch25b];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch25d;
            spr_intScratch25d=minCapacity*2;
            if(spr_intScratch25d<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch25d) SPRArray<char>(spr_intScratch25d)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch25e;spr_intScratch25e=i;chck_accs_p0(newBuf,spr_intScratch25e,608)
                      int spr_intScratch260;spr_intScratch260=i;chck_accs_p0(_extendedBuf,spr_intScratch260,610)
               newBuf._theObject->_array[spr_intScratch25e]=_extendedBuf._theObject->_array[spr_intScratch260];
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
          int spr_intScratch262;spr_intScratch262=0;chck_accs0(_preAllocBuf,spr_intScratch262,612)
   _preAllocBuf._array[spr_intScratch262]='\0';
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
          int spr_intScratch264;spr_intScratch264=0;chck_accs0(_preAllocBuf,spr_intScratch264,614)
   _preAllocBuf._array[spr_intScratch264]='\0';
   SPRStackArrayConcrete<char,2> spr_StringScratch266;strcpy(spr_StringScratch266._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch266);
   
   
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
          int spr_intScratch267;spr_intScratch267=0;chck_accs_p0(spalten,spr_intScratch267,617)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   spalten._theObject->_array[spr_intScratch267].clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((ausgStelle<spalten._theObject->_sz)&&(stelle<this->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char z;z=this->getAt(stackStartPtr,stelle);
      if(z==trenner){
         ausgStelle++;
         if(ausgStelle<spalten._theObject->_sz){
                   int spr_intScratch269;spr_intScratch269=ausgStelle;chck_accs_p0(spalten,spr_intScratch269,619)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            spalten._theObject->_array[spr_intScratch269].clear(stackStartPtr);
            
         }
         
      }
      else
      {
             int spr_intScratch26b;spr_intScratch26b=ausgStelle;chck_accs_p0(spalten,spr_intScratch26b,621)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         spalten._theObject->_array[spr_intScratch26b].append(stackStartPtr,z);
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
          int spr_intScratch26d;spr_intScratch26d=groesse;chck_accs_p0(buf,spr_intScratch26d,623)
   while(buf._theObject->_array[spr_intScratch26d]!='\0'){
      groesse++;
      spr_intScratch26d=groesse;chck_accs_p0(buf,spr_intScratch26d,623)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch26f;spr_intScratch26f=stelle;chck_accs_p0(buf,spr_intScratch26f,625)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf._theObject->_array[spr_intScratch26f]);
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
          int spr_intScratch271;spr_intScratch271=groesse;chck_accs0(str,spr_intScratch271,627)
   while(str._array[spr_intScratch271]!='\0'){
      groesse++;
      spr_intScratch271=groesse;chck_accs0(str,spr_intScratch271,627)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->ensureCapacity(stackStartPtr,_length+groesse);
   int stelle;
   {//begin of SPR for statement
   stelle=0;
   while(stelle<groesse){
             int spr_intScratch273;spr_intScratch273=stelle;chck_accs0(str,spr_intScratch273,629)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch273]);
      stelle++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch275;spr_intScratch275=i+pos;chck_accs0(str,spr_intScratch275,631)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,str._array[spr_intScratch275]);
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
             int spr_intScratch277;spr_intScratch277=_length;chck_accs0(_preAllocBuf,spr_intScratch277,633)
      _preAllocBuf._array[spr_intScratch277]='\0';
      ::printf("%s",_preAllocBuf._array);
      
   }
   else
   {
          int spr_intScratch279;spr_intScratch279=_length;chck_accs_p0(_extendedBuf,spr_intScratch279,635)
      _extendedBuf._theObject->_array[spr_intScratch279]='\0';
      ::printf("%s",_extendedBuf._theObject->_array);
      }
   
   
} //End Of Method

int String_128::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch27b;spr_intScratch27b=l;chck_accs0(str,spr_intScratch27b,637)
   while(str._array[spr_intScratch27b]!='\0'){
      l=l+1;
      spr_intScratch27b=l;chck_accs0(str,spr_intScratch27b,637)
      
   };
   return l;
   
   
} //End Of Method

void String_128::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch27d;spr_intScratch27d=0;chck_accs_p0(_extendedBuf,spr_intScratch27d,639)
      _extendedBuf._theObject->_array[spr_intScratch27d]='\0';
      
   }
          int spr_intScratch27f;spr_intScratch27f=0;chck_accs0(_preAllocBuf,spr_intScratch27f,641)
   _preAllocBuf._array[spr_intScratch27f]='\0';
   
   
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
          int spr_intScratch281;spr_intScratch281=0;chck_accs0(_preAllocBuf,spr_intScratch281,643)
   _preAllocBuf._array[spr_intScratch281]='\0';
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch283;spr_intScratch283=i;chck_accs0(str,spr_intScratch283,645)
   while((i<str._sz)&&(str._array[spr_intScratch283]!='\0')&&(i<_length)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch285;spr_intScratch285=i;chck_accs0(str,spr_intScratch285,647)
      if(this->getAt(stackStartPtr,i)!=str._array[spr_intScratch285]){
         return 0;
         
      }
      i++;
      spr_intScratch283=i;chck_accs0(str,spr_intScratch283,645)
      
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
                int spr_intScratch287;spr_intScratch287=_length;chck_accs_p0(_extendedBuf,spr_intScratch287,649)
         _extendedBuf._theObject->_array[spr_intScratch287]=c;
         
      }
      else
      {
             int spr_intScratch289;spr_intScratch289=_length;chck_accs0(_preAllocBuf,spr_intScratch289,651)
         _preAllocBuf._array[spr_intScratch289]=c;
         }
      _length++;
      
   }
   else
   {
   if(_extendedBuf._theObject->_sz<=_length){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->ensureCapacity(stackStartPtr,_length*2);
         
      }
             int spr_intScratch28b;spr_intScratch28b=_length;chck_accs_p0(_extendedBuf,spr_intScratch28b,653)
      _extendedBuf._theObject->_array[spr_intScratch28b]=c;
      _length++;
      }
   
   
} //End Of Method

char String_128::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch28d;spr_intScratch28d=i;chck_accs_p0(_extendedBuf,spr_intScratch28d,655)
      return _extendedBuf._theObject->_array[spr_intScratch28d];
      
   }
   else
   {
          int spr_intScratch28f;spr_intScratch28f=i;chck_accs0(_preAllocBuf,spr_intScratch28f,657)
      return _preAllocBuf._array[spr_intScratch28f];
      }
   return '0';
   
   
} //End Of Method

void String_128::setAt(char* stackStartPtr,int stelle,char zeichen){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch291;spr_intScratch291=stelle;chck_accs_p0(_extendedBuf,spr_intScratch291,659)
      _extendedBuf._theObject->_array[spr_intScratch291]=zeichen;
      
   }
   else
   {
          int spr_intScratch293;spr_intScratch293=stelle;chck_accs0(_preAllocBuf,spr_intScratch293,661)
      _preAllocBuf._array[spr_intScratch293]=zeichen;
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
          int spr_intScratch295;spr_intScratch295=lother;chck_accs0(other,spr_intScratch295,663)
   while((lother<other._sz)&&(other._array[spr_intScratch295]!='\0')){
      lother++;
      spr_intScratch295=lother;chck_accs0(other,spr_intScratch295,663)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch297;spr_intScratch297=i;chck_accs0(other,spr_intScratch297,665)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch297]){
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
          int spr_intScratch299;spr_intScratch299=0;chck_accs0(buf,spr_intScratch299,667)
   buf._array[spr_intScratch299]='\0';
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
             int spr_intScratch29b;spr_intScratch29b=0;chck_accs0(feld,spr_intScratch29b,669)
      feld._array[spr_intScratch29b]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch29d;spr_intScratch29d=i;chck_accs0(feld,spr_intScratch29d,671)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch29d]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch29f;spr_intScratch29f=i;chck_accs0(feld,spr_intScratch29f,673)
   feld._array[spr_intScratch29f]='\0';
   
   
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
          int spr_intScratch2a1;spr_intScratch2a1=j;chck_accs0(end,spr_intScratch2a1,675)
   while((end._array[spr_intScratch2a1]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch2a1=j;chck_accs0(end,spr_intScratch2a1,675)
      
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
             int spr_intScratch2a3;spr_intScratch2a3=j;chck_accs0(end,spr_intScratch2a3,677)
      if(c!=end._array[spr_intScratch2a3]){
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
          int spr_intScratch2a5;spr_intScratch2a5=i;chck_accs0(buf,spr_intScratch2a5,679)
   while((i<l)&&(buf._array[spr_intScratch2a5]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2a7;spr_intScratch2a7=i;chck_accs0(buf,spr_intScratch2a7,681)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch2a7]){
         return 0;
         
      }
      i++;
      spr_intScratch2a5=i;chck_accs0(buf,spr_intScratch2a5,679)
      
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
            SPRStackArrayConcrete<char,4> spr_StringScratch2a9;strcpy(spr_StringScratch2a9._array,"ae");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2a9);
            
         };break;
         
         case 0xFC:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2aa;strcpy(spr_StringScratch2aa._array,"ue");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2aa);
            
         };break;
         
         case 0xF6:{
            SPRStackArrayConcrete<char,4> spr_StringScratch2ab;strcpy(spr_StringScratch2ab._array,"oe");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ausgabe.append(stackStartPtr,spr_StringScratch2ab);
            
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
         int spr_intScratch2ac;
         spr_intScratch2ac=minCapacity*2;
         if(spr_intScratch2ac<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch2ac) SPRArray<char>(spr_intScratch2ac)
         ;
         int i;
         {//begin of SPR for statement
         i=0;
         while(i<_length){
                   int spr_intScratch2ad;spr_intScratch2ad=i;chck_accs_p0(_extendedBuf,spr_intScratch2ad,687)
                   int spr_intScratch2af;spr_intScratch2af=i;chck_accs0(_preAllocBuf,spr_intScratch2af,689)
            _extendedBuf._theObject->_array[spr_intScratch2ad]=_preAllocBuf._array[spr_intScratch2af];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      if(_extendedBuf._theObject->_sz<minCapacity){
            int spr_intScratch2b1;
            spr_intScratch2b1=minCapacity*2;
            if(spr_intScratch2b1<0)throw "invalid size requested for heap allocation";
            SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch2b1) SPRArray<char>(spr_intScratch2b1)
            ;
            int i;
            {//begin of SPR for statement
            i=0;
            while(i<_length){
                      int spr_intScratch2b2;spr_intScratch2b2=i;chck_accs_p0(newBuf,spr_intScratch2b2,692)
                      int spr_intScratch2b4;spr_intScratch2b4=i;chck_accs_p0(_extendedBuf,spr_intScratch2b4,694)
               newBuf._theObject->_array[spr_intScratch2b2]=_extendedBuf._theObject->_array[spr_intScratch2b4];
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
   int spr_intScratch2b6;
   spr_intScratch2b6=initialCapacity;
   if(spr_intScratch2b6<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch2b6) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch2b6)
   ;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   int minCap;minCap=((int)_numUsed*1.2f+2);
   if(_elements._theObject->_sz<=minCap){
      int newCap;newCap=_elements._theObject->_sz*2;
      SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > oldArray;
      oldArray=_elements;
      int spr_intScratch2b7;
      spr_intScratch2b7=newCap;
      if(spr_intScratch2b7<0)throw "invalid size requested for heap allocation";
      _elements=new(spr_intScratch2b7) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch2b7)
      ;
      {//begin of SPR for statement
      int i;i=0;
      while(i<oldArray._theObject->_sz){
                int spr_intScratch2b8;spr_intScratch2b8=i;chck_accs_p0(oldArray,spr_intScratch2b8,698)
         if(oldArray._theObject->_array[spr_intScratch2b8]!=0U){
                   int spr_intScratch2ba;spr_intScratch2ba=i;chck_accs_p0(oldArray,spr_intScratch2ba,700)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,oldArray._theObject->_array[spr_intScratch2ba]);
            
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
          int spr_intScratch2bc;spr_intScratch2bc=code;chck_accs_p0(_elements,spr_intScratch2bc,702)
   while(_elements._theObject->_array[spr_intScratch2bc]!=0U){
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch2bc=code;chck_accs_p0(_elements,spr_intScratch2bc,702)
      
   };
          int spr_intScratch2be;spr_intScratch2be=code;chck_accs_p0(_elements,spr_intScratch2be,704)
   _elements._theObject->_array[spr_intScratch2be]=x;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key.getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
   int searching;searching=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
          int spr_intScratch2c6;do{
             int spr_intScratch2c0;spr_intScratch2c0=code;chck_accs_p0(_elements,spr_intScratch2c0,706)
      if(_elements._theObject->_array[spr_intScratch2c0]!=0U){
         SPRSmartPtr<KeyType4> key2;
                int spr_intScratch2c2;spr_intScratch2c2=code;chck_accs_p0(_elements,spr_intScratch2c2,708)
         _elements._theObject->_array[spr_intScratch2c2]._theObject->getKey(stackStartPtr,key2);
         if(key2._theObject->compare(stackStartPtr,key)==1){
                   int spr_intScratch2c4;spr_intScratch2c4=code;chck_accs_p0(_elements,spr_intScratch2c4,710)
            oValue=_elements._theObject->_array[spr_intScratch2c4];
            searching=0;
            
         }
         
      }
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch2c6=code;chck_accs_p0(_elements,spr_intScratch2c6,712)
      
   }
   while((_elements._theObject->_array[spr_intScratch2c6]!=0U)&&(searching==1));
   
   
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
             int spr_intScratch2c8;spr_intScratch2c8=_readPtr;chck_accs_p0(_elements,spr_intScratch2c8,714)
      if(_elements._theObject->_array[spr_intScratch2c8]==0U){
         _readPtr++;
         
      }
      else
      {
      stepping=0;
         }
      
   };
   if(_readPtr<_elements._theObject->_sz){
             int spr_intScratch2ca;spr_intScratch2ca=_readPtr;chck_accs_p0(_elements,spr_intScratch2ca,716)
      oValue=_elements._theObject->_array[spr_intScratch2ca];
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
             int spr_intScratch2cc;spr_intScratch2cc=i;chck_accs_p0(_elements,spr_intScratch2cc,718)
      _elements._theObject->_array[spr_intScratch2cc]=0U;
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
   int spr_intScratch2ce;
   spr_intScratch2ce=3;
   if(spr_intScratch2ce<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch2ce) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch2ce)
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
                int spr_intScratch2cf;spr_intScratch2cf=iterator_pos;chck_accs_p0(_elements,spr_intScratch2cf,721)
         if(_elements._theObject->_array[spr_intScratch2cf].is_used==0){
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
             int spr_intScratch2d1;spr_intScratch2d1=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d1,723)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch2d1].key);
             int spr_intScratch2d3;spr_intScratch2d3=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d3,725)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch2d3].value);
             int spr_intScratch2d5;spr_intScratch2d5=iterator_pos;chck_accs_p0(_elements,spr_intScratch2d5,727)
      iterator_next=_elements._theObject->_array[spr_intScratch2d5].next;
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
          int spr_intScratch2d7;spr_intScratch2d7=pos;chck_accs_p0(bins,spr_intScratch2d7,729)
          int spr_intScratch2d9;spr_intScratch2d9=pos;chck_accs_p0(bins,spr_intScratch2d9,731)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch2d7].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch2d9].key,key)==0)){
             int spr_intScratch2db;spr_intScratch2db=pos;chck_accs_p0(bins,spr_intScratch2db,733)
      SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=bins._theObject->_array[spr_intScratch2db].next;
      if(entry==0U){
                int spr_intScratch2dd;spr_intScratch2dd=pos;chck_accs_p0(bins,spr_intScratch2dd,735)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch2dd].next=::new SPHT_Entry_String_16_String_16;
                int spr_intScratch2df;spr_intScratch2df=pos;chck_accs_p0(bins,spr_intScratch2df,737)
         bins._theObject->_array[spr_intScratch2df].next._theObject->is_used=1;
                int spr_intScratch2e1;spr_intScratch2e1=pos;chck_accs_p0(bins,spr_intScratch2e1,739)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2e1].next._theObject->key,key);
                int spr_intScratch2e3;spr_intScratch2e3=pos;chck_accs_p0(bins,spr_intScratch2e3,741)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2e3].next._theObject->value,value);
         
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
          int spr_intScratch2e5;spr_intScratch2e5=pos;chck_accs_p0(bins,spr_intScratch2e5,743)
      bins._theObject->_array[spr_intScratch2e5].is_used=1;
             int spr_intScratch2e7;spr_intScratch2e7=pos;chck_accs_p0(bins,spr_intScratch2e7,745)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2e7].key,key);
             int spr_intScratch2e9;spr_intScratch2e9=pos;chck_accs_p0(bins,spr_intScratch2e9,747)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch2e9].value,value);
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
          int spr_intScratch2eb;spr_intScratch2eb=pos;chck_accs_p0(_elements,spr_intScratch2eb,749)
   if(_elements._theObject->_array[spr_intScratch2eb].is_used==1){
             int spr_intScratch2ed;spr_intScratch2ed=pos;chck_accs_p0(_elements,spr_intScratch2ed,751)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch2ed].key)==1){
                int spr_intScratch2ef;spr_intScratch2ef=pos;chck_accs_p0(_elements,spr_intScratch2ef,753)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch2ef].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch2f1;spr_intScratch2f1=pos;chck_accs_p0(_elements,spr_intScratch2f1,755)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch2f1].next;
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
         int spr_intScratch2f3;
         spr_intScratch2f3=newCap;
         if(spr_intScratch2f3<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > newElements;newElements=new(spr_intScratch2f3) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch2f3)
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
          int spr_intScratch2f4;spr_intScratch2f4=pos;chck_accs_p0(_elements,spr_intScratch2f4,758)
   if(_elements._theObject->_array[spr_intScratch2f4].is_used==1){
             int spr_intScratch2f6;spr_intScratch2f6=pos;chck_accs_p0(_elements,spr_intScratch2f6,760)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch2f6].key,key)==0){
                int spr_intScratch2f8;spr_intScratch2f8=pos;chck_accs_p0(_elements,spr_intScratch2f8,762)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch2f8].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch2fa;spr_intScratch2fa=pos;chck_accs_p0(_elements,spr_intScratch2fa,764)
            _elements._theObject->_array[spr_intScratch2fa].next=entry._theObject->next;
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
             int spr_intScratch2fc;spr_intScratch2fc=pos;chck_accs_p0(_elements,spr_intScratch2fc,766)
         if(_elements._theObject->_array[spr_intScratch2fc].next!=0U){
                   int spr_intScratch2fe;spr_intScratch2fe=pos;chck_accs_p0(_elements,spr_intScratch2fe,768)
            SPRSmartPtr<SPHT_Entry_String_16_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch2fe].next;
                   int spr_intScratch300;spr_intScratch300=pos;chck_accs_p0(_elements,spr_intScratch300,770)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch300].key,entryNext._theObject->key);
                   int spr_intScratch302;spr_intScratch302=pos;chck_accs_p0(_elements,spr_intScratch302,772)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch302].value,entryNext._theObject->value);
                   int spr_intScratch304;spr_intScratch304=pos;chck_accs_p0(_elements,spr_intScratch304,774)
            _elements._theObject->_array[spr_intScratch304].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch306;spr_intScratch306=pos;chck_accs_p0(_elements,spr_intScratch306,776)
            _elements._theObject->_array[spr_intScratch306].is_used=0;
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
   int spr_intScratch308;
   spr_intScratch308=3;
   if(spr_intScratch308<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch308) SPRArray<SPHT_Entry_int_int>(spr_intScratch308)
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
                int spr_intScratch309;spr_intScratch309=iterator_pos;chck_accs_p0(_elements,spr_intScratch309,779)
         if(_elements._theObject->_array[spr_intScratch309].is_used==0){
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
             int spr_intScratch30b;spr_intScratch30b=iterator_pos;chck_accs_p0(_elements,spr_intScratch30b,781)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch30b].key);
             int spr_intScratch30d;spr_intScratch30d=iterator_pos;chck_accs_p0(_elements,spr_intScratch30d,783)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch30d].value);
             int spr_intScratch30f;spr_intScratch30f=iterator_pos;chck_accs_p0(_elements,spr_intScratch30f,785)
      iterator_next=_elements._theObject->_array[spr_intScratch30f].next;
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
          int spr_intScratch311;spr_intScratch311=pos;chck_accs_p0(bins,spr_intScratch311,787)
          int spr_intScratch313;spr_intScratch313=pos;chck_accs_p0(bins,spr_intScratch313,789)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch311].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch313].key,key)==0)){
             int spr_intScratch315;spr_intScratch315=pos;chck_accs_p0(bins,spr_intScratch315,791)
      SPRSmartPtr<SPHT_Entry_int_int> entry;entry=bins._theObject->_array[spr_intScratch315].next;
      if(entry==0U){
                int spr_intScratch317;spr_intScratch317=pos;chck_accs_p0(bins,spr_intScratch317,793)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch317].next=::new SPHT_Entry_int_int;
                int spr_intScratch319;spr_intScratch319=pos;chck_accs_p0(bins,spr_intScratch319,795)
         bins._theObject->_array[spr_intScratch319].next._theObject->is_used=1;
                int spr_intScratch31b;spr_intScratch31b=pos;chck_accs_p0(bins,spr_intScratch31b,797)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch31b].next._theObject->key,key);
                int spr_intScratch31d;spr_intScratch31d=pos;chck_accs_p0(bins,spr_intScratch31d,799)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch31d].next._theObject->value,value);
         
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
          int spr_intScratch31f;spr_intScratch31f=pos;chck_accs_p0(bins,spr_intScratch31f,801)
      bins._theObject->_array[spr_intScratch31f].is_used=1;
             int spr_intScratch321;spr_intScratch321=pos;chck_accs_p0(bins,spr_intScratch321,803)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch321].key,key);
             int spr_intScratch323;spr_intScratch323=pos;chck_accs_p0(bins,spr_intScratch323,805)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch323].value,value);
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
          int spr_intScratch325;spr_intScratch325=pos;chck_accs_p0(_elements,spr_intScratch325,807)
   if(_elements._theObject->_array[spr_intScratch325].is_used==1){
             int spr_intScratch327;spr_intScratch327=pos;chck_accs_p0(_elements,spr_intScratch327,809)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch327].key)==1){
                int spr_intScratch329;spr_intScratch329=pos;chck_accs_p0(_elements,spr_intScratch329,811)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch329].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch32b;spr_intScratch32b=pos;chck_accs_p0(_elements,spr_intScratch32b,813)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch32b].next;
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
         int spr_intScratch32d;
         spr_intScratch32d=newCap;
         if(spr_intScratch32d<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > newElements;newElements=new(spr_intScratch32d) SPRArray<SPHT_Entry_int_int>(spr_intScratch32d)
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
          int spr_intScratch32e;spr_intScratch32e=pos;chck_accs_p0(_elements,spr_intScratch32e,816)
   if(_elements._theObject->_array[spr_intScratch32e].is_used==1){
             int spr_intScratch330;spr_intScratch330=pos;chck_accs_p0(_elements,spr_intScratch330,818)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch330].key,key)==0){
                int spr_intScratch332;spr_intScratch332=pos;chck_accs_p0(_elements,spr_intScratch332,820)
         SPRSmartPtr<SPHT_Entry_int_int> entry;entry=_elements._theObject->_array[spr_intScratch332].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch334;spr_intScratch334=pos;chck_accs_p0(_elements,spr_intScratch334,822)
            _elements._theObject->_array[spr_intScratch334].next=entry._theObject->next;
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
             int spr_intScratch336;spr_intScratch336=pos;chck_accs_p0(_elements,spr_intScratch336,824)
         if(_elements._theObject->_array[spr_intScratch336].next!=0U){
                   int spr_intScratch338;spr_intScratch338=pos;chck_accs_p0(_elements,spr_intScratch338,826)
            SPRSmartPtr<SPHT_Entry_int_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch338].next;
                   int spr_intScratch33a;spr_intScratch33a=pos;chck_accs_p0(_elements,spr_intScratch33a,828)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch33a].key,entryNext._theObject->key);
                   int spr_intScratch33c;spr_intScratch33c=pos;chck_accs_p0(_elements,spr_intScratch33c,830)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch33c].value,entryNext._theObject->value);
                   int spr_intScratch33e;spr_intScratch33e=pos;chck_accs_p0(_elements,spr_intScratch33e,832)
            _elements._theObject->_array[spr_intScratch33e].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch340;spr_intScratch340=pos;chck_accs_p0(_elements,spr_intScratch340,834)
            _elements._theObject->_array[spr_intScratch340].is_used=0;
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
   int spr_intScratch342;
   spr_intScratch342=3;
   if(spr_intScratch342<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch342) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch342)
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
                int spr_intScratch343;spr_intScratch343=iterator_pos;chck_accs_p0(_elements,spr_intScratch343,837)
         if(_elements._theObject->_array[spr_intScratch343].is_used==0){
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
             int spr_intScratch345;spr_intScratch345=iterator_pos;chck_accs_p0(_elements,spr_intScratch345,839)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch345].key);
             int spr_intScratch347;spr_intScratch347=iterator_pos;chck_accs_p0(_elements,spr_intScratch347,841)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch347].value);
             int spr_intScratch349;spr_intScratch349=iterator_pos;chck_accs_p0(_elements,spr_intScratch349,843)
      iterator_next=_elements._theObject->_array[spr_intScratch349].next;
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
          int spr_intScratch34b;spr_intScratch34b=pos;chck_accs_p0(bins,spr_intScratch34b,845)
          int spr_intScratch34d;spr_intScratch34d=pos;chck_accs_p0(bins,spr_intScratch34d,847)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch34b].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch34d].key,key)==0)){
             int spr_intScratch34f;spr_intScratch34f=pos;chck_accs_p0(bins,spr_intScratch34f,849)
      SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=bins._theObject->_array[spr_intScratch34f].next;
      if(entry==0U){
                int spr_intScratch351;spr_intScratch351=pos;chck_accs_p0(bins,spr_intScratch351,851)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch351].next=::new SPHT_Entry_String_16_int;
                int spr_intScratch353;spr_intScratch353=pos;chck_accs_p0(bins,spr_intScratch353,853)
         bins._theObject->_array[spr_intScratch353].next._theObject->is_used=1;
                int spr_intScratch355;spr_intScratch355=pos;chck_accs_p0(bins,spr_intScratch355,855)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch355].next._theObject->key,key);
                int spr_intScratch357;spr_intScratch357=pos;chck_accs_p0(bins,spr_intScratch357,857)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch357].next._theObject->value,value);
         
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
          int spr_intScratch359;spr_intScratch359=pos;chck_accs_p0(bins,spr_intScratch359,859)
      bins._theObject->_array[spr_intScratch359].is_used=1;
             int spr_intScratch35b;spr_intScratch35b=pos;chck_accs_p0(bins,spr_intScratch35b,861)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch35b].key,key);
             int spr_intScratch35d;spr_intScratch35d=pos;chck_accs_p0(bins,spr_intScratch35d,863)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch35d].value,value);
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
          int spr_intScratch35f;spr_intScratch35f=pos;chck_accs_p0(_elements,spr_intScratch35f,865)
   if(_elements._theObject->_array[spr_intScratch35f].is_used==1){
             int spr_intScratch361;spr_intScratch361=pos;chck_accs_p0(_elements,spr_intScratch361,867)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch361].key)==1){
                int spr_intScratch363;spr_intScratch363=pos;chck_accs_p0(_elements,spr_intScratch363,869)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch363].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch365;spr_intScratch365=pos;chck_accs_p0(_elements,spr_intScratch365,871)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch365].next;
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
         int spr_intScratch367;
         spr_intScratch367=newCap;
         if(spr_intScratch367<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > newElements;newElements=new(spr_intScratch367) SPRArray<SPHT_Entry_String_16_int>(spr_intScratch367)
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
          int spr_intScratch368;spr_intScratch368=pos;chck_accs_p0(_elements,spr_intScratch368,874)
   if(_elements._theObject->_array[spr_intScratch368].is_used==1){
             int spr_intScratch36a;spr_intScratch36a=pos;chck_accs_p0(_elements,spr_intScratch36a,876)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch36a].key,key)==0){
                int spr_intScratch36c;spr_intScratch36c=pos;chck_accs_p0(_elements,spr_intScratch36c,878)
         SPRSmartPtr<SPHT_Entry_String_16_int> entry;entry=_elements._theObject->_array[spr_intScratch36c].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch36e;spr_intScratch36e=pos;chck_accs_p0(_elements,spr_intScratch36e,880)
            _elements._theObject->_array[spr_intScratch36e].next=entry._theObject->next;
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
             int spr_intScratch370;spr_intScratch370=pos;chck_accs_p0(_elements,spr_intScratch370,882)
         if(_elements._theObject->_array[spr_intScratch370].next!=0U){
                   int spr_intScratch372;spr_intScratch372=pos;chck_accs_p0(_elements,spr_intScratch372,884)
            SPRSmartPtr<SPHT_Entry_String_16_int> entryNext;entryNext=_elements._theObject->_array[spr_intScratch372].next;
                   int spr_intScratch374;spr_intScratch374=pos;chck_accs_p0(_elements,spr_intScratch374,886)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch374].key,entryNext._theObject->key);
                   int spr_intScratch376;spr_intScratch376=pos;chck_accs_p0(_elements,spr_intScratch376,888)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch376].value,entryNext._theObject->value);
                   int spr_intScratch378;spr_intScratch378=pos;chck_accs_p0(_elements,spr_intScratch378,890)
            _elements._theObject->_array[spr_intScratch378].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch37a;spr_intScratch37a=pos;chck_accs_p0(_elements,spr_intScratch37a,892)
            _elements._theObject->_array[spr_intScratch37a].is_used=0;
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
   int spr_intScratch37c;
   spr_intScratch37c=3;
   if(spr_intScratch37c<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch37c) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch37c)
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
                int spr_intScratch37d;spr_intScratch37d=iterator_pos;chck_accs_p0(_elements,spr_intScratch37d,895)
         if(_elements._theObject->_array[spr_intScratch37d].is_used==0){
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
             int spr_intScratch37f;spr_intScratch37f=iterator_pos;chck_accs_p0(_elements,spr_intScratch37f,897)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch37f].key);
             int spr_intScratch381;spr_intScratch381=iterator_pos;chck_accs_p0(_elements,spr_intScratch381,899)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch381].value);
             int spr_intScratch383;spr_intScratch383=iterator_pos;chck_accs_p0(_elements,spr_intScratch383,901)
      iterator_next=_elements._theObject->_array[spr_intScratch383].next;
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
          int spr_intScratch385;spr_intScratch385=pos;chck_accs_p0(bins,spr_intScratch385,903)
          int spr_intScratch387;spr_intScratch387=pos;chck_accs_p0(bins,spr_intScratch387,905)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch385].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch387].key,key)==0)){
             int spr_intScratch389;spr_intScratch389=pos;chck_accs_p0(bins,spr_intScratch389,907)
      SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=bins._theObject->_array[spr_intScratch389].next;
      if(entry==0U){
                int spr_intScratch38b;spr_intScratch38b=pos;chck_accs_p0(bins,spr_intScratch38b,909)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch38b].next=::new SPHT_Entry_int_String_16;
                int spr_intScratch38d;spr_intScratch38d=pos;chck_accs_p0(bins,spr_intScratch38d,911)
         bins._theObject->_array[spr_intScratch38d].next._theObject->is_used=1;
                int spr_intScratch38f;spr_intScratch38f=pos;chck_accs_p0(bins,spr_intScratch38f,913)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch38f].next._theObject->key,key);
                int spr_intScratch391;spr_intScratch391=pos;chck_accs_p0(bins,spr_intScratch391,915)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch391].next._theObject->value,value);
         
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
          int spr_intScratch393;spr_intScratch393=pos;chck_accs_p0(bins,spr_intScratch393,917)
      bins._theObject->_array[spr_intScratch393].is_used=1;
             int spr_intScratch395;spr_intScratch395=pos;chck_accs_p0(bins,spr_intScratch395,919)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch395].key,key);
             int spr_intScratch397;spr_intScratch397=pos;chck_accs_p0(bins,spr_intScratch397,921)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch397].value,value);
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
          int spr_intScratch399;spr_intScratch399=pos;chck_accs_p0(_elements,spr_intScratch399,923)
   if(_elements._theObject->_array[spr_intScratch399].is_used==1){
             int spr_intScratch39b;spr_intScratch39b=pos;chck_accs_p0(_elements,spr_intScratch39b,925)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch39b].key)==1){
                int spr_intScratch39d;spr_intScratch39d=pos;chck_accs_p0(_elements,spr_intScratch39d,927)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch39d].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch39f;spr_intScratch39f=pos;chck_accs_p0(_elements,spr_intScratch39f,929)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch39f].next;
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
         int spr_intScratch3a1;
         spr_intScratch3a1=newCap;
         if(spr_intScratch3a1<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > newElements;newElements=new(spr_intScratch3a1) SPRArray<SPHT_Entry_int_String_16>(spr_intScratch3a1)
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
          int spr_intScratch3a2;spr_intScratch3a2=pos;chck_accs_p0(_elements,spr_intScratch3a2,932)
   if(_elements._theObject->_array[spr_intScratch3a2].is_used==1){
             int spr_intScratch3a4;spr_intScratch3a4=pos;chck_accs_p0(_elements,spr_intScratch3a4,934)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3a4].key,key)==0){
                int spr_intScratch3a6;spr_intScratch3a6=pos;chck_accs_p0(_elements,spr_intScratch3a6,936)
         SPRSmartPtr<SPHT_Entry_int_String_16> entry;entry=_elements._theObject->_array[spr_intScratch3a6].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3a8;spr_intScratch3a8=pos;chck_accs_p0(_elements,spr_intScratch3a8,938)
            _elements._theObject->_array[spr_intScratch3a8].next=entry._theObject->next;
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
             int spr_intScratch3aa;spr_intScratch3aa=pos;chck_accs_p0(_elements,spr_intScratch3aa,940)
         if(_elements._theObject->_array[spr_intScratch3aa].next!=0U){
                   int spr_intScratch3ac;spr_intScratch3ac=pos;chck_accs_p0(_elements,spr_intScratch3ac,942)
            SPRSmartPtr<SPHT_Entry_int_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3ac].next;
                   int spr_intScratch3ae;spr_intScratch3ae=pos;chck_accs_p0(_elements,spr_intScratch3ae,944)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3ae].key,entryNext._theObject->key);
                   int spr_intScratch3b0;spr_intScratch3b0=pos;chck_accs_p0(_elements,spr_intScratch3b0,946)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3b0].value,entryNext._theObject->value);
                   int spr_intScratch3b2;spr_intScratch3b2=pos;chck_accs_p0(_elements,spr_intScratch3b2,948)
            _elements._theObject->_array[spr_intScratch3b2].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch3b4;spr_intScratch3b4=pos;chck_accs_p0(_elements,spr_intScratch3b4,950)
            _elements._theObject->_array[spr_intScratch3b4].is_used=0;
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
   int spr_intScratch3b6;
   spr_intScratch3b6=3;
   if(spr_intScratch3b6<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch3b6) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch3b6)
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
                int spr_intScratch3b7;spr_intScratch3b7=iterator_pos;chck_accs_p0(_elements,spr_intScratch3b7,953)
         if(_elements._theObject->_array[spr_intScratch3b7].is_used==0){
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
             int spr_intScratch3b9;spr_intScratch3b9=iterator_pos;chck_accs_p0(_elements,spr_intScratch3b9,955)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3b9].key);
             int spr_intScratch3bb;spr_intScratch3bb=iterator_pos;chck_accs_p0(_elements,spr_intScratch3bb,957)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3bb].value);
             int spr_intScratch3bd;spr_intScratch3bd=iterator_pos;chck_accs_p0(_elements,spr_intScratch3bd,959)
      iterator_next=_elements._theObject->_array[spr_intScratch3bd].next;
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
          int spr_intScratch3bf;spr_intScratch3bf=pos;chck_accs_p0(bins,spr_intScratch3bf,961)
          int spr_intScratch3c1;spr_intScratch3c1=pos;chck_accs_p0(bins,spr_intScratch3c1,963)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch3bf].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratch3c1].key,key)==0)){
             int spr_intScratch3c3;spr_intScratch3c3=pos;chck_accs_p0(bins,spr_intScratch3c3,965)
      SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=bins._theObject->_array[spr_intScratch3c3].next;
      if(entry==0U){
                int spr_intScratch3c5;spr_intScratch3c5=pos;chck_accs_p0(bins,spr_intScratch3c5,967)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratch3c5].next=::new SPHT_Entry_String_16_double;
                int spr_intScratch3c7;spr_intScratch3c7=pos;chck_accs_p0(bins,spr_intScratch3c7,969)
         bins._theObject->_array[spr_intScratch3c7].next._theObject->is_used=1;
                int spr_intScratch3c9;spr_intScratch3c9=pos;chck_accs_p0(bins,spr_intScratch3c9,971)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3c9].next._theObject->key,key);
                int spr_intScratch3cb;spr_intScratch3cb=pos;chck_accs_p0(bins,spr_intScratch3cb,973)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3cb].next._theObject->value,value);
         
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
          int spr_intScratch3cd;spr_intScratch3cd=pos;chck_accs_p0(bins,spr_intScratch3cd,975)
      bins._theObject->_array[spr_intScratch3cd].is_used=1;
             int spr_intScratch3cf;spr_intScratch3cf=pos;chck_accs_p0(bins,spr_intScratch3cf,977)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3cf].key,key);
             int spr_intScratch3d1;spr_intScratch3d1=pos;chck_accs_p0(bins,spr_intScratch3d1,979)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch3d1].value,value);
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
          int spr_intScratch3d3;spr_intScratch3d3=pos;chck_accs_p0(_elements,spr_intScratch3d3,981)
   if(_elements._theObject->_array[spr_intScratch3d3].is_used==1){
             int spr_intScratch3d5;spr_intScratch3d5=pos;chck_accs_p0(_elements,spr_intScratch3d5,983)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3d5].key)==1){
                int spr_intScratch3d7;spr_intScratch3d7=pos;chck_accs_p0(_elements,spr_intScratch3d7,985)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch3d7].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch3d9;spr_intScratch3d9=pos;chck_accs_p0(_elements,spr_intScratch3d9,987)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch3d9].next;
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
         int spr_intScratch3db;
         spr_intScratch3db=newCap;
         if(spr_intScratch3db<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > newElements;newElements=new(spr_intScratch3db) SPRArray<SPHT_Entry_String_16_double>(spr_intScratch3db)
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
          int spr_intScratch3dc;spr_intScratch3dc=pos;chck_accs_p0(_elements,spr_intScratch3dc,990)
   if(_elements._theObject->_array[spr_intScratch3dc].is_used==1){
             int spr_intScratch3de;spr_intScratch3de=pos;chck_accs_p0(_elements,spr_intScratch3de,992)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch3de].key,key)==0){
                int spr_intScratch3e0;spr_intScratch3e0=pos;chck_accs_p0(_elements,spr_intScratch3e0,994)
         SPRSmartPtr<SPHT_Entry_String_16_double> entry;entry=_elements._theObject->_array[spr_intScratch3e0].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch3e2;spr_intScratch3e2=pos;chck_accs_p0(_elements,spr_intScratch3e2,996)
            _elements._theObject->_array[spr_intScratch3e2].next=entry._theObject->next;
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
             int spr_intScratch3e4;spr_intScratch3e4=pos;chck_accs_p0(_elements,spr_intScratch3e4,998)
         if(_elements._theObject->_array[spr_intScratch3e4].next!=0U){
                   int spr_intScratch3e6;spr_intScratch3e6=pos;chck_accs_p0(_elements,spr_intScratch3e6,1000)
            SPRSmartPtr<SPHT_Entry_String_16_double> entryNext;entryNext=_elements._theObject->_array[spr_intScratch3e6].next;
                   int spr_intScratch3e8;spr_intScratch3e8=pos;chck_accs_p0(_elements,spr_intScratch3e8,1002)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3e8].key,entryNext._theObject->key);
                   int spr_intScratch3ea;spr_intScratch3ea=pos;chck_accs_p0(_elements,spr_intScratch3ea,1004)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch3ea].value,entryNext._theObject->value);
                   int spr_intScratch3ec;spr_intScratch3ec=pos;chck_accs_p0(_elements,spr_intScratch3ec,1006)
            _elements._theObject->_array[spr_intScratch3ec].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch3ee;spr_intScratch3ee=pos;chck_accs_p0(_elements,spr_intScratch3ee,1008)
            _elements._theObject->_array[spr_intScratch3ee].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

