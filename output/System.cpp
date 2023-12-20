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
          int spr_intScratchca;spr_intScratchca=0;chck_accs0(buffer,spr_intScratchca,204)
   buffer._array[spr_intScratchca]=c;
          int spr_intScratchcc;spr_intScratchcc=1;chck_accs0(buffer,spr_intScratchcc,206)
   buffer._array[spr_intScratchcc]='\0';
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
      int spr_intScratchce;
      spr_intScratchce=newSize;
      if(spr_intScratchce<0)throw "invalid size requested for heap allocation";
      bufferDyn=new(spr_intScratchce) SPRArray<char>(spr_intScratchce)
      ;
      
   }
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<str.length(stackStartPtr)){
             int spr_intScratchcf;spr_intScratchcf=i;chck_accs_p0(bufferDyn,spr_intScratchcf,209)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      bufferDyn._theObject->_array[spr_intScratchcf]=str.getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratchd1;spr_intScratchd1=i;chck_accs_p0(bufferDyn,spr_intScratchd1,211)
   bufferDyn._theObject->_array[spr_intScratchd1]='\0';
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
       
          int spr_intScratchd3;spr_intScratchd3=id;chck_accs0(list._theObject->_entries,spr_intScratchd3,213)
   ret=list._theObject->_entries._array[spr_intScratchd3];
   
   
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
       
          int spr_intScratchd5;spr_intScratchd5=id;chck_accs0(list._theObject->_entries,spr_intScratchd5,215)
   list._theObject->_entries._array[spr_intScratchd5]=entry;
   
   
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
      int spr_intScratchd7;
      spr_intScratchd7=16000;
      if(spr_intScratchd7<0)throw "invalid size requested for heap allocation";
      _readBuffer=new(spr_intScratchd7) SPRArray<char>(spr_intScratchd7)
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
          int spr_intScratchd8;spr_intScratchd8=_readPtr;chck_accs_p0(_readBuffer,spr_intScratchd8,218)
   out=_readBuffer._theObject->_array[spr_intScratchd8];
   _readPtr++;
   return 1;
   
   
} //End Of Method

