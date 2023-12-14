#include "stdafx.h"
#include "header.h"
ThreadInfo::ThreadInfo(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _threadID=((longlong)-1);
   
   
} //End Of Method

longlong ThreadInfo::getThreadID(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRMTLock externalMethodLock(this);
   return _threadID;
   
   
} //End Of Method

void ThreadInfo::threadMain(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRMTLock externalMethodLock(this);
   
   
} //End Of Method

void ThreadInfo::join(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRMTLock externalMethodLock(this);
   
              #ifdef WIN32_X86
              WaitForSingleObject((HANDLE)_threadID,INFINITE);
              #endif
              #ifdef SPR_PTHREAD 
              pthread_join((pthread_t)_threadID,NULL);
              #endif
        
   
   
} //End Of Method

PrintfClass& PrintfClass::fstr(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _fstr.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _fstr.append(stackStartPtr,str);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _outBuf.clear(stackStartPtr);
   _fstrIdx=0;
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int lFstr;lFstr=_fstr.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((lFstr>_fstrIdx)&&(_fstr.getAt(stackStartPtr,_fstrIdx)!='$')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      _outBuf.append(stackStartPtr,_fstr.getAt(stackStartPtr,_fstrIdx));
      _fstrIdx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _outBuf.append(stackStartPtr,str);
   _fstrIdx++;
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buffer;
          int spr_intScratchb1;spr_intScratchb1=0;chck_accs0(buffer,spr_intScratchb1,179)
   buffer._array[spr_intScratchb1]=c;
          int spr_intScratchb3;spr_intScratchb3=1;chck_accs0(buffer,spr_intScratchb3,181)
   buffer._array[spr_intScratchb3]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buffer);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,int num){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
   
          snprintf(buf._array,16,"%i",num);
      
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buf);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,int num,int base,int numChars){
   char SPR_stack_dummy_var;
   String_16 zk;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,((longlong)num),base);
   String_16 zkWithLeadingNull;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int anzFehlend;anzFehlend=numChars-zk.length(stackStartPtr);
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzFehlend){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      zkWithLeadingNull.append(stackStartPtr,'0');
      i++;
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zkWithLeadingNull.append(stackStartPtr,zk);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,zkWithLeadingNull);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,longlong num){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,20> buf;
   
          snprintf(buf._array,20,"%lli",num);
      
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buf);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,String_16& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(bufferDyn._theObject->_sz<=str.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int newSize;newSize=(str.length(stackStartPtr)+1)*2;
      int spr_intScratchb5;
      spr_intScratchb5=newSize;
      if(spr_intScratchb5<0)throw "invalid size requested for heap allocation";
      bufferDyn=new(spr_intScratchb5) SPRArray<char>(spr_intScratchb5)
      ;
      
   }
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<str.length(stackStartPtr)){
             int spr_intScratchb6;spr_intScratchb6=i;chck_accs_p0(bufferDyn,spr_intScratchb6,184)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      bufferDyn._theObject->_array[spr_intScratchb6]=str.getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratchb8;spr_intScratchb8=i;chck_accs_p0(bufferDyn,spr_intScratchb8,186)
   bufferDyn._theObject->_array[spr_intScratchb8]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,bufferDyn);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,SPRSmartPtr<String_16> str){
   char SPR_stack_dummy_var;
   String_16 temp;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   temp.append(stackStartPtr,str);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,temp);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,float num){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,32> buf;
   
         snprintf(buf._array,32,"%f",num);
      
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buf);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,double num){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,32> buf;
   
         snprintf(buf._array,32,"%.10f",num);
      
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buf);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int lFstr;lFstr=_fstr.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((lFstr>_fstrIdx)&&(_fstr.getAt(stackStartPtr,_fstrIdx)!='$')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      _outBuf.append(stackStartPtr,_fstr.getAt(stackStartPtr,_fstrIdx));
      _fstrIdx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _outBuf.append(stackStartPtr,str);
   _fstrIdx++;
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::saExp(char* stackStartPtr,double num){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,32> buf;
   
         snprintf(buf._array,32,"%1.8e",num);
      
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buf);
   return *this;
   
   
} //End Of Method

void PrintfClass::pr(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int lFstr;lFstr=_fstr.length(stackStartPtr);
   while(lFstr>_fstrIdx){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      _outBuf.append(stackStartPtr,_fstr.getAt(stackStartPtr,_fstrIdx));
      _fstrIdx++;
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _outBuf.print(stackStartPtr);
   
   
} //End Of Method

void PrintfClass::prNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int lFstr;lFstr=_fstr.length(stackStartPtr);
   while(lFstr>_fstrIdx){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      _outBuf.append(stackStartPtr,_fstr.getAt(stackStartPtr,_fstrIdx));
      _fstrIdx++;
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _outBuf.printNoLF(stackStartPtr);
   
   
} //End Of Method

void PrintfClass::prHex(char* stackStartPtr,char x){
   char SPR_stack_dummy_var;
   
        printf("%.2x",128+(unsigned int)x);
      
   
   
} //End Of Method

void ThreadLocalStorage::getEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry>& ret){
   char SPR_stack_dummy_var;
   SPRSmartPtr<ThreadLocalStorageList> list;list=0U;
   
             #ifdef WIN32_X86
             list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
             #endif
             #ifdef SPR_PTHREAD
             list=(ThreadLocalStorageList*)pthread_getspecific((pthread_key_t)__spr_tls);
             #endif
       
          int spr_intScratchba;spr_intScratchba=id;chck_accs0(list._theObject->_entries,spr_intScratchba,188)
   ret=list._theObject->_entries._array[spr_intScratchba];
   
   
} //End Of Method

void ThreadLocalStorage::setEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry> entry){
   char SPR_stack_dummy_var;
   SPRSmartPtr<ThreadLocalStorageList> list;list=0U;
   
             #ifdef WIN32_X86
             list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
             #endif
             #ifdef SPR_PTHREAD
             list=(ThreadLocalStorageList*)pthread_getspecific((pthread_key_t)__spr_tls);
             #endif
       
          int spr_intScratchbc;spr_intScratchbc=id;chck_accs0(list._theObject->_entries,spr_intScratchbc,190)
   list._theObject->_entries._array[spr_intScratchbc]=entry;
   
   
} //End Of Method

SPRFile::SPRFile(char* stackStartPtr,SPRStackArray<char>& path,int readonly){
   char SPR_stack_dummy_var;
   _handle=-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->oeffne(stackStartPtr,path,readonly,0);
   
   
} //End Of Method

