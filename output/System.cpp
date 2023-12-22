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
          int spr_intScratchc8;spr_intScratchc8=0;chck_accs0(buffer,spr_intScratchc8,202)
   buffer._array[spr_intScratchc8]=c;
          int spr_intScratchca;spr_intScratchca=1;chck_accs0(buffer,spr_intScratchca,204)
   buffer._array[spr_intScratchca]='\0';
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
      int spr_intScratchcc;
      spr_intScratchcc=newSize;
      if(spr_intScratchcc<0)throw "invalid size requested for heap allocation";
      bufferDyn=new(spr_intScratchcc) SPRArray<char>(spr_intScratchcc)
      ;
      
   }
   int i;
   {//begin of SPR for statement
   i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<str.length(stackStartPtr)){
             int spr_intScratchcd;spr_intScratchcd=i;chck_accs_p0(bufferDyn,spr_intScratchcd,207)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      bufferDyn._theObject->_array[spr_intScratchcd]=str.getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratchcf;spr_intScratchcf=i;chck_accs_p0(bufferDyn,spr_intScratchcf,209)
   bufferDyn._theObject->_array[spr_intScratchcf]='\0';
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
       
          int spr_intScratchd1;spr_intScratchd1=id;chck_accs0(list._theObject->_entries,spr_intScratchd1,211)
   ret=list._theObject->_entries._array[spr_intScratchd1];
   
   
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
       
          int spr_intScratchd3;spr_intScratchd3=id;chck_accs0(list._theObject->_entries,spr_intScratchd3,213)
   list._theObject->_entries._array[spr_intScratchd3]=entry;
   
   
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
      int spr_intScratchd5;
      spr_intScratchd5=16000;
      if(spr_intScratchd5<0)throw "invalid size requested for heap allocation";
      _readBuffer=new(spr_intScratchd5) SPRArray<char>(spr_intScratchd5)
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
          int spr_intScratchd6;spr_intScratchd6=_readPtr;chck_accs_p0(_readBuffer,spr_intScratchd6,216)
   out=_readBuffer._theObject->_array[spr_intScratchd6];
   _readPtr++;
   return 1;
   
   
} //End Of Method

