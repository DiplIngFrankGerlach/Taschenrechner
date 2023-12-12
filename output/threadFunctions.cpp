#include "stdafx.h"
#include "header.h"
void* SPRGeneratedStartThread_ThreadInfo(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
ThreadInfo* tp=(ThreadInfo*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* SPRGeneratedStartThread_SemaphoreInfo(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
SemaphoreInfo* tp=(SemaphoreInfo*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* SPRGeneratedStartThread_MTSuperClass(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
MTSuperClass* tp=(MTSuperClass*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* SPRGeneratedStartThread_MutexInfo(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
MutexInfo* tp=(MutexInfo*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