SPRFile::SPRFile(char* stackStartPtr,String_16& pfad,int readonly){
   char SPR_stack_dummy_var;
   _handle=-1;
   SPRStackArrayConcrete<char,400> puffer;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfad.toCharArray(stackStartPtr,puffer);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->oeffne(stackStartPtr,puffer,readonly,0);
   
   
} //End Of Method

SPRFile::SPRFile(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _handle=-1;
   
   
} //End Of Method

int SPRFile::oeffne(char* stackStartPtr,String_16& dateiName,SPRFile_Mode modus){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->close(stackStartPtr);
   SPRStackArrayConcrete<char,400> puffer;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   dateiName.toCharArray(stackStartPtr,puffer);
   switch(modus){
      case SF_Readonly:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         return this->oeffne(stackStartPtr,puffer,1,0);
         
      };break;
      
      case SF_ReadWrite:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         return this->oeffne(stackStartPtr,puffer,0,0);
         
      };break;
      
      case SF_ReadWriteTruncated:{
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         return this->oeffne(stackStartPtr,puffer,0,1);
         
      };break;
      
      
   }
   return -1;
   
   
} //End Of Method

int SPRFile::oeffne(char* stackStartPtr,SPRStackArray<char>& path,int readonly,int neueLoeschen){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->close(stackStartPtr);
   
           if( readonly != 0)
           {
               _handle=_open(path._array,O_RDONLY|O_BINARY);
           }
           else
           {
               int flags = O_RDWR|O_CREAT|O_BINARY;
               if( neueLoeschen == 1 )
               {
                  flags = flags | O_TRUNC;
               }
               _handle=_open(path._array,flags,0700);
           }
           if(_handle<0)
           {
              //perror("SPRFile::SPRFile() 1");
              //printf("filename:%sn",path._array);
              return 0;
           }
       
   return 1;
   
   
} //End Of Method

int SPRFile::systemHandle(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return _handle;
   
   
} //End Of Method

int SPRFile::read(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer){
   char SPR_stack_dummy_var;
   if(_handle<0){
      return _handle;
      
   }
   int ret;
   
        _lseek(_handle,pos,SEEK_SET);
        if(buffer._sz<count)
          count=buffer._sz;
        ret=_read(_handle,buffer._array,count);//no ampersand here !!
      
   return ret;
   
   
} //End Of Method

int SPRFile::read(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer){
   char SPR_stack_dummy_var;
   if(_handle<0){
      return _handle;
      
   }
   if(buffer==0U){
      return -1;
      
   }
   int ret;
   
        _lseek(_handle,pos,SEEK_SET);
        if(buffer._theObject->_sz<count)
          count=buffer._theObject->_sz;
        ret=_read(_handle,&buffer._theObject->_array,count);
      
   return ret;
   
   
} //End Of Method

int SPRFile::write(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer){
   char SPR_stack_dummy_var;
   if(_handle<0){
      return _handle;
      
   }
   int ret;
   int oktetsGeschrieben;oktetsGeschrieben=0;
   
        if(_lseek(_handle,pos,SEEK_SET)!=pos)
        {
           perror("SPRFile::write()/lseek");
           return -1;
        }
        while(oktetsGeschrieben < count )
        {
           ret=_write(_handle,buffer._array,count);
           if( ret > 0 )
           {
              oktetsGeschrieben = oktetsGeschrieben + ret;
           }
           else { return -1;}
        }
      
   return oktetsGeschrieben;
   
   
} //End Of Method

int SPRFile::write(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer){
   char SPR_stack_dummy_var;
   if(_handle<0){
      return _handle;
      
   }
   if(buffer==0U){
      return -1;
      
   }
   int ret;
   
        if(_lseek(_handle,pos,SEEK_SET)!=pos)
        {
           perror("SPRFile::write()/lseek");
        }
        if(buffer._theObject->_sz<count)
        {
           count=buffer._theObject->_sz;
        }
        ret=_write(_handle,buffer._theObject->_array,count);
      
   return ret;
   
   
} //End Of Method

int SPRFile::schreibeAlles(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buffer,int stelleEingabe,int stelleAusgabe,int anzahl){
   char SPR_stack_dummy_var;
   int summeGeschrieben;summeGeschrieben=0;
   int ret;
   do{
      
               if(_lseek(_handle,stelleAusgabe,SEEK_SET) != stelleAusgabe)
               {
                  perror("SPRFile::write()/lseek");
                  return 0;
               }
               if(buffer._theObject->_sz<(anzahl+stelleEingabe))
               {
                  return 0;
               }
               ret = _write(_handle,
                            buffer._theObject->_array+stelleEingabe+summeGeschrieben,
                            anzahl-stelleEingabe-summeGeschrieben);
               if( ret > 0 )
               {
                  summeGeschrieben += ret;
               }
             
      
   }
   while((ret>0)&&(summeGeschrieben<anzahl));
   if(summeGeschrieben<anzahl){
      return 0;
      
   }
   return 1;
   
   
} //End Of Method

int SPRFile::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_handle<0){
      return _handle;
      
   }
   int ret;
   
          ret=_lseek(_handle,0,SEEK_END);
      
   return ret;
   
   
} //End Of Method

void SPRFile::close(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_handle<0){
      return ;
      
   }
    _close(_handle);
   _handle=-1;
   
   
} //End Of Method

SPRFile::~SPRFile(){
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
   this->close(stackStartPtr);
   
   
} //End Of Method

int SPRFile::readLine(char* stackStartPtr,String_16& oLine){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oLine.clear(stackStartPtr);
   char c;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   do{
      if(this->readChar(stackStartPtr,c)!=1){
         if(oLine.length(stackStartPtr)==0){
            return 0;
            
         }
         else
         {
         return 1;
            }
         
      }
      if(c=='\n'){
         return 1;
         
      }
      if(c!=13){
         oLine.append(stackStartPtr,c);
         
      }
      else
      {
      this->readChar(stackStartPtr,c);
         if(c!='\n'){
            return -2;
            
         }
         return 1;
         }
      
   }
   while(1==1);
   return 1;
   
   
} //End Of Method