void SPRFile::__test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,29> spr_StringScratchd8;strcpy(spr_StringScratchd8._array,"c:\\temp\\spr_test_file.txt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile f(stackStartPtr,spr_StringScratchd8,0);
   SPRStackArrayConcrete<char,12> spr_StringScratchd9;strcpy(spr_StringScratchd9._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,0,10,spr_StringScratchd9);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=10){
      SPRStackArrayConcrete<char,36> spr_StringScratchda;strcpy(spr_StringScratchda._array,"SPRFile::__test() step 1 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratchdb;strcpy(spr_StringScratchdb._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchda).sa(stackStartPtr,spr_StringScratchdb).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratchdc;strcpy(spr_StringScratchdc._array,"0123456789");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   f.write(stackStartPtr,10,10,spr_StringScratchdc);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20){
      SPRStackArrayConcrete<char,36> spr_StringScratchdd;strcpy(spr_StringScratchdd._array,"SPRFile::__test() step 2 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratchde;strcpy(spr_StringScratchde._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdd).sa(stackStartPtr,spr_StringScratchde).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<1000){
      SPRStackArrayConcrete<char,22> spr_StringScratchdf;strcpy(spr_StringScratchdf._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.write(stackStartPtr,i*20+20,20,spr_StringScratchdf);
      i++;
      
   
   }
   }//end of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(f.size(stackStartPtr)!=20020){
      SPRStackArrayConcrete<char,36> spr_StringScratche0;strcpy(spr_StringScratche0._array,"SPRFile::__test() step 3 failed$\n");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,2> spr_StringScratche1;strcpy(spr_StringScratche1._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche0).sa(stackStartPtr,spr_StringScratche1).pr(stackStartPtr);
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<10){
      SPRStackArrayConcrete<char,2> buf;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      f.read(stackStartPtr,i,1,buf);
      char c;c=((char)i+((int)'0'));
             int spr_intScratche2;spr_intScratche2=0;chck_accs0(buf,spr_intScratche2,228)
      if(buf._array[spr_intScratche2]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratche4;strcpy(spr_StringScratche4._array,"SPRFile::__test() step 4 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratche5;strcpy(spr_StringScratche5._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratche4).sa(stackStartPtr,spr_StringScratche5).pr(stackStartPtr);
         
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
             int spr_intScratche6;spr_intScratche6=0;chck_accs0(buf,spr_intScratche6,232)
      if(buf._array[spr_intScratche6]!=c){
         SPRStackArrayConcrete<char,36> spr_StringScratche8;strcpy(spr_StringScratche8._array,"SPRFile::__test() step 5 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratche9;strcpy(spr_StringScratche9._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratche8).sa(stackStartPtr,spr_StringScratche9).pr(stackStartPtr);
         
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
             int spr_intScratchea;spr_intScratchea=20;chck_accs0(buf,spr_intScratchea,236)
      buf._array[spr_intScratchea]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 str(stackStartPtr,buf);
      SPRStackArrayConcrete<char,22> spr_StringScratchec;strcpy(spr_StringScratchec._array,"abcdefghijklmnopqrst");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str.compare(stackStartPtr,spr_StringScratchec)!=0){
         SPRStackArrayConcrete<char,36> spr_StringScratched;strcpy(spr_StringScratched._array,"SPRFile::__test() step 6 failed$\n");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         SPRStackArrayConcrete<char,2> spr_StringScratchee;strcpy(spr_StringScratchee._array,"");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratched).sa(stackStartPtr,spr_StringScratchee).pr(stackStartPtr);
         
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
             int spr_intScratchef;spr_intScratchef=i;chck_accs0(a,spr_intScratchef,241)
             int spr_intScratchf1;spr_intScratchf1=i;chck_accs0(b,spr_intScratchf1,243)
      if(a._array[spr_intScratchef]!=b._array[spr_intScratchf1]){
                int spr_intScratchf3;spr_intScratchf3=i;chck_accs0(a,spr_intScratchf3,245)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
                int spr_intScratchf5;spr_intScratchf5=i;chck_accs0(b,spr_intScratchf5,247)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int delta;delta=this->ordinal(stackStartPtr,a._array[spr_intScratchf3])-this->ordinal(stackStartPtr,b._array[spr_intScratchf5]);
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
          int spr_intScratchf7;spr_intScratchf7=pivotIndex;chck_accs0(wordlist,spr_intScratchf7,249)
   pivot=wordlist._array[spr_intScratchf7];
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
                int spr_intScratchf9;spr_intScratchf9=lower;chck_accs0(wordlist,spr_intScratchf9,251)
         speicher=wordlist._array[spr_intScratchf9];
                int spr_intScratchfb;spr_intScratchfb=lower;chck_accs0(wordlist,spr_intScratchfb,253)
                int spr_intScratchfd;spr_intScratchfd=upper;chck_accs0(wordlist,spr_intScratchfd,255)
         wordlist._array[spr_intScratchfb]=wordlist._array[spr_intScratchfd];
                int spr_intScratchff;spr_intScratchff=upper;chck_accs0(wordlist,spr_intScratchff,257)
         wordlist._array[spr_intScratchff]=speicher;
         
      }
      
   };
   SPRSmartPtr<String_16> temp;
          int spr_intScratch101;spr_intScratch101=upperBound;chck_accs0(wordlist,spr_intScratch101,259)
   temp=wordlist._array[spr_intScratch101];
          int spr_intScratch103;spr_intScratch103=upperBound;chck_accs0(wordlist,spr_intScratch103,261)
          int spr_intScratch105;spr_intScratch105=lower;chck_accs0(wordlist,spr_intScratch105,263)
   wordlist._array[spr_intScratch103]=wordlist._array[spr_intScratch105];
          int spr_intScratch107;spr_intScratch107=lower;chck_accs0(wordlist,spr_intScratch107,265)
   wordlist._array[spr_intScratch107]=temp;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,lower+1,upperBound);
   
   
} //End Of Method

int AlphabeticSorter::elemAt(char* stackStartPtr,SPRStackArray<int>& liste,int pos){
   char SPR_stack_dummy_var;
          int spr_intScratch109;spr_intScratch109=pos;chck_accs0(liste,spr_intScratch109,267)
   return liste._array[spr_intScratch109];
   
   
} //End Of Method

int AlphabeticSorter::isBelow(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratch10b;spr_intScratch10b=pos;chck_accs0(liste,spr_intScratch10b,269)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,liste._array[spr_intScratch10b],pivot);
   
   
} //End Of Method

int AlphabeticSorter::isAbove(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
          int spr_intScratch10d;spr_intScratch10d=pos;chck_accs0(liste,spr_intScratch10d,271)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->isBelow(stackStartPtr,pivot,liste._array[spr_intScratch10d]);
   
   
} //End Of Method

int AlphabeticSorter::isAboveOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   SPRSmartPtr<String_16> l;
          int spr_intScratch10f;spr_intScratch10f=pos;chck_accs0(liste,spr_intScratch10f,273)
   l=liste._array[spr_intScratch10f];
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
          int spr_intScratch111;spr_intScratch111=pivotIndex;chck_accs0(liste,spr_intScratch111,275)
   int pivot;pivot=liste._array[spr_intScratch111];
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
                int spr_intScratch113;spr_intScratch113=lower;chck_accs0(liste,spr_intScratch113,277)
         int speicher;speicher=liste._array[spr_intScratch113];
                int spr_intScratch115;spr_intScratch115=lower;chck_accs0(liste,spr_intScratch115,279)
                int spr_intScratch117;spr_intScratch117=upper;chck_accs0(liste,spr_intScratch117,281)
         liste._array[spr_intScratch115]=liste._array[spr_intScratch117];
                int spr_intScratch119;spr_intScratch119=upper;chck_accs0(liste,spr_intScratch119,283)
         liste._array[spr_intScratch119]=speicher;
         
      }
      
   };
          int spr_intScratch11b;spr_intScratch11b=upperBound;chck_accs0(liste,spr_intScratch11b,285)
          int spr_intScratch11d;spr_intScratch11d=lower;chck_accs0(liste,spr_intScratch11d,287)
   liste._array[spr_intScratch11b]=liste._array[spr_intScratch11d];
          int spr_intScratch11f;spr_intScratch11f=lower;chck_accs0(liste,spr_intScratch11f,289)
   liste._array[spr_intScratch11f]=pivot;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lowerBound,lower-1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,lower+1,upperBound);
   
   
} //End Of Method

