#ifndef SPR_GENERATED_HEADER
#define SPR_GENERATED_HEADER 1
class ThreadLocalStorageEntry;
class TRKontext;
#include "/home/fgerlach/eigene/Sappeur30/haupt//cppMapping/mapping.h"
class SAPPEUR_DLL_EXPORT_A String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,16> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_16();
String_16(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_16& other);
void append(char* stackStartPtr,SPRSmartPtr<String_16> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_16& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_16> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_16& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_16> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_16& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_16& escaped,char escape);
void deEscape(char* stackStartPtr,String_16& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_16& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_16& oStr,int start,int end);
~String_16();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_16& alt,String_16& neu,String_16& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_16> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_16& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,32> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_32();
String_32(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_32& other);
void append(char* stackStartPtr,SPRSmartPtr<String_32> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_32& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_32> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_32& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_32> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_32& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_32& escaped,char escape);
void deEscape(char* stackStartPtr,String_32& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_32& str2);
void rightOf(char* stackStartPtr,char divider,String_32& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_32& oStr,int start,int end);
~String_32();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_32& alt,String_32& neu,String_32& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_32> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_32& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_32& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_32& s1,String_32& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_32: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_32& s1,String_32& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,64> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_64();
String_64(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_64& other);
void append(char* stackStartPtr,SPRSmartPtr<String_64> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_64& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_64> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_64& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_64> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_64& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_64& escaped,char escape);
void deEscape(char* stackStartPtr,String_64& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_64& str2);
void rightOf(char* stackStartPtr,char divider,String_64& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_64& oStr,int start,int end);
~String_64();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_64& alt,String_64& neu,String_64& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_64> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_64& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_64& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_64& s1,String_64& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_64: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_64& s1,String_64& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,128> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_128();
String_128(char* stackStartPtr,SPRStackArray<char>& init);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_128& other);
void append(char* stackStartPtr,SPRSmartPtr<String_128> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_128& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_128> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_128& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_128> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_128& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_128& escaped,char escape);
void deEscape(char* stackStartPtr,String_128& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_128& str2);
void rightOf(char* stackStartPtr,char divider,String_128& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_128& oStr,int start,int end);
~String_128();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_128& alt,String_128& neu,String_128& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_128> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_128& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_128& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class FGString: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _content;
FGString(char* stackStartPtr,SPRStackArray<char>& init);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void print(char* stackStartPtr);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A AlphaEntry: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
char _c;
int _order;
AlphaEntry();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class AlphabeticSorter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<AlphaEntry,36> _alphabet;
AlphabeticSorter();
int isBelow(char* stackStartPtr,SPRStackArray<char>& a,SPRStackArray<char>& b);
int isBelow(char* stackStartPtr,SPRSmartPtr<String_16> a,SPRSmartPtr<String_16> b);
int isBelow(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int index,SPRSmartPtr<String_16> pivot);
int isAbove(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int index,SPRSmartPtr<String_16> pivot);
int ordinal(char* stackStartPtr,char c);
void qsort(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > wordlist,int lower,int upper);
void qsort(char* stackStartPtr,SPRStackArray<int>& liste,int start,int end);
int elemAt(char* stackStartPtr,SPRStackArray<int>& liste,int pos);
int elemAt(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos);
int isAboveOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot);
int isBelowOrEqualPivot(char* stackStartPtr,SPRStackArray<SPRSmartPtr<String_16> > liste,int pos,SPRSmartPtr<String_16> pivot);
void test(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class StringUnitTest: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void run(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Wandler: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int ZeichenNachZiffer(char* stackStartPtr,char z);
static double alsDouble(char* stackStartPtr,String_16& zk);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ZKNuetzlich: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int istLeerzeichen(char* stackStartPtr,char c);
int istZiffer(char* stackStartPtr,char z);
static void appendInAnfz(char* stackStartPtr,String_16& zk,int x);
static void wandle(char* stackStartPtr,longlong zahl,int basis,String_16& ziel);
static void UnitTest(char* stackStartPtr,int& ergebnis);
static void strNachLonglong(char* stackStartPtr,String_16& eingabe,longlong& zeitstempel);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadInfo: public SPRMTObject {
public:
longlong _threadID;
ThreadInfo();
longlong getThreadID(char* stackStartPtr);
void join(char* stackStartPtr);
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class PrintfClass: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _fstr;
String_128 _outBuf;
int _fstrIdx;
SPRSmartPtr<SPRArray<char> > bufferDyn;
PrintfClass& fstr(char* stackStartPtr,SPRStackArray<char>& str);
PrintfClass& sa(char* stackStartPtr,SPRStackArray<char>& str);
PrintfClass& sa(char* stackStartPtr,int num);
PrintfClass& sa(char* stackStartPtr,int num,int base,int numChars);
PrintfClass& sa(char* stackStartPtr,longlong num);
PrintfClass& sa(char* stackStartPtr,double num);
PrintfClass& sa(char* stackStartPtr,float num);
PrintfClass& sa(char* stackStartPtr,String_16& str);
PrintfClass& sa(char* stackStartPtr,SPRSmartPtr<String_16> str);
PrintfClass& sa(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > str);
PrintfClass& sa(char* stackStartPtr,char c);
PrintfClass& saExp(char* stackStartPtr,double num);
void pr(char* stackStartPtr);
void prNoLF(char* stackStartPtr);
void prHex(char* stackStartPtr,char x);
PrintfClass();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

enum SPRFile_Mode{SF_Readonly,SF_ReadWrite,SF_ReadWriteTruncated};
class SPRFile: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int _handle;
SPRSmartPtr<SPRArray<char> > _readBuffer;
int _readPtr;
int _validBytes;
int _fpos;
SPRFile(char* stackStartPtr,SPRStackArray<char>& path,int readonly);
SPRFile(char* stackStartPtr,String_16& pfad,int readonly);
SPRFile();
int oeffne(char* stackStartPtr,String_16& dateiName,SPRFile_Mode modus);
int oeffne(char* stackStartPtr,SPRStackArray<char>& path,int readonly,int neueLoeschen);
int systemHandle(char* stackStartPtr);
int read(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer);
int read(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer);
int write(char* stackStartPtr,int pos,int count,SPRStackArray<char>& buffer);
int write(char* stackStartPtr,int pos,int count,SPRSmartPtr<SPRArray<char> > buffer);
int schreibeAlles(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buffer,int stelleEingabe,int stelleAusgabe,int anzahl);
int size(char* stackStartPtr);
void close(char* stackStartPtr);
int readLine(char* stackStartPtr,String_16& oLine);
int readChar(char* stackStartPtr,char& out);
~SPRFile();
static void __test(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorageList: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}

      char* _stackStartPtr;
   
int _entryCount;
SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 > _entries;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorageEntry: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int _id;
int _dummy;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class ThreadLocalStorage: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 > _entries;
static void getEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry>& ret);
static void setEntry(char* stackStartPtr,int id,SPRSmartPtr<ThreadLocalStorageEntry> entry);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemTime: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
longlong getMillisecondCounter(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class CommandlineArgs: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int numberOfArguments(char* stackStartPtr);
void getArgument(char* stackStartPtr,int idx,String_16& arg);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemConstants: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SystemConstants();
char getFileSeparator(char* stackStartPtr);
int isWindows(char* stackStartPtr);
int isUnix(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SystemControl: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SystemControl();
void exit(char* stackStartPtr);
void uSleep(char* stackStartPtr,int microSeconds);
static void exitError(char* stackStartPtr,SPRStackArray<char>& message);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class HexPrinter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void intToHex(char* stackStartPtr,int x,SPRStackArray<char>& out,int startIndex);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class KeyType4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _vornameNamename;
KeyType4(char* stackStartPtr,String_16& vornameNachname);
KeyType4(char* stackStartPtr,SPRStackArray<char>& vornameNachname);
int compare(char* stackStartPtr,KeyType4& other);
int getHashCode(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hashable4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 _Vorname;
String_16 _Nachname;
String_16 _Strasse;
String_16 _Ort;
Hashable4(char* stackStartPtr,SPRStackArray<char>& vorname,SPRStackArray<char>& nachname,SPRStackArray<char>& strasse,SPRStackArray<char>& ort);
void getKey(char* stackStartPtr,SPRSmartPtr<KeyType4>& oKey);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hashtable4_Hashable4_KeyType4: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > _elements;
int _numUsed;
int _readPtr;
int _size;
void insertInternally(char* stackStartPtr,SPRSmartPtr<Hashable4> x);
Hashtable4_Hashable4_KeyType4(char* stackStartPtr,int initialCapacity);
void insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x);
void get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue);
int numElements(char* stackStartPtr);
void getFirst(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue);
void getNext(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class test556661: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MTSuperClass: public SPRMTObject {
public:
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MultiThreadAdmin: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void turnOffLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject);
void turnOnLocking(char* stackStartPtr,SPRSmartPtr<MTSuperClass>& mtObject);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MutexInfo: public SPRMTObject {
public:

    #ifdef WIN32_X86
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      pthread_mutex_t* _pmutex;
    #endif
  
MutexInfo();
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Mutex: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<MutexInfo> _mi;
int _isOwner;

    #ifdef WIN32_X86 
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      pthread_mutex_t* _pmutex;
    #endif

Mutex();
Mutex(char* stackStartPtr,SPRSmartPtr<MutexInfo> mi);
void lock(char* stackStartPtr);
void unlock(char* stackStartPtr);
MutexInfo* getMutexInfo(char* stackStartPtr);
~Mutex();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SemaphoreInfo: public SPRMTObject {
public:

    #ifdef WIN32_X86
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      sem_t _sem_t;
    #endif
  
SemaphoreInfo();
void threadMain(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Semaphore: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SemaphoreInfo> _si;
int _isOwner;

    #ifdef WIN32_X86 
      HANDLE _win_mutex;
    #endif
    #if defined(GCC_X86) || defined(__clang__)
      sem_t* _sem_t;
    #endif

Semaphore();
Semaphore(char* stackStartPtr,SPRSmartPtr<SemaphoreInfo> si);
void P(char* stackStartPtr);
void V(char* stackStartPtr);
SemaphoreInfo* getSemaphoreInfo(char* stackStartPtr);
~Semaphore();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class NullPtrClassSappeurInternal: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Input: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void getString(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Benutzer_Umschalter: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void schalteNach(char* stackStartPtr,int benutzer,int gruppe);
void UnitTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Math: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int shlC(char* stackStartPtr,int x);
int shlC(char* stackStartPtr,int x,int n);
double sinus(char* stackStartPtr,double rad);
double asinus(char* stackStartPtr,double rad);
double cosinus(char* stackStartPtr,double rad);
double acosinus(char* stackStartPtr,double rad);
double tangens(char* stackStartPtr,double rad);
double atangens(char* stackStartPtr,double rad);
double aHochB(char* stackStartPtr,double a,double b);
double euler(char* stackStartPtr,double x);
double wurzel(char* stackStartPtr,double x);
double pi(char* stackStartPtr);
double e(char* stackStartPtr);
int log2(char* stackStartPtr,int x);
int pruefeZwP(char* stackStartPtr,int n);
void UnitTest(char* stackStartPtr);
double fabs(char* stackStartPtr,double x);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MathLimits: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
double dblMax(char* stackStartPtr);
double dblMin(char* stackStartPtr);
double dblLowest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SprFLTKwindow: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}


class FLTKwindow : public Fl_Window
{
    SprFLTKwindow* swp;
public:
    FLTKwindow(SprFLTKwindow* swpi,int width, int height, const char* title) : 
       Fl_Window(width, height, title) 
    {
      swp = swpi;
    }

    /* darf nicht auf dieser Ebene gemacht werden ! 
     * sonst werden die untergeordneten Bedienelemente(Widgets) nicht gezeichnet 
    void draw() override {
        char stackPtr;
        swp->draw(&stackPtr);
    }
    */

    
};


   FLTKwindow* fw; 

SPRSmartPtr<SPRArray<char> > labelBuffer;
SprFLTKwindow();
void point(char* stackStartPtr,int x,int y);
void SetLabel(char* stackStartPtr,String_16& label);
void draw(char* stackStartPtr);
void begin(char* stackStartPtr);
void end(char* stackStartPtr);
void show(char* stackStartPtr);
void run(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SFcallbackTarget: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void callback(char* stackStartPtr,int source);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SFbutton: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}

     Fl_Button* fb;
  
SPRStackArrayConcrete<char,200> label;
SFbutton();
void create(char* stackStartPtr,int x,int y,int width,int height,SPRStackArray<char>& labeli);
virtual void callback(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SFinput: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
 Fl_Input* fi; 
SFinput();
void create(char* stackStartPtr,int x,int y,int width,int height);
void get(char* stackStartPtr,String_16& value);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SFbox: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
 
     class MyBox: public Fl_Box
     {
          SFbox* sappeurBox;
     public:
          MyBox(SFbox* sappeurBoxi,int x,int y,int w,int h):Fl_Box(x,y,w,h)
          { 
             sappeurBox = sappeurBoxi;
          }

          void draw() override
          {
             Fl_Box::draw();
             fl_color(FL_RED);
             char sp;
             sappeurBox->draw(&sp);
          }
     };

     MyBox* mb; 
   
SPRSmartPtr<SPRArray<int> > punkteX;
SPRSmartPtr<SPRArray<int> > punkteY;
int punkteGueltig;
SFbox();
void create(char* stackStartPtr,int x,int y,int width,int height);
void addPoint(char* stackStartPtr,int x,int y);
int hoehe(char* stackStartPtr);
void loesche(char* stackStartPtr);
virtual void draw(char* stackStartPtr);
void redraw(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_longlong: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int hash(char* stackStartPtr,longlong x);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_longlong: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int compare(char* stackStartPtr,longlong x1,longlong x2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_longlong: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void assign(char* stackStartPtr,longlong& x1,longlong& x2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int hash(char* stackStartPtr,int x);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int compare(char* stackStartPtr,int x1,int x2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void assign(char* stackStartPtr,int& x1,int& x2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_double: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
void assign(char* stackStartPtr,double& x1,double& x2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_Entry_String_16_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 key;
String_16 value;
SPRSmartPtr<SPHT_Entry_String_16_String_16> next;
int is_used;
SPHT_Entry_String_16_String_16();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_String_16_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > _elements;
int numberOfEntries;
int iterator_pos;
SPRSmartPtr<SPHT_Entry_String_16_String_16> iterator_next;
SPHT_String_16_String_16();
void insert(char* stackStartPtr,String_16& key,String_16& value);
int search(char* stackStartPtr,String_16& key,String_16& value);
void del(char* stackStartPtr,String_16& key);
static void insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > bins,String_16& key,String_16& value);
void resetIterator(char* stackStartPtr);
int nextElem(char* stackStartPtr,String_16& key,String_16& value);
int size(char* stackStartPtr);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_Entry_int_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int key;
int value;
SPRSmartPtr<SPHT_Entry_int_int> next;
int is_used;
SPHT_Entry_int_int();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_int_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > _elements;
int numberOfEntries;
int iterator_pos;
SPRSmartPtr<SPHT_Entry_int_int> iterator_next;
SPHT_int_int();
void insert(char* stackStartPtr,int& key,int& value);
int search(char* stackStartPtr,int& key,int& value);
void del(char* stackStartPtr,int& key);
static void insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_int_int> > bins,int& key,int& value);
void resetIterator(char* stackStartPtr);
int nextElem(char* stackStartPtr,int& key,int& value);
int size(char* stackStartPtr);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_Entry_String_16_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 key;
int value;
SPRSmartPtr<SPHT_Entry_String_16_int> next;
int is_used;
SPHT_Entry_String_16_int();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_String_16_int: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > _elements;
int numberOfEntries;
int iterator_pos;
SPRSmartPtr<SPHT_Entry_String_16_int> iterator_next;
SPHT_String_16_int();
void insert(char* stackStartPtr,String_16& key,int& value);
int search(char* stackStartPtr,String_16& key,int& value);
void del(char* stackStartPtr,String_16& key);
static void insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_int> > bins,String_16& key,int& value);
void resetIterator(char* stackStartPtr);
int nextElem(char* stackStartPtr,String_16& key,int& value);
int size(char* stackStartPtr);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_Entry_int_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int key;
String_16 value;
SPRSmartPtr<SPHT_Entry_int_String_16> next;
int is_used;
SPHT_Entry_int_String_16();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_int_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > _elements;
int numberOfEntries;
int iterator_pos;
SPRSmartPtr<SPHT_Entry_int_String_16> iterator_next;
SPHT_int_String_16();
void insert(char* stackStartPtr,int& key,String_16& value);
int search(char* stackStartPtr,int& key,String_16& value);
void del(char* stackStartPtr,int& key);
static void insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_int_String_16> > bins,int& key,String_16& value);
void resetIterator(char* stackStartPtr);
int nextElem(char* stackStartPtr,int& key,String_16& value);
int size(char* stackStartPtr);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_Entry_String_16_double: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 key;
double value;
SPRSmartPtr<SPHT_Entry_String_16_double> next;
int is_used;
SPHT_Entry_String_16_double();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_String_16_double: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > _elements;
int numberOfEntries;
int iterator_pos;
SPRSmartPtr<SPHT_Entry_String_16_double> iterator_next;
SPHT_String_16_double();
void insert(char* stackStartPtr,String_16& key,double& value);
int search(char* stackStartPtr,String_16& key,double& value);
void del(char* stackStartPtr,String_16& key);
static void insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_double> > bins,String_16& key,double& value);
void resetIterator(char* stackStartPtr);
int nextElem(char* stackStartPtr,String_16& key,double& value);
int size(char* stackStartPtr);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class HT_Gen: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class HT_Pruefung: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void unitTest(char* stackStartPtr);
static void hashFunktionTest(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

enum Token{T_UNGUELTIG,T_DATEI_ENDE,T_WORT,T_KLAMMER_AUF,T_KLAMMER_ZU,T_ECK_KLAMMER_AUF,T_ECK_KLAMMER_ZU,T_KOMMA,T_ZEICHENKETTE,T_DOPPEL_PUNKT,T_ZAHL,T_PIPE,T_PLUS,T_AT,T_PUNKT,T_MINUS,T_MAL,T_DURCH,T_SEMI,T_NEUE_ZEILE};
class Scanner: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRFile> eingabeDatei;
SPRSmartPtr<String_16> quelle;
int leseZeiger;
char aktuellesZeichen;
int dateiVollGelesen;
Token CT;
SPRSmartPtr<String_16> tokenWert;
ZKNuetzlich zkn;
PrintfClass pfc;
Scanner(char* stackStartPtr,SPRSmartPtr<SPRFile> eingabeDatei_i);
Scanner(char* stackStartPtr,SPRSmartPtr<String_16> quellei);
int istWortFolgezeichen(char* stackStartPtr,char z);
void esseZeichen(char* stackStartPtr);
void currentToken(char* stackStartPtr,Token& t,SPRSmartPtr<String_16>& wert);
int istLeerzeichen(char* stackStartPtr,char c);
Token nextToken(char* stackStartPtr);
int readChar(char* stackStartPtr,char& zeichen);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class AusrechnerFK: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<Scanner> scanner;
SPHT_String_16_double variableList;
AusrechnerFK(char* stackStartPtr,String_16& dateiname);
AusrechnerFK(char* stackStartPtr,SPRSmartPtr<String_16> ausdruck);
double Addition(char* stackStartPtr);
void setVariableValue(char* stackStartPtr,String_16& varName,double value);
double Multiplication(char* stackStartPtr);
double Primary(char* stackStartPtr);
void fehler(char* stackStartPtr,SPRStackArray<char> meldung);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class MeinKnopf: public SFbutton {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<TRKontext> trk;
MeinKnopf(char* stackStartPtr,SPRSmartPtr<TRKontext> trki);
virtual void callback(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class LoeschKnopf: public SFbutton {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SFbox> sfb;
LoeschKnopf(char* stackStartPtr,SPRSmartPtr<SFbox> sfbi);
virtual void callback(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class TRKontext: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SFinput> varInput;
SPRSmartPtr<SFinput> varStartInput;
SPRSmartPtr<SFinput> varEndInput;
SPRSmartPtr<SFinput> ausdruckInput;
SPRSmartPtr<SFbox> ausgabeBox;
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Main: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
int main(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

void* SPRGeneratedStartThread_ThreadInfo(void* iThreadParam);
void* SPRGeneratedStartThread_SemaphoreInfo(void* iThreadParam);
void* SPRGeneratedStartThread_MTSuperClass(void* iThreadParam);
void* SPRGeneratedStartThread_MutexInfo(void* iThreadParam);
#endif