int SPRFile::readChar(char* stackStartPtr,char& out){
   char SPR_stack_dummy_var;
   if(_readBuffer==0U){
      int spr_intScratchbe;
      spr_intScratchbe=16000;
      if(spr_intScratchbe<0)throw "invalid size requested for heap allocation";
      _readBuffer=new(spr_intScratchbe) SPRArray<char>(spr_intScratchbe)
      ;
      _validBytes=0;
      _readPtr=0;
      _fpos=0;
      
   }
   if(_validBytes<=_readPtr){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      _validBytes=this->read(stackStartPtr,_fpos,_readBuffer._theObject->_sz,_readBuffer);
      if(_validBytes==0){
         return 0;
         
      }
      if(_validBytes<0){
         return -1;
         
      }
      _readPtr=0;
      _fpos=_fpos+_validBytes;
      
   }
          int spr_intScratchbf;spr_intScratchbf=_readPtr;chck_accs_p0(_readBuffer,spr_intScratchbf,193)
   out=_readBuffer._theObject->_array[spr_intScratchbf];
   _readPtr++;
   return 1;
   
   
} //End Of Method

void SPRFile::__test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,29> spr_StringScratchc1;strcpy(spr_StringScratchc1._array,"c:\\temp\\spr_test_file.txt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile f(stackStartPtr,spr_StringScratchc1,0);
   SPRStackArrayConcrete<char,12> spr_StringScratchc2;strcpy(spr_StringScratchc2._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,0,10,spr_StringScratchc2);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=10){
      SPRStackArrayConcrete<char,36> spr_StringScratchc3;strcpy(spr_StringScratchc3._array,"SPRFile::__test() step 1 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratchc4;strcpy(spr_StringScratchc4._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchc3).sa(stackStartPtr,spr_StringScratchc4).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratchc5;strcpy(spr_StringScratchc5._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,10,10,spr_StringScratchc5);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20){
      SPRStackArrayConcrete<char,36> spr_StringScratchc6;strcpy(spr_StringScratchc6._array,"SPRFile::__test() step 2 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratchc7;strcpy(spr_StringScratchc7._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchc6).sa(stackStartPtr,spr_StringScratchc7).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<1000){
      SPRStackArrayConcrete<char,22> spr_StringScratchc8;strcpy(spr_StringScratchc8._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.write(stackStartPtr,i*20+20,20,spr_StringScratchc8);
      i++;
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20020){
      SPRStackArrayConcrete<char,36> spr_StringScratchc9;strcpy(spr_StringScratchc9._array,"SPRFile::__test() step 3 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratchca;strcpy(spr_StringScratchca._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchc9).sa(stackStartPtr,spr_StringScratchca).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<10){
      SPRStackArrayConcrete<char,2> buf;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.read(stackStartPtr,i,1,buf);
      char c;c=((char)i+((int)'0'));
             int spr_intScratchcb;spr_intScratchcb=0;chck_accs0(buf,spr_intScratchcb,205)
      if(buf._array[spr_intScratchcb]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratchcd;strcpy(spr_StringScratchcd._array,"SPRFile::__test() step 4 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratchce;strcpy(spr_StringScratchce._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchcd).sa(stackStartPtr,spr_StringScratchce).pr(stackStartPtr);
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   {//begin of SPR for statement
   int i;i=0;
   while(i<10){
      SPRStackArrayConcrete<char,2> buf;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.read(stackStartPtr,i+10,1,buf);
      char c;c=((char)i+((int)'0'));
             int spr_intScratchcf;spr_intScratchcf=0;chck_accs0(buf,spr_intScratchcf,209)
      if(buf._array[spr_intScratchcf]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratchd1;strcpy(spr_StringScratchd1._array,"SPRFile::__test() step 5 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratchd2;strcpy(spr_StringScratchd2._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchd1).sa(stackStartPtr,spr_StringScratchd2).pr(stackStartPtr);
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   {//begin of SPR for statement
   int i;i=0;
   while(i<1000){
      SPRStackArrayConcrete<char,21> buf;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.read(stackStartPtr,i*20+20,20,buf);
             int spr_intScratchd3;spr_intScratchd3=20;chck_accs0(buf,spr_intScratchd3,213)
      buf._array[spr_intScratchd3]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 str(stackStartPtr,buf);
      SPRStackArrayConcrete<char,22> spr_StringScratchd5;strcpy(spr_StringScratchd5._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str.compare(stackStartPtr,spr_StringScratchd5)!=0){
         SPRStackArrayConcrete<char,36> spr_StringScratchd6;strcpy(spr_StringScratchd6._array,"SPRFile::__test() step 6 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratchd7;strcpy(spr_StringScratchd7._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchd6).sa(stackStartPtr,spr_StringScratchd7).pr(stackStartPtr);
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

AlphabeticSorter::AlphabeticSorter(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
   
} //End Of Method

int AlphabeticSorter::isBelow(char* stackStartPtr,SPRStackArray<char>& a,SPRStackArray<char>& b){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while((i<a._sz)&&(i<b._sz)){
             int spr_intScratchd8;spr_intScratchd8=i;chck_accs0(a,spr_intScratchd8,218)
             int spr_intScratchda;spr_intScratchda=i;chck_accs0(b,spr_intScratchda,220)
      if(a._array[spr_intScratchd8]!=b._array[spr_intScratchda]){
                int spr_intScratchdc;spr_intScratchdc=i;chck_accs0(a,spr_intScratchdc,222)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                int spr_intScratchde;spr_intScratchde=i;chck_accs0(b,spr_intScratchde,224)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int delta;delta=this->ordinal(stackStartPtr,a._array[spr_intScratchdc])-this->ordinal(stackStartPtr,b._array[spr_intScratchde]);
         if(delta>0){
            return 1;
            
         }
         if(delta<0){
            return -1;
            
         }
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   int deltaSz;deltaSz=a._sz-b._sz;
   if(deltaSz==0){
      return 0;
      
   }
   if(deltaSz<0){
      return -1;
      
   }
   return 1;
   
   
} //End Of Method

int AlphabeticSorter::isBelow(char* stackStartPtr,SPRSmartPtr<String_16> a,SPRSmartPtr<String_16> b){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((i<a._theObject->length(stackStartPtr))&&(i<b._theObject->length(stackStartPtr))){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(a._theObject->getAt(stackStartPtr,i)!=b._theObject->getAt(stackStartPtr,i)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int delta;delta=this->ordinal(stackStartPtr,a._theObject->getAt(stackStartPtr,i))-this->ordinal(stackStartPtr,b._theObject->getAt(stackStartPtr,i));
         if(delta>0){
            return 1;
            
         }
         if(delta<0){
            return -1;
            
         }
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int deltaSz;deltaSz=a._theObject->length(stackStartPtr)-b._theObject->length(stackStartPtr);
   if(deltaSz==0){
      return 0;
      
   }
   if(deltaSz<0){
      return -1;
      
   }
   return 1;
   
   
} //End Of Method

int AlphabeticSorter::ordinal(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case 'a':{
         return 0;
         
      };
      case 'b':{
         return 1;
         
      };
      case 'c':{
         return 2;
         
      };
      case 'd':{
         return 3;
         
      };
      case 'e':{
         return 4;
         
      };
      case 'f':{
         return 5;
         
      };
      case 'g':{
         return 6;
         
      };
      case 'h':{
         return 7;
         
      };
      case 'i':{
         return 8;
         
      };
      case 'j':{
         return 9;
         
      };
      case 'k':{
         return 10;
         
      };
      case 'l':{
         return 11;
         
      };
      case 'm':{
         return 12;
         
      };
      case 'n':{
         return 13;
         
      };
      case 'o':{
         return 14;
         
      };
      case 'p':{
         return 15;
         
      };
      case 'q':{
         return 16;
         
      };
      case 'r':{
         return 17;
         
      };
      case 's':{
         return 18;
         
      };
      case 't':{
         return 19;
         
      };
      case 'u':{
         return 20;
         
      };
      case 'v':{
         return 21;
         
      };
      case 'w':{
         return 22;
         
      };
      case 'x':{
         return 23;
         
      };
      case 'y':{
         return 24;
         
      };
      case 'z':{
         return 25;
         
      };
      case '0':{
         return 26;
         
      };
      case '1':{
         return 27;
         
      };
      case '2':{
         return 28;
         
      };
      case '3':{
         return 29;
         
      };
      case '4':{
         return 30;
         
      };
      case '5':{
         return 31;
         
      };
      case '6':{
         return 32;
         
      };
      case '7':{
         return 33;
         
      };
      case '8':{
         return 34;
         
      };
      case '9':{
         return 35;
         
      };
      default:{
         return -1;
         
      };
      
   }
   return 1;
   
   
} //End Of Method

void AlphabeticSorter::qsort(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int lowerBound,int upperBound){
   char SPR_stack_dummy_var;
   if(lowerBound>upperBound){
      return ;
      
   }
   int pivotIndex;pivotIndex=upperBound;
   SPRSmartPtr<String_16> pivot;
          int spr_intScratche0;spr_intScratche0=pivotIndex;chck_accs0(wordlist,spr_intScratche0,226)
   pivot=wordlist._array[spr_intScratche0];
   int lower;lower=lowerBound;
   int upper;upper=upperBound-1;
   while(lower<=upper){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while((lower<=upper)&&(this->isAboveOrEqualPivot(stackStartPtr,wordlist,lower,pivot)<=0)){
         lower++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      };
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while((upper>=lower)&&(this->isAboveOrEqualPivot(stackStartPtr,wordlist,upper,pivot)>=0)){
         upper=upper-1;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      };
      if(lower<upper){
         SPRSmartPtr<String_16> speicher;
                int spr_intScratche2;spr_intScratche2=lower;chck_accs0(wordlist,spr_intScratche2,228)
         speicher=wordlist._array[spr_intScratche2];
                int spr_intScratche4;spr_intScratche4=lower;chck_accs0(wordlist,spr_intScratche4,230)
                int spr_intScratche6;spr_intScratche6=upper;chck_accs0(wordlist,spr_intScratche6,232)
         wordlist._array[spr_intScratche4]=wordlist._array[spr_intScratche6];
                int spr_intScratche8;spr_intScratche8=upper;chck_accs0(wordlist,spr_intScratche8,234)
         wordlist._array[spr_intScratche8]=speicher;
         
      }
      
   };
   SPRSmartPtr<String_16> temp;
          int spr_intScratchea;spr_intScratchea=upperBound;chck_accs0(wordlist,spr_intScratchea,236)
   temp=wordlist._array[spr_intScratchea];
          int spr_intScratchec;spr_intScratchec=upperBound;chck_accs0(wordlist,spr_intScratchec,238)
          int spr_intScratchee;spr_intScratchee=lower;chck_accs0(wordlist,spr_intScratchee,240)
   wordlist._array[spr_intScratchec]=wordlist._array[spr_intScratchee];
          int spr_intScratchf0;spr_intScratchf0=lower;chck_accs0(wordlist,spr_intScratchf0,242)
   wordlist._array[spr_intScratchf0]=temp;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lower+1,upperBound);
   
   
} //End Of Method

int AlphabeticSorter::elemAt(char* stackStartPtr,SPRStackArray<int>& liste,int pos){
   char SPR_stack_dummy_var;
          int spr_intScratchf2;spr_intScratchf2=pos;chck_accs0(liste,spr_intScratchf2,244)
   return liste._array[spr_intScratchf2];
   
   
} //End Of Method

int AlphabeticSorter::isBelow(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratchf4;spr_intScratchf4=pos;chck_accs0(liste,spr_intScratchf4,246)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,liste._array[spr_intScratchf4],pivot);
   
   
} //End Of Method

int AlphabeticSorter::isAbove(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratchf6;spr_intScratchf6=pos;chck_accs0(liste,spr_intScratchf6,248)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,pivot,liste._array[spr_intScratchf6]);
   
   
} //End Of Method

int AlphabeticSorter::isAboveOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   SPRSmartPtr<String_16> l;
          int spr_intScratchf8;spr_intScratchf8=pos;chck_accs0(liste,spr_intScratchf8,250)
   l=liste._array[spr_intScratchf8];
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((i<l._theObject->length(stackStartPtr))&&(i<pivot._theObject->length(stackStartPtr))){
      AlphabeticSorter as;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int delta;delta=as.ordinal(stackStartPtr,l._theObject->getAt(stackStartPtr,i))-as.ordinal(stackStartPtr,pivot._theObject->getAt(stackStartPtr,i));
      if(delta>0){
         return 1;
         
      }
      if(delta<0){
         return -1;
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int deltaL;deltaL=l._theObject->length(stackStartPtr)-pivot._theObject->length(stackStartPtr);
   if(deltaL>0){
      return 1;
      
   }
   if(deltaL<0){
      return -1;
      
   }
   return 0;
   
   
} //End Of Method

int AlphabeticSorter::isBelowOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
   int ret;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ret=this->isAboveOrEqualPivot(stackStartPtr,liste,pos,pivot);
   ret=ret*-1;
   return ret;
   
   
} //End Of Method

void AlphabeticSorter::qsort(char* stackStartPtr,SPRStackArray<int>& liste,int lowerBound,int upperBound){
   char SPR_stack_dummy_var;
   if(lowerBound>upperBound){
      return ;
      
   }
   int pivotIndex;pivotIndex=upperBound;
          int spr_intScratchfa;spr_intScratchfa=pivotIndex;chck_accs0(liste,spr_intScratchfa,252)
   int pivot;pivot=liste._array[spr_intScratchfa];
   int lower;lower=lowerBound;
   int upper;upper=upperBound-1;
   while(lower<upper){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while((lower<=upper)&&(this->elemAt(stackStartPtr,liste,lower)<=pivot)){
         lower++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      };
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while((upper>=lower)&&(this->elemAt(stackStartPtr,liste,upper)>=pivot)){
         upper=upper-1;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      };
      if(lower<upper){
                int spr_intScratchfc;spr_intScratchfc=lower;chck_accs0(liste,spr_intScratchfc,254)
         int speicher;speicher=liste._array[spr_intScratchfc];
                int spr_intScratchfe;spr_intScratchfe=lower;chck_accs0(liste,spr_intScratchfe,256)
                int spr_intScratch100;spr_intScratch100=upper;chck_accs0(liste,spr_intScratch100,258)
         liste._array[spr_intScratchfe]=liste._array[spr_intScratch100];
                int spr_intScratch102;spr_intScratch102=upper;chck_accs0(liste,spr_intScratch102,260)
         liste._array[spr_intScratch102]=speicher;
         
      }
      
   };
          int spr_intScratch104;spr_intScratch104=upperBound;chck_accs0(liste,spr_intScratch104,262)
          int spr_intScratch106;spr_intScratch106=lower;chck_accs0(liste,spr_intScratch106,264)
   liste._array[spr_intScratch104]=liste._array[spr_intScratch106];
          int spr_intScratch108;spr_intScratch108=lower;chck_accs0(liste,spr_intScratch108,266)
   liste._array[spr_intScratch108]=pivot;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lower+1,upperBound);
   
   
} //End Of Method

void AlphabeticSorter::test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<int,12> liste;
          int spr_intScratch10a;spr_intScratch10a=0;chck_accs0(liste,spr_intScratch10a,268)
   liste._array[spr_intScratch10a]=17;
          int spr_intScratch10c;spr_intScratch10c=1;chck_accs0(liste,spr_intScratch10c,270)
   liste._array[spr_intScratch10c]=33;
          int spr_intScratch10e;spr_intScratch10e=2;chck_accs0(liste,spr_intScratch10e,272)
   liste._array[spr_intScratch10e]=5;
          int spr_intScratch110;spr_intScratch110=3;chck_accs0(liste,spr_intScratch110,274)
   liste._array[spr_intScratch110]=8;
          int spr_intScratch112;spr_intScratch112=4;chck_accs0(liste,spr_intScratch112,276)
   liste._array[spr_intScratch112]=6;
          int spr_intScratch114;spr_intScratch114=5;chck_accs0(liste,spr_intScratch114,278)
   liste._array[spr_intScratch114]=7;
          int spr_intScratch116;spr_intScratch116=6;chck_accs0(liste,spr_intScratch116,280)
   liste._array[spr_intScratch116]=2;
          int spr_intScratch118;spr_intScratch118=7;chck_accs0(liste,spr_intScratch118,282)
   liste._array[spr_intScratch118]=99;
          int spr_intScratch11a;spr_intScratch11a=8;chck_accs0(liste,spr_intScratch11a,284)
   liste._array[spr_intScratch11a]=3088;
          int spr_intScratch11c;spr_intScratch11c=9;chck_accs0(liste,spr_intScratch11c,286)
   liste._array[spr_intScratch11c]=81;
          int spr_intScratch11e;spr_intScratch11e=10;chck_accs0(liste,spr_intScratch11e,288)
   liste._array[spr_intScratch11e]=92;
          int spr_intScratch120;spr_intScratch120=11;chck_accs0(liste,spr_intScratch120,290)
   liste._array[spr_intScratch120]=47;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,0,liste._sz-1);
   PrintfClass pfc0;
   SPRStackArrayConcrete<char,19> spr_StringScratch122;strcpy(spr_StringScratch122._array,"testing QUICKSORT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc0.fstr(stackStartPtr,spr_StringScratch122).pr(stackStartPtr);
   SPRStackArrayConcrete<SPRSmartPtr<String_16>,26 > wordlist;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
             int spr_intScratch123;spr_intScratch123=i;chck_accs0(wordlist,spr_intScratch123,293)
      SPRStackArrayConcrete<char,2> spr_StringScratch125;strcpy(spr_StringScratch125._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wordlist._array[spr_intScratch123]=::new String_16(stackStartPtr,spr_StringScratch125);
      i++;
      
   
   }
   }//end of SPR for statement
   i=0;
          int spr_intScratch126;spr_intScratch126=i;chck_accs0(wordlist,spr_intScratch126,296)
   SPRStackArrayConcrete<char,6> spr_StringScratch128;strcpy(spr_StringScratch128._array,"esel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch126]._theObject->append(stackStartPtr,spr_StringScratch128);
   i++;
          int spr_intScratch129;spr_intScratch129=i;chck_accs0(wordlist,spr_intScratch129,299)
   SPRStackArrayConcrete<char,14> spr_StringScratch12b;strcpy(spr_StringScratch12b._array,"eselsbruecke");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch129]._theObject->append(stackStartPtr,spr_StringScratch12b);
   i++;
          int spr_intScratch12c;spr_intScratch12c=i;chck_accs0(wordlist,spr_intScratch12c,302)
   SPRStackArrayConcrete<char,6> spr_StringScratch12e;strcpy(spr_StringScratch12e._array,"zahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch12c]._theObject->append(stackStartPtr,spr_StringScratch12e);
   i++;
          int spr_intScratch12f;spr_intScratch12f=i;chck_accs0(wordlist,spr_intScratch12f,305)
   SPRStackArrayConcrete<char,13> spr_StringScratch131;strcpy(spr_StringScratch131._array,"zahnradbahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch12f]._theObject->append(stackStartPtr,spr_StringScratch131);
   i++;
          int spr_intScratch132;spr_intScratch132=i;chck_accs0(wordlist,spr_intScratch132,308)
   SPRStackArrayConcrete<char,7> spr_StringScratch134;strcpy(spr_StringScratch134._array,"apfel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch132]._theObject->append(stackStartPtr,spr_StringScratch134);
   i++;
          int spr_intScratch135;spr_intScratch135=i;chck_accs0(wordlist,spr_intScratch135,311)
   SPRStackArrayConcrete<char,9> spr_StringScratch137;strcpy(spr_StringScratch137._array,"annanas");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch135]._theObject->append(stackStartPtr,spr_StringScratch137);
   i++;
          int spr_intScratch138;spr_intScratch138=i;chck_accs0(wordlist,spr_intScratch138,314)
   SPRStackArrayConcrete<char,8> spr_StringScratch13a;strcpy(spr_StringScratch13a._array,"saturn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch138]._theObject->append(stackStartPtr,spr_StringScratch13a);
   i++;
          int spr_intScratch13b;spr_intScratch13b=i;chck_accs0(wordlist,spr_intScratch13b,317)
   SPRStackArrayConcrete<char,6> spr_StringScratch13d;strcpy(spr_StringScratch13d._array,"mars");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch13b]._theObject->append(stackStartPtr,spr_StringScratch13d);
   i++;
          int spr_intScratch13e;spr_intScratch13e=i;chck_accs0(wordlist,spr_intScratch13e,320)
   SPRStackArrayConcrete<char,7> spr_StringScratch140;strcpy(spr_StringScratch140._array,"pluto");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch13e]._theObject->append(stackStartPtr,spr_StringScratch140);
   i++;
          int spr_intScratch141;spr_intScratch141=i;chck_accs0(wordlist,spr_intScratch141,323)
   SPRStackArrayConcrete<char,7> spr_StringScratch143;strcpy(spr_StringScratch143._array,"venus");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch141]._theObject->append(stackStartPtr,spr_StringScratch143);
   i++;
          int spr_intScratch144;spr_intScratch144=i;chck_accs0(wordlist,spr_intScratch144,326)
   SPRStackArrayConcrete<char,5> spr_StringScratch146;strcpy(spr_StringScratch146._array,"son");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch144]._theObject->append(stackStartPtr,spr_StringScratch146);
   i++;
          int spr_intScratch147;spr_intScratch147=i;chck_accs0(wordlist,spr_intScratch147,329)
   SPRStackArrayConcrete<char,8> spr_StringScratch149;strcpy(spr_StringScratch149._array,"father");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch147]._theObject->append(stackStartPtr,spr_StringScratch149);
   i++;
          int spr_intScratch14a;spr_intScratch14a=i;chck_accs0(wordlist,spr_intScratch14a,332)
   SPRStackArrayConcrete<char,8> spr_StringScratch14c;strcpy(spr_StringScratch14c._array,"mother");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch14a]._theObject->append(stackStartPtr,spr_StringScratch14c);
   i++;
          int spr_intScratch14d;spr_intScratch14d=i;chck_accs0(wordlist,spr_intScratch14d,335)
   SPRStackArrayConcrete<char,10> spr_StringScratch14f;strcpy(spr_StringScratch14f._array,"daughter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch14d]._theObject->append(stackStartPtr,spr_StringScratch14f);
   i++;
          int spr_intScratch150;spr_intScratch150=i;chck_accs0(wordlist,spr_intScratch150,338)
   SPRStackArrayConcrete<char,7> spr_StringScratch152;strcpy(spr_StringScratch152._array,"neues");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch150]._theObject->append(stackStartPtr,spr_StringScratch152);
   i++;
          int spr_intScratch153;spr_intScratch153=i;chck_accs0(wordlist,spr_intScratch153,341)
   SPRStackArrayConcrete<char,7> spr_StringScratch155;strcpy(spr_StringScratch155._array,"leben");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch153]._theObject->append(stackStartPtr,spr_StringScratch155);
   i++;
          int spr_intScratch156;spr_intScratch156=i;chck_accs0(wordlist,spr_intScratch156,344)
   SPRStackArrayConcrete<char,8> spr_StringScratch158;strcpy(spr_StringScratch158._array,"aussie");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch156]._theObject->append(stackStartPtr,spr_StringScratch158);
   i++;
          int spr_intScratch159;spr_intScratch159=i;chck_accs0(wordlist,spr_intScratch159,347)
   SPRStackArrayConcrete<char,8> spr_StringScratch15b;strcpy(spr_StringScratch15b._array,"akzent");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch159]._theObject->append(stackStartPtr,spr_StringScratch15b);
   i++;
          int spr_intScratch15c;spr_intScratch15c=i;chck_accs0(wordlist,spr_intScratch15c,350)
   SPRStackArrayConcrete<char,14> spr_StringScratch15e;strcpy(spr_StringScratch15e._array,"erforderlich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch15c]._theObject->append(stackStartPtr,spr_StringScratch15e);
   i++;
          int spr_intScratch15f;spr_intScratch15f=i;chck_accs0(wordlist,spr_intScratch15f,353)
   SPRStackArrayConcrete<char,11> spr_StringScratch161;strcpy(spr_StringScratch161._array,"behaupten");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch15f]._theObject->append(stackStartPtr,spr_StringScratch161);
   i++;
          int spr_intScratch162;spr_intScratch162=i;chck_accs0(wordlist,spr_intScratch162,356)
   SPRStackArrayConcrete<char,8> spr_StringScratch164;strcpy(spr_StringScratch164._array,"trafen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch162]._theObject->append(stackStartPtr,spr_StringScratch164);
   i++;
          int spr_intScratch165;spr_intScratch165=i;chck_accs0(wordlist,spr_intScratch165,359)
   SPRStackArrayConcrete<char,7> spr_StringScratch167;strcpy(spr_StringScratch167._array,"kyjev");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch165]._theObject->append(stackStartPtr,spr_StringScratch167);
   i++;
          int spr_intScratch168;spr_intScratch168=i;chck_accs0(wordlist,spr_intScratch168,362)
   SPRStackArrayConcrete<char,8> spr_StringScratch16a;strcpy(spr_StringScratch16a._array,"london");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch168]._theObject->append(stackStartPtr,spr_StringScratch16a);
   i++;
          int spr_intScratch16b;spr_intScratch16b=i;chck_accs0(wordlist,spr_intScratch16b,365)
   SPRStackArrayConcrete<char,8> spr_StringScratch16d;strcpy(spr_StringScratch16d._array,"berlin");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch16b]._theObject->append(stackStartPtr,spr_StringScratch16d);
   i++;
          int spr_intScratch16e;spr_intScratch16e=i;chck_accs0(wordlist,spr_intScratch16e,368)
   SPRStackArrayConcrete<char,8> spr_StringScratch170;strcpy(spr_StringScratch170._array,"moscow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch16e]._theObject->append(stackStartPtr,spr_StringScratch170);
   i++;
          int spr_intScratch171;spr_intScratch171=i;chck_accs0(wordlist,spr_intScratch171,371)
   SPRStackArrayConcrete<char,10> spr_StringScratch173;strcpy(spr_StringScratch173._array,"chandler");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch171]._theObject->append(stackStartPtr,spr_StringScratch173);
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,0,25);
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
      PrintfClass pfc;
      String_16 str;
             int spr_intScratch174;spr_intScratch174=i;chck_accs0(wordlist,spr_intScratch174,374)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      str.append(stackStartPtr,wordlist._array[spr_intScratch174]);
      SPRStackArrayConcrete<char,5> spr_StringScratch176;strcpy(spr_StringScratch176._array,"[$]");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch176).sa(stackStartPtr,str).pr(stackStartPtr);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

longlong SystemTime::getMillisecondCounter(char* stackStartPtr){
   char SPR_stack_dummy_var;
   longlong ms;
      	 
         struct timeval currentTime;
         gettimeofday(&currentTime, nullptr);
   
         // Extract seconds and microseconds
         time_t seconds = currentTime.tv_sec;
         suseconds_t microseconds = currentTime.tv_usec;
         ms = seconds;
         ms = ms * 1000;
         ms = ms + (microseconds / 1000);
       
   return ms;
   
   
} //End Of Method

int CommandlineArgs::numberOfArguments(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int n;
   
         n=__spr_argv._theObject->_sz;
      
   return n;
   
   
} //End Of Method

void CommandlineArgs::getArgument(char* stackStartPtr,int idx,String_16& arg){
   char SPR_stack_dummy_var;
   
         if(idx>__spr_argv._theObject->_sz)
         {
            return;
         }
         else
         {
            arg.clear(stackStartPtr);
            arg.append(stackStartPtr,__spr_argv._theObject->_array[idx]);   
         }
      
   
   
} //End Of Method

char SystemConstants::getFileSeparator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   char c;
   
        #ifdef WIN32_X86
        c='\\';
        #else
        c='/'; 
        #endif 
      
   return c;
   
   
} //End Of Method

int SystemConstants::isWindows(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   
        #ifdef WIN32_X86 
           ret=1;
        #endif
      
   return ret;
   
   
} //End Of Method

int SystemConstants::isUnix(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   
        #if defined(GCC_X86) || defined(__clang__) 
           ret=1;
        #endif
      
   return ret;
   
   
} //End Of Method

void HexPrinter::intToHex(char* stackStartPtr,int x,SPRStackArray<char>& out,int startIndex){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   while(i<8){
      int nibble;nibble=(x>>(28-(i*4)))&0x0f;
      if(nibble<10){
                int spr_intScratch177;spr_intScratch177=i+startIndex;chck_accs0(out,spr_intScratch177,377)
         out._array[spr_intScratch177]=((char)nibble+'0');
         
      }
      else
      {
             int spr_intScratch179;spr_intScratch179=i+startIndex;chck_accs0(out,spr_intScratch179,379)
         out._array[spr_intScratch179]=((char)nibble+'a'-10);
         }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

KeyType4::KeyType4(char* stackStartPtr,String_16& vornameNachname){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _vornameNamename.append(stackStartPtr,vornameNachname);
   
   
} //End Of Method

KeyType4::KeyType4(char* stackStartPtr,SPRStackArray<char>& vornameNachname){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _vornameNamename.append(stackStartPtr,vornameNachname);
   
   
} //End Of Method

int KeyType4::compare(char* stackStartPtr,KeyType4& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(other._vornameNamename.equals(stackStartPtr,_vornameNamename)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

int KeyType4::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int code;code=562517;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<_vornameNamename.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=_vornameNamename.getAt(stackStartPtr,i);
      code=code+c*5665+16753;
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(code<0){
      code=-1*code;
      
   }
   return code;
   
   
} //End Of Method

Hashable4::Hashable4(char* stackStartPtr,SPRStackArray<char>& vorname,SPRStackArray<char>& nachname,SPRStackArray<char>& strasse,SPRStackArray<char>& ort){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _Vorname.append(stackStartPtr,vorname);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _Nachname.append(stackStartPtr,nachname);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _Strasse.append(stackStartPtr,strasse);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   _Ort.append(stackStartPtr,ort);
   
   
} //End Of Method

void Hashable4::getKey(char* stackStartPtr,SPRSmartPtr<KeyType4>& oKey){
   char SPR_stack_dummy_var;
   String_16 vn;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   vn.append(stackStartPtr,_Vorname);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   vn.append(stackStartPtr,_Nachname);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oKey=::new KeyType4(stackStartPtr,vn);
   
   
} //End Of Method

void MTSuperClass::threadMain(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRMTLock externalMethodLock(this);
   
   
} //End Of Method

void MultiThreadAdmin::turnOffLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject){
   char SPR_stack_dummy_var;
   if(mtObject==0U){
      return ;
      
   }
   
          //mtObject._theObject->turnOffLocking();
       
   
   
} //End Of Method

void MultiThreadAdmin::turnOnLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject){
   char SPR_stack_dummy_var;
   if(mtObject==0U){
      return ;
      
   }
   
          //mtObject._theObject->turnOnLocking();
       
   
   
} //End Of Method

void SystemControl::exit(char* stackStartPtr){
   char SPR_stack_dummy_var;
   ::exit(1);
   
   
} //End Of Method

void SystemControl::uSleep(char* stackStartPtr,int microSeconds){
   char SPR_stack_dummy_var;
   ::usleep(microSeconds);
   
   
} //End Of Method

void SystemControl::exitError(char* stackStartPtr,SPRStackArray<char>& message){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,51> spr_StringScratch17b;strcpy(spr_StringScratch17b._array,"An Error occured because of '$'. Stopping program");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch17b).sa(stackStartPtr,message).pr(stackStartPtr);
   ::exit(-1);
   
   
} //End Of Method

MutexInfo::MutexInfo(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
   
} //End Of Method

Mutex::Mutex(){
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
   _mi=::new MutexInfo;
   _isOwner=1;
   
          #ifdef WIN32_X86
          _win_mutex=CreateSemaphoreA(NULL,1,1,NULL);
          _mi._theObject->_win_mutex=_win_mutex;
          #endif
          #if defined(GCC_X86) || defined(__clang__)
               _pmutex=new pthread_mutex_t;
               pthread_mutex_init(_pmutex,NULL);
               _mi._theObject->_pmutex=_pmutex;
          #endif
    
   
   
} //End Of Method

Mutex::Mutex(char* stackStartPtr,SPRSmartPtr<MutexInfo> mi){
   char SPR_stack_dummy_var;
   _mi=mi;
   _isOwner=0;
   
     #ifdef WIN32_X86
       _win_mutex=mi._theObject->_win_mutex;
     #endif
     #if defined(GCC_X86) || defined(__clang__)
       _pmutex=mi._theObject->_pmutex; 
     #endif
   
   
   
} //End Of Method

MutexInfo* Mutex::getMutexInfo(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return _mi._theObject;
   
   
} //End Of Method

void Mutex::lock(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
      #ifdef WIN32_X86
       DWORD ret=WaitForSingleObject(_win_mutex,INFINITE);
       if(ret != WAIT_OBJECT_0)
               printf("mutex %i failed",_win_mutex);
      #endif
      #if defined(GCC_X86) || defined(__clang__)
         pthread_mutex_lock(_pmutex);
      #endif
   
   
   
} //End Of Method

void Mutex::unlock(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
      #ifdef WIN32_X86s
        ReleaseSemaphore(_win_mutex,1,NULL);
      #endif
      #if defined(GCC_X86) || defined(__clang__)
        pthread_mutex_unlock(_pmutex);
      #endif
   
   
   
} //End Of Method

Mutex::~Mutex(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if(_isOwner==1){
      
         #if defined(GCC_X86) || defined(__clang__)
          pthread_mutex_destroy(_pmutex);
         #else
          //DESTROY MUTEX
         #endif
      
      
   }
   
   
} //End Of Method

void MutexInfo::threadMain(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRMTLock externalMethodLock(this);
   
   
} //End Of Method

SemaphoreInfo::SemaphoreInfo(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
          #if defined(GCC_X86) || defined(__clang__)
            sem_init(&_sem_t,0,1); 
          #endif
     
   
   
} //End Of Method

void SemaphoreInfo::threadMain(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRMTLock externalMethodLock(this);
   
   
} //End Of Method

Semaphore::Semaphore(){
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
   _si=::new SemaphoreInfo;
   _isOwner=1;
   
          #ifdef WIN32_X86
      //_win_mutex=CreateSemaphoreA(NULL,1,1,NULL);
          //_mi._theObject->_win_mutex=_win_mutex;
          #endif
          #if defined(GCC_X86) || defined(__clang__)
            _sem_t=&(_si._theObject->_sem_t); 
          #endif
    
   
   
} //End Of Method

Semaphore::Semaphore(char* stackStartPtr,SPRSmartPtr<SemaphoreInfo> si){
   char SPR_stack_dummy_var;
   _si=si;
   _isOwner=0;
   
     #ifdef WIN32_X86
       _win_mutex=si._theObject->_win_mutex;
     #endif
     #if defined(GCC_X86) || defined(__clang__)
       _sem_t=&(_si._theObject->_sem_t); 
     #endif
   
   
   
} //End Of Method

SemaphoreInfo* Semaphore::getSemaphoreInfo(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return _si._theObject;
   
   
} //End Of Method

void Semaphore::P(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
          #ifdef WIN32_X86
       DWORD ret=WaitForSingleObject(_win_mutex,INFINITE);
       if(ret != WAIT_OBJECT_0)
               printf("mutex %i failed",_win_mutex);
           #endif
           #if defined(GCC_X86) || defined(__clang__)
              int v;
              sem_getvalue(_sem_t,&v );
              printf("before P():%i\n",v);
              sem_wait(_sem_t);
           #endif
   
   
   
} //End Of Method

void Semaphore::V(char* stackStartPtr){
   char SPR_stack_dummy_var;
   
      #ifdef WIN32_X86s
        ReleaseSemaphore(_win_mutex,1,NULL);
      #endif
      #if defined(GCC_X86) || defined(__clang__)
         sem_post(_sem_t);
      #endif
   
   
   
} //End Of Method

Semaphore::~Semaphore(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   if(_isOwner==1){
      
         #if defined(GCC_X86) || defined(__clang__)
             sem_destroy(&_si._theObject->_sem_t);
         #else
          //DESTROY MUTEX
         #endif
      
      
   }
   
   
} //End Of Method

void Input::getString(char* stackStartPtr,String_16& str){
   char SPR_stack_dummy_var;
   
        std::string strCpp;
        std::cin>>strCpp;
        int l=strlen(strCpp.c_str());
        //todo make more efficient
        for(int i=0;i<l;i++)
        {
           str.append(stackStartPtr,strCpp.c_str()[i]);
        }
     
   
   
} //End Of Method

SystemConstants::SystemConstants(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
   
} //End Of Method

PrintfClass::PrintfClass(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   int spr_intScratch17c;
   spr_intScratch17c=32;
   if(spr_intScratch17c<0)throw "invalid size requested for heap allocation";
   bufferDyn=new(spr_intScratch17c) SPRArray<char>(spr_intScratch17c)
   ;
   
   
} //End Of Method

SystemControl::SystemControl(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
   
} //End Of Method

AlphaEntry::AlphaEntry(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   
   
} //End Of Method

void Benutzer_Umschalter::schalteNach(char* stackStartPtr,int benutzer,int gruppe){
   char SPR_stack_dummy_var;
   
         //dieses Unterprogramm wird nur auf POSIX-aehnlichen Rechnern arbeiten
         if( setgid(gruppe) != 0)
         {
            perror("Benutzer_Umschalter::schalteNach() Gruppe fehlgeschlagen. Sicherheitsrisiko ?");
         } 
         if( setuid(benutzer) != 0)
         {
            perror("Benutzer_Umschalter::schalteNach() Benutzer fehlgeschlagen. Sicherheitsrisiko ?");
         } 
      
   
   
} //End Of Method

void Benutzer_Umschalter::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   Benutzer_Umschalter bu;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,37> spr_StringScratch17d;strcpy(spr_StringScratch17d._array,"bitte als Nutzer root laufen lassen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch17d).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,1000,1000);
   SPRStackArrayConcrete<char,13> spr_StringScratch17e;strcpy(spr_StringScratch17e._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf(stackStartPtr,spr_StringScratch17e,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch17f;strcpy(spr_StringScratch17f._array,"Benutzer_Umschalter::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch17f).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch180;strcpy(spr_StringScratch180._array,"nun sollen Fehlermeldungen kommen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch180).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,0,0);
   SPRStackArrayConcrete<char,13> spr_StringScratch181;strcpy(spr_StringScratch181._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf2(stackStartPtr,spr_StringScratch181,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf2.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch182;strcpy(spr_StringScratch182._array,"Benutzer_Umschalter::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch182).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