void AlphabeticSorter::test(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<int,12> liste;
          int spr_intScratch121;spr_intScratch121=0;chck_accs0(liste,spr_intScratch121,291)
   liste._array[spr_intScratch121]=17;
          int spr_intScratch123;spr_intScratch123=1;chck_accs0(liste,spr_intScratch123,293)
   liste._array[spr_intScratch123]=33;
          int spr_intScratch125;spr_intScratch125=2;chck_accs0(liste,spr_intScratch125,295)
   liste._array[spr_intScratch125]=5;
          int spr_intScratch127;spr_intScratch127=3;chck_accs0(liste,spr_intScratch127,297)
   liste._array[spr_intScratch127]=8;
          int spr_intScratch129;spr_intScratch129=4;chck_accs0(liste,spr_intScratch129,299)
   liste._array[spr_intScratch129]=6;
          int spr_intScratch12b;spr_intScratch12b=5;chck_accs0(liste,spr_intScratch12b,301)
   liste._array[spr_intScratch12b]=7;
          int spr_intScratch12d;spr_intScratch12d=6;chck_accs0(liste,spr_intScratch12d,303)
   liste._array[spr_intScratch12d]=2;
          int spr_intScratch12f;spr_intScratch12f=7;chck_accs0(liste,spr_intScratch12f,305)
   liste._array[spr_intScratch12f]=99;
          int spr_intScratch131;spr_intScratch131=8;chck_accs0(liste,spr_intScratch131,307)
   liste._array[spr_intScratch131]=3088;
          int spr_intScratch133;spr_intScratch133=9;chck_accs0(liste,spr_intScratch133,309)
   liste._array[spr_intScratch133]=81;
          int spr_intScratch135;spr_intScratch135=10;chck_accs0(liste,spr_intScratch135,311)
   liste._array[spr_intScratch135]=92;
          int spr_intScratch137;spr_intScratch137=11;chck_accs0(liste,spr_intScratch137,313)
   liste._array[spr_intScratch137]=47;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,liste,0,liste._sz-1);
   PrintfClass pfc0;
   SPRStackArrayConcrete<char,19> spr_StringScratch139;strcpy(spr_StringScratch139._array,"testing QUICKSORT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc0.fstr(stackStartPtr,spr_StringScratch139).pr(stackStartPtr);
   SPRStackArrayConcrete<SPRSmartPtr<String_16>,26 > wordlist;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
             int spr_intScratch13a;spr_intScratch13a=i;chck_accs0(wordlist,spr_intScratch13a,316)
      SPRStackArrayConcrete<char,2> spr_StringScratch13c;strcpy(spr_StringScratch13c._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wordlist._array[spr_intScratch13a]=::new String_16(stackStartPtr,spr_StringScratch13c);
      i++;
      
   
   }
   }//end of SPR for statement
   i=0;
          int spr_intScratch13d;spr_intScratch13d=i;chck_accs0(wordlist,spr_intScratch13d,319)
   SPRStackArrayConcrete<char,6> spr_StringScratch13f;strcpy(spr_StringScratch13f._array,"esel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch13d]._theObject->append(stackStartPtr,spr_StringScratch13f);
   i++;
          int spr_intScratch140;spr_intScratch140=i;chck_accs0(wordlist,spr_intScratch140,322)
   SPRStackArrayConcrete<char,14> spr_StringScratch142;strcpy(spr_StringScratch142._array,"eselsbruecke");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch140]._theObject->append(stackStartPtr,spr_StringScratch142);
   i++;
          int spr_intScratch143;spr_intScratch143=i;chck_accs0(wordlist,spr_intScratch143,325)
   SPRStackArrayConcrete<char,6> spr_StringScratch145;strcpy(spr_StringScratch145._array,"zahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch143]._theObject->append(stackStartPtr,spr_StringScratch145);
   i++;
          int spr_intScratch146;spr_intScratch146=i;chck_accs0(wordlist,spr_intScratch146,328)
   SPRStackArrayConcrete<char,13> spr_StringScratch148;strcpy(spr_StringScratch148._array,"zahnradbahn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch146]._theObject->append(stackStartPtr,spr_StringScratch148);
   i++;
          int spr_intScratch149;spr_intScratch149=i;chck_accs0(wordlist,spr_intScratch149,331)
   SPRStackArrayConcrete<char,7> spr_StringScratch14b;strcpy(spr_StringScratch14b._array,"apfel");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch149]._theObject->append(stackStartPtr,spr_StringScratch14b);
   i++;
          int spr_intScratch14c;spr_intScratch14c=i;chck_accs0(wordlist,spr_intScratch14c,334)
   SPRStackArrayConcrete<char,9> spr_StringScratch14e;strcpy(spr_StringScratch14e._array,"annanas");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch14c]._theObject->append(stackStartPtr,spr_StringScratch14e);
   i++;
          int spr_intScratch14f;spr_intScratch14f=i;chck_accs0(wordlist,spr_intScratch14f,337)
   SPRStackArrayConcrete<char,8> spr_StringScratch151;strcpy(spr_StringScratch151._array,"saturn");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch14f]._theObject->append(stackStartPtr,spr_StringScratch151);
   i++;
          int spr_intScratch152;spr_intScratch152=i;chck_accs0(wordlist,spr_intScratch152,340)
   SPRStackArrayConcrete<char,6> spr_StringScratch154;strcpy(spr_StringScratch154._array,"mars");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch152]._theObject->append(stackStartPtr,spr_StringScratch154);
   i++;
          int spr_intScratch155;spr_intScratch155=i;chck_accs0(wordlist,spr_intScratch155,343)
   SPRStackArrayConcrete<char,7> spr_StringScratch157;strcpy(spr_StringScratch157._array,"pluto");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch155]._theObject->append(stackStartPtr,spr_StringScratch157);
   i++;
          int spr_intScratch158;spr_intScratch158=i;chck_accs0(wordlist,spr_intScratch158,346)
   SPRStackArrayConcrete<char,7> spr_StringScratch15a;strcpy(spr_StringScratch15a._array,"venus");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch158]._theObject->append(stackStartPtr,spr_StringScratch15a);
   i++;
          int spr_intScratch15b;spr_intScratch15b=i;chck_accs0(wordlist,spr_intScratch15b,349)
   SPRStackArrayConcrete<char,5> spr_StringScratch15d;strcpy(spr_StringScratch15d._array,"son");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch15b]._theObject->append(stackStartPtr,spr_StringScratch15d);
   i++;
          int spr_intScratch15e;spr_intScratch15e=i;chck_accs0(wordlist,spr_intScratch15e,352)
   SPRStackArrayConcrete<char,8> spr_StringScratch160;strcpy(spr_StringScratch160._array,"father");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch15e]._theObject->append(stackStartPtr,spr_StringScratch160);
   i++;
          int spr_intScratch161;spr_intScratch161=i;chck_accs0(wordlist,spr_intScratch161,355)
   SPRStackArrayConcrete<char,8> spr_StringScratch163;strcpy(spr_StringScratch163._array,"mother");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch161]._theObject->append(stackStartPtr,spr_StringScratch163);
   i++;
          int spr_intScratch164;spr_intScratch164=i;chck_accs0(wordlist,spr_intScratch164,358)
   SPRStackArrayConcrete<char,10> spr_StringScratch166;strcpy(spr_StringScratch166._array,"daughter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch164]._theObject->append(stackStartPtr,spr_StringScratch166);
   i++;
          int spr_intScratch167;spr_intScratch167=i;chck_accs0(wordlist,spr_intScratch167,361)
   SPRStackArrayConcrete<char,7> spr_StringScratch169;strcpy(spr_StringScratch169._array,"neues");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch167]._theObject->append(stackStartPtr,spr_StringScratch169);
   i++;
          int spr_intScratch16a;spr_intScratch16a=i;chck_accs0(wordlist,spr_intScratch16a,364)
   SPRStackArrayConcrete<char,7> spr_StringScratch16c;strcpy(spr_StringScratch16c._array,"leben");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch16a]._theObject->append(stackStartPtr,spr_StringScratch16c);
   i++;
          int spr_intScratch16d;spr_intScratch16d=i;chck_accs0(wordlist,spr_intScratch16d,367)
   SPRStackArrayConcrete<char,8> spr_StringScratch16f;strcpy(spr_StringScratch16f._array,"aussie");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch16d]._theObject->append(stackStartPtr,spr_StringScratch16f);
   i++;
          int spr_intScratch170;spr_intScratch170=i;chck_accs0(wordlist,spr_intScratch170,370)
   SPRStackArrayConcrete<char,8> spr_StringScratch172;strcpy(spr_StringScratch172._array,"akzent");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch170]._theObject->append(stackStartPtr,spr_StringScratch172);
   i++;
          int spr_intScratch173;spr_intScratch173=i;chck_accs0(wordlist,spr_intScratch173,373)
   SPRStackArrayConcrete<char,14> spr_StringScratch175;strcpy(spr_StringScratch175._array,"erforderlich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch173]._theObject->append(stackStartPtr,spr_StringScratch175);
   i++;
          int spr_intScratch176;spr_intScratch176=i;chck_accs0(wordlist,spr_intScratch176,376)
   SPRStackArrayConcrete<char,11> spr_StringScratch178;strcpy(spr_StringScratch178._array,"behaupten");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch176]._theObject->append(stackStartPtr,spr_StringScratch178);
   i++;
          int spr_intScratch179;spr_intScratch179=i;chck_accs0(wordlist,spr_intScratch179,379)
   SPRStackArrayConcrete<char,8> spr_StringScratch17b;strcpy(spr_StringScratch17b._array,"trafen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch179]._theObject->append(stackStartPtr,spr_StringScratch17b);
   i++;
          int spr_intScratch17c;spr_intScratch17c=i;chck_accs0(wordlist,spr_intScratch17c,382)
   SPRStackArrayConcrete<char,7> spr_StringScratch17e;strcpy(spr_StringScratch17e._array,"kyjev");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch17c]._theObject->append(stackStartPtr,spr_StringScratch17e);
   i++;
          int spr_intScratch17f;spr_intScratch17f=i;chck_accs0(wordlist,spr_intScratch17f,385)
   SPRStackArrayConcrete<char,8> spr_StringScratch181;strcpy(spr_StringScratch181._array,"london");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch17f]._theObject->append(stackStartPtr,spr_StringScratch181);
   i++;
          int spr_intScratch182;spr_intScratch182=i;chck_accs0(wordlist,spr_intScratch182,388)
   SPRStackArrayConcrete<char,8> spr_StringScratch184;strcpy(spr_StringScratch184._array,"berlin");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch182]._theObject->append(stackStartPtr,spr_StringScratch184);
   i++;
          int spr_intScratch185;spr_intScratch185=i;chck_accs0(wordlist,spr_intScratch185,391)
   SPRStackArrayConcrete<char,8> spr_StringScratch187;strcpy(spr_StringScratch187._array,"moscow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch185]._theObject->append(stackStartPtr,spr_StringScratch187);
   i++;
          int spr_intScratch188;spr_intScratch188=i;chck_accs0(wordlist,spr_intScratch188,394)
   SPRStackArrayConcrete<char,10> spr_StringScratch18a;strcpy(spr_StringScratch18a._array,"chandler");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wordlist._array[spr_intScratch188]._theObject->append(stackStartPtr,spr_StringScratch18a);
   i++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->qsort(stackStartPtr,wordlist,0,25);
   {//begin of SPR for statement
   i=0;
   while(i<wordlist._sz){
      PrintfClass pfc;
      String_16 str;
             int spr_intScratch18b;spr_intScratch18b=i;chck_accs0(wordlist,spr_intScratch18b,397)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      str.append(stackStartPtr,wordlist._array[spr_intScratch18b]);
      SPRStackArrayConcrete<char,5> spr_StringScratch18d;strcpy(spr_StringScratch18d._array,"[$]");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch18d).sa(stackStartPtr,str).pr(stackStartPtr);
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
                int spr_intScratch18e;spr_intScratch18e=i+startIndex;chck_accs0(out,spr_intScratch18e,400)
         out._array[spr_intScratch18e]=((char)nibble+'0');
         
      }
      else
      {
             int spr_intScratch190;spr_intScratch190=i+startIndex;chck_accs0(out,spr_intScratch190,402)
         out._array[spr_intScratch190]=((char)nibble+'a'-10);
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
   SPRStackArrayConcrete<char,51> spr_StringScratch192;strcpy(spr_StringScratch192._array,"An Error occured because of '$'. Stopping program");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch192).sa(stackStartPtr,message).pr(stackStartPtr);
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
   int spr_intScratch193;
   spr_intScratch193=32;
   if(spr_intScratch193<0)throw "invalid size requested for heap allocation";
   bufferDyn=new(spr_intScratch193) SPRArray<char>(spr_intScratch193)
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
   SPRStackArrayConcrete<char,37> spr_StringScratch194;strcpy(spr_StringScratch194._array,"bitte als Nutzer root laufen lassen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch194).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,1000,1000);
   SPRStackArrayConcrete<char,13> spr_StringScratch195;strcpy(spr_StringScratch195._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf(stackStartPtr,spr_StringScratch195,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch196;strcpy(spr_StringScratch196._array,"Benutzer_Umschalter::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch196).pr(stackStartPtr);
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch197;strcpy(spr_StringScratch197._array,"nun sollen Fehlermeldungen kommen");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch197).pr(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   bu.schalteNach(stackStartPtr,0,0);
   SPRStackArrayConcrete<char,13> spr_StringScratch198;strcpy(spr_StringScratch198._array,"/etc/shadow");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   SPRFile sf2(stackStartPtr,spr_StringScratch198,1);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sf2.systemHandle(stackStartPtr)>=0){
      SPRStackArrayConcrete<char,42> spr_StringScratch199;strcpy(spr_StringScratch199._array,"Benutzer_Umschalter::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch199).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

