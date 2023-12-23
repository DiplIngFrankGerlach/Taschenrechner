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
          int spr_intScratch11c;spr_intScratch11c=0;chck_accs0(buffer,spr_intScratch11c,286)
   buffer._array[spr_intScratch11c]=c;
          int spr_intScratch11e;spr_intScratch11e=1;chck_accs0(buffer,spr_intScratch11e,288)
   buffer._array[spr_intScratch11e]='\0';
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
      int spr_intScratch120;
      spr_intScratch120=newSize;
      if(spr_intScratch120<0)throw "invalid size requested for heap allocation";
      bufferDyn=new(spr_intScratch120) SPRArray<char>(spr_intScratch120)
      ;
      
   }
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<str.length(stackStartPtr)){
             int spr_intScratch121;spr_intScratch121=i;chck_accs_p0(bufferDyn,spr_intScratch121,291)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      bufferDyn._theObject->_array[spr_intScratch121]=str.getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch123;spr_intScratch123=i;chck_accs_p0(bufferDyn,spr_intScratch123,293)
   bufferDyn._theObject->_array[spr_intScratch123]='\0';
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
   
         snprintf(buf._array,32,"%.9g",num);
      
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->sa(stackStartPtr,buf);
   return *this;
   
   
} //End Of Method

PrintfClass& PrintfClass::sa(char* stackStartPtr,double num){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,32> buf;
   
         snprintf(buf._array,32,"%.17g",num);
      
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
       
          int spr_intScratch125;spr_intScratch125=id;chck_accs0(list._theObject->_entries,spr_intScratch125,295)
   ret=list._theObject->_entries._array[spr_intScratch125];
   
   
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
       
          int spr_intScratch127;spr_intScratch127=id;chck_accs0(list._theObject->_entries,spr_intScratch127,297)
   list._theObject->_entries._array[spr_intScratch127]=entry;
   
   
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
      int spr_intScratch129;
      spr_intScratch129=16000;
      if(spr_intScratch129<0)throw "invalid size requested for heap allocation";
      _readBuffer=new(spr_intScratch129) SPRArray<char>(spr_intScratch129)
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
          int spr_intScratch12a;spr_intScratch12a=_readPtr;chck_accs_p0(_readBuffer,spr_intScratch12a,300)
   out=_readBuffer._theObject->_array[spr_intScratch12a];
   _readPtr++;
   return 1;
   
   
} //End Of Method