void SPRFile::__test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,29> spr_StringScratchda;strcpy(spr_StringScratchda._array,"c:\\temp\\spr_test_file.txt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile f(stackStartPtr,spr_StringScratchda,0);
   SPRStackArrayConcrete<char,12> spr_StringScratchdb;strcpy(spr_StringScratchdb._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,0,10,spr_StringScratchdb);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=10){
      SPRStackArrayConcrete<char,36> spr_StringScratchdc;strcpy(spr_StringScratchdc._array,"SPRFile::__test() step 1 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratchdd;strcpy(spr_StringScratchdd._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdc).sa(stackStartPtr,spr_StringScratchdd).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratchde;strcpy(spr_StringScratchde._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,10,10,spr_StringScratchde);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20){
      SPRStackArrayConcrete<char,36> spr_StringScratchdf;strcpy(spr_StringScratchdf._array,"SPRFile::__test() step 2 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratche0;strcpy(spr_StringScratche0._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdf).sa(stackStartPtr,spr_StringScratche0).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<1000){
      SPRStackArrayConcrete<char,22> spr_StringScratche1;strcpy(spr_StringScratche1._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.write(stackStartPtr,i*20+20,20,spr_StringScratche1);
      i++;
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20020){
      SPRStackArrayConcrete<char,36> spr_StringScratche2;strcpy(spr_StringScratche2._array,"SPRFile::__test() step 3 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratche3;strcpy(spr_StringScratche3._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche2).sa(stackStartPtr,spr_StringScratche3).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<10){
      SPRStackArrayConcrete<char,2> buf;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.read(stackStartPtr,i,1,buf);
      char c;c=((char)i+((int)'0'));
             int spr_intScratche4;spr_intScratche4=0;chck_accs0(buf,spr_intScratche4,230)
      if(buf._array[spr_intScratche4]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratche6;strcpy(spr_StringScratche6._array,"SPRFile::__test() step 4 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratche7;strcpy(spr_StringScratche7._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratche6).sa(stackStartPtr,spr_StringScratche7).pr(stackStartPtr);
         
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
             int spr_intScratche8;spr_intScratche8=0;chck_accs0(buf,spr_intScratche8,234)
      if(buf._array[spr_intScratche8]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratchea;strcpy(spr_StringScratchea._array,"SPRFile::__test() step 5 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratcheb;strcpy(spr_StringScratcheb._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchea).sa(stackStartPtr,spr_StringScratcheb).pr(stackStartPtr);
         
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
             int spr_intScratchec;spr_intScratchec=20;chck_accs0(buf,spr_intScratchec,238)
      buf._array[spr_intScratchec]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 str(stackStartPtr,buf);
      SPRStackArrayConcrete<char,22> spr_StringScratchee;strcpy(spr_StringScratchee._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str.compare(stackStartPtr,spr_StringScratchee)!=0){
         SPRStackArrayConcrete<char,36> spr_StringScratchef;strcpy(spr_StringScratchef._array,"SPRFile::__test() step 6 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratchf0;strcpy(spr_StringScratchf0._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchef).sa(stackStartPtr,spr_StringScratchf0).pr(stackStartPtr);
         
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
             int spr_intScratchf1;spr_intScratchf1=i;chck_accs0(a,spr_intScratchf1,243)
             int spr_intScratchf3;spr_intScratchf3=i;chck_accs0(b,spr_intScratchf3,245)
      if(a._array[spr_intScratchf1]!=b._array[spr_intScratchf3]){
                int spr_intScratchf5;spr_intScratchf5=i;chck_accs0(a,spr_intScratchf5,247)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                int spr_intScratchf7;spr_intScratchf7=i;chck_accs0(b,spr_intScratchf7,249)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int delta;delta=this->ordinal(stackStartPtr,a._array[spr_intScratchf5])-this->ordinal(stackStartPtr,b._array[spr_intScratchf7]);
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
          int spr_intScratchf9;spr_intScratchf9=pivotIndex;chck_accs0(wordlist,spr_intScratchf9,251)
   pivot=wordlist._array[spr_intScratchf9];
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
                int spr_intScratchfb;spr_intScratchfb=lower;chck_accs0(wordlist,spr_intScratchfb,253)
         speicher=wordlist._array[spr_intScratchfb];
                int spr_intScratchfd;spr_intScratchfd=lower;chck_accs0(wordlist,spr_intScratchfd,255)
                int spr_intScratchff;spr_intScratchff=upper;chck_accs0(wordlist,spr_intScratchff,257)
         wordlist._array[spr_intScratchfd]=wordlist._array[spr_intScratchff];
                int spr_intScratch101;spr_intScratch101=upper;chck_accs0(wordlist,spr_intScratch101,259)
         wordlist._array[spr_intScratch101]=speicher;
         
      }
      
   };
   SPRSmartPtr<String_16> temp;
          int spr_intScratch103;spr_intScratch103=upperBound;chck_accs0(wordlist,spr_intScratch103,261)
   temp=wordlist._array[spr_intScratch103];
          int spr_intScratch105;spr_intScratch105=upperBound;chck_accs0(wordlist,spr_intScratch105,263)
          int spr_intScratch107;spr_intScratch107=lower;chck_accs0(wordlist,spr_intScratch107,265)
   wordlist._array[spr_intScratch105]=wordlist._array[spr_intScratch107];
          int spr_intScratch109;spr_intScratch109=lower;chck_accs0(wordlist,spr_intScratch109,267)
   wordlist._array[spr_intScratch109]=temp;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lower+1,upperBound);
   
   
} //End Of Method

int AlphabeticSorter::elemAt(char* stackStartPtr,SPRStackArray<int>& liste,int pos){
   char SPR_stack_dummy_var;
          int spr_intScratch10b;spr_intScratch10b=pos;chck_accs0(liste,spr_intScratch10b,269)
   return liste._array[spr_intScratch10b];
   
   
} //End Of Method

int AlphabeticSorter::isBelow(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratch10d;spr_intScratch10d=pos;chck_accs0(liste,spr_intScratch10d,271)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,liste._array[spr_intScratch10d],pivot);
   
   
} //End Of Method

int AlphabeticSorter::isAbove(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratch10f;spr_intScratch10f=pos;chck_accs0(liste,spr_intScratch10f,273)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,pivot,liste._array[spr_intScratch10f]);
   
   
} //End Of Method

int AlphabeticSorter::isAboveOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   SPRSmartPtr<String_16> l;
          int spr_intScratch111;spr_intScratch111=pos;chck_accs0(liste,spr_intScratch111,275)
   l=liste._array[spr_intScratch111];
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
          int spr_intScratch113;spr_intScratch113=pivotIndex;chck_accs0(liste,spr_intScratch113,277)
   int pivot;pivot=liste._array[spr_intScratch113];
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
                int spr_intScratch115;spr_intScratch115=lower;chck_accs0(liste,spr_intScratch115,279)
         int speicher;speicher=liste._array[spr_intScratch115];
                int spr_intScratch117;spr_intScratch117=lower;chck_accs0(liste,spr_intScratch117,281)
                int spr_intScratch119;spr_intScratch119=upper;chck_accs0(liste,spr_intScratch119,283)
         liste._array[spr_intScratch117]=liste._array[spr_intScratch119];
                int spr_intScratch11b;spr_intScratch11b=upper;chck_accs0(liste,spr_intScratch11b,285)
         liste._array[spr_intScratch11b]=speicher;
         
      }
      
   };
          int spr_intScratch11d;spr_intScratch11d=upperBound;chck_accs0(liste,spr_intScratch11d,287)
          int spr_intScratch11f;spr_intScratch11f=lower;chck_accs0(liste,spr_intScratch11f,289)
   liste._array[spr_intScratch11d]=liste._array[spr_intScratch11f];
          int spr_intScratch121;spr_intScratch121=lower;chck_accs0(liste,spr_intScratch121,291)
   liste._array[spr_intScratch121]=pivot;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lower+1,upperBound);
   
   
} //End Of Method

void AlphabeticSorter::test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<int,12> liste;
          int spr_intScratch123;spr_intScratch123=0;chck_accs0(liste,spr_intScratch123,293)
   liste._array[spr_intScratch123]=17;
          int spr_intScratch125;spr_intScratch125=1;chck_accs0(liste,spr_intScratch125,295)
   liste._array[spr_intScratch125]=33;
          int spr_intScratch127;spr_intScratch127=2;chck_accs0(liste,spr_intScratch127,297)
   liste._array[spr_intScratch127]=5;
          int spr_intScratch129;spr_intScratch129=3;chck_accs0(liste,spr_intScratch129,299)
   liste._array[spr_intScratch129]=8;
          int spr_intScratch12b;spr_intScratch12b=4;chck_accs0(liste,spr_intScratch12b,301)
   liste._array[spr_intScratch12b]=6;
          int spr_intScratch12d;spr_intScratch12d=5;chck_accs0(liste,spr_intScratch12d,303)
   liste._array[spr_intScratch12d]=7;
          int spr_intScratch12f;spr_intScratch12f=6;chck_accs0(liste,spr_intScratch12f,305)
   liste._array[spr_intScratch12f]=2;
          int spr_intScratch131;spr_intScratch131=7;chck_accs0(liste,spr_intScratch131,307)
   liste._array[spr_intScratch131]=99;
          int spr_intScratch133;spr_intScratch133=8;chck_accs0(liste,spr_intScratch133,309)
   liste._array[spr_intScratch133]=3088;
          int spr_intScratch135;spr_intScratch135=9;chck_accs0(liste,spr_intScratch135,311)
   liste._array[spr_intScratch135]=81;
          int spr_intScratch137;spr_intScratch137=10;chck_accs0(liste,spr_intScratch137,313)
   liste._array[spr_intScratch137]=92;
          int spr_intScratch139;spr_intScratch139=11;chck_accs0(liste,spr_intScratch139,315)
   liste._array[spr_intScratch139]=47;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,0,liste._sz-1);
   PrintfClass pfc0;
   SPRStackArrayConcrete<char,19> spr_StringScratch13b;strcpy(spr_StringScratch13b._array,"testing QUICKSORT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc0.fstr(stackStartPtr,spr_StringScratch13b).pr(stackStartPtr);
   SPRStackArrayConcrete<SPRSmartPtr<String_16>,26 > wordlist;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
             int spr_intScratch13c;spr_intScratch13c=i;chck_accs0(wordlist,spr_intScratch13c,318)
      SPRStackArrayConcrete<char,2> spr_StringScratch13e;strcpy(spr_StringScratch13e._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wordlist._array[spr_intScratch13c]=::new String_16(stackStartPtr,spr_StringScratch13e);
      i++;
      
   
   }
   }//end of SPR for statement
   i=0;
          int spr_intScratch13f;spr_intScratch13f=i;chck_accs0(wordlist,spr_intScratch13f,321)
   SPRStackArrayConcrete<char,6> spr_StringScratch141;strcpy(spr_StringScratch141._array,"esel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch13f]._theObject->append(stackStartPtr,spr_StringScratch141);
   i++;
          int spr_intScratch142;spr_intScratch142=i;chck_accs0(wordlist,spr_intScratch142,324)
   SPRStackArrayConcrete<char,14> spr_StringScratch144;strcpy(spr_StringScratch144._array,"eselsbruecke");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch142]._theObject->append(stackStartPtr,spr_StringScratch144);
   i++;
          int spr_intScratch145;spr_intScratch145=i;chck_accs0(wordlist,spr_intScratch145,327)
   SPRStackArrayConcrete<char,6> spr_StringScratch147;strcpy(spr_StringScratch147._array,"zahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch145]._theObject->append(stackStartPtr,spr_StringScratch147);
   i++;
          int spr_intScratch148;spr_intScratch148=i;chck_accs0(wordlist,spr_intScratch148,330)
   SPRStackArrayConcrete<char,13> spr_StringScratch14a;strcpy(spr_StringScratch14a._array,"zahnradbahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch148]._theObject->append(stackStartPtr,spr_StringScratch14a);
   i++;
          int spr_intScratch14b;spr_intScratch14b=i;chck_accs0(wordlist,spr_intScratch14b,333)
   SPRStackArrayConcrete<char,7> spr_StringScratch14d;strcpy(spr_StringScratch14d._array,"apfel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch14b]._theObject->append(stackStartPtr,spr_StringScratch14d);
   i++;
          int spr_intScratch14e;spr_intScratch14e=i;chck_accs0(wordlist,spr_intScratch14e,336)
   SPRStackArrayConcrete<char,9> spr_StringScratch150;strcpy(spr_StringScratch150._array,"annanas");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch14e]._theObject->append(stackStartPtr,spr_StringScratch150);
   i++;
          int spr_intScratch151;spr_intScratch151=i;chck_accs0(wordlist,spr_intScratch151,339)
   SPRStackArrayConcrete<char,8> spr_StringScratch153;strcpy(spr_StringScratch153._array,"saturn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch151]._theObject->append(stackStartPtr,spr_StringScratch153);
   i++;
          int spr_intScratch154;spr_intScratch154=i;chck_accs0(wordlist,spr_intScratch154,342)
   SPRStackArrayConcrete<char,6> spr_StringScratch156;strcpy(spr_StringScratch156._array,"mars");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch154]._theObject->append(stackStartPtr,spr_StringScratch156);
   i++;
          int spr_intScratch157;spr_intScratch157=i;chck_accs0(wordlist,spr_intScratch157,345)
   SPRStackArrayConcrete<char,7> spr_StringScratch159;strcpy(spr_StringScratch159._array,"pluto");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch157]._theObject->append(stackStartPtr,spr_StringScratch159);
   i++;
          int spr_intScratch15a;spr_intScratch15a=i;chck_accs0(wordlist,spr_intScratch15a,348)
   SPRStackArrayConcrete<char,7> spr_StringScratch15c;strcpy(spr_StringScratch15c._array,"venus");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch15a]._theObject->append(stackStartPtr,spr_StringScratch15c);
   i++;
          int spr_intScratch15d;spr_intScratch15d=i;chck_accs0(wordlist,spr_intScratch15d,351)
   SPRStackArrayConcrete<char,5> spr_StringScratch15f;strcpy(spr_StringScratch15f._array,"son");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch15d]._theObject->append(stackStartPtr,spr_StringScratch15f);
   i++;
          int spr_intScratch160;spr_intScratch160=i;chck_accs0(wordlist,spr_intScratch160,354)
   SPRStackArrayConcrete<char,8> spr_StringScratch162;strcpy(spr_StringScratch162._array,"father");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch160]._theObject->append(stackStartPtr,spr_StringScratch162);
   i++;
          int spr_intScratch163;spr_intScratch163=i;chck_accs0(wordlist,spr_intScratch163,357)
   SPRStackArrayConcrete<char,8> spr_StringScratch165;strcpy(spr_StringScratch165._array,"mother");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch163]._theObject->append(stackStartPtr,spr_StringScratch165);
   i++;
          int spr_intScratch166;spr_intScratch166=i;chck_accs0(wordlist,spr_intScratch166,360)
   SPRStackArrayConcrete<char,10> spr_StringScratch168;strcpy(spr_StringScratch168._array,"daughter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch166]._theObject->append(stackStartPtr,spr_StringScratch168);
   i++;
          int spr_intScratch169;spr_intScratch169=i;chck_accs0(wordlist,spr_intScratch169,363)
   SPRStackArrayConcrete<char,7> spr_StringScratch16b;strcpy(spr_StringScratch16b._array,"neues");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch169]._theObject->append(stackStartPtr,spr_StringScratch16b);
   i++;
          int spr_intScratch16c;spr_intScratch16c=i;chck_accs0(wordlist,spr_intScratch16c,366)
   SPRStackArrayConcrete<char,7> spr_StringScratch16e;strcpy(spr_StringScratch16e._array,"leben");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch16c]._theObject->append(stackStartPtr,spr_StringScratch16e);
   i++;
          int spr_intScratch16f;spr_intScratch16f=i;chck_accs0(wordlist,spr_intScratch16f,369)
   SPRStackArrayConcrete<char,8> spr_StringScratch171;strcpy(spr_StringScratch171._array,"aussie");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch16f]._theObject->append(stackStartPtr,spr_StringScratch171);
   i++;
          int spr_intScratch172;spr_intScratch172=i;chck_accs0(wordlist,spr_intScratch172,372)
   SPRStackArrayConcrete<char,8> spr_StringScratch174;strcpy(spr_StringScratch174._array,"akzent");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch172]._theObject->append(stackStartPtr,spr_StringScratch174);
   i++;
          int spr_intScratch175;spr_intScratch175=i;chck_accs0(wordlist,spr_intScratch175,375)
   SPRStackArrayConcrete<char,14> spr_StringScratch177;strcpy(spr_StringScratch177._array,"erforderlich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch175]._theObject->append(stackStartPtr,spr_StringScratch177);
   i++;
          int spr_intScratch178;spr_intScratch178=i;chck_accs0(wordlist,spr_intScratch178,378)
   SPRStackArrayConcrete<char,11> spr_StringScratch17a;strcpy(spr_StringScratch17a._array,"behaupten");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch178]._theObject->append(stackStartPtr,spr_StringScratch17a);
   i++;
          int spr_intScratch17b;spr_intScratch17b=i;chck_accs0(wordlist,spr_intScratch17b,381)
   SPRStackArrayConcrete<char,8> spr_StringScratch17d;strcpy(spr_StringScratch17d._array,"trafen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch17b]._theObject->append(stackStartPtr,spr_StringScratch17d);
   i++;
          int spr_intScratch17e;spr_intScratch17e=i;chck_accs0(wordlist,spr_intScratch17e,384)
   SPRStackArrayConcrete<char,7> spr_StringScratch180;strcpy(spr_StringScratch180._array,"kyjev");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch17e]._theObject->append(stackStartPtr,spr_StringScratch180);
   i++;
          int spr_intScratch181;spr_intScratch181=i;chck_accs0(wordlist,spr_intScratch181,387)
   SPRStackArrayConcrete<char,8> spr_StringScratch183;strcpy(spr_StringScratch183._array,"london");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch181]._theObject->append(stackStartPtr,spr_StringScratch183);
   i++;
          int spr_intScratch184;spr_intScratch184=i;chck_accs0(wordlist,spr_intScratch184,390)
   SPRStackArrayConcrete<char,8> spr_StringScratch186;strcpy(spr_StringScratch186._array,"berlin");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch184]._theObject->append(stackStartPtr,spr_StringScratch186);
   i++;
          int spr_intScratch187;spr_intScratch187=i;chck_accs0(wordlist,spr_intScratch187,393)
   SPRStackArrayConcrete<char,8> spr_StringScratch189;strcpy(spr_StringScratch189._array,"moscow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch187]._theObject->append(stackStartPtr,spr_StringScratch189);
   i++;
          int spr_intScratch18a;spr_intScratch18a=i;chck_accs0(wordlist,spr_intScratch18a,396)
   SPRStackArrayConcrete<char,10> spr_StringScratch18c;strcpy(spr_StringScratch18c._array,"chandler");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch18a]._theObject->append(stackStartPtr,spr_StringScratch18c);
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,0,25);
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
      PrintfClass pfc;
      String_16 str;
             int spr_intScratch18d;spr_intScratch18d=i;chck_accs0(wordlist,spr_intScratch18d,399)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      str.append(stackStartPtr,wordlist._array[spr_intScratch18d]);
      SPRStackArrayConcrete<char,5> spr_StringScratch18f;strcpy(spr_StringScratch18f._array,"[$]");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch18f).sa(stackStartPtr,str).pr(stackStartPtr);
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
                int spr_intScratch190;spr_intScratch190=i+startIndex;chck_accs0(out,spr_intScratch190,402)
         out._array[spr_intScratch190]=((char)nibble+'0');
         
      }
      else
      {
             int spr_intScratch192;spr_intScratch192=i+startIndex;chck_accs0(out,spr_intScratch192,404)
         out._array[spr_intScratch192]=((char)nibble+'a'-10);
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
   SPRStackArrayConcrete<char,51> spr_StringScratch194;strcpy(spr_StringScratch194._array,"An Error occured because of '$'. Stopping program");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch194).sa(stackStartPtr,message).pr(stackStartPtr);
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
   int spr_intScratch195;
   spr_intScratch195=32;
   if(spr_intScratch195<0)throw "invalid size requested for heap allocation";
   bufferDyn=new(spr_intScratch195) SPRArray<char>(spr_intScratch195)
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
   SPRStackArrayConcrete<char,37> spr_StringScratch196;strcpy(spr_StringScratch196._array,"bitte als Nutzer root laufen lassen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch196).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,1000,1000);
   SPRStackArrayConcrete<char,13> spr_StringScratch197;strcpy(spr_StringScratch197._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf(stackStartPtr,spr_StringScratch197,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch198;strcpy(spr_StringScratch198._array,"Benutzer_Umschalter::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch198).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch199;strcpy(spr_StringScratch199._array,"nun sollen Fehlermeldungen kommen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch199).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,0,0);
   SPRStackArrayConcrete<char,13> spr_StringScratch19a;strcpy(spr_StringScratch19a._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf2(stackStartPtr,spr_StringScratch19a,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf2.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch19b;strcpy(spr_StringScratch19b._array,"Benutzer_Umschalter::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch19b).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