void SPRFile::__test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,29> spr_StringScratch12c;strcpy(spr_StringScratch12c._array,"c:\\temp\\spr_test_file.txt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile f(stackStartPtr,spr_StringScratch12c,0);
   SPRStackArrayConcrete<char,12> spr_StringScratch12d;strcpy(spr_StringScratch12d._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,0,10,spr_StringScratch12d);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=10){
      SPRStackArrayConcrete<char,36> spr_StringScratch12e;strcpy(spr_StringScratch12e._array,"SPRFile::__test() step 1 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratch12f;strcpy(spr_StringScratch12f._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch12e).sa(stackStartPtr,spr_StringScratch12f).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratch130;strcpy(spr_StringScratch130._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,10,10,spr_StringScratch130);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20){
      SPRStackArrayConcrete<char,36> spr_StringScratch131;strcpy(spr_StringScratch131._array,"SPRFile::__test() step 2 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratch132;strcpy(spr_StringScratch132._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch131).sa(stackStartPtr,spr_StringScratch132).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<1000){
      SPRStackArrayConcrete<char,22> spr_StringScratch133;strcpy(spr_StringScratch133._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.write(stackStartPtr,i*20+20,20,spr_StringScratch133);
      i++;
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20020){
      SPRStackArrayConcrete<char,36> spr_StringScratch134;strcpy(spr_StringScratch134._array,"SPRFile::__test() step 3 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratch135;strcpy(spr_StringScratch135._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch134).sa(stackStartPtr,spr_StringScratch135).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<10){
      SPRStackArrayConcrete<char,2> buf;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.read(stackStartPtr,i,1,buf);
      char c;c=((char)i+((int)'0'));
             int spr_intScratch136;spr_intScratch136=0;chck_accs0(buf,spr_intScratch136,312)
      if(buf._array[spr_intScratch136]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratch138;strcpy(spr_StringScratch138._array,"SPRFile::__test() step 4 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratch139;strcpy(spr_StringScratch139._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch138).sa(stackStartPtr,spr_StringScratch139).pr(stackStartPtr);
         
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
             int spr_intScratch13a;spr_intScratch13a=0;chck_accs0(buf,spr_intScratch13a,316)
      if(buf._array[spr_intScratch13a]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratch13c;strcpy(spr_StringScratch13c._array,"SPRFile::__test() step 5 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratch13d;strcpy(spr_StringScratch13d._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch13c).sa(stackStartPtr,spr_StringScratch13d).pr(stackStartPtr);
         
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
             int spr_intScratch13e;spr_intScratch13e=20;chck_accs0(buf,spr_intScratch13e,320)
      buf._array[spr_intScratch13e]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 str(stackStartPtr,buf);
      SPRStackArrayConcrete<char,22> spr_StringScratch140;strcpy(spr_StringScratch140._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str.compare(stackStartPtr,spr_StringScratch140)!=0){
         SPRStackArrayConcrete<char,36> spr_StringScratch141;strcpy(spr_StringScratch141._array,"SPRFile::__test() step 6 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratch142;strcpy(spr_StringScratch142._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch141).sa(stackStartPtr,spr_StringScratch142).pr(stackStartPtr);
         
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
             int spr_intScratch143;spr_intScratch143=i;chck_accs0(a,spr_intScratch143,325)
             int spr_intScratch145;spr_intScratch145=i;chck_accs0(b,spr_intScratch145,327)
      if(a._array[spr_intScratch143]!=b._array[spr_intScratch145]){
                int spr_intScratch147;spr_intScratch147=i;chck_accs0(a,spr_intScratch147,329)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                int spr_intScratch149;spr_intScratch149=i;chck_accs0(b,spr_intScratch149,331)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int delta;delta=this->ordinal(stackStartPtr,a._array[spr_intScratch147])-this->ordinal(stackStartPtr,b._array[spr_intScratch149]);
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
          int spr_intScratch14b;spr_intScratch14b=pivotIndex;chck_accs0(wordlist,spr_intScratch14b,333)
   pivot=wordlist._array[spr_intScratch14b];
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
                int spr_intScratch14d;spr_intScratch14d=lower;chck_accs0(wordlist,spr_intScratch14d,335)
         speicher=wordlist._array[spr_intScratch14d];
                int spr_intScratch14f;spr_intScratch14f=lower;chck_accs0(wordlist,spr_intScratch14f,337)
                int spr_intScratch151;spr_intScratch151=upper;chck_accs0(wordlist,spr_intScratch151,339)
         wordlist._array[spr_intScratch14f]=wordlist._array[spr_intScratch151];
                int spr_intScratch153;spr_intScratch153=upper;chck_accs0(wordlist,spr_intScratch153,341)
         wordlist._array[spr_intScratch153]=speicher;
         
      }
      
   };
   SPRSmartPtr<String_16> temp;
          int spr_intScratch155;spr_intScratch155=upperBound;chck_accs0(wordlist,spr_intScratch155,343)
   temp=wordlist._array[spr_intScratch155];
          int spr_intScratch157;spr_intScratch157=upperBound;chck_accs0(wordlist,spr_intScratch157,345)
          int spr_intScratch159;spr_intScratch159=lower;chck_accs0(wordlist,spr_intScratch159,347)
   wordlist._array[spr_intScratch157]=wordlist._array[spr_intScratch159];
          int spr_intScratch15b;spr_intScratch15b=lower;chck_accs0(wordlist,spr_intScratch15b,349)
   wordlist._array[spr_intScratch15b]=temp;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lower+1,upperBound);
   
   
} //End Of Method

int AlphabeticSorter::elemAt(char* stackStartPtr,SPRStackArray<int>& liste,int pos){
   char SPR_stack_dummy_var;
          int spr_intScratch15d;spr_intScratch15d=pos;chck_accs0(liste,spr_intScratch15d,351)
   return liste._array[spr_intScratch15d];
   
   
} //End Of Method

int AlphabeticSorter::isBelow(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratch15f;spr_intScratch15f=pos;chck_accs0(liste,spr_intScratch15f,353)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,liste._array[spr_intScratch15f],pivot);
   
   
} //End Of Method

int AlphabeticSorter::isAbove(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratch161;spr_intScratch161=pos;chck_accs0(liste,spr_intScratch161,355)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,pivot,liste._array[spr_intScratch161]);
   
   
} //End Of Method

int AlphabeticSorter::isAboveOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   SPRSmartPtr<String_16> l;
          int spr_intScratch163;spr_intScratch163=pos;chck_accs0(liste,spr_intScratch163,357)
   l=liste._array[spr_intScratch163];
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
          int spr_intScratch165;spr_intScratch165=pivotIndex;chck_accs0(liste,spr_intScratch165,359)
   int pivot;pivot=liste._array[spr_intScratch165];
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
                int spr_intScratch167;spr_intScratch167=lower;chck_accs0(liste,spr_intScratch167,361)
         int speicher;speicher=liste._array[spr_intScratch167];
                int spr_intScratch169;spr_intScratch169=lower;chck_accs0(liste,spr_intScratch169,363)
                int spr_intScratch16b;spr_intScratch16b=upper;chck_accs0(liste,spr_intScratch16b,365)
         liste._array[spr_intScratch169]=liste._array[spr_intScratch16b];
                int spr_intScratch16d;spr_intScratch16d=upper;chck_accs0(liste,spr_intScratch16d,367)
         liste._array[spr_intScratch16d]=speicher;
         
      }
      
   };
          int spr_intScratch16f;spr_intScratch16f=upperBound;chck_accs0(liste,spr_intScratch16f,369)
          int spr_intScratch171;spr_intScratch171=lower;chck_accs0(liste,spr_intScratch171,371)
   liste._array[spr_intScratch16f]=liste._array[spr_intScratch171];
          int spr_intScratch173;spr_intScratch173=lower;chck_accs0(liste,spr_intScratch173,373)
   liste._array[spr_intScratch173]=pivot;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lower+1,upperBound);
   
   
} //End Of Method

void AlphabeticSorter::test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<int,12> liste;
          int spr_intScratch175;spr_intScratch175=0;chck_accs0(liste,spr_intScratch175,375)
   liste._array[spr_intScratch175]=17;
          int spr_intScratch177;spr_intScratch177=1;chck_accs0(liste,spr_intScratch177,377)
   liste._array[spr_intScratch177]=33;
          int spr_intScratch179;spr_intScratch179=2;chck_accs0(liste,spr_intScratch179,379)
   liste._array[spr_intScratch179]=5;
          int spr_intScratch17b;spr_intScratch17b=3;chck_accs0(liste,spr_intScratch17b,381)
   liste._array[spr_intScratch17b]=8;
          int spr_intScratch17d;spr_intScratch17d=4;chck_accs0(liste,spr_intScratch17d,383)
   liste._array[spr_intScratch17d]=6;
          int spr_intScratch17f;spr_intScratch17f=5;chck_accs0(liste,spr_intScratch17f,385)
   liste._array[spr_intScratch17f]=7;
          int spr_intScratch181;spr_intScratch181=6;chck_accs0(liste,spr_intScratch181,387)
   liste._array[spr_intScratch181]=2;
          int spr_intScratch183;spr_intScratch183=7;chck_accs0(liste,spr_intScratch183,389)
   liste._array[spr_intScratch183]=99;
          int spr_intScratch185;spr_intScratch185=8;chck_accs0(liste,spr_intScratch185,391)
   liste._array[spr_intScratch185]=3088;
          int spr_intScratch187;spr_intScratch187=9;chck_accs0(liste,spr_intScratch187,393)
   liste._array[spr_intScratch187]=81;
          int spr_intScratch189;spr_intScratch189=10;chck_accs0(liste,spr_intScratch189,395)
   liste._array[spr_intScratch189]=92;
          int spr_intScratch18b;spr_intScratch18b=11;chck_accs0(liste,spr_intScratch18b,397)
   liste._array[spr_intScratch18b]=47;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,0,liste._sz-1);
   PrintfClass pfc0;
   SPRStackArrayConcrete<char,19> spr_StringScratch18d;strcpy(spr_StringScratch18d._array,"testing QUICKSORT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc0.fstr(stackStartPtr,spr_StringScratch18d).pr(stackStartPtr);
   SPRStackArrayConcrete<SPRSmartPtr<String_16>,26 > wordlist;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
             int spr_intScratch18e;spr_intScratch18e=i;chck_accs0(wordlist,spr_intScratch18e,400)
      SPRStackArrayConcrete<char,2> spr_StringScratch190;strcpy(spr_StringScratch190._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wordlist._array[spr_intScratch18e]=::new String_16(stackStartPtr,spr_StringScratch190);
      i++;
      
   
   }
   }//end of SPR for statement
   i=0;
          int spr_intScratch191;spr_intScratch191=i;chck_accs0(wordlist,spr_intScratch191,403)
   SPRStackArrayConcrete<char,6> spr_StringScratch193;strcpy(spr_StringScratch193._array,"esel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch191]._theObject->append(stackStartPtr,spr_StringScratch193);
   i++;
          int spr_intScratch194;spr_intScratch194=i;chck_accs0(wordlist,spr_intScratch194,406)
   SPRStackArrayConcrete<char,14> spr_StringScratch196;strcpy(spr_StringScratch196._array,"eselsbruecke");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch194]._theObject->append(stackStartPtr,spr_StringScratch196);
   i++;
          int spr_intScratch197;spr_intScratch197=i;chck_accs0(wordlist,spr_intScratch197,409)
   SPRStackArrayConcrete<char,6> spr_StringScratch199;strcpy(spr_StringScratch199._array,"zahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch197]._theObject->append(stackStartPtr,spr_StringScratch199);
   i++;
          int spr_intScratch19a;spr_intScratch19a=i;chck_accs0(wordlist,spr_intScratch19a,412)
   SPRStackArrayConcrete<char,13> spr_StringScratch19c;strcpy(spr_StringScratch19c._array,"zahnradbahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch19a]._theObject->append(stackStartPtr,spr_StringScratch19c);
   i++;
          int spr_intScratch19d;spr_intScratch19d=i;chck_accs0(wordlist,spr_intScratch19d,415)
   SPRStackArrayConcrete<char,7> spr_StringScratch19f;strcpy(spr_StringScratch19f._array,"apfel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch19d]._theObject->append(stackStartPtr,spr_StringScratch19f);
   i++;
          int spr_intScratch1a0;spr_intScratch1a0=i;chck_accs0(wordlist,spr_intScratch1a0,418)
   SPRStackArrayConcrete<char,9> spr_StringScratch1a2;strcpy(spr_StringScratch1a2._array,"annanas");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1a0]._theObject->append(stackStartPtr,spr_StringScratch1a2);
   i++;
          int spr_intScratch1a3;spr_intScratch1a3=i;chck_accs0(wordlist,spr_intScratch1a3,421)
   SPRStackArrayConcrete<char,8> spr_StringScratch1a5;strcpy(spr_StringScratch1a5._array,"saturn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1a3]._theObject->append(stackStartPtr,spr_StringScratch1a5);
   i++;
          int spr_intScratch1a6;spr_intScratch1a6=i;chck_accs0(wordlist,spr_intScratch1a6,424)
   SPRStackArrayConcrete<char,6> spr_StringScratch1a8;strcpy(spr_StringScratch1a8._array,"mars");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1a6]._theObject->append(stackStartPtr,spr_StringScratch1a8);
   i++;
          int spr_intScratch1a9;spr_intScratch1a9=i;chck_accs0(wordlist,spr_intScratch1a9,427)
   SPRStackArrayConcrete<char,7> spr_StringScratch1ab;strcpy(spr_StringScratch1ab._array,"pluto");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1a9]._theObject->append(stackStartPtr,spr_StringScratch1ab);
   i++;
          int spr_intScratch1ac;spr_intScratch1ac=i;chck_accs0(wordlist,spr_intScratch1ac,430)
   SPRStackArrayConcrete<char,7> spr_StringScratch1ae;strcpy(spr_StringScratch1ae._array,"venus");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1ac]._theObject->append(stackStartPtr,spr_StringScratch1ae);
   i++;
          int spr_intScratch1af;spr_intScratch1af=i;chck_accs0(wordlist,spr_intScratch1af,433)
   SPRStackArrayConcrete<char,5> spr_StringScratch1b1;strcpy(spr_StringScratch1b1._array,"son");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1af]._theObject->append(stackStartPtr,spr_StringScratch1b1);
   i++;
          int spr_intScratch1b2;spr_intScratch1b2=i;chck_accs0(wordlist,spr_intScratch1b2,436)
   SPRStackArrayConcrete<char,8> spr_StringScratch1b4;strcpy(spr_StringScratch1b4._array,"father");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1b2]._theObject->append(stackStartPtr,spr_StringScratch1b4);
   i++;
          int spr_intScratch1b5;spr_intScratch1b5=i;chck_accs0(wordlist,spr_intScratch1b5,439)
   SPRStackArrayConcrete<char,8> spr_StringScratch1b7;strcpy(spr_StringScratch1b7._array,"mother");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1b5]._theObject->append(stackStartPtr,spr_StringScratch1b7);
   i++;
          int spr_intScratch1b8;spr_intScratch1b8=i;chck_accs0(wordlist,spr_intScratch1b8,442)
   SPRStackArrayConcrete<char,10> spr_StringScratch1ba;strcpy(spr_StringScratch1ba._array,"daughter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1b8]._theObject->append(stackStartPtr,spr_StringScratch1ba);
   i++;
          int spr_intScratch1bb;spr_intScratch1bb=i;chck_accs0(wordlist,spr_intScratch1bb,445)
   SPRStackArrayConcrete<char,7> spr_StringScratch1bd;strcpy(spr_StringScratch1bd._array,"neues");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1bb]._theObject->append(stackStartPtr,spr_StringScratch1bd);
   i++;
          int spr_intScratch1be;spr_intScratch1be=i;chck_accs0(wordlist,spr_intScratch1be,448)
   SPRStackArrayConcrete<char,7> spr_StringScratch1c0;strcpy(spr_StringScratch1c0._array,"leben");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1be]._theObject->append(stackStartPtr,spr_StringScratch1c0);
   i++;
          int spr_intScratch1c1;spr_intScratch1c1=i;chck_accs0(wordlist,spr_intScratch1c1,451)
   SPRStackArrayConcrete<char,8> spr_StringScratch1c3;strcpy(spr_StringScratch1c3._array,"aussie");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1c1]._theObject->append(stackStartPtr,spr_StringScratch1c3);
   i++;
          int spr_intScratch1c4;spr_intScratch1c4=i;chck_accs0(wordlist,spr_intScratch1c4,454)
   SPRStackArrayConcrete<char,8> spr_StringScratch1c6;strcpy(spr_StringScratch1c6._array,"akzent");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1c4]._theObject->append(stackStartPtr,spr_StringScratch1c6);
   i++;
          int spr_intScratch1c7;spr_intScratch1c7=i;chck_accs0(wordlist,spr_intScratch1c7,457)
   SPRStackArrayConcrete<char,14> spr_StringScratch1c9;strcpy(spr_StringScratch1c9._array,"erforderlich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1c7]._theObject->append(stackStartPtr,spr_StringScratch1c9);
   i++;
          int spr_intScratch1ca;spr_intScratch1ca=i;chck_accs0(wordlist,spr_intScratch1ca,460)
   SPRStackArrayConcrete<char,11> spr_StringScratch1cc;strcpy(spr_StringScratch1cc._array,"behaupten");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1ca]._theObject->append(stackStartPtr,spr_StringScratch1cc);
   i++;
          int spr_intScratch1cd;spr_intScratch1cd=i;chck_accs0(wordlist,spr_intScratch1cd,463)
   SPRStackArrayConcrete<char,8> spr_StringScratch1cf;strcpy(spr_StringScratch1cf._array,"trafen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1cd]._theObject->append(stackStartPtr,spr_StringScratch1cf);
   i++;
          int spr_intScratch1d0;spr_intScratch1d0=i;chck_accs0(wordlist,spr_intScratch1d0,466)
   SPRStackArrayConcrete<char,7> spr_StringScratch1d2;strcpy(spr_StringScratch1d2._array,"kyjev");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1d0]._theObject->append(stackStartPtr,spr_StringScratch1d2);
   i++;
          int spr_intScratch1d3;spr_intScratch1d3=i;chck_accs0(wordlist,spr_intScratch1d3,469)
   SPRStackArrayConcrete<char,8> spr_StringScratch1d5;strcpy(spr_StringScratch1d5._array,"london");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1d3]._theObject->append(stackStartPtr,spr_StringScratch1d5);
   i++;
          int spr_intScratch1d6;spr_intScratch1d6=i;chck_accs0(wordlist,spr_intScratch1d6,472)
   SPRStackArrayConcrete<char,8> spr_StringScratch1d8;strcpy(spr_StringScratch1d8._array,"berlin");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1d6]._theObject->append(stackStartPtr,spr_StringScratch1d8);
   i++;
          int spr_intScratch1d9;spr_intScratch1d9=i;chck_accs0(wordlist,spr_intScratch1d9,475)
   SPRStackArrayConcrete<char,8> spr_StringScratch1db;strcpy(spr_StringScratch1db._array,"moscow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1d9]._theObject->append(stackStartPtr,spr_StringScratch1db);
   i++;
          int spr_intScratch1dc;spr_intScratch1dc=i;chck_accs0(wordlist,spr_intScratch1dc,478)
   SPRStackArrayConcrete<char,10> spr_StringScratch1de;strcpy(spr_StringScratch1de._array,"chandler");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch1dc]._theObject->append(stackStartPtr,spr_StringScratch1de);
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,0,25);
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
      PrintfClass pfc;
      String_16 str;
             int spr_intScratch1df;spr_intScratch1df=i;chck_accs0(wordlist,spr_intScratch1df,481)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      str.append(stackStartPtr,wordlist._array[spr_intScratch1df]);
      SPRStackArrayConcrete<char,5> spr_StringScratch1e1;strcpy(spr_StringScratch1e1._array,"[$]");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1e1).sa(stackStartPtr,str).pr(stackStartPtr);
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
                int spr_intScratch1e2;spr_intScratch1e2=i+startIndex;chck_accs0(out,spr_intScratch1e2,484)
         out._array[spr_intScratch1e2]=((char)nibble+'0');
         
      }
      else
      {
             int spr_intScratch1e4;spr_intScratch1e4=i+startIndex;chck_accs0(out,spr_intScratch1e4,486)
         out._array[spr_intScratch1e4]=((char)nibble+'a'-10);
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
   
         #ifndef __CYGWIN__
            ::usleep(microSeconds);
         #else
            cout << "SystemControl::uSleep() not implemented on cygwin" << endl;
         #endif
      
   
   
} //End Of Method

void SystemControl::exitError(char* stackStartPtr,SPRStackArray<char>& message){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,51> spr_StringScratch1e6;strcpy(spr_StringScratch1e6._array,"An Error occured because of '$'. Stopping program");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1e6).sa(stackStartPtr,message).pr(stackStartPtr);
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
   int spr_intScratch1e7;
   spr_intScratch1e7=32;
   if(spr_intScratch1e7<0)throw "invalid size requested for heap allocation";
   bufferDyn=new(spr_intScratch1e7) SPRArray<char>(spr_intScratch1e7)
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
   SPRStackArrayConcrete<char,37> spr_StringScratch1e8;strcpy(spr_StringScratch1e8._array,"bitte als Nutzer root laufen lassen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1e8).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,1000,1000);
   SPRStackArrayConcrete<char,13> spr_StringScratch1e9;strcpy(spr_StringScratch1e9._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf(stackStartPtr,spr_StringScratch1e9,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch1ea;strcpy(spr_StringScratch1ea._array,"Benutzer_Umschalter::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1ea).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch1eb;strcpy(spr_StringScratch1eb._array,"nun sollen Fehlermeldungen kommen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch1eb).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,0,0);
   SPRStackArrayConcrete<char,13> spr_StringScratch1ec;strcpy(spr_StringScratch1ec._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf2(stackStartPtr,spr_StringScratch1ec,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf2.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch1ed;strcpy(spr_StringScratch1ed._array,"Benutzer_Umschalter::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1ed).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

