# 1 "Python/ceval.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 330 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "Python/ceval.c" 2
# 12 "Python/ceval.c"
# 1 "Include/Python.h" 1






# 1 "Include/patchlevel.h" 1
# 8 "Include/Python.h" 2
# 1 "./pyconfig.h" 1
# 9 "Include/Python.h" 2
# 1 "Include/pymacconfig.h" 1
# 10 "Include/Python.h" 2
# 19 "Include/Python.h"
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/limits.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 63 "/usr/include/limits.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 587 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 588 "/usr/include/sys/cdefs.h" 2 3 4
# 653 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 654 "/usr/include/sys/cdefs.h" 2 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4





# 1 "/usr/include/i386/limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
# 41 "/usr/include/i386/limits.h" 2 3 4
# 7 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 66 "/usr/include/limits.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/limits.h" 2 3 4
# 20 "Include/Python.h" 2
# 33 "Include/Python.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 65 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 190 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 191 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 39 "/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));






int renamex_np(const char *, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int, const char *, int, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _Nullable _close)(void *);
 int (* _Nullable _read) (void *, char *, int);
 fpos_t (* _Nullable _seek) (void *, fpos_t, int);
 int (* _Nullable _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 231 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);

FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");



int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);

__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")));
# 297 "/usr/include/stdio.h" 3 4
char *ctermid(char *);



FILE *fdopen(int, const char *) __asm("_" "fdopen" "$DARWIN_EXTSN");



int fileno(FILE *);
# 321 "/usr/include/stdio.h" 3 4
int pclose(FILE *) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")));

FILE *popen(const char *, const char *) __asm("_" "popen" "$DARWIN_EXTSN") __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")));
# 342 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 353 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 379 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );
# 417 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 418 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 442 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 443 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
# 458 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (* _Nullable)(void *, char *, int),
                 int (* _Nullable)(void *, const char *, int),
                 fpos_t (* _Nullable)(void *, fpos_t, int),
                 int (* _Nullable)(void *));
# 498 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 499 "/usr/include/stdio.h" 2 3 4
# 34 "Include/Python.h" 2




# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *__str, const char *__sep, char **__lasts);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);


__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))

int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 183 "/usr/include/string.h" 2 3 4
# 192 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 193 "/usr/include/string.h" 2 3 4
# 39 "Include/Python.h" 2

# 1 "/usr/include/errno.h" 1 3 4
# 23 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 80 "/usr/include/sys/errno.h" 3 4
extern int * __error(void);
# 24 "/usr/include/errno.h" 2 3 4
# 41 "Include/Python.h" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4








# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 83 "/usr/include/sys/signal.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 390 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stdint.h" 1 3 4
# 63 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 385 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 33 "/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (* _Nonnull)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* _Nonnull __compar)(const void *, const void *));
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__));
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t __size) __attribute__((__warn_unused_result__));
int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));
int rand(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
void *realloc(void *__ptr, size_t __size) __attribute__((__warn_unused_result__));
void srand(unsigned) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);
# 184 "/usr/include/stdlib.h" 3 4
__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")))
__attribute__((availability(macosx,introduced=10.0)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
int system(const char *) __asm("_" "system" );



size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned *) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
# 1 "/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 82 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 83 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 84 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 85 "/usr/include/i386/types.h" 2 3 4


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 252 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 254 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 255 "/usr/include/stdlib.h" 2 3 4


uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
    __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void * __buf, size_t __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^ _Nonnull)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (^ _Nonnull __compar)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int heapsort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int mergesort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void setprogname(const char *);
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *__ptr, size_t __size);

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;
void *valloc(size_t);
# 43 "Include/Python.h" 2

# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 186 "/usr/include/sys/unistd.h" 3 4
int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));
# 199 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 200 "/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));
# 73 "/usr/include/unistd.h" 2 3 4
# 83 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 429 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char * __path, const char * __arg0, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execle(const char * __path, const char * __arg0, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execlp(const char * __file, const char * __arg0, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execv(const char * __path, char * const * __argv) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execve(const char * __file, char * const * __argv, char * const * __envp) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execvp(const char * __file, char * const * __argv) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
pid_t fork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);

int getgroups(int, gid_t []) __asm("_" "getgroups" "$DARWIN_EXTSN");



char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write" );
# 506 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 536 "/usr/include/unistd.h" 3 4
__attribute__((deprecated)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );






__attribute__((deprecated)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 624 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 638 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 75 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 46 "/usr/include/sys/_types/_fd_def.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(((unsigned long)1)<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 76 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/select.h" 2 3 4







# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/usr/include/sys/select.h" 2 3 4
# 100 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)

  __asm("_" "pselect" "$DARWIN_EXTSN" )







  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)

  __asm("_" "select" "$DARWIN_EXTSN" )







  ;
# 130 "/usr/include/sys/select.h" 2 3 4
# 639 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 643 "/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);





# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
# 659 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkpathat_np(int dfd, const char *path, mode_t omode)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int mkostemps(char *path, int slen, int oflags)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
  __attribute__((availability(macosx,unavailable))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int reboot(int);
int revoke(const char *);

__attribute__((deprecated)) int rcmd(char **, int, const char *, const char *, const char *, int *);
__attribute__((deprecated)) int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
__attribute__((deprecated)) int rresvport(int *);
__attribute__((deprecated)) int rresvport_af(int *, int);
__attribute__((deprecated)) int iruserok(unsigned long, int, const char *, const char *);
__attribute__((deprecated)) int iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((deprecated)) int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
__attribute__((availability(ios,deprecated=10.0,message="syscall(2) is unsupported; " "please switch to a supported interface. For SYS_kdebug_trace use kdebug_signpost().")))

__attribute__((availability(macosx,deprecated=10.12,message="syscall(2) is unsupported; " "please switch to a supported interface. For SYS_kdebug_trace use kdebug_signpost().")))

int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
# 757 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 45 "Include/Python.h" 2
# 56 "Include/Python.h"
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));
# 57 "Include/Python.h" 2

# 1 "Include/pyport.h" 1








# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/inttypes.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/inttypes.h" 3 4
# 1 "/usr/include/inttypes.h" 1 3 4
# 227 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/usr/include/inttypes.h" 2 3 4






__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;

__attribute__((availability(macosx,introduced=10.4)))
extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);
# 31 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/inttypes.h" 2 3 4
# 10 "Include/pyport.h" 2
# 159 "Include/pyport.h"
typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
# 183 "Include/pyport.h"
typedef ssize_t Py_ssize_t;
# 325 "Include/pyport.h"
# 1 "/usr/include/math.h" 1 3 4
# 44 "/usr/include/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 111 "/usr/include/math.h" 3 4
extern int __math_errhandling(void);
# 144 "/usr/include/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 188 "/usr/include/math.h" 3 4
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 322 "/usr/include/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 565 "/usr/include/math.h" 3 4
extern float __inff(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
extern double __inf(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
extern long double __infl(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern float __nan(void) __attribute__((availability(macosx,introduced=10.0)));







extern float lgammaf_r(float, int *) __attribute__((availability(macosx,introduced=10.6)));
extern double lgamma_r(double, int *) __attribute__((availability(macosx,introduced=10.6)));
extern long double lgammal_r(long double, int *) __attribute__((availability(macosx,introduced=10.6)));
# 597 "/usr/include/math.h" 3 4
extern float __exp10f(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __exp10(double) __attribute__((availability(macosx,introduced=10.9)));





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 614 "/usr/include/math.h" 3 4
extern float __cospif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __cospi(double) __attribute__((availability(macosx,introduced=10.9)));
extern float __sinpif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __sinpi(double) __attribute__((availability(macosx,introduced=10.9)));
extern float __tanpif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __tanpi(double) __attribute__((availability(macosx,introduced=10.9)));
# 645 "/usr/include/math.h" 3 4
inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) __attribute__((availability(macosx,introduced=10.0)));
extern double j1(double) __attribute__((availability(macosx,introduced=10.0)));
extern double jn(int, double) __attribute__((availability(macosx,introduced=10.0)));
extern double y0(double) __attribute__((availability(macosx,introduced=10.0)));
extern double y1(double) __attribute__((availability(macosx,introduced=10.0)));
extern double yn(int, double) __attribute__((availability(macosx,introduced=10.0)));
extern double scalb(double, double);
extern int signgam;
# 751 "/usr/include/math.h" 3 4
extern long int rinttol(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern long int roundtol(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double drem(double, double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern int finite(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double gamma(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double significand(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));


struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

extern int matherr(struct exception *) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
# 326 "Include/pyport.h" 2






# 1 "/usr/include/sys/time.h" 1 3 4
# 80 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_timeval64.h" 1 3 4
# 31 "/usr/include/sys/_types/_timeval64.h" 3 4
struct timeval64
{
 __int64_t tv_sec;
 __int64_t tv_usec;
};
# 81 "/usr/include/sys/time.h" 2 3 4
# 91 "/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 129 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 172 "/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};





# 1 "/usr/include/time.h" 1 3 4
# 68 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 69 "/usr/include/time.h" 2 3 4





struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 97 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 152 "/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 0,

_CLOCK_MONOTONIC __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 6,


_CLOCK_MONOTONIC_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 4,

_CLOCK_MONOTONIC_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 5,

_CLOCK_UPTIME_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 8,

_CLOCK_UPTIME_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 9,


_CLOCK_PROCESS_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 12,

_CLOCK_THREAD_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 16

} clockid_t;

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
int clock_getres(clockid_t __clock_id, struct timespec *__res);

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
int clock_gettime(clockid_t __clock_id, struct timespec *__tp);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 184 "/usr/include/sys/time.h" 2 3 4





int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) __attribute__((availability(macosx,introduced=10.5)));
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);



int setitimer(int, const struct itimerval * restrict,
  struct itimerval * restrict);
int utimes(const char *, const struct timeval *);
# 333 "Include/pyport.h" 2
# 390 "Include/pyport.h"
# 1 "/usr/include/sys/stat.h" 1 3 4
# 85 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 86 "/usr/include/sys/stat.h" 2 3 4
# 1 "/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 87 "/usr/include/sys/stat.h" 2 3 4

# 1 "/usr/include/sys/_types/_ino_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 89 "/usr/include/sys/stat.h" 2 3 4


# 1 "/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 92 "/usr/include/sys/stat.h" 2 3 4



# 1 "/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 96 "/usr/include/sys/stat.h" 2 3 4
# 110 "/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 182 "/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 221 "/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 241 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 242 "/usr/include/sys/stat.h" 2 3 4
# 352 "/usr/include/sys/stat.h" 3 4
int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int lstat(const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" "$INODE64");
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) __attribute__((availability(macosx,introduced=10.10)));
int fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" "$INODE64") __attribute__((availability(macosx,introduced=10.10)));
int mkdirat(int, const char *, mode_t) __attribute__((availability(macosx,introduced=10.10)));





# 1 "/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 371 "/usr/include/sys/stat.h" 2 3 4

int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int lchflags(const char *, __uint32_t) __attribute__((availability(macosx,introduced=10.5)));
int lchmod(const char *, mode_t) __attribute__((availability(macosx,introduced=10.5)));
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int umaskx_np(filesec_t) __attribute__((availability(macosx,introduced=10.4,deprecated=10.6)));



int fstatx64_np(int, struct stat64 *, filesec_t) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int lstatx64_np(const char *, struct stat64 *, filesec_t) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int statx64_np(const char *, struct stat64 *, filesec_t) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int fstat64(int, struct stat64 *) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int lstat64(const char *, struct stat64 *) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int stat64(const char *, struct stat64 *) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
# 391 "Include/pyport.h" 2
# 716 "Include/pyport.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 70 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 49 "/usr/include/runetype.h" 3 4
# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/usr/include/runetype.h" 2 3 4
# 1 "/usr/include/sys/_types/_wint_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_wint_t.h" 3 4
typedef __darwin_wint_t wint_t;
# 51 "/usr/include/runetype.h" 2 3 4
# 60 "/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
# 71 "/usr/include/ctype.h" 2 3 4
# 129 "/usr/include/ctype.h" 3 4
unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


inline int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 148 "/usr/include/ctype.h" 3 4
int __maskrune(__darwin_ct_rune_t, unsigned long);



inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 188 "/usr/include/ctype.h" 3 4
__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



inline int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}






inline int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

inline int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

inline int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

inline int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


inline int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

inline int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

inline int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

inline int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

inline int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

inline int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

inline int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


inline int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

inline int
toascii(int _c)
{
 return (_c & 0x7F);
}

inline int
tolower(int _c)
{
        return (__tolower(_c));
}

inline int
toupper(int _c)
{
        return (__toupper(_c));
}


inline int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

inline int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

inline int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

inline int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

inline int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

inline int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

inline int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}
# 717 "Include/pyport.h" 2
# 1 "/usr/include/wctype.h" 1 3 4
# 36 "/usr/include/wctype.h" 3 4
# 1 "/usr/include/_types/_wctrans_t.h" 1 3 4
# 31 "/usr/include/_types/_wctrans_t.h" 3 4
typedef __darwin_wctrans_t wctrans_t;
# 37 "/usr/include/wctype.h" 2 3 4



# 1 "/usr/include/_wctype.h" 1 3 4
# 47 "/usr/include/_wctype.h" 3 4
# 1 "/usr/include/_types/_wctype_t.h" 1 3 4
# 31 "/usr/include/_types/_wctype_t.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 48 "/usr/include/_wctype.h" 2 3 4
# 65 "/usr/include/_wctype.h" 3 4
inline int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

inline int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

inline int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

inline int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

inline int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

inline int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

inline int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

inline int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

inline int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

inline int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

inline int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

inline int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

inline wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

inline wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 171 "/usr/include/_wctype.h" 3 4
wctype_t
 wctype(const char *);
# 41 "/usr/include/wctype.h" 2 3 4








inline int
iswblank(wint_t _wc)
{
 return (__istype(_wc, 0x00020000L));
}


inline int
iswascii(wint_t _wc)
{
 return ((_wc & ~0x7F) == 0);
}

inline int
iswhexnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00010000L));
}

inline int
iswideogram(wint_t _wc)
{
 return (__istype(_wc, 0x00080000L));
}

inline int
iswnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00000400L));
}

inline int
iswphonogram(wint_t _wc)
{
 return (__istype(_wc, 0x00200000L));
}

inline int
iswrune(wint_t _wc)
{
 return (__istype(_wc, 0xFFFFFFF0L));
}

inline int
iswspecial(wint_t _wc)
{
 return (__istype(_wc, 0x00100000L));
}
# 119 "/usr/include/wctype.h" 3 4
wint_t nextwctype(wint_t, wctype_t);

wint_t towctrans(wint_t, wctrans_t);
wctrans_t
 wctrans(const char *);
# 718 "Include/pyport.h" 2
# 59 "Include/Python.h" 2
# 77 "Include/Python.h"
# 1 "Include/pymath.h" 1
# 78 "Include/Python.h" 2
# 1 "Include/pymem.h" 1
# 52 "Include/pymem.h"
void * PyMem_Malloc(size_t);
void * PyMem_Realloc(void *, size_t);
void PyMem_Free(void *);
# 79 "Include/Python.h" 2

# 1 "Include/object.h" 1
# 106 "Include/object.h"
typedef struct _object {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
} PyObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;
} PyVarObject;
# 133 "Include/object.h"
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef int (*coercion)(PyObject **, PyObject **);
typedef PyObject *(*intargfunc)(PyObject *, int) __attribute__((__deprecated__));
typedef PyObject *(*intintargfunc)(PyObject *, int, int) __attribute__((__deprecated__));
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*intobjargproc)(PyObject *, int, PyObject *);
typedef int(*intintobjargproc)(PyObject *, int, int, PyObject *);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);




typedef int (*getreadbufferproc)(PyObject *, int, void **);
typedef int (*getwritebufferproc)(PyObject *, int, void **);
typedef int (*getsegcountproc)(PyObject *, int *);
typedef int (*getcharbufferproc)(PyObject *, int, char **);

typedef Py_ssize_t (*readbufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*writebufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*segcountproc)(PyObject *, Py_ssize_t *);
typedef Py_ssize_t (*charbufferproc)(PyObject *, Py_ssize_t, char **);



typedef struct bufferinfo {
    void *buf;
    PyObject *obj;
    Py_ssize_t len;
    Py_ssize_t itemsize;

    int readonly;
    int ndim;
    char *format;
    Py_ssize_t *shape;
    Py_ssize_t *strides;
    Py_ssize_t *suboffsets;
    Py_ssize_t smalltable[2];

    void *internal;
} Py_buffer;

typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);
# 215 "Include/object.h"
typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);

typedef struct {
# 228 "Include/object.h"
    binaryfunc nb_add;
    binaryfunc nb_subtract;
    binaryfunc nb_multiply;
    binaryfunc nb_divide;
    binaryfunc nb_remainder;
    binaryfunc nb_divmod;
    ternaryfunc nb_power;
    unaryfunc nb_negative;
    unaryfunc nb_positive;
    unaryfunc nb_absolute;
    inquiry nb_nonzero;
    unaryfunc nb_invert;
    binaryfunc nb_lshift;
    binaryfunc nb_rshift;
    binaryfunc nb_and;
    binaryfunc nb_xor;
    binaryfunc nb_or;
    coercion nb_coerce;
    unaryfunc nb_int;
    unaryfunc nb_long;
    unaryfunc nb_float;
    unaryfunc nb_oct;
    unaryfunc nb_hex;

    binaryfunc nb_inplace_add;
    binaryfunc nb_inplace_subtract;
    binaryfunc nb_inplace_multiply;
    binaryfunc nb_inplace_divide;
    binaryfunc nb_inplace_remainder;
    ternaryfunc nb_inplace_power;
    binaryfunc nb_inplace_lshift;
    binaryfunc nb_inplace_rshift;
    binaryfunc nb_inplace_and;
    binaryfunc nb_inplace_xor;
    binaryfunc nb_inplace_or;



    binaryfunc nb_floor_divide;
    binaryfunc nb_true_divide;
    binaryfunc nb_inplace_floor_divide;
    binaryfunc nb_inplace_true_divide;


    unaryfunc nb_index;
} PyNumberMethods;

typedef struct {
    lenfunc sq_length;
    binaryfunc sq_concat;
    ssizeargfunc sq_repeat;
    ssizeargfunc sq_item;
    ssizessizeargfunc sq_slice;
    ssizeobjargproc sq_ass_item;
    ssizessizeobjargproc sq_ass_slice;
    objobjproc sq_contains;

    binaryfunc sq_inplace_concat;
    ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;

typedef struct {
    lenfunc mp_length;
    binaryfunc mp_subscript;
    objobjargproc mp_ass_subscript;
} PyMappingMethods;

typedef struct {
    readbufferproc bf_getreadbuffer;
    writebufferproc bf_getwritebuffer;
    segcountproc bf_getsegcount;
    charbufferproc bf_getcharbuffer;
    getbufferproc bf_getbuffer;
    releasebufferproc bf_releasebuffer;
} PyBufferProcs;


typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);
typedef int (*printfunc)(PyObject *, FILE *, int);
typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef int (*cmpfunc)(PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef long (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(struct _typeobject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(struct _typeobject *, Py_ssize_t);

typedef struct _typeobject {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;
    const char *tp_name;
    Py_ssize_t tp_basicsize, tp_itemsize;



    destructor tp_dealloc;
    printfunc tp_print;
    getattrfunc tp_getattr;
    setattrfunc tp_setattr;
    cmpfunc tp_compare;
    reprfunc tp_repr;



    PyNumberMethods *tp_as_number;
    PySequenceMethods *tp_as_sequence;
    PyMappingMethods *tp_as_mapping;



    hashfunc tp_hash;
    ternaryfunc tp_call;
    reprfunc tp_str;
    getattrofunc tp_getattro;
    setattrofunc tp_setattro;


    PyBufferProcs *tp_as_buffer;


    long tp_flags;

    const char *tp_doc;



    traverseproc tp_traverse;


    inquiry tp_clear;



    richcmpfunc tp_richcompare;


    Py_ssize_t tp_weaklistoffset;



    getiterfunc tp_iter;
    iternextfunc tp_iternext;


    struct PyMethodDef *tp_methods;
    struct PyMemberDef *tp_members;
    struct PyGetSetDef *tp_getset;
    struct _typeobject *tp_base;
    PyObject *tp_dict;
    descrgetfunc tp_descr_get;
    descrsetfunc tp_descr_set;
    Py_ssize_t tp_dictoffset;
    initproc tp_init;
    allocfunc tp_alloc;
    newfunc tp_new;
    freefunc tp_free;
    inquiry tp_is_gc;
    PyObject *tp_bases;
    PyObject *tp_mro;
    PyObject *tp_cache;
    PyObject *tp_subclasses;
    PyObject *tp_weaklist;
    destructor tp_del;


    unsigned int tp_version_tag;
# 411 "Include/object.h"
} PyTypeObject;



typedef struct _heaptypeobject {


    PyTypeObject ht_type;
    PyNumberMethods as_number;
    PyMappingMethods as_mapping;
    PySequenceMethods as_sequence;




    PyBufferProcs as_buffer;
    PyObject *ht_name, *ht_slots;

} PyHeapTypeObject;







int PyType_IsSubtype(PyTypeObject *, PyTypeObject *);



extern PyTypeObject PyType_Type;
extern PyTypeObject PyBaseObject_Type;
extern PyTypeObject PySuper_Type;





int PyType_Ready(PyTypeObject *);
PyObject * PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
PyObject * PyType_GenericNew(PyTypeObject *,
                                               PyObject *, PyObject *);
PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
PyObject * _PyObject_LookupSpecial(PyObject *, char *, PyObject **);
unsigned int PyType_ClearCache(void);
void PyType_Modified(PyTypeObject *);


int PyObject_Print(PyObject *, FILE *, int);
void _PyObject_Dump(PyObject *);
PyObject * PyObject_Repr(PyObject *);
PyObject * _PyObject_Str(PyObject *);
PyObject * PyObject_Str(PyObject *);


PyObject * PyObject_Unicode(PyObject *);

int PyObject_Compare(PyObject *, PyObject *);
PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
int PyObject_RichCompareBool(PyObject *, PyObject *, int);
PyObject * PyObject_GetAttrString(PyObject *, const char *);
int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
int PyObject_HasAttrString(PyObject *, const char *);
PyObject * PyObject_GetAttr(PyObject *, PyObject *);
int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
int PyObject_HasAttr(PyObject *, PyObject *);
PyObject ** _PyObject_GetDictPtr(PyObject *);
PyObject * PyObject_SelfIter(PyObject *);
PyObject * _PyObject_NextNotImplemented(PyObject *);
PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
int PyObject_GenericSetAttr(PyObject *,
                                              PyObject *, PyObject *);
long PyObject_Hash(PyObject *);
long PyObject_HashNotImplemented(PyObject *);
int PyObject_IsTrue(PyObject *);
int PyObject_Not(PyObject *);
int PyCallable_Check(PyObject *);
int PyNumber_Coerce(PyObject **, PyObject **);
int PyNumber_CoerceEx(PyObject **, PyObject **);

void PyObject_ClearWeakRefs(PyObject *);


extern int _PyObject_SlotCompare(PyObject *, PyObject *);


PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *);
int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);







PyObject * PyObject_Dir(PyObject *);



int Py_ReprEnter(PyObject *);
void Py_ReprLeave(PyObject *);


long _Py_HashDouble(double);
long _Py_HashPointer(void*);

typedef struct {
    long prefix;
    long suffix;
} _Py_HashSecret_t;
extern _Py_HashSecret_t _Py_HashSecret;


extern int _Py_HashSecret_Initialized;
# 707 "Include/object.h"
extern Py_ssize_t _Py_RefTotal;
void _Py_NegativeRefcount(const char *fname,
                                            int lineno, PyObject *op);
PyObject * _PyDict_Dummy(void);
PyObject * _PySet_Dummy(void);
Py_ssize_t _Py_GetRefTotal(void);
# 744 "Include/object.h"
void _Py_NewReference(PyObject *);
void _Py_ForgetReference(PyObject *);
void _Py_Dealloc(PyObject *);
void _Py_PrintReferences(FILE *);
void _Py_PrintReferenceAddresses(FILE *);
void _Py_AddToAllObjects(PyObject *, int force);
# 864 "Include/object.h"
void Py_IncRef(PyObject *);
void Py_DecRef(PyObject *);







extern PyObject _Py_NoneStruct;
# 883 "Include/object.h"
extern PyObject _Py_NotImplementedStruct;
# 897 "Include/object.h"
extern int _Py_SwappedOp[];
# 1011 "Include/object.h"
void _PyTrash_deposit_object(PyObject*);
void _PyTrash_destroy_chain(void);
extern int _PyTrash_delete_nesting;
extern PyObject * _PyTrash_delete_later;


void _PyTrash_thread_deposit_object(PyObject*);
void _PyTrash_thread_destroy_chain(void);
# 81 "Include/Python.h" 2
# 1 "Include/objimpl.h" 1
# 97 "Include/objimpl.h"
void * PyObject_Malloc(size_t);
void * PyObject_Realloc(void *, size_t);
void PyObject_Free(void *);





void * _PyObject_DebugMalloc(size_t nbytes);
void * _PyObject_DebugRealloc(void *p, size_t nbytes);
void _PyObject_DebugFree(void *p);
void _PyObject_DebugDumpAddress(const void *p);
void _PyObject_DebugCheckAddress(const void *p);
void _PyObject_DebugMallocStats(void);
void * _PyObject_DebugMallocApi(char api, size_t nbytes);
void * _PyObject_DebugReallocApi(char api, void *p, size_t nbytes);
void _PyObject_DebugFreeApi(char api, void *p);
void _PyObject_DebugCheckAddressApi(char api, const void *p);
void * _PyMem_DebugMalloc(size_t nbytes);
void * _PyMem_DebugRealloc(void *p, size_t nbytes);
void _PyMem_DebugFree(void *p);
# 150 "Include/objimpl.h"
PyObject * PyObject_Init(PyObject *, PyTypeObject *);
PyVarObject * PyObject_InitVar(PyVarObject *,
                                                 PyTypeObject *, Py_ssize_t);
PyObject * _PyObject_New(PyTypeObject *);
PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
# 235 "Include/objimpl.h"
Py_ssize_t PyGC_Collect(void);
# 244 "Include/objimpl.h"
PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);







typedef union _gc_head {
    struct {
        union _gc_head *gc_next;
        union _gc_head *gc_prev;
        Py_ssize_t gc_refs;
    } gc;
    long double dummy;
} PyGC_Head;

extern PyGC_Head *_PyGC_generation0;
# 306 "Include/objimpl.h"
PyObject * _PyObject_GC_Malloc(size_t);
PyObject * _PyObject_GC_New(PyTypeObject *);
PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);
void PyObject_GC_Track(void *);
void PyObject_GC_UnTrack(void *);
void PyObject_GC_Del(void *);
# 82 "Include/Python.h" 2

# 1 "Include/pydebug.h" 1







extern int Py_DebugFlag;
extern int Py_VerboseFlag;
extern int Py_InteractiveFlag;
extern int Py_InspectFlag;
extern int Py_OptimizeFlag;
extern int Py_NoSiteFlag;
extern int Py_BytesWarningFlag;
extern int Py_UseClassExceptionsFlag;
extern int Py_FrozenFlag;
extern int Py_TabcheckFlag;
extern int Py_UnicodeFlag;
extern int Py_IgnoreEnvironmentFlag;
extern int Py_DivisionWarningFlag;
extern int Py_DontWriteBytecodeFlag;
extern int Py_NoUserSiteDirectory;



extern int _Py_QnewFlag;

extern int Py_Py3kWarningFlag;
extern int Py_HashRandomizationFlag;






void Py_FatalError(const char *message);
# 84 "Include/Python.h" 2

# 1 "Include/unicodeobject.h" 1



# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stdarg.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 50 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 5 "Include/unicodeobject.h" 2
# 120 "Include/unicodeobject.h"
# 1 "/usr/include/wchar.h" 1 3 4
# 76 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/sys/_types/_mbstate_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_mbstate_t.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 77 "/usr/include/wchar.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 80 "/usr/include/wchar.h" 2 3 4
# 97 "/usr/include/wchar.h" 3 4
wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * restrict, int, FILE * restrict);
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * restrict, FILE * restrict);
int fwide(FILE *, int);
int fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * restrict, size_t, mbstate_t * restrict);
size_t mbrtowc(wchar_t * restrict, const char * restrict, size_t,
     mbstate_t * restrict);
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * restrict, const char ** restrict, size_t,
     mbstate_t * restrict);
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * restrict, size_t, const wchar_t * restrict, ...);
int swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswprintf(wchar_t * restrict, size_t, const wchar_t * restrict,
     __darwin_va_list);
int vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t *wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * restrict, const wchar_t * restrict);
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * restrict, size_t, const wchar_t * restrict,
     const struct tm * restrict) __asm("_" "wcsftime" );
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * restrict, const wchar_t * restrict, size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * restrict , const wchar_t * restrict, size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * restrict, const wchar_t ** restrict, size_t,
     mbstate_t * restrict);
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t wcsxfrm(wchar_t * restrict, const wchar_t * restrict, size_t);
int wctob(wint_t);
double wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t *wcstok(wchar_t * restrict, const wchar_t * restrict,
     wchar_t ** restrict);
long wcstol(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long
  wcstoul(const wchar_t * restrict, wchar_t ** restrict, int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * restrict, const wchar_t * restrict, size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * restrict, ...);
int wscanf(const wchar_t * restrict, ...);
int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);
# 170 "/usr/include/wchar.h" 3 4
int vfwscanf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswscanf(const wchar_t * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vwscanf(const wchar_t * restrict, __darwin_va_list);
float wcstof(const wchar_t * restrict, wchar_t ** restrict);
long double
 wcstold(const wchar_t * restrict, wchar_t ** restrict);

long long
 wcstoll(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long long
 wcstoull(const wchar_t * restrict, wchar_t ** restrict, int);
# 195 "/usr/include/wchar.h" 3 4
size_t mbsnrtowcs(wchar_t * restrict, const char ** restrict, size_t,
            size_t, mbstate_t * restrict);
wchar_t *wcpcpy(wchar_t * restrict, const wchar_t * restrict) __attribute__((availability(macosx,introduced=10.7)));
wchar_t *wcpncpy(wchar_t * restrict, const wchar_t * restrict, size_t) __attribute__((availability(macosx,introduced=10.7)));
wchar_t *wcsdup(const wchar_t *) __attribute__((availability(macosx,introduced=10.7)));
int wcscasecmp(const wchar_t *, const wchar_t *) __attribute__((availability(macosx,introduced=10.7)));
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) __attribute__((availability(macosx,introduced=10.7)));
size_t wcsnlen(const wchar_t *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t wcsnrtombs(char * restrict, const wchar_t ** restrict, size_t,
            size_t, mbstate_t * restrict);
# 214 "/usr/include/wchar.h" 3 4
wchar_t *fgetwln(FILE * restrict, size_t *) __attribute__((availability(macosx,introduced=10.7)));
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);
# 121 "Include/unicodeobject.h" 2







typedef unsigned int Py_UCS4;
# 137 "Include/unicodeobject.h"
typedef unsigned short Py_UNICODE;
# 415 "Include/unicodeobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    Py_ssize_t length;
    Py_UNICODE *str;
    long hash;
    PyObject *defenc;


} PyUnicodeObject;

extern PyTypeObject PyUnicode_Type;
# 464 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_FromUnicode(
    const Py_UNICODE *u,
    Py_ssize_t size
    );


PyObject* PyUnicodeUCS2_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );



PyObject* PyUnicodeUCS2_FromString(
    const char *u
    );




Py_UNICODE * PyUnicodeUCS2_AsUnicode(
    PyObject *unicode
    );



Py_ssize_t PyUnicodeUCS2_GetSize(
    PyObject *unicode
    );


Py_UNICODE PyUnicodeUCS2_GetMax(void);
# 511 "Include/unicodeobject.h"
int PyUnicodeUCS2_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
# 533 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_FromEncodedObject(
    register PyObject *obj,
    const char *encoding,
    const char *errors
    );
# 552 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_FromObject(
    register PyObject *obj
    );

PyObject * PyUnicodeUCS2_FromFormatV(const char*, va_list);
PyObject * PyUnicodeUCS2_FromFormat(const char*, ...);



PyObject * _PyUnicode_FormatAdvanced(PyObject *obj,
                                                 Py_UNICODE *format_spec,
                                                 Py_ssize_t format_spec_len);
# 574 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_FromWideChar(
    register const wchar_t *w,
    Py_ssize_t size
    );
# 591 "Include/unicodeobject.h"
Py_ssize_t PyUnicodeUCS2_AsWideChar(
    PyUnicodeObject *unicode,
    register wchar_t *w,
    Py_ssize_t size
    );
# 609 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_FromOrdinal(int ordinal);
# 620 "Include/unicodeobject.h"
int PyUnicodeUCS2_ClearFreelist(void);
# 656 "Include/unicodeobject.h"
PyObject * _PyUnicodeUCS2_AsDefaultEncodedString(
    PyObject *, const char *);
# 668 "Include/unicodeobject.h"
const char* PyUnicodeUCS2_GetDefaultEncoding(void);







int PyUnicodeUCS2_SetDefaultEncoding(
    const char *encoding
    );






PyObject* PyUnicodeUCS2_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicodeUCS2_Encode(
    const Py_UNICODE *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicodeUCS2_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicodeUCS2_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );

PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );




PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

PyObject* PyUnicode_EncodeUTF7(
    const Py_UNICODE *data,
    Py_ssize_t length,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );



PyObject* PyUnicodeUCS2_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicodeUCS2_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

PyObject* PyUnicodeUCS2_AsUTF8String(
    PyObject *unicode
    );

PyObject* PyUnicodeUCS2_EncodeUTF8(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 798 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

PyObject* PyUnicodeUCS2_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




PyObject* PyUnicodeUCS2_AsUTF32String(
    PyObject *unicode
    );
# 840 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_EncodeUTF32(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
# 872 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

PyObject* PyUnicodeUCS2_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




PyObject* PyUnicodeUCS2_AsUTF16String(
    PyObject *unicode
    );
# 918 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_EncodeUTF16(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );



PyObject* PyUnicodeUCS2_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicodeUCS2_AsUnicodeEscapeString(
    PyObject *unicode
    );

PyObject* PyUnicodeUCS2_EncodeUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );



PyObject* PyUnicodeUCS2_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicodeUCS2_AsRawUnicodeEscapeString(
    PyObject *unicode
    );

PyObject* PyUnicodeUCS2_EncodeRawUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );





PyObject *_PyUnicode_DecodeUnicodeInternal(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );







PyObject* PyUnicodeUCS2_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicodeUCS2_AsLatin1String(
    PyObject *unicode
    );

PyObject* PyUnicodeUCS2_EncodeLatin1(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );







PyObject* PyUnicodeUCS2_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicodeUCS2_AsASCIIString(
    PyObject *unicode
    );

PyObject* PyUnicodeUCS2_EncodeASCII(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1035 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,

    const char *errors
    );

PyObject* PyUnicodeUCS2_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping

    );

PyObject* PyUnicodeUCS2_EncodeCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *mapping,

    const char *errors
    );
# 1070 "Include/unicodeobject.h"
PyObject * PyUnicodeUCS2_TranslateCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *table,
    const char *errors
    );
# 1130 "Include/unicodeobject.h"
int PyUnicodeUCS2_EncodeDecimal(
    Py_UNICODE *s,
    Py_ssize_t length,
    char *output,
    const char *errors
    );
# 1145 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_Concat(
    PyObject *left,
    PyObject *right
    );
# 1161 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );






PyObject* PyUnicodeUCS2_Splitlines(
    PyObject *s,
    int keepends
    );



PyObject* PyUnicodeUCS2_Partition(
    PyObject *s,
    PyObject *sep
    );




PyObject* PyUnicodeUCS2_RPartition(
    PyObject *s,
    PyObject *sep
    );
# 1205 "Include/unicodeobject.h"
PyObject* PyUnicodeUCS2_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
# 1223 "Include/unicodeobject.h"
PyObject * PyUnicodeUCS2_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );




PyObject* PyUnicodeUCS2_Join(
    PyObject *separator,
    PyObject *seq
    );




Py_ssize_t PyUnicodeUCS2_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );





Py_ssize_t PyUnicodeUCS2_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );



Py_ssize_t PyUnicodeUCS2_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );




PyObject * PyUnicodeUCS2_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount

    );




int PyUnicodeUCS2_Compare(
    PyObject *left,
    PyObject *right
    );
# 1304 "Include/unicodeobject.h"
PyObject * PyUnicodeUCS2_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );




PyObject * PyUnicodeUCS2_Format(
    PyObject *format,
    PyObject *args
    );







int PyUnicodeUCS2_Contains(
    PyObject *container,
    PyObject *element
    );


PyObject * _PyUnicode_XStrip(
    PyUnicodeObject *self,
    int striptype,
    PyObject *sepobj
    );





extern const unsigned char _Py_ascii_whitespace[];
# 1349 "Include/unicodeobject.h"
int _PyUnicodeUCS2_IsLowercase(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsUppercase(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsTitlecase(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsWhitespace(
    const Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsLinebreak(
    const Py_UNICODE ch
    );

Py_UNICODE _PyUnicodeUCS2_ToLowercase(
    Py_UNICODE ch
    );

Py_UNICODE _PyUnicodeUCS2_ToUppercase(
    Py_UNICODE ch
    );

Py_UNICODE _PyUnicodeUCS2_ToTitlecase(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_ToDecimalDigit(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_ToDigit(
    Py_UNICODE ch
    );

double _PyUnicodeUCS2_ToNumeric(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsDecimalDigit(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsDigit(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsNumeric(
    Py_UNICODE ch
    );

int _PyUnicodeUCS2_IsAlpha(
    Py_UNICODE ch
    );
# 86 "Include/Python.h" 2
# 1 "Include/intobject.h" 1
# 23 "Include/intobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    long ob_ival;
} PyIntObject;

extern PyTypeObject PyInt_Type;





PyObject * PyInt_FromString(char*, char**, int);

PyObject * PyInt_FromUnicode(Py_UNICODE*, Py_ssize_t, int);

PyObject * PyInt_FromLong(long);
PyObject * PyInt_FromSize_t(size_t);
PyObject * PyInt_FromSsize_t(Py_ssize_t);
long PyInt_AsLong(PyObject *);
Py_ssize_t PyInt_AsSsize_t(PyObject *);
int _PyInt_AsInt(PyObject *);
unsigned long PyInt_AsUnsignedLongMask(PyObject *);

unsigned long long PyInt_AsUnsignedLongLongMask(PyObject *);


long PyInt_GetMax(void);
# 60 "Include/intobject.h"
unsigned long PyOS_strtoul(char *, char **, int);
long PyOS_strtol(char *, char **, int);


int PyInt_ClearFreeList(void);





PyObject* _PyInt_Format(PyIntObject* v, int base, int newstyle);



PyObject * _PyInt_FormatAdvanced(PyObject *obj,
          char *format_spec,
          Py_ssize_t format_spec_len);
# 87 "Include/Python.h" 2
# 1 "Include/boolobject.h" 1
# 10 "Include/boolobject.h"
typedef PyIntObject PyBoolObject;

extern PyTypeObject PyBool_Type;







extern PyIntObject _Py_ZeroStruct, _Py_TrueStruct;
# 31 "Include/boolobject.h"
PyObject * PyBool_FromLong(long);
# 88 "Include/Python.h" 2
# 1 "Include/longobject.h" 1
# 10 "Include/longobject.h"
typedef struct _longobject PyLongObject;

extern PyTypeObject PyLong_Type;





PyObject * PyLong_FromLong(long);
PyObject * PyLong_FromUnsignedLong(unsigned long);
PyObject * PyLong_FromDouble(double);
PyObject * PyLong_FromSize_t(size_t);
PyObject * PyLong_FromSsize_t(Py_ssize_t);
long PyLong_AsLong(PyObject *);
long PyLong_AsLongAndOverflow(PyObject *, int *);
unsigned long PyLong_AsUnsignedLong(PyObject *);
unsigned long PyLong_AsUnsignedLongMask(PyObject *);
Py_ssize_t PyLong_AsSsize_t(PyObject *);
int _PyLong_AsInt(PyObject *);
PyObject * PyLong_GetInfo(void);





extern int _PyLong_DigitValue[256];







double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);

double PyLong_AsDouble(PyObject *);
PyObject * PyLong_FromVoidPtr(void *);
void * PyLong_AsVoidPtr(PyObject *);


PyObject * PyLong_FromLongLong(long long);
PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
long long PyLong_AsLongLong(PyObject *);
unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
long long PyLong_AsLongLongAndOverflow(PyObject *, int *);


PyObject * PyLong_FromString(char *, char **, int);

PyObject * PyLong_FromUnicode(Py_UNICODE*, Py_ssize_t, int);






int _PyLong_Sign(PyObject *v);
# 77 "Include/longobject.h"
size_t _PyLong_NumBits(PyObject *v);
# 92 "Include/longobject.h"
PyObject * _PyLong_FromByteArray(
 const unsigned char* bytes, size_t n,
 int little_endian, int is_signed);
# 115 "Include/longobject.h"
int _PyLong_AsByteArray(PyLongObject* v,
 unsigned char* bytes, size_t n,
 int little_endian, int is_signed);






PyObject * _PyLong_Format(PyObject *aa, int base, int addL, int newstyle);



PyObject * _PyLong_FormatAdvanced(PyObject *obj,
           char *format_spec,
           Py_ssize_t format_spec_len);
# 89 "Include/Python.h" 2
# 1 "Include/floatobject.h" 1
# 14 "Include/floatobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    double ob_fval;
} PyFloatObject;

extern PyTypeObject PyFloat_Type;
# 41 "Include/floatobject.h"
double PyFloat_GetMax(void);
double PyFloat_GetMin(void);
PyObject * PyFloat_GetInfo(void);




PyObject * PyFloat_FromString(PyObject*, char** junk);


PyObject * PyFloat_FromDouble(double);



double PyFloat_AsDouble(PyObject *);






void PyFloat_AsReprString(char*, PyFloatObject *v);






void PyFloat_AsString(char*, PyFloatObject *v);
# 103 "Include/floatobject.h"
int _PyFloat_Pack4(double x, unsigned char *p, int le);
int _PyFloat_Pack8(double x, unsigned char *p, int le);


int _PyFloat_Digits(char *buf, double v, int *signum);
void _PyFloat_DigitsInit(void);
# 118 "Include/floatobject.h"
double _PyFloat_Unpack4(const unsigned char *p, int le);
double _PyFloat_Unpack8(const unsigned char *p, int le);


int PyFloat_ClearFreeList(void);



PyObject * _PyFloat_FormatAdvanced(PyObject *obj,
            char *format_spec,
            Py_ssize_t format_spec_len);




PyObject * _Py_double_round(double x, int ndigits);
# 90 "Include/Python.h" 2

# 1 "Include/complexobject.h" 1








typedef struct {
    double real;
    double imag;
} Py_complex;
# 24 "Include/complexobject.h"
Py_complex _Py_c_sum(Py_complex, Py_complex);
Py_complex _Py_c_diff(Py_complex, Py_complex);
Py_complex _Py_c_neg(Py_complex);
Py_complex _Py_c_prod(Py_complex, Py_complex);
Py_complex _Py_c_quot(Py_complex, Py_complex);
Py_complex _Py_c_pow(Py_complex, Py_complex);
double _Py_c_abs(Py_complex);
# 40 "Include/complexobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    Py_complex cval;
} PyComplexObject;

extern PyTypeObject PyComplex_Type;




PyObject * PyComplex_FromCComplex(Py_complex);
PyObject * PyComplex_FromDoubles(double real, double imag);

double PyComplex_RealAsDouble(PyObject *op);
double PyComplex_ImagAsDouble(PyObject *op);
Py_complex PyComplex_AsCComplex(PyObject *op);



PyObject * _PyComplex_FormatAdvanced(PyObject *obj,
                                                 char *format_spec,
                                                 Py_ssize_t format_spec_len);
# 92 "Include/Python.h" 2

# 1 "Include/rangeobject.h" 1
# 21 "Include/rangeobject.h"
extern PyTypeObject PyRange_Type;
# 94 "Include/Python.h" 2
# 1 "Include/stringobject.h" 1
# 35 "Include/stringobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;
    long ob_shash;
    int ob_sstate;
    char ob_sval[1];
# 49 "Include/stringobject.h"
} PyStringObject;





extern PyTypeObject PyBaseString_Type;
extern PyTypeObject PyString_Type;





PyObject * PyString_FromStringAndSize(const char *, Py_ssize_t);
PyObject * PyString_FromString(const char *);
PyObject * PyString_FromFormatV(const char*, va_list)
    __attribute__((format(printf, 1, 0)));
PyObject * PyString_FromFormat(const char*, ...)
    __attribute__((format(printf, 1, 2)));
Py_ssize_t PyString_Size(PyObject *);
char * PyString_AsString(PyObject *);
PyObject * PyString_Repr(PyObject *, int);
void PyString_Concat(PyObject **, PyObject *);
void PyString_ConcatAndDel(PyObject **, PyObject *);
int _PyString_Resize(PyObject **, Py_ssize_t);
int _PyString_Eq(PyObject *, PyObject*);
PyObject * PyString_Format(PyObject *, PyObject *);
PyObject * _PyString_FormatLong(PyObject*, int, int,
        int, char**, int*);
PyObject * PyString_DecodeEscape(const char *, Py_ssize_t,
         const char *, Py_ssize_t,
         const char *);

void PyString_InternInPlace(PyObject **);
void PyString_InternImmortal(PyObject **);
PyObject * PyString_InternFromString(const char *);
void _Py_ReleaseInternedStrings(void);
# 96 "Include/stringobject.h"
PyObject * _PyString_Join(PyObject *sep, PyObject *x);






PyObject* PyString_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );




PyObject* PyString_Encode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );




PyObject* PyString_AsEncodedObject(
    PyObject *str,
    const char *encoding,
    const char *errors
    );
# 137 "Include/stringobject.h"
PyObject* PyString_AsEncodedString(
    PyObject *str,
    const char *encoding,
    const char *errors
    );




PyObject* PyString_AsDecodedObject(
    PyObject *str,
    const char *encoding,
    const char *errors
    );
# 160 "Include/stringobject.h"
PyObject* PyString_AsDecodedString(
    PyObject *str,
    const char *encoding,
    const char *errors
    );







int PyString_AsStringAndSize(
    register PyObject *obj,
    register char **s,
    register Py_ssize_t *len


    );





Py_ssize_t _PyString_InsertThousandsGroupingLocale(char *buffer,
                                  Py_ssize_t n_buffer,
                                  char *digits,
                                  Py_ssize_t n_digits,
                                  Py_ssize_t min_width);




Py_ssize_t _PyString_InsertThousandsGrouping(char *buffer,
                                  Py_ssize_t n_buffer,
                                  char *digits,
                                  Py_ssize_t n_digits,
                                  Py_ssize_t min_width,
                                  const char *grouping,
                                  const char *thousands_sep);



PyObject * _PyBytes_FormatAdvanced(PyObject *obj,
            char *format_spec,
            Py_ssize_t format_spec_len);
# 95 "Include/Python.h" 2
# 1 "Include/memoryobject.h" 1








extern PyTypeObject PyMemoryView_Type;
# 19 "Include/memoryobject.h"
PyObject * PyMemoryView_GetContiguous(PyObject *base,
        int buffertype,
        char fort);
# 54 "Include/memoryobject.h"
PyObject * PyMemoryView_FromObject(PyObject *base);

PyObject * PyMemoryView_FromBuffer(Py_buffer *info);







typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *base;
    Py_buffer view;
} PyMemoryViewObject;
# 96 "Include/Python.h" 2
# 1 "Include/bufferobject.h" 1
# 13 "Include/bufferobject.h"
extern PyTypeObject PyBuffer_Type;





PyObject * PyBuffer_FromObject(PyObject *base,
                                           Py_ssize_t offset, Py_ssize_t size);
PyObject * PyBuffer_FromReadWriteObject(PyObject *base,
                                                    Py_ssize_t offset,
                                                    Py_ssize_t size);

PyObject * PyBuffer_FromMemory(void *ptr, Py_ssize_t size);
PyObject * PyBuffer_FromReadWriteMemory(void *ptr, Py_ssize_t size);

PyObject * PyBuffer_New(Py_ssize_t size);
# 97 "Include/Python.h" 2
# 1 "Include/bytesobject.h" 1
# 98 "Include/Python.h" 2
# 1 "Include/bytearrayobject.h" 1
# 22 "Include/bytearrayobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;

    int ob_exports;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
} PyByteArrayObject;


extern PyTypeObject PyByteArray_Type;
extern PyTypeObject PyByteArrayIter_Type;






PyObject * PyByteArray_FromObject(PyObject *);
PyObject * PyByteArray_Concat(PyObject *, PyObject *);
PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
Py_ssize_t PyByteArray_Size(PyObject *);
char * PyByteArray_AsString(PyObject *);
int PyByteArray_Resize(PyObject *, Py_ssize_t);







extern char _PyByteArray_empty_string[];
# 99 "Include/Python.h" 2
# 1 "Include/tupleobject.h" 1
# 24 "Include/tupleobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;
    PyObject *ob_item[1];





} PyTupleObject;

extern PyTypeObject PyTuple_Type;





PyObject * PyTuple_New(Py_ssize_t size);
Py_ssize_t PyTuple_Size(PyObject *);
PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
int _PyTuple_Resize(PyObject **, Py_ssize_t);
PyObject * PyTuple_Pack(Py_ssize_t, ...);
void _PyTuple_MaybeUntrack(PyObject *);
# 56 "Include/tupleobject.h"
int PyTuple_ClearFreeList(void);
# 100 "Include/Python.h" 2
# 1 "Include/listobject.h" 1
# 22 "Include/listobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;

    PyObject **ob_item;
# 38 "Include/listobject.h"
    Py_ssize_t allocated;
} PyListObject;

extern PyTypeObject PyList_Type;





PyObject * PyList_New(Py_ssize_t size);
Py_ssize_t PyList_Size(PyObject *);
PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
int PyList_Append(PyObject *, PyObject *);
PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
int PyList_Sort(PyObject *);
int PyList_Reverse(PyObject *);
PyObject * PyList_AsTuple(PyObject *);
PyObject * _PyList_Extend(PyListObject *, PyObject *);
# 101 "Include/Python.h" 2
# 1 "Include/dictobject.h" 1
# 50 "Include/dictobject.h"
typedef struct {




    Py_ssize_t me_hash;
    PyObject *me_key;
    PyObject *me_value;
} PyDictEntry;
# 69 "Include/dictobject.h"
typedef struct _dictobject PyDictObject;
struct _dictobject {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    Py_ssize_t ma_fill;
    Py_ssize_t ma_used;





    Py_ssize_t ma_mask;






    PyDictEntry *ma_table;
    PyDictEntry *(*ma_lookup)(PyDictObject *mp, PyObject *key, long hash);
    PyDictEntry ma_smalltable[8];
};

extern PyTypeObject PyDict_Type;
extern PyTypeObject PyDictIterKey_Type;
extern PyTypeObject PyDictIterValue_Type;
extern PyTypeObject PyDictIterItem_Type;
extern PyTypeObject PyDictKeys_Type;
extern PyTypeObject PyDictItems_Type;
extern PyTypeObject PyDictValues_Type;
# 109 "Include/dictobject.h"
PyObject * PyDict_New(void);
PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
PyObject * _PyDict_GetItemWithError(PyObject *mp, PyObject *key);
int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
int PyDict_DelItem(PyObject *mp, PyObject *key);
void PyDict_Clear(PyObject *mp);
int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);
int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, long *hash);
PyObject * PyDict_Keys(PyObject *mp);
PyObject * PyDict_Values(PyObject *mp);
PyObject * PyDict_Items(PyObject *mp);
Py_ssize_t PyDict_Size(PyObject *mp);
PyObject * PyDict_Copy(PyObject *mp);
int PyDict_Contains(PyObject *mp, PyObject *key);
int _PyDict_Contains(PyObject *mp, PyObject *key, long hash);
PyObject * _PyDict_NewPresized(Py_ssize_t minused);
void _PyDict_MaybeUntrack(PyObject *mp);


int PyDict_Update(PyObject *mp, PyObject *other);






int PyDict_Merge(PyObject *mp,
                                   PyObject *other,
                                   int override);






int PyDict_MergeFromSeq2(PyObject *d,
                                           PyObject *seq2,
                                           int override);

PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
int PyDict_DelItemString(PyObject *dp, const char *key);
# 102 "Include/Python.h" 2
# 1 "Include/enumobject.h" 1
# 10 "Include/enumobject.h"
extern PyTypeObject PyEnum_Type;
extern PyTypeObject PyReversed_Type;
# 103 "Include/Python.h" 2
# 1 "Include/setobject.h" 1
# 24 "Include/setobject.h"
typedef struct {
    long hash;
    PyObject *key;
} setentry;






typedef struct _setobject PySetObject;
struct _setobject {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;

    Py_ssize_t fill;
    Py_ssize_t used;





    Py_ssize_t mask;





    setentry *table;
    setentry *(*lookup)(PySetObject *so, PyObject *key, long hash);
    setentry smalltable[8];

    long hash;
    PyObject *weakreflist;
};

extern PyTypeObject PySet_Type;
extern PyTypeObject PyFrozenSet_Type;
# 83 "Include/setobject.h"
PyObject * PySet_New(PyObject *);
PyObject * PyFrozenSet_New(PyObject *);
Py_ssize_t PySet_Size(PyObject *anyset);

int PySet_Clear(PyObject *set);
int PySet_Contains(PyObject *anyset, PyObject *key);
int PySet_Discard(PyObject *set, PyObject *key);
int PySet_Add(PyObject *set, PyObject *key);
int _PySet_Next(PyObject *set, Py_ssize_t *pos, PyObject **key);
int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, long *hash);
PyObject * PySet_Pop(PyObject *set);
int _PySet_Update(PyObject *set, PyObject *iterable);
# 104 "Include/Python.h" 2
# 1 "Include/methodobject.h" 1
# 14 "Include/methodobject.h"
extern PyTypeObject PyCFunction_Type;



typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
          PyObject *);
typedef PyObject *(*PyNoArgsFunction)(PyObject *);

PyCFunction PyCFunction_GetFunction(PyObject *);
PyObject * PyCFunction_GetSelf(PyObject *);
int PyCFunction_GetFlags(PyObject *);
# 35 "Include/methodobject.h"
PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);

struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;

    const char *ml_doc;
};
typedef struct PyMethodDef PyMethodDef;

PyObject * Py_FindMethod(PyMethodDef[], PyObject *, const char *);


PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
      PyObject *);
# 73 "Include/methodobject.h"
typedef struct PyMethodChain {
    PyMethodDef *methods;
    struct PyMethodChain *link;
} PyMethodChain;

PyObject * Py_FindMethodInChain(PyMethodChain *, PyObject *,
                                            const char *);

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
} PyCFunctionObject;

int PyCFunction_ClearFreeList(void);
# 105 "Include/Python.h" 2
# 1 "Include/moduleobject.h" 1
# 10 "Include/moduleobject.h"
extern PyTypeObject PyModule_Type;




PyObject * PyModule_New(const char *);
PyObject * PyModule_GetDict(PyObject *);
char * PyModule_GetName(PyObject *);
char * PyModule_GetFilename(PyObject *);
void _PyModule_Clear(PyObject *);
# 106 "Include/Python.h" 2
# 1 "Include/funcobject.h" 1
# 21 "Include/funcobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *func_code;
    PyObject *func_globals;
    PyObject *func_defaults;
    PyObject *func_closure;
    PyObject *func_doc;
    PyObject *func_name;
    PyObject *func_dict;
    PyObject *func_weakreflist;
    PyObject *func_module;






} PyFunctionObject;

extern PyTypeObject PyFunction_Type;



PyObject * PyFunction_New(PyObject *, PyObject *);
PyObject * PyFunction_GetCode(PyObject *);
PyObject * PyFunction_GetGlobals(PyObject *);
PyObject * PyFunction_GetModule(PyObject *);
PyObject * PyFunction_GetDefaults(PyObject *);
int PyFunction_SetDefaults(PyObject *, PyObject *);
PyObject * PyFunction_GetClosure(PyObject *);
int PyFunction_SetClosure(PyObject *, PyObject *);
# 67 "Include/funcobject.h"
extern PyTypeObject PyClassMethod_Type;
extern PyTypeObject PyStaticMethod_Type;

PyObject * PyClassMethod_New(PyObject *);
PyObject * PyStaticMethod_New(PyObject *);
# 107 "Include/Python.h" 2
# 1 "Include/classobject.h" 1
# 12 "Include/classobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *cl_bases;
    PyObject *cl_dict;
    PyObject *cl_name;

    PyObject *cl_getattr;
    PyObject *cl_setattr;
    PyObject *cl_delattr;
    PyObject *cl_weakreflist;
} PyClassObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyClassObject *in_class;
    PyObject *in_dict;
    PyObject *in_weakreflist;
} PyInstanceObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_class;
    PyObject *im_weakreflist;
} PyMethodObject;

extern PyTypeObject PyClass_Type, PyInstance_Type, PyMethod_Type;





PyObject * PyClass_New(PyObject *, PyObject *, PyObject *);
PyObject * PyInstance_New(PyObject *, PyObject *,
                                            PyObject *);
PyObject * PyInstance_NewRaw(PyObject *, PyObject *);
PyObject * PyMethod_New(PyObject *, PyObject *, PyObject *);

PyObject * PyMethod_Function(PyObject *);
PyObject * PyMethod_Self(PyObject *);
PyObject * PyMethod_Class(PyObject *);
# 65 "Include/classobject.h"
PyObject * _PyInstance_Lookup(PyObject *pinst, PyObject *name);
# 76 "Include/classobject.h"
int PyClass_IsSubclass(PyObject *, PyObject *);

int PyMethod_ClearFreeList(void);
# 108 "Include/Python.h" 2
# 1 "Include/fileobject.h" 1
# 10 "Include/fileobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    FILE *f_fp;
    PyObject *f_name;
    PyObject *f_mode;
    int (*f_close)(FILE *);
    int f_softspace;
    int f_binary;

    char* f_buf;
    char* f_bufend;
    char* f_bufptr;
    char *f_setbuf;
    int f_univ_newline;
    int f_newlinetypes;
    int f_skipnextlf;
    PyObject *f_encoding;
    PyObject *f_errors;
    PyObject *weakreflist;
    int unlocked_count;

    int readable;
    int writable;
} PyFileObject;

extern PyTypeObject PyFile_Type;




PyObject * PyFile_FromString(char *, char *);
void PyFile_SetBufSize(PyObject *, int);
int PyFile_SetEncoding(PyObject *, const char *);
int PyFile_SetEncodingAndErrors(PyObject *, const char *, char *errors);
PyObject * PyFile_FromFile(FILE *, char *, char *,
                                             int (*)(FILE *));
FILE * PyFile_AsFile(PyObject *);
void PyFile_IncUseCount(PyFileObject *);
void PyFile_DecUseCount(PyFileObject *);
PyObject * PyFile_Name(PyObject *);
PyObject * PyFile_GetLine(PyObject *, int);
int PyFile_WriteObject(PyObject *, PyObject *, int);
int PyFile_SoftSpace(PyObject *, int);
int PyFile_WriteString(const char *, PyObject *);
int PyObject_AsFileDescriptor(PyObject *);




extern const char * Py_FileSystemDefaultEncoding;





char *Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
size_t Py_UniversalNewlineFread(char *, size_t, FILE *, PyObject *);




int _PyFile_SanitizeMode(char *mode);
# 109 "Include/Python.h" 2
# 1 "Include/cobject.h" 1
# 43 "Include/cobject.h"
extern PyTypeObject PyCObject_Type;
# 53 "Include/cobject.h"
PyObject * PyCObject_FromVoidPtr(
 void *cobj, void (*destruct)(void*));







PyObject * PyCObject_FromVoidPtrAndDesc(
 void *cobj, void *desc, void (*destruct)(void*,void*));


void * PyCObject_AsVoidPtr(PyObject *);


void * PyCObject_GetDesc(PyObject *);


void * PyCObject_Import(char *module_name, char *cobject_name);


int PyCObject_SetVoidPtr(PyObject *self, void *cobj);


typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    void *cobject;
    void *desc;
    void (*destructor)(void *);
} PyCObject;
# 110 "Include/Python.h" 2
# 1 "Include/pycapsule.h" 1
# 21 "Include/pycapsule.h"
extern PyTypeObject PyCapsule_Type;

typedef void (*PyCapsule_Destructor)(PyObject *);




PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);

void * PyCapsule_GetPointer(PyObject *capsule, const char *name);

PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);

const char * PyCapsule_GetName(PyObject *capsule);

void * PyCapsule_GetContext(PyObject *capsule);

int PyCapsule_IsValid(PyObject *capsule, const char *name);

int PyCapsule_SetPointer(PyObject *capsule, void *pointer);

int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);

int PyCapsule_SetName(PyObject *capsule, const char *name);

int PyCapsule_SetContext(PyObject *capsule, void *context);

void * PyCapsule_Import(const char *name, int no_block);
# 111 "Include/Python.h" 2
# 1 "Include/traceback.h" 1







struct _frame;



typedef struct _traceback {
 struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
 struct _traceback *tb_next;
 struct _frame *tb_frame;
 int tb_lasti;
 int tb_lineno;
} PyTracebackObject;

int PyTraceBack_Here(struct _frame *);
int PyTraceBack_Print(PyObject *, PyObject *);
int _Py_DisplaySourceLine(PyObject *, const char *, int, int);


extern PyTypeObject PyTraceBack_Type;
# 112 "Include/Python.h" 2
# 1 "Include/sliceobject.h" 1








extern PyObject _Py_EllipsisObject;
# 22 "Include/sliceobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *start, *stop, *step;
} PySliceObject;

extern PyTypeObject PySlice_Type;
extern PyTypeObject PyEllipsis_Type;



PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);
PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);
int PySlice_GetIndices(PySliceObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
int PySlice_GetIndicesEx(PySliceObject *r, Py_ssize_t length,
        Py_ssize_t *start, Py_ssize_t *stop,
        Py_ssize_t *step, Py_ssize_t *slicelength);
# 113 "Include/Python.h" 2
# 1 "Include/cellobject.h" 1








typedef struct {
 struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
 PyObject *ob_ref;
} PyCellObject;

extern PyTypeObject PyCell_Type;



PyObject * PyCell_New(PyObject *);
PyObject * PyCell_Get(PyObject *);
int PyCell_Set(PyObject *, PyObject *);
# 114 "Include/Python.h" 2
# 1 "Include/iterobject.h" 1







extern PyTypeObject PySeqIter_Type;



PyObject * PySeqIter_New(PyObject *);

extern PyTypeObject PyCallIter_Type;



PyObject * PyCallIter_New(PyObject *, PyObject *);
# 115 "Include/Python.h" 2
# 1 "Include/genobject.h" 1
# 10 "Include/genobject.h"
struct _frame;

typedef struct {
 struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;



 struct _frame *gi_frame;


 int gi_running;


 PyObject *gi_code;


 PyObject *gi_weakreflist;
} PyGenObject;

extern PyTypeObject PyGen_Type;




PyObject * PyGen_New(struct _frame *);
int PyGen_NeedsFinalizing(PyGenObject *);
# 116 "Include/Python.h" 2
# 1 "Include/descrobject.h" 1







typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);

typedef struct PyGetSetDef {
    char *name;
    getter get;
    setter set;
    char *doc;
    void *closure;
} PyGetSetDef;

typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
                                 void *wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
                                      void *wrapped, PyObject *kwds);

struct wrapperbase {
    char *name;
    int offset;
    void *function;
    wrapperfunc wrapper;
    char *doc;
    int flags;
    PyObject *name_strobj;
};
# 45 "Include/descrobject.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name;
} PyDescrObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name;
    PyMethodDef *d_method;
} PyMethodDescrObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name;
    struct PyMemberDef *d_member;
} PyMemberDescrObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name;
    PyGetSetDef *d_getset;
} PyGetSetDescrObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name;
    struct wrapperbase *d_base;
    void *d_wrapped;
} PyWrapperDescrObject;

extern PyTypeObject PyWrapperDescr_Type;
extern PyTypeObject PyDictProxy_Type;
extern PyTypeObject PyGetSetDescr_Type;
extern PyTypeObject PyMemberDescr_Type;

PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
PyObject * PyDescr_NewMember(PyTypeObject *,
                                               struct PyMemberDef *);
PyObject * PyDescr_NewGetSet(PyTypeObject *,
                                               struct PyGetSetDef *);
PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);


PyObject * PyDictProxy_New(PyObject *);
PyObject * PyWrapper_New(PyObject *, PyObject *);


extern PyTypeObject PyProperty_Type;
# 117 "Include/Python.h" 2
# 1 "Include/warnings.h" 1






void _PyWarnings_Init(void);

int PyErr_WarnEx(PyObject *, const char *, Py_ssize_t);
int PyErr_WarnExplicit(PyObject *, const char *, const char *, int,
                                    const char *, PyObject *);
# 118 "Include/Python.h" 2
# 1 "Include/weakrefobject.h" 1
# 10 "Include/weakrefobject.h"
typedef struct _PyWeakReference PyWeakReference;




struct _PyWeakReference {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;





    PyObject *wr_object;


    PyObject *wr_callback;




    long hash;






    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
};

extern PyTypeObject _PyWeakref_RefType;
extern PyTypeObject _PyWeakref_ProxyType;
extern PyTypeObject _PyWeakref_CallableProxyType;
# 56 "Include/weakrefobject.h"
PyObject * PyWeakref_NewRef(PyObject *ob,
                                              PyObject *callback);
PyObject * PyWeakref_NewProxy(PyObject *ob,
                                                PyObject *callback);
PyObject * PyWeakref_GetObject(PyObject *ref);

Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);

void _PyWeakref_ClearRef(PyWeakReference *self);
# 119 "Include/Python.h" 2

# 1 "Include/codecs.h" 1
# 26 "Include/codecs.h"
int PyCodec_Register(
       PyObject *search_function
       );
# 48 "Include/codecs.h"
PyObject * _PyCodec_Lookup(
       const char *encoding
       );
# 62 "Include/codecs.h"
PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 78 "Include/codecs.h"
PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 97 "Include/codecs.h"
PyObject * _PyCodec_LookupTextEncoding(
       const char *encoding,
       const char *alternate_command
       );

PyObject * _PyCodec_EncodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );

PyObject * _PyCodec_DecodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );




PyObject * _PyCodecInfo_GetIncrementalDecoder(
       PyObject *codec_info,
       const char *errors
       );

PyObject * _PyCodecInfo_GetIncrementalEncoder(
       PyObject *codec_info,
       const char *errors
       );
# 139 "Include/codecs.h"
PyObject * PyCodec_Encoder(
       const char *encoding
       );



PyObject * PyCodec_Decoder(
       const char *encoding
       );



PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );



PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );



PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );



PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
# 187 "Include/codecs.h"
int PyCodec_RegisterError(const char *name, PyObject *error);




PyObject * PyCodec_LookupError(const char *name);


PyObject * PyCodec_StrictErrors(PyObject *exc);


PyObject * PyCodec_IgnoreErrors(PyObject *exc);


PyObject * PyCodec_ReplaceErrors(PyObject *exc);


PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);


PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);
# 121 "Include/Python.h" 2
# 1 "Include/pyerrors.h" 1








typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *dict;
    PyObject *args;
    PyObject *message;
} PyBaseExceptionObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *dict;
    PyObject *args;
    PyObject *message;
    PyObject *msg;
    PyObject *filename;
    PyObject *lineno;
    PyObject *offset;
    PyObject *text;
    PyObject *print_file_and_line;
} PySyntaxErrorObject;


typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *dict;
    PyObject *args;
    PyObject *message;
    PyObject *encoding;
    PyObject *object;
    Py_ssize_t start;
    Py_ssize_t end;
    PyObject *reason;
} PyUnicodeErrorObject;


typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *dict;
    PyObject *args;
    PyObject *message;
    PyObject *code;
} PySystemExitObject;

typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    PyObject *dict;
    PyObject *args;
    PyObject *message;
    PyObject *myerrno;
    PyObject *strerror;
    PyObject *filename;
} PyEnvironmentErrorObject;
# 76 "Include/pyerrors.h"
void PyErr_SetNone(PyObject *);
void PyErr_SetObject(PyObject *, PyObject *);
void PyErr_SetString(PyObject *, const char *);
PyObject * PyErr_Occurred(void);
void PyErr_Clear(void);
void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
void PyErr_Restore(PyObject *, PyObject *, PyObject *);
# 91 "Include/pyerrors.h"
int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
int PyErr_ExceptionMatches(PyObject *);
void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);
void _PyErr_ReplaceException(PyObject *, PyObject *, PyObject *);
# 119 "Include/pyerrors.h"
extern PyObject * PyExc_BaseException;
extern PyObject * PyExc_Exception;
extern PyObject * PyExc_StopIteration;
extern PyObject * PyExc_GeneratorExit;
extern PyObject * PyExc_StandardError;
extern PyObject * PyExc_ArithmeticError;
extern PyObject * PyExc_LookupError;

extern PyObject * PyExc_AssertionError;
extern PyObject * PyExc_AttributeError;
extern PyObject * PyExc_EOFError;
extern PyObject * PyExc_FloatingPointError;
extern PyObject * PyExc_EnvironmentError;
extern PyObject * PyExc_IOError;
extern PyObject * PyExc_OSError;
extern PyObject * PyExc_ImportError;
extern PyObject * PyExc_IndexError;
extern PyObject * PyExc_KeyError;
extern PyObject * PyExc_KeyboardInterrupt;
extern PyObject * PyExc_MemoryError;
extern PyObject * PyExc_NameError;
extern PyObject * PyExc_OverflowError;
extern PyObject * PyExc_RuntimeError;
extern PyObject * PyExc_NotImplementedError;
extern PyObject * PyExc_SyntaxError;
extern PyObject * PyExc_IndentationError;
extern PyObject * PyExc_TabError;
extern PyObject * PyExc_ReferenceError;
extern PyObject * PyExc_SystemError;
extern PyObject * PyExc_SystemExit;
extern PyObject * PyExc_TypeError;
extern PyObject * PyExc_UnboundLocalError;
extern PyObject * PyExc_UnicodeError;
extern PyObject * PyExc_UnicodeEncodeError;
extern PyObject * PyExc_UnicodeDecodeError;
extern PyObject * PyExc_UnicodeTranslateError;
extern PyObject * PyExc_ValueError;
extern PyObject * PyExc_ZeroDivisionError;







extern PyObject * PyExc_BufferError;

extern PyObject * PyExc_MemoryErrorInst;
extern PyObject * PyExc_RecursionErrorInst;


extern PyObject * PyExc_Warning;
extern PyObject * PyExc_UserWarning;
extern PyObject * PyExc_DeprecationWarning;
extern PyObject * PyExc_PendingDeprecationWarning;
extern PyObject * PyExc_SyntaxWarning;
extern PyObject * PyExc_RuntimeWarning;
extern PyObject * PyExc_FutureWarning;
extern PyObject * PyExc_ImportWarning;
extern PyObject * PyExc_UnicodeWarning;
extern PyObject * PyExc_BytesWarning;




int PyErr_BadArgument(void);
PyObject * PyErr_NoMemory(void);
PyObject * PyErr_SetFromErrno(PyObject *);
PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);
PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *, const char *);





PyObject * PyErr_Format(PyObject *, const char *, ...)
                        __attribute__((format(printf, 2, 3)));
# 217 "Include/pyerrors.h"
void PyErr_BadInternalCall(void);
void _PyErr_BadInternalCall(const char *filename, int lineno);





PyObject * PyErr_NewException(
    char *name, PyObject *base, PyObject *dict);
PyObject * PyErr_NewExceptionWithDoc(
    char *name, char *doc, PyObject *base, PyObject *dict);
void PyErr_WriteUnraisable(PyObject *);


int PyErr_CheckSignals(void);
void PyErr_SetInterrupt(void);


int PySignal_SetWakeupFd(int fd);


void PyErr_SyntaxLocation(const char *, int);
PyObject * PyErr_ProgramText(const char *, int);






PyObject * PyUnicodeDecodeError_Create(
    const char *, const char *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *);


PyObject * PyUnicodeEncodeError_Create(
    const char *, const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *);


PyObject * PyUnicodeTranslateError_Create(
    const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *);


PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);


PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
PyObject * PyUnicodeTranslateError_GetObject(PyObject *);



int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);



int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);



int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);



int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);


PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
PyObject * PyUnicodeTranslateError_GetReason(PyObject *);



int PyUnicodeEncodeError_SetReason(
    PyObject *, const char *);
int PyUnicodeDecodeError_SetReason(
    PyObject *, const char *);
int PyUnicodeTranslateError_SetReason(
    PyObject *, const char *);
# 321 "Include/pyerrors.h"
int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        __attribute__((format(printf, 3, 4)));
int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        __attribute__((format(printf, 3, 0)));
# 122 "Include/Python.h" 2

# 1 "Include/pystate.h" 1
# 13 "Include/pystate.h"
struct _ts;
struct _is;

typedef struct _is {

    struct _is *next;
    struct _ts *tstate_head;

    PyObject *modules;
    PyObject *sysdict;
    PyObject *builtins;
    PyObject *modules_reloading;

    PyObject *codec_search_path;
    PyObject *codec_search_cache;
    PyObject *codec_error_registry;


    int dlopenflags;





} PyInterpreterState;




struct _frame;


typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);
# 56 "Include/pystate.h"
typedef struct _ts {


    struct _ts *next;
    PyInterpreterState *interp;

    struct _frame *frame;
    int recursion_depth;



    int tracing;
    int use_tracing;

    Py_tracefunc c_profilefunc;
    Py_tracefunc c_tracefunc;
    PyObject *c_profileobj;
    PyObject *c_traceobj;

    PyObject *curexc_type;
    PyObject *curexc_value;
    PyObject *curexc_traceback;

    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_traceback;

    PyObject *dict;







    int tick_counter;

    int gilstate_counter;

    PyObject *async_exc;
    long thread_id;

    int trash_delete_nesting;
    PyObject *trash_delete_later;



} PyThreadState;


PyInterpreterState * PyInterpreterState_New(void);
void PyInterpreterState_Clear(PyInterpreterState *);
void PyInterpreterState_Delete(PyInterpreterState *);

PyThreadState * PyThreadState_New(PyInterpreterState *);
PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);
void _PyThreadState_Init(PyThreadState *);
void PyThreadState_Clear(PyThreadState *);
void PyThreadState_Delete(PyThreadState *);

void PyThreadState_DeleteCurrent(void);


PyThreadState * PyThreadState_Get(void);
PyThreadState * PyThreadState_Swap(PyThreadState *);
PyObject * PyThreadState_GetDict(void);
int PyThreadState_SetAsyncExc(long, PyObject *);




extern PyThreadState * _PyThreadState_Current;







typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
# 160 "Include/pystate.h"
PyGILState_STATE PyGILState_Ensure(void);
# 170 "Include/pystate.h"
void PyGILState_Release(PyGILState_STATE);







PyThreadState * PyGILState_GetThisThreadState(void);




PyObject * _PyThread_CurrentFrames(void);



PyInterpreterState * PyInterpreterState_Head(void);
PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
PyThreadState * PyThreadState_Next(PyThreadState *);

typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);


extern PyThreadFrameGetter _PyThreadState_GetFrame;
# 124 "Include/Python.h" 2

# 1 "Include/pyarena.h" 1
# 11 "Include/pyarena.h"
  typedef struct _arena PyArena;
# 35 "Include/pyarena.h"
  PyArena * PyArena_New(void);
  void PyArena_Free(PyArena *);
# 50 "Include/pyarena.h"
  void * PyArena_Malloc(PyArena *, size_t size);





  int PyArena_AddPyObject(PyArena *, PyObject *);
# 126 "Include/Python.h" 2
# 1 "Include/modsupport.h" 1
# 23 "Include/modsupport.h"
PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);


int PyArg_Parse(PyObject *, const char *, ...);
int PyArg_ParseTuple(PyObject *, const char *, ...) ;
int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, ...);
int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
PyObject * Py_BuildValue(const char *, ...);
PyObject * _Py_BuildValue_SizeT(const char *, ...);
int _PyArg_NoKeywords(const char *funcname, PyObject *kw);

int PyArg_VaParse(PyObject *, const char *, va_list);
int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, va_list);
PyObject * Py_VaBuildValue(const char *, va_list);

int PyModule_AddObject(PyObject *, const char *, PyObject *);
int PyModule_AddIntConstant(PyObject *, const char *, long);
int PyModule_AddStringConstant(PyObject *, const char *, const char *);
# 117 "Include/modsupport.h"
PyObject * Py_InitModule4TraceRefs_64(const char *name, PyMethodDef *methods,
                                      const char *doc, PyObject *self,
                                      int apiver);
# 129 "Include/modsupport.h"
extern char * _Py_PackageContext;
# 127 "Include/Python.h" 2
# 1 "Include/pythonrun.h" 1
# 18 "Include/pythonrun.h"
typedef struct {
    int cf_flags;
} PyCompilerFlags;

void Py_SetProgramName(char *);
char * Py_GetProgramName(void);

void Py_SetPythonHome(char *);
char * Py_GetPythonHome(void);

void Py_Initialize(void);
void Py_InitializeEx(int);
void Py_Finalize(void);
int Py_IsInitialized(void);
PyThreadState * Py_NewInterpreter(void);
void Py_EndInterpreter(PyThreadState *);

int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
int PyRun_AnyFileExFlags(FILE *, const char *, int, PyCompilerFlags *);
int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
int PyRun_SimpleFileExFlags(FILE *, const char *, int, PyCompilerFlags *);
int PyRun_InteractiveOneFlags(FILE *, const char *, PyCompilerFlags *);
int PyRun_InteractiveLoopFlags(FILE *, const char *, PyCompilerFlags *);

struct _mod * PyParser_ASTFromString(const char *, const char *,
                                                 int, PyCompilerFlags *flags,
                                                 PyArena *);
struct _mod * PyParser_ASTFromFile(FILE *, const char *, int,
                                               char *, char *,
                                               PyCompilerFlags *, int *,
                                               PyArena *);




struct _node * PyParser_SimpleParseStringFlags(const char *, int,
                                                          int);
struct _node * PyParser_SimpleParseFileFlags(FILE *, const char *,
                                                        int, int);

PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);

PyObject * PyRun_FileExFlags(FILE *, const char *, int,
                                         PyObject *, PyObject *, int,
                                         PyCompilerFlags *);


PyObject * Py_CompileStringFlags(const char *, const char *, int,
                                             PyCompilerFlags *);
struct symtable * Py_SymtableString(const char *, const char *, int);

void PyErr_Print(void);
void PyErr_PrintEx(int);
void PyErr_Display(PyObject *, PyObject *, PyObject *);

int Py_AtExit(void (*func)(void));

void Py_Exit(int);

int Py_FdIsInteractive(FILE *, const char *);


int Py_Main(int argc, char **argv);
# 103 "Include/pythonrun.h"
char * Py_GetProgramFullPath(void);
char * Py_GetPrefix(void);
char * Py_GetExecPrefix(void);
char * Py_GetPath(void);


const char * Py_GetVersion(void);
const char * Py_GetPlatform(void);
const char * Py_GetCopyright(void);
const char * Py_GetCompiler(void);
const char * Py_GetBuildInfo(void);
const char * _Py_svnversion(void);
const char * Py_SubversionRevision(void);
const char * Py_SubversionShortBranch(void);
const char * _Py_hgidentifier(void);
const char * _Py_hgversion(void);


PyObject * _PyBuiltin_Init(void);
PyObject * _PySys_Init(void);
void _PyImport_Init(void);
void _PyExc_Init(void);
void _PyImportHooks_Init(void);
int _PyFrame_Init(void);
int _PyInt_Init(void);
int _PyLong_Init(void);
void _PyFloat_Init(void);
int PyByteArray_Init(void);
void _PyRandom_Init(void);


void _PyExc_Fini(void);
void _PyImport_Fini(void);
void PyMethod_Fini(void);
void PyFrame_Fini(void);
void PyCFunction_Fini(void);
void PyDict_Fini(void);
void PyTuple_Fini(void);
void PyList_Fini(void);
void PySet_Fini(void);
void PyString_Fini(void);
void PyInt_Fini(void);
void PyFloat_Fini(void);
void PyOS_FiniInterrupts(void);
void PyByteArray_Fini(void);
void _PyRandom_Fini(void);


char * PyOS_Readline(FILE *, FILE *, char *);
extern int (*PyOS_InputHook)(void);
extern char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, char *);
extern PyThreadState* _PyOS_ReadlineTState;
# 172 "Include/pythonrun.h"
typedef void (*PyOS_sighandler_t)(int);
PyOS_sighandler_t PyOS_getsig(int);
PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);


int _PyOS_URandom (void *buffer, Py_ssize_t size);
# 128 "Include/Python.h" 2
# 1 "Include/ceval.h" 1
# 10 "Include/ceval.h"
PyObject * PyEval_CallObjectWithKeywords(
    PyObject *, PyObject *, PyObject *);





PyObject * PyEval_CallFunction(PyObject *obj,
                                           const char *format, ...);
PyObject * PyEval_CallMethod(PyObject *obj,
                                         const char *methodname,
                                         const char *format, ...);

void PyEval_SetProfile(Py_tracefunc, PyObject *);
void PyEval_SetTrace(Py_tracefunc, PyObject *);

struct _frame;

PyObject * PyEval_GetBuiltins(void);
PyObject * PyEval_GetGlobals(void);
PyObject * PyEval_GetLocals(void);
struct _frame * PyEval_GetFrame(void);
int PyEval_GetRestricted(void);




int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);

int Py_FlushLine(void);

int Py_AddPendingCall(int (*func)(void *), void *arg);
int Py_MakePendingCalls(void);


void Py_SetRecursionLimit(int);
int Py_GetRecursionLimit(void);






int _Py_CheckRecursiveCall(const char *where);
extern int _Py_CheckRecursionLimit;






const char * PyEval_GetFuncName(PyObject *);
const char * PyEval_GetFuncDesc(PyObject *);

PyObject * PyEval_GetCallStats(PyObject *);
PyObject * PyEval_EvalFrame(struct _frame *);
PyObject * PyEval_EvalFrameEx(struct _frame *f, int exc);


extern volatile int _Py_Ticker;
extern int _Py_CheckInterval;
# 117 "Include/ceval.h"
PyThreadState * PyEval_SaveThread(void);
void PyEval_RestoreThread(PyThreadState *);



int PyEval_ThreadsInitialized(void);
void PyEval_InitThreads(void);
void PyEval_AcquireLock(void);
void PyEval_ReleaseLock(void);
void PyEval_AcquireThread(PyThreadState *tstate);
void PyEval_ReleaseThread(PyThreadState *tstate);
void PyEval_ReInitThreads(void);
# 147 "Include/ceval.h"
int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
# 129 "Include/Python.h" 2
# 1 "Include/sysmodule.h" 1
# 10 "Include/sysmodule.h"
PyObject * PySys_GetObject(char *);
int PySys_SetObject(char *, PyObject *);
FILE * PySys_GetFile(char *, FILE *);
void PySys_SetArgv(int, char **);
void PySys_SetArgvEx(int, char **, int);
void PySys_SetPath(char *);

void PySys_WriteStdout(const char *format, ...)
   __attribute__((format(printf, 1, 2)));
void PySys_WriteStderr(const char *format, ...)
   __attribute__((format(printf, 1, 2)));

void PySys_ResetWarnOptions(void);
void PySys_AddWarnOption(char *);
int PySys_HasWarnOptions(void);

size_t _PySys_GetSizeOf(PyObject *);
# 130 "Include/Python.h" 2
# 1 "Include/intrcheck.h" 1







int PyOS_InterruptOccurred(void);
void PyOS_InitInterrupts(void);
void PyOS_AfterFork(void);
# 131 "Include/Python.h" 2
# 1 "Include/import.h" 1
# 10 "Include/import.h"
long PyImport_GetMagicNumber(void);
PyObject * PyImport_ExecCodeModule(char *name, PyObject *co);
PyObject * PyImport_ExecCodeModuleEx(
 char *name, PyObject *co, char *pathname);
PyObject * PyImport_GetModuleDict(void);
PyObject * PyImport_AddModule(const char *name);
PyObject * PyImport_ImportModule(const char *name);
PyObject * PyImport_ImportModuleNoBlock(const char *);
PyObject * PyImport_ImportModuleLevel(char *name,
 PyObject *globals, PyObject *locals, PyObject *fromlist, int level);




PyObject * PyImport_GetImporter(PyObject *path);
PyObject * PyImport_Import(PyObject *name);
PyObject * PyImport_ReloadModule(PyObject *m);
void PyImport_Cleanup(void);
int PyImport_ImportFrozenModule(char *);


void _PyImport_AcquireLock(void);
int _PyImport_ReleaseLock(void);





struct filedescr * _PyImport_FindModule(
 const char *, PyObject *, char *, size_t, FILE **, PyObject **);
int _PyImport_IsScript(struct filedescr *);
void _PyImport_ReInitLock(void);

PyObject * _PyImport_FindExtension(char *, char *);
PyObject * _PyImport_FixupExtension(char *, char *);

struct _inittab {
    char *name;
    void (*initfunc)(void);
};

extern PyTypeObject PyNullImporter_Type;
extern struct _inittab * PyImport_Inittab;

int PyImport_AppendInittab(const char *name, void (*initfunc)(void));
int PyImport_ExtendInittab(struct _inittab *newtab);

struct _frozen {
    char *name;
    unsigned char *code;
    int size;
};




extern struct _frozen * PyImport_FrozenModules;
# 132 "Include/Python.h" 2

# 1 "Include/abstract.h" 1
# 231 "Include/abstract.h"
     int PyObject_Cmp(PyObject *o1, PyObject *o2, int *result);
# 304 "Include/abstract.h"
     PyObject * PyObject_Call(PyObject *callable_object,
                                         PyObject *args, PyObject *kw);
# 314 "Include/abstract.h"
     PyObject * PyObject_CallObject(PyObject *callable_object,
                                               PyObject *args);
# 326 "Include/abstract.h"
     PyObject * PyObject_CallFunction(PyObject *callable_object,
                                                 char *format, ...);
# 340 "Include/abstract.h"
     PyObject * PyObject_CallMethod(PyObject *o, char *m,
                                               char *format, ...);
# 352 "Include/abstract.h"
     PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                         char *format, ...);
     PyObject * _PyObject_CallMethod_SizeT(PyObject *o,
                                                       char *name,
                                                       char *format, ...);

     PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                        ...);
# 370 "Include/abstract.h"
     PyObject * PyObject_CallMethodObjArgs(PyObject *o,
                                                      PyObject *m, ...);
# 413 "Include/abstract.h"
     PyObject * PyObject_Type(PyObject *o);







     Py_ssize_t PyObject_Size(PyObject *o);
# 433 "Include/abstract.h"
     Py_ssize_t PyObject_Length(PyObject *o);


     Py_ssize_t _PyObject_LengthHint(PyObject *o, Py_ssize_t);







     PyObject * PyObject_GetItem(PyObject *o, PyObject *key);
# 453 "Include/abstract.h"
     int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);







     int PyObject_DelItemString(PyObject *o, char *key);







     int PyObject_DelItem(PyObject *o, PyObject *key);






     int PyObject_AsCharBuffer(PyObject *obj,
                                          const char **buffer,
                                          Py_ssize_t *buffer_len);
# 492 "Include/abstract.h"
     int PyObject_CheckReadBuffer(PyObject *obj);
# 501 "Include/abstract.h"
     int PyObject_AsReadBuffer(PyObject *obj,
                                          const void **buffer,
                                          Py_ssize_t *buffer_len);
# 517 "Include/abstract.h"
     int PyObject_AsWriteBuffer(PyObject *obj,
                                           void **buffer,
                                           Py_ssize_t *buffer_len);
# 542 "Include/abstract.h"
     int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                        int flags);
# 552 "Include/abstract.h"
     void * PyBuffer_GetPointer(Py_buffer *view, Py_ssize_t *indices);





     int PyBuffer_SizeFromFormat(const char *);






     int PyBuffer_ToContiguous(void *buf, Py_buffer *view,
                                           Py_ssize_t len, char fort);

     int PyBuffer_FromContiguous(Py_buffer *view, void *buf,
                                             Py_ssize_t len, char fort);
# 588 "Include/abstract.h"
     int PyObject_CopyData(PyObject *dest, PyObject *src);




     int PyBuffer_IsContiguous(Py_buffer *view, char fort);


     void PyBuffer_FillContiguousStrides(int ndims,
                                                    Py_ssize_t *shape,
                                                    Py_ssize_t *strides,
                                                    int itemsize,
                                                    char fort);







     int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                       Py_ssize_t len, int readonly,
                                       int flags);







     void PyBuffer_Release(Py_buffer *view);




     PyObject * PyObject_Format(PyObject* obj,
                                            PyObject *format_spec);







     PyObject * PyObject_GetIter(PyObject *);
# 642 "Include/abstract.h"
     PyObject * PyIter_Next(PyObject *);







     int PyNumber_Check(PyObject *o);
# 660 "Include/abstract.h"
     PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);
# 669 "Include/abstract.h"
     PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);
# 678 "Include/abstract.h"
     PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);
# 688 "Include/abstract.h"
     PyObject * PyNumber_Divide(PyObject *o1, PyObject *o2);
# 697 "Include/abstract.h"
     PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);
# 707 "Include/abstract.h"
     PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);
# 717 "Include/abstract.h"
     PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);
# 727 "Include/abstract.h"
     PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);
# 737 "Include/abstract.h"
     PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                          PyObject *o3);
# 747 "Include/abstract.h"
     PyObject * PyNumber_Negative(PyObject *o);







     PyObject * PyNumber_Positive(PyObject *o);







     PyObject * PyNumber_Absolute(PyObject *o);







     PyObject * PyNumber_Invert(PyObject *o);
# 781 "Include/abstract.h"
     PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);
# 791 "Include/abstract.h"
     PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);
# 800 "Include/abstract.h"
     PyObject * PyNumber_And(PyObject *o1, PyObject *o2);
# 810 "Include/abstract.h"
     PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);
# 820 "Include/abstract.h"
     PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);
# 853 "Include/abstract.h"
     PyObject * PyNumber_Index(PyObject *o);






     Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);
# 871 "Include/abstract.h"
     PyObject * _PyNumber_ConvertIntegralToInt(
         PyObject *integral,
         const char* error_format);
# 883 "Include/abstract.h"
     PyObject * PyNumber_Int(PyObject *o);
# 892 "Include/abstract.h"
     PyObject * PyNumber_Long(PyObject *o);
# 901 "Include/abstract.h"
     PyObject * PyNumber_Float(PyObject *o);
# 911 "Include/abstract.h"
     PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);
# 920 "Include/abstract.h"
     PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);
# 929 "Include/abstract.h"
     PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);
# 938 "Include/abstract.h"
     PyObject * PyNumber_InPlaceDivide(PyObject *o1, PyObject *o2);
# 947 "Include/abstract.h"
     PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                       PyObject *o2);
# 958 "Include/abstract.h"
     PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                      PyObject *o2);
# 969 "Include/abstract.h"
     PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);
# 978 "Include/abstract.h"
     PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                                 PyObject *o3);
# 988 "Include/abstract.h"
     PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);
# 997 "Include/abstract.h"
     PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);
# 1006 "Include/abstract.h"
     PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);
# 1015 "Include/abstract.h"
     PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);
# 1024 "Include/abstract.h"
     PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);
# 1034 "Include/abstract.h"
     PyObject * PyNumber_ToBase(PyObject *n, int base);
# 1045 "Include/abstract.h"
     int PySequence_Check(PyObject *o);
# 1055 "Include/abstract.h"
     Py_ssize_t PySequence_Size(PyObject *o);
# 1064 "Include/abstract.h"
     Py_ssize_t PySequence_Length(PyObject *o);



     PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);
# 1077 "Include/abstract.h"
     PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);
# 1086 "Include/abstract.h"
     PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);






     PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);
# 1102 "Include/abstract.h"
     int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);
# 1111 "Include/abstract.h"
     int PySequence_DelItem(PyObject *o, Py_ssize_t i);







     int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                        PyObject *v);







     int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);







     PyObject * PySequence_Tuple(PyObject *o);







     PyObject * PySequence_List(PyObject *o);





     PyObject * PySequence_Fast(PyObject *o, const char* m);
# 1186 "Include/abstract.h"
     Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);
# 1195 "Include/abstract.h"
     int PySequence_Contains(PyObject *seq, PyObject *ob);
# 1204 "Include/abstract.h"
     Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                        PyObject *obj, int operation);
# 1219 "Include/abstract.h"
     int PySequence_In(PyObject *o, PyObject *value);
# 1230 "Include/abstract.h"
     Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
# 1240 "Include/abstract.h"
     PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);
# 1249 "Include/abstract.h"
     PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);
# 1260 "Include/abstract.h"
     int PyMapping_Check(PyObject *o);
# 1269 "Include/abstract.h"
     Py_ssize_t PyMapping_Size(PyObject *o);
# 1279 "Include/abstract.h"
     Py_ssize_t PyMapping_Length(PyObject *o);
# 1303 "Include/abstract.h"
     int PyMapping_HasKeyString(PyObject *o, char *key);
# 1313 "Include/abstract.h"
     int PyMapping_HasKey(PyObject *o, PyObject *key);
# 1356 "Include/abstract.h"
     PyObject * PyMapping_GetItemString(PyObject *o, char *key);







     int PyMapping_SetItemString(PyObject *o, char *key,
                                            PyObject *value);
# 1374 "Include/abstract.h"
int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);


int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);



int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);

int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);



void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
# 134 "Include/Python.h" 2

# 1 "Include/compile.h" 1




# 1 "Include/code.h" 1
# 10 "Include/code.h"
typedef struct {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
    int co_argcount;
    int co_nlocals;
    int co_stacksize;
    int co_flags;
    PyObject *co_code;
    PyObject *co_consts;
    PyObject *co_names;
    PyObject *co_varnames;
    PyObject *co_freevars;
    PyObject *co_cellvars;

    PyObject *co_filename;
    PyObject *co_name;
    int co_firstlineno;
    PyObject *co_lnotab;

    void *co_zombieframe;
    PyObject *co_weakreflist;
} PyCodeObject;
# 65 "Include/code.h"
extern PyTypeObject PyCode_Type;





PyCodeObject * PyCode_New(
 int, int, int, int, PyObject *, PyObject *, PyObject *, PyObject *,
 PyObject *, PyObject *, PyObject *, PyObject *, int, PyObject *);



PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);




int PyCode_Addr2Line(PyCodeObject *, int);






typedef struct _addr_pair {
        int ap_lower;
        int ap_upper;
} PyAddrPair;




int _PyCode_CheckLineNumber(PyCodeObject* co,
                                        int lasti, PyAddrPair *bounds);
# 108 "Include/code.h"
PyObject* _PyCode_ConstantKey(PyObject *obj);

PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lineno_obj);
# 6 "Include/compile.h" 2






struct _node;
PyCodeObject * PyNode_Compile(struct _node *, const char *);



typedef struct {
    int ff_features;
    int ff_lineno;
} PyFutureFeatures;
# 31 "Include/compile.h"
struct _mod;
PyCodeObject * PyAST_Compile(struct _mod *, const char *,
     PyCompilerFlags *, PyArena *);
PyFutureFeatures * PyFuture_FromAST(struct _mod *, const char *);
# 136 "Include/Python.h" 2
# 1 "Include/eval.h" 1
# 10 "Include/eval.h"
PyObject * PyEval_EvalCode(PyCodeObject *, PyObject *, PyObject *);

PyObject * PyEval_EvalCodeEx(PyCodeObject *co,
     PyObject *globals,
     PyObject *locals,
     PyObject **args, int argc,
     PyObject **kwds, int kwdc,
     PyObject **defs, int defc,
     PyObject *closure);

PyObject * _PyEval_CallTracing(PyObject *func, PyObject *args);
# 137 "Include/Python.h" 2

# 1 "Include/pyctype.h" 1
# 12 "Include/pyctype.h"
extern const unsigned int _Py_ctype_table[256];
# 25 "Include/pyctype.h"
extern const unsigned char _Py_ctype_tolower[256];
extern const unsigned char _Py_ctype_toupper[256];
# 139 "Include/Python.h" 2
# 1 "Include/pystrtod.h" 1








double PyOS_ascii_strtod(const char *str, char **ptr);
double PyOS_ascii_atof(const char *str);


char * PyOS_ascii_formatd(char *buffer, size_t buf_len,
                                      const char *format, double d);
double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);



char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);

double _Py_parse_inf_or_nan(const char *p, char **endptr);
# 140 "Include/Python.h" 2
# 1 "Include/pystrcmp.h" 1







int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
int PyOS_mystricmp(const char *, const char *);
# 141 "Include/Python.h" 2
# 1 "Include/dtoa.h" 1





double _Py_dg_strtod(const char *str, char **ptr);
char * _Py_dg_dtoa(double d, int mode, int ndigits,
                        int *decpt, int *sign, char **rve);
void _Py_dg_freedtoa(char *s);
# 142 "Include/Python.h" 2


PyObject* _Py_Mangle(PyObject *p, PyObject *name);
# 156 "Include/Python.h"
# 1 "Include/pyfpe.h" 1
# 157 "Include/Python.h" 2
# 13 "Python/ceval.c" 2


# 1 "Include/frameobject.h" 1
# 10 "Include/frameobject.h"
typedef struct {
    int b_type;
    int b_handler;
    int b_level;
} PyTryBlock;

typedef struct _frame {
    struct _object *_ob_next; struct _object *_ob_prev; Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size;
    struct _frame *f_back;
    PyCodeObject *f_code;
    PyObject *f_builtins;
    PyObject *f_globals;
    PyObject *f_locals;
    PyObject **f_valuestack;



    PyObject **f_stacktop;
    PyObject *f_trace;
# 37 "Include/frameobject.h"
    PyObject *f_exc_type, *f_exc_value, *f_exc_traceback;

    PyThreadState *f_tstate;
    int f_lasti;





    int f_lineno;
    int f_iblock;
    PyTryBlock f_blockstack[20];
    PyObject *f_localsplus[1];
} PyFrameObject;




extern PyTypeObject PyFrame_Type;





PyFrameObject * PyFrame_New(PyThreadState *, PyCodeObject *,
                                       PyObject *, PyObject *);






void PyFrame_BlockSetup(PyFrameObject *, int, int, int);
PyTryBlock * PyFrame_BlockPop(PyFrameObject *);



PyObject ** PyFrame_ExtendStack(PyFrameObject *, int, int);



void PyFrame_LocalsToFast(PyFrameObject *, int);
void PyFrame_FastToLocals(PyFrameObject *);

int PyFrame_ClearFreeList(void);


int PyFrame_GetLineNumber(PyFrameObject *);
# 16 "Python/ceval.c" 2

# 1 "Include/opcode.h" 1
# 163 "Include/opcode.h"
enum cmp_op {PyCmp_LT=0, PyCmp_LE=1, PyCmp_EQ=2, PyCmp_NE=3, PyCmp_GT=4, PyCmp_GE=5,
      PyCmp_IN, PyCmp_NOT_IN, PyCmp_IS, PyCmp_IS_NOT, PyCmp_EXC_MATCH, PyCmp_BAD};
# 18 "Python/ceval.c" 2
# 1 "Include/structmember.h" 1
# 10 "Include/structmember.h"
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stddef.h" 1 3 4
# 51 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 118 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stddef.h" 3 4
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/__stddef_max_align_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/__stddef_max_align_t.h" 3 4
typedef long double max_align_t;
# 119 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.1.0/include/stddef.h" 2 3 4
# 11 "Include/structmember.h" 2
# 28 "Include/structmember.h"
struct memberlist {

    char *name;
    int type;
    int offset;
    int flags;
};

typedef struct PyMemberDef {

    char *name;
    int type;
    Py_ssize_t offset;
    int flags;
    char *doc;
} PyMemberDef;
# 88 "Include/structmember.h"
PyObject * PyMember_Get(const char *, struct memberlist *, const char *);
int PyMember_Set(char *, struct memberlist *, const char *, PyObject *);


PyObject * PyMember_GetOne(const char *, struct PyMemberDef *);
int PyMember_SetOne(char *, struct PyMemberDef *, PyObject *);
# 19 "Python/ceval.c" 2
# 107 "Python/ceval.c"
typedef PyObject *(*callproc)(PyObject *, PyObject *, PyObject *);





static PyObject * call_function(PyObject ***, int);

static PyObject * fast_function(PyObject *, PyObject ***, int, int, int);
static PyObject * do_call(PyObject *, PyObject ***, int, int);
static PyObject * ext_do_call(PyObject *, PyObject ***, int, int, int);
static PyObject * update_keyword_args(PyObject *, int, PyObject ***,
                                      PyObject *);
static PyObject * update_star_args(int, int, PyObject *, PyObject ***);
static PyObject * load_args(PyObject ***, int);




static int lltrace;
static int prtrace(PyObject *, char *);

static int call_trace(Py_tracefunc, PyObject *, PyFrameObject *,
                      int, PyObject *);
static int call_trace_protected(Py_tracefunc, PyObject *,
                                PyFrameObject *, int, PyObject *);
static void call_exc_trace(Py_tracefunc, PyObject *, PyFrameObject *);
static int maybe_call_line_trace(Py_tracefunc, PyObject *,
                                 PyFrameObject *, int *, int *, int *);

static PyObject * apply_slice(PyObject *, PyObject *, PyObject *);
static int assign_slice(PyObject *, PyObject *,
                        PyObject *, PyObject *);
static PyObject * cmp_outcome(int, PyObject *, PyObject *);
static PyObject * import_from(PyObject *, PyObject *);
static int import_all_from(PyObject *, PyObject *);
static PyObject * build_class(PyObject *, PyObject *, PyObject *);
static int exec_statement(PyFrameObject *,
                          PyObject *, PyObject *, PyObject *);
static void set_exc_info(PyThreadState *, PyObject *, PyObject *, PyObject *);
static void reset_exc_info(PyThreadState *);
static void format_exc_check_arg(PyObject *, char *, PyObject *);
static PyObject * string_concatenate(PyObject *, PyObject *,
                                     PyFrameObject *, unsigned char *);
static PyObject * kwd_as_string(PyObject *);
static PyObject * special_lookup(PyObject *, char *, PyObject **);
# 222 "Python/ceval.c"
PyObject *
PyEval_GetCallStats(PyObject *self)
{
    ( _Py_RefTotal++ , ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
    return (&_Py_NoneStruct);
}







# 1 "/usr/include/errno.h" 1 3 4
# 235 "Python/ceval.c" 2

# 1 "Include/pythread.h" 1




typedef void *PyThread_type_lock;
typedef void *PyThread_type_sema;





void PyThread_init_thread(void);
long PyThread_start_new_thread(void (*)(void *), void *);
void PyThread_exit_thread(void);
long PyThread_get_thread_ident(void);

PyThread_type_lock PyThread_allocate_lock(void);
void PyThread_free_lock(PyThread_type_lock);
int PyThread_acquire_lock(PyThread_type_lock, int);


void PyThread_release_lock(PyThread_type_lock);

size_t PyThread_get_stacksize(void);
int PyThread_set_stacksize(size_t);


int PyThread_create_key(void);
void PyThread_delete_key(int);
int PyThread_set_key_value(int, void *);
void * PyThread_get_key_value(int);
void PyThread_delete_key_value(int key);


void PyThread_ReInitTLS(void);
# 237 "Python/ceval.c" 2

static PyThread_type_lock interpreter_lock = 0;
static PyThread_type_lock pending_lock = 0;
static long main_thread = 0;

int
PyEval_ThreadsInitialized(void)
{
    return interpreter_lock != 0;
}

void
PyEval_InitThreads(void)
{
    if (interpreter_lock)
        return;
    interpreter_lock = PyThread_allocate_lock();
    PyThread_acquire_lock(interpreter_lock, 1);
    main_thread = PyThread_get_thread_ident();
}

void
PyEval_AcquireLock(void)
{
    PyThread_acquire_lock(interpreter_lock, 1);
}

void
PyEval_ReleaseLock(void)
{
    PyThread_release_lock(interpreter_lock);
}

void
PyEval_AcquireThread(PyThreadState *tstate)
{
    if (tstate == ((void*)0))
        Py_FatalError("PyEval_AcquireThread: NULL new thread state");

    (__builtin_expect(!(interpreter_lock), 0) ? __assert_rtn(__func__, "Python/ceval.c", 276, "interpreter_lock") : (void)0);
    PyThread_acquire_lock(interpreter_lock, 1);
    if (PyThreadState_Swap(tstate) != ((void*)0))
        Py_FatalError(
            "PyEval_AcquireThread: non-NULL old thread state");
}

void
PyEval_ReleaseThread(PyThreadState *tstate)
{
    if (tstate == ((void*)0))
        Py_FatalError("PyEval_ReleaseThread: NULL thread state");
    if (PyThreadState_Swap(((void*)0)) != tstate)
        Py_FatalError("PyEval_ReleaseThread: wrong thread state");
    PyThread_release_lock(interpreter_lock);
}






void
PyEval_ReInitThreads(void)
{
    PyObject *threading, *result;
    PyThreadState *tstate;

    if (!interpreter_lock)
        return;




    interpreter_lock = PyThread_allocate_lock();
    pending_lock = PyThread_allocate_lock();
    PyThread_acquire_lock(interpreter_lock, 1);
    main_thread = PyThread_get_thread_ident();



    tstate = PyThreadState_Get();
    threading = PyMapping_GetItemString(tstate->interp->modules,
                                        "threading");
    if (threading == ((void*)0)) {

        PyErr_Clear();
        return;
    }
    result = PyObject_CallMethod(threading, "_after_fork", ((void*)0));
    if (result == ((void*)0))
        PyErr_WriteUnraisable(threading);
    else
        do { if (_Py_RefTotal-- , --((PyObject*)(result))->ob_refcnt != 0) { if (((PyObject*)result)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 329, (PyObject *)(result)); } else _Py_Dealloc((PyObject *)(result)); } while (0);
    do { if (_Py_RefTotal-- , --((PyObject*)(threading))->ob_refcnt != 0) { if (((PyObject*)threading)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 330, (PyObject *)(threading)); } else _Py_Dealloc((PyObject *)(threading)); } while (0);
}






PyThreadState *
PyEval_SaveThread(void)
{
    PyThreadState *tstate = PyThreadState_Swap(((void*)0));
    if (tstate == ((void*)0))
        Py_FatalError("PyEval_SaveThread: NULL tstate");

    if (interpreter_lock)
        PyThread_release_lock(interpreter_lock);

    return tstate;
}

void
PyEval_RestoreThread(PyThreadState *tstate)
{
    if (tstate == ((void*)0))
        Py_FatalError("PyEval_RestoreThread: NULL tstate");

    if (interpreter_lock) {
        int err = (*__error());
        PyThread_acquire_lock(interpreter_lock, 1);
        (*__error()) = err;
    }

    PyThreadState_Swap(tstate);
}
# 399 "Python/ceval.c"
static struct {
    int (*func)(void *);
    void *arg;
} pendingcalls[32];
static int pendingfirst = 0;
static int pendinglast = 0;
static volatile int pendingcalls_to_do = 1;
static char pendingbusy = 0;

int
Py_AddPendingCall(int (*func)(void *), void *arg)
{
    int i, j, result=0;
    PyThread_type_lock lock = pending_lock;
# 425 "Python/ceval.c"
    if (lock != ((void*)0)) {
        for (i = 0; i<100; i++) {
            if (PyThread_acquire_lock(lock, 0))
                break;
        }
        if (i == 100)
            return -1;
    }

    i = pendinglast;
    j = (i + 1) % 32;
    if (j == pendingfirst) {
        result = -1;
    } else {
        pendingcalls[i].func = func;
        pendingcalls[i].arg = arg;
        pendinglast = j;
    }

    _Py_Ticker = 0;
    pendingcalls_to_do = 1;
    if (lock != ((void*)0))
        PyThread_release_lock(lock);
    return result;
}

int
Py_MakePendingCalls(void)
{
    int i;
    int r = 0;

    if (!pending_lock) {

        pending_lock = PyThread_allocate_lock();
        if (pending_lock == ((void*)0))
            return -1;
    }


    if (main_thread && PyThread_get_thread_ident() != main_thread)
        return 0;

    if (pendingbusy)
        return 0;
    pendingbusy = 1;

    for (i=0; i<32; i++) {
        int j;
        int (*func)(void *);
        void *arg = ((void*)0);


        PyThread_acquire_lock(pending_lock, 1);
        j = pendingfirst;
        if (j == pendinglast) {
            func = ((void*)0);
        } else {
            func = pendingcalls[j].func;
            arg = pendingcalls[j].arg;
            pendingfirst = (j + 1) % 32;
        }
        pendingcalls_to_do = pendingfirst != pendinglast;
        PyThread_release_lock(pending_lock);

        if (func == ((void*)0))
            break;
        r = func(arg);
        if (r)
            break;
    }
    pendingbusy = 0;
    return r;
}
# 596 "Python/ceval.c"
static int recursion_limit = 1000;
int _Py_CheckRecursionLimit = 1000;

int
Py_GetRecursionLimit(void)
{
    return recursion_limit;
}

void
Py_SetRecursionLimit(int new_limit)
{
    recursion_limit = new_limit;
    _Py_CheckRecursionLimit = recursion_limit;
}






int
_Py_CheckRecursiveCall(const char *where)
{
    PyThreadState *tstate = PyThreadState_Get();
# 629 "Python/ceval.c"
    if (tstate->recursion_depth > recursion_limit) {
        --tstate->recursion_depth;
        PyErr_Format(PyExc_RuntimeError,
                     "maximum recursion depth exceeded%s",
                     where);
        return -1;
    }
    _Py_CheckRecursionLimit = recursion_limit;
    return 0;
}


enum why_code {
        WHY_NOT = 0x0001,
        WHY_EXCEPTION = 0x0002,
        WHY_RERAISE = 0x0004,
        WHY_RETURN = 0x0008,
        WHY_BREAK = 0x0010,
        WHY_CONTINUE = 0x0020,
        WHY_YIELD = 0x0040
};

static enum why_code do_raise(PyObject *, PyObject *, PyObject *);
static int unpack_iterable(PyObject *, int, PyObject **);






static int _Py_TracingPossible = 0;



int _Py_CheckInterval = 100;
volatile int _Py_Ticker = 0;

PyObject *
PyEval_EvalCode(PyCodeObject *co, PyObject *globals, PyObject *locals)
{
    return PyEval_EvalCodeEx(co,
                      globals, locals,
                      (PyObject **)((void*)0), 0,
                      (PyObject **)((void*)0), 0,
                      (PyObject **)((void*)0), 0,
                      ((void*)0));
}




PyObject *
PyEval_EvalFrame(PyFrameObject *f) {



    return PyEval_EvalFrameEx(f, 0);
}

PyObject *
PyEval_EvalFrameEx(PyFrameObject *f, int throwflag)
{
# 708 "Python/ceval.c"
# 1 "Python/opcode_targets.h" 1
static void *opcode_targets[256] = {
    &&_unknown_opcode,
    &&TARGET_POP_TOP,
    &&TARGET_ROT_TWO,
    &&TARGET_ROT_THREE,
    &&TARGET_DUP_TOP,
    &&TARGET_ROT_FOUR,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_NOP,
    &&TARGET_UNARY_POSITIVE,
    &&TARGET_UNARY_NEGATIVE,
    &&TARGET_UNARY_NOT,
    &&TARGET_UNARY_CONVERT,
    &&_unknown_opcode,
    &&TARGET_UNARY_INVERT,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_BINARY_POWER,
    &&TARGET_BINARY_MULTIPLY,
    &&TARGET_BINARY_DIVIDE,
    &&TARGET_BINARY_MODULO,
    &&TARGET_BINARY_ADD,
    &&TARGET_BINARY_SUBTRACT,
    &&TARGET_BINARY_SUBSCR,
    &&TARGET_BINARY_FLOOR_DIVIDE,
    &&TARGET_BINARY_TRUE_DIVIDE,
    &&TARGET_INPLACE_FLOOR_DIVIDE,
    &&TARGET_INPLACE_TRUE_DIVIDE,
    &&TARGET_SLICE ,
    &&TARGET_SLICE_1,
    &&TARGET_SLICE_2,
    &&TARGET_SLICE_3,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_STORE_SLICE ,
    &&TARGET_STORE_SLICE_1,
    &&TARGET_STORE_SLICE_2,
    &&TARGET_STORE_SLICE_3,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_DELETE_SLICE ,
    &&TARGET_DELETE_SLICE_1,
    &&TARGET_DELETE_SLICE_2,
    &&TARGET_DELETE_SLICE_3,
    &&TARGET_STORE_MAP,
    &&TARGET_INPLACE_ADD,
    &&TARGET_INPLACE_SUBTRACT,
    &&TARGET_INPLACE_MULTIPLY,
    &&TARGET_INPLACE_DIVIDE,
    &&TARGET_INPLACE_MODULO,
    &&TARGET_STORE_SUBSCR,
    &&TARGET_DELETE_SUBSCR,
    &&TARGET_BINARY_LSHIFT,
    &&TARGET_BINARY_RSHIFT,
    &&TARGET_BINARY_AND,
    &&TARGET_BINARY_XOR,
    &&TARGET_BINARY_OR,
    &&TARGET_INPLACE_POWER,
    &&TARGET_GET_ITER,
    &&_unknown_opcode,
    &&TARGET_PRINT_EXPR,
    &&TARGET_PRINT_ITEM,
    &&TARGET_PRINT_NEWLINE,
    &&TARGET_PRINT_ITEM_TO,
    &&TARGET_PRINT_NEWLINE_TO,
    &&TARGET_INPLACE_LSHIFT,
    &&TARGET_INPLACE_RSHIFT,
    &&TARGET_INPLACE_AND,
    &&TARGET_INPLACE_XOR,
    &&TARGET_INPLACE_OR,
    &&TARGET_BREAK_LOOP,
    &&TARGET_WITH_CLEANUP,
    &&TARGET_LOAD_LOCALS,
    &&TARGET_RETURN_VALUE,
    &&TARGET_IMPORT_STAR,
    &&TARGET_EXEC_STMT,
    &&TARGET_YIELD_VALUE,
    &&TARGET_POP_BLOCK,
    &&TARGET_END_FINALLY,
    &&TARGET_BUILD_CLASS,
    &&TARGET_STORE_NAME,
    &&TARGET_DELETE_NAME,
    &&TARGET_UNPACK_SEQUENCE,
    &&TARGET_FOR_ITER,
    &&TARGET_LIST_APPEND,
    &&TARGET_STORE_ATTR,
    &&TARGET_DELETE_ATTR,
    &&TARGET_STORE_GLOBAL,
    &&TARGET_DELETE_GLOBAL,
    &&TARGET_DUP_TOPX,
    &&TARGET_LOAD_CONST,
    &&TARGET_LOAD_NAME,
    &&TARGET_BUILD_TUPLE,
    &&TARGET_BUILD_LIST,
    &&TARGET_BUILD_SET,
    &&TARGET_BUILD_MAP,
    &&TARGET_LOAD_ATTR,
    &&TARGET_COMPARE_OP,
    &&TARGET_IMPORT_NAME,
    &&TARGET_IMPORT_FROM,
    &&TARGET_JUMP_FORWARD,
    &&TARGET_JUMP_IF_FALSE_OR_POP,
    &&TARGET_JUMP_IF_TRUE_OR_POP,
    &&TARGET_JUMP_ABSOLUTE,
    &&TARGET_POP_JUMP_IF_FALSE,
    &&TARGET_POP_JUMP_IF_TRUE,
    &&TARGET_LOAD_GLOBAL,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_CONTINUE_LOOP,
    &&TARGET_SETUP_LOOP,
    &&TARGET_SETUP_EXCEPT,
    &&TARGET_SETUP_FINALLY,
    &&_unknown_opcode,
    &&TARGET_LOAD_FAST,
    &&TARGET_STORE_FAST,
    &&TARGET_DELETE_FAST,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_RAISE_VARARGS,
    &&TARGET_CALL_FUNCTION,
    &&TARGET_MAKE_FUNCTION,
    &&TARGET_BUILD_SLICE,
    &&TARGET_MAKE_CLOSURE,
    &&TARGET_LOAD_CLOSURE,
    &&TARGET_LOAD_DEREF,
    &&TARGET_STORE_DEREF,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&TARGET_CALL_FUNCTION_VAR,
    &&TARGET_CALL_FUNCTION_KW,
    &&TARGET_CALL_FUNCTION_VAR_KW,
    &&TARGET_SETUP_WITH,
    &&_unknown_opcode,
    &&TARGET_EXTENDED_ARG,
    &&TARGET_SET_ADD,
    &&TARGET_MAP_ADD,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode,
    &&_unknown_opcode
};
# 709 "Python/ceval.c" 2
# 789 "Python/ceval.c"
    register PyObject **stack_pointer;
    register unsigned char *next_instr;
    register int opcode;
    register int oparg;
    register enum why_code why;
    register int err;
    register PyObject *x;
    register PyObject *v;
    register PyObject *w;
    register PyObject *u;
    register PyObject *t;
    register PyObject *stream = ((void*)0);
    register PyObject **fastlocals, **freevars;
    PyObject *retval = ((void*)0);
    PyThreadState *tstate = PyThreadState_Get();
    PyCodeObject *co;
# 813 "Python/ceval.c"
    int instr_ub = -1, instr_lb = 0, instr_prev = -1;

    unsigned char *first_instr;
    PyObject *names;
    PyObject *consts;


    char *filename;
# 970 "Python/ceval.c"
    if (f == ((void*)0))
        return ((void*)0);


    if (((++(PyThreadState_Get()->recursion_depth) > _Py_CheckRecursionLimit) && _Py_CheckRecursiveCall("")))
        return ((void*)0);

    tstate->frame = f;

    if (tstate->use_tracing) {
        if (tstate->c_tracefunc != ((void*)0)) {
# 994 "Python/ceval.c"
            if (call_trace_protected(tstate->c_tracefunc,
                                     tstate->c_traceobj,
                                     f, 0, (&_Py_NoneStruct))) {

                goto exit_eval_frame;
            }
        }
        if (tstate->c_profilefunc != ((void*)0)) {


            if (call_trace_protected(tstate->c_profilefunc,
                                     tstate->c_profileobj,
                                     f, 0, (&_Py_NoneStruct))) {

                goto exit_eval_frame;
            }
        }
    }

    co = f->f_code;
    names = co->co_names;
    consts = co->co_consts;
    fastlocals = f->f_localsplus;
    freevars = f->f_localsplus + co->co_nlocals;
    first_instr = (unsigned char*) (((PyStringObject *)(co->co_code))->ob_sval);
# 1036 "Python/ceval.c"
    next_instr = first_instr + f->f_lasti + 1;
    stack_pointer = f->f_stacktop;
    (__builtin_expect(!(stack_pointer != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1038, "stack_pointer != NULL") : (void)0);
    f->f_stacktop = ((void*)0);


    lltrace = PyDict_GetItemString(f->f_globals, "__lltrace__") != ((void*)0);


    filename = PyString_AsString(co->co_filename);


    why = WHY_NOT;
    err = 0;
    x = (&_Py_NoneStruct);
    w = ((void*)0);

    if (throwflag) {
        why = WHY_EXCEPTION;
        goto on_error;
    }

    for (;;) {
# 1076 "Python/ceval.c"
        (__builtin_expect(!(stack_pointer >= f->f_valuestack), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1076, "stack_pointer >= f->f_valuestack") : (void)0);
        (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1077, "STACK_LEVEL() <= co->co_stacksize") : (void)0);
# 1087 "Python/ceval.c"
        if (--_Py_Ticker < 0) {
            if (*next_instr == 122) {


                goto fast_next_opcode;
            }
            _Py_Ticker = _Py_CheckInterval;
            tstate->tick_counter++;



            if (pendingcalls_to_do) {
                if (Py_MakePendingCalls() < 0) {
                    why = WHY_EXCEPTION;
                    goto on_error;
                }
                if (pendingcalls_to_do)




                    _Py_Ticker = 0;
            }

            if (interpreter_lock) {


                if (PyThreadState_Swap(((void*)0)) != tstate)
                    Py_FatalError("ceval: tstate mix-up");
                PyThread_release_lock(interpreter_lock);



                PyThread_acquire_lock(interpreter_lock, 1);

                if (PyThreadState_Swap(tstate) != ((void*)0))
                    Py_FatalError("ceval: orphan tstate");



                if (tstate->async_exc != ((void*)0)) {
                    x = tstate->async_exc;
                    tstate->async_exc = ((void*)0);
                    PyErr_SetNone(x);
                    do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1131, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0);
                    why = WHY_EXCEPTION;
                    goto on_error;
                }
            }

        }

    fast_next_opcode:
        f->f_lasti = ((int)(next_instr - first_instr));



        if (_Py_TracingPossible &&
            tstate->c_tracefunc != ((void*)0) && !tstate->tracing) {


            f->f_stacktop = stack_pointer;

            err = maybe_call_line_trace(tstate->c_tracefunc,
                                        tstate->c_traceobj,
                                        f, &instr_lb, &instr_ub,
                                        &instr_prev);

            (next_instr = first_instr + (f->f_lasti));
            if (f->f_stacktop != ((void*)0)) {
                stack_pointer = f->f_stacktop;
                f->f_stacktop = ((void*)0);
            }
            if (err) {

                goto on_error;
            }
        }



        opcode = (*next_instr++);
        oparg = 0;

        if (((opcode) >= 90))
            oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]);
    dispatch_opcode:
# 1186 "Python/ceval.c"
        if (lltrace) {
            if (((opcode) >= 90)) {
                printf("%d: %d, %d\n",
                       f->f_lasti, opcode, oparg);
            }
            else {
                printf("%d: %d\n",
                       f->f_lasti, opcode);
            }
        }



                             ;


# 1 "Include/opname.h" 1
char* opname[] = {
"STOP_CODE",
"POP_TOP",
"ROT_TWO",
"ROT_THREE",
"DUP_TOP",
"ROT_FOUR",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"NOP",
"UNARY_POSITIVE",
"UNARY_NEGATIVE",
"UNARY_NOT",
"UNARY_CONVERT",
"INVALID_OP",
"UNARY_INVERT",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"BINARY_POWER",
"BINARY_MULTIPLY",
"BINARY_DIVIDE",
"BINARY_MODULO",
"BINARY_ADD",
"BINARY_SUBTRACT",
"BINARY_SUBSCR",
"BINARY_FLOOR_DIVIDE",
"BINARY_TRUE_DIVIDE",
"INPLACE_FLOOR_DIVIDE",
"INPLACE_TRUE_DIVIDE",
"SLICE+0",
"SLICE+1",
"SLICE+2",
"SLICE+3",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"STORE_SLICE+0",
"STORE_SLICE+1",
"STORE_SLICE+2",
"STORE_SLICE+3",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"DELETE_SLICE+0",
"DELETE_SLICE+1",
"DELETE_SLICE+2",
"DELETE_SLICE+3",
"STORE_MAP",
"INPLACE_ADD",
"INPLACE_SUBTRACT",
"INPLACE_MULTIPLY",
"INPLACE_DIVIDE",
"INPLACE_MODULO",
"STORE_SUBSCR",
"DELETE_SUBSCR",
"BINARY_LSHIFT",
"BINARY_RSHIFT",
"BINARY_AND",
"BINARY_XOR",
"BINARY_OR",
"INPLACE_POWER",
"GET_ITER",
"INVALID_OP",
"PRINT_EXPR",
"PRINT_ITEM",
"PRINT_NEWLINE",
"PRINT_ITEM_TO",
"PRINT_NEWLINE_TO",
"INPLACE_LSHIFT",
"INPLACE_RSHIFT",
"INPLACE_AND",
"INPLACE_XOR",
"INPLACE_OR",
"BREAK_LOOP",
"WITH_CLEANUP",
"LOAD_LOCALS",
"RETURN_VALUE",
"IMPORT_STAR",
"EXEC_STMT",
"YIELD_VALUE",
"POP_BLOCK",
"END_FINALLY",
"BUILD_CLASS",
"STORE_NAME",
"DELETE_NAME",
"UNPACK_SEQUENCE",
"FOR_ITER",
"LIST_APPEND",
"STORE_ATTR",
"DELETE_ATTR",
"STORE_GLOBAL",
"DELETE_GLOBAL",
"DUP_TOPX",
"LOAD_CONST",
"LOAD_NAME",
"BUILD_TUPLE",
"BUILD_LIST",
"BUILD_SET",
"BUILD_MAP",
"LOAD_ATTR",
"COMPARE_OP",
"IMPORT_NAME",
"IMPORT_FROM",
"JUMP_FORWARD",
"JUMP_IF_FALSE_OR_POP",
"JUMP_IF_TRUE_OR_POP",
"JUMP_ABSOLUTE",
"POP_JUMP_IF_FALSE",
"POP_JUMP_IF_TRUE",
"LOAD_GLOBAL",
"INVALID_OP",
"INVALID_OP",
"CONTINUE_LOOP",
"SETUP_LOOP",
"SETUP_EXCEPT",
"SETUP_FINALLY",
"INVALID_OP",
"LOAD_FAST",
"STORE_FAST",
"DELETE_FAST",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"RAISE_VARARGS",
"CALL_FUNCTION",
"MAKE_FUNCTION",
"BUILD_SLICE",
"MAKE_CLOSURE",
"LOAD_CLOSURE",
"LOAD_DEREF",
"STORE_DEREF",
"INVALID_OP",
"INVALID_OP",
"CALL_FUNCTION_VAR",
"CALL_FUNCTION_KW",
"CALL_FUNCTION_VAR_KW",
"SETUP_WITH",
"INVALID_OP",
"EXTENDED_ARG",
"SET_ADD",
"MAP_ADD",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
"INVALID_OP",
};
# 1202 "Python/ceval.c" 2
 printf("%s, %s\n", opname[opcode], (((PyStringObject *)(co->co_filename))->ob_sval));
        switch (opcode) {
# 1213 "Python/ceval.c"
        TARGET_NOP: opcode = 9; case 9:
        {
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        TARGET_LOAD_FAST: opcode = 124; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 124:
        {
            x = (fastlocals[oparg]);
            if (x != ((void*)0)) {
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1223, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            format_exc_check_arg(PyExc_UnboundLocalError,
                "local variable '%.200s' referenced before assignment",
                PyTuple_GetItem(co->co_varnames, oparg));
            break;
        }

        TARGET_LOAD_CONST: opcode = 100; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 100:
        {
            x = PyTuple_GetItem((consts), (oparg));
            ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1236, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        PRED_STORE_FAST:;
        TARGET_STORE_FAST: opcode = 125; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 125:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            do { PyObject *tmp = (fastlocals[oparg]); (fastlocals[oparg]) = v; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1244, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        TARGET_POP_TOP: opcode = 1; case 1:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1251, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        TARGET_ROT_TWO: opcode = 2; case 2:
        {
            v = (stack_pointer[-1]);
            w = (stack_pointer[-2]);
            (stack_pointer[-1] = (w));
            (stack_pointer[-2] = (v));
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        TARGET_ROT_THREE: opcode = 3; case 3:
        {
            v = (stack_pointer[-1]);
            w = (stack_pointer[-2]);
            x = (stack_pointer[-3]);
            (stack_pointer[-1] = (w));
            (stack_pointer[-2] = (x));
            (stack_pointer[-3] = (v));
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        TARGET_ROT_FOUR: opcode = 5; case 5:
         {
            u = (stack_pointer[-1]);
            v = (stack_pointer[-2]);
            w = (stack_pointer[-3]);
            x = (stack_pointer[-4]);
            (stack_pointer[-1] = (v));
            (stack_pointer[-2] = (w));
            (stack_pointer[-3] = (x));
            (stack_pointer[-4] = (u));
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }


        TARGET_DUP_TOP: opcode = 4; case 4:
        {
            v = (stack_pointer[-1]);
            ( _Py_RefTotal++ , ((PyObject*)(v))->ob_refcnt++);
            { (void)((*stack_pointer++ = (v)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1293, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }


        TARGET_DUP_TOPX: opcode = 99; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 99:
        {
            if (oparg == 2) {
                x = (stack_pointer[-1]);
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                w = (stack_pointer[-2]);
                ( _Py_RefTotal++ , ((PyObject*)(w))->ob_refcnt++);
                { (void)((stack_pointer += 2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1305, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                (stack_pointer[-1] = (x));
                (stack_pointer[-2] = (w));
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            } else if (oparg == 3) {
                x = (stack_pointer[-1]);
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                w = (stack_pointer[-2]);
                ( _Py_RefTotal++ , ((PyObject*)(w))->ob_refcnt++);
                v = (stack_pointer[-3]);
                ( _Py_RefTotal++ , ((PyObject*)(v))->ob_refcnt++);
                { (void)((stack_pointer += 3), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1316, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                (stack_pointer[-1] = (x));
                (stack_pointer[-2] = (w));
                (stack_pointer[-3] = (v));
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            Py_FatalError("invalid argument to DUP_TOPX"
                          " (bytecode corruption?)");

            break;
        }

        TARGET_UNARY_POSITIVE: opcode = 10; case 10:
        {
            v = (stack_pointer[-1]);
            x = PyNumber_Positive(v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1332, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_UNARY_NEGATIVE: opcode = 11; case 11:
        {
            v = (stack_pointer[-1]);
            x = PyNumber_Negative(v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1342, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_UNARY_NOT: opcode = 12; case 12:
        {
            v = (stack_pointer[-1]);
            err = PyObject_IsTrue(v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1352, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            if (err == 0) {
                ( _Py_RefTotal++ , ((PyObject*)(((PyObject *) &_Py_TrueStruct)))->ob_refcnt++);
                (stack_pointer[-1] = (((PyObject *) &_Py_TrueStruct)));
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            else if (err > 0) {
                ( _Py_RefTotal++ , ((PyObject*)(((PyObject *) &_Py_ZeroStruct)))->ob_refcnt++);
                (stack_pointer[-1] = (((PyObject *) &_Py_ZeroStruct)));
                err = 0;
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            { (void)((stack_pointer += -1), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1364, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            break;
        }

        TARGET_UNARY_CONVERT: opcode = 13; case 13:
        {
            v = (stack_pointer[-1]);
            x = PyObject_Repr(v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1372, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_UNARY_INVERT: opcode = 15; case 15:
        {
            v = (stack_pointer[-1]);
            x = PyNumber_Invert(v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1382, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_POWER: opcode = 19; case 19:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_Power(v, w, (&_Py_NoneStruct));
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1393, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1394, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_MULTIPLY: opcode = 20; case 20:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_Multiply(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1405, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1406, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if(x!=((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_DIVIDE: opcode = 21; case 21:
        {
            if (!_Py_QnewFlag) {
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                v = (stack_pointer[-1]);
                x = PyNumber_Divide(v, w);
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1418, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1419, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                (stack_pointer[-1] = (x));
                if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
                break;
            }
        }

        TARGET_BINARY_TRUE_DIVIDE: opcode = 27; case 27:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_TrueDivide(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1431, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1432, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_FLOOR_DIVIDE: opcode = 26; case 26:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_FloorDivide(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1443, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1444, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_MODULO: opcode = 22; case 22:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((((PyObject*)(v))->ob_type) == &PyString_Type))
                x = PyString_Format(v, w);
            else
                x = PyNumber_Remainder(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1458, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1459, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_ADD: opcode = 23; case 23:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((v)->ob_type == &PyInt_Type) && ((w)->ob_type == &PyInt_Type)) {

                register long a, b, i;
                a = (((PyIntObject *)(v))->ob_ival);
                b = (((PyIntObject *)(w))->ob_ival);


                i = (long)((unsigned long)a + b);
                if ((i^a) < 0 && (i^b) < 0)
                    goto slow_add;
                x = PyInt_FromLong(i);
            }
            else if (((((PyObject*)(v))->ob_type) == &PyString_Type) &&
                     ((((PyObject*)(w))->ob_type) == &PyString_Type)) {
                x = string_concatenate(v, w, f, next_instr);

                goto skip_decref_vx;
            }
            else {
              slow_add:
                x = PyNumber_Add(v, w);
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1491, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
          skip_decref_vx:
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1493, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_SUBTRACT: opcode = 24; case 24:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((v)->ob_type == &PyInt_Type) && ((w)->ob_type == &PyInt_Type)) {

                register long a, b, i;
                a = (((PyIntObject *)(v))->ob_ival);
                b = (((PyIntObject *)(w))->ob_ival);


                i = (long)((unsigned long)a - b);
                if ((i^a) < 0 && (i^~b) < 0)
                    goto slow_sub;
                x = PyInt_FromLong(i);
            }
            else {
              slow_sub:
                x = PyNumber_Subtract(v, w);
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1519, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1520, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_SUBSCR: opcode = 25; case 25:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((((PyObject*)(v))->ob_type) == &PyList_Type) && ((w)->ob_type == &PyInt_Type)) {

                Py_ssize_t i = PyInt_AsSsize_t(w);
                if (i < 0)
                    i += (((PyVarObject*)(v))->ob_size);
                if (i >= 0 && i < (((PyVarObject*)(v))->ob_size)) {
                    x = (((PyListObject *)(v))->ob_item[i]);
                    ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                }
                else
                    goto slow_get;
            }
            else
              slow_get:
                x = PyObject_GetItem(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1545, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1546, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_LSHIFT: opcode = 62; case 62:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_Lshift(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1557, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1558, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_RSHIFT: opcode = 63; case 63:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_Rshift(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1569, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1570, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_AND: opcode = 64; case 64:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_And(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1581, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1582, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_XOR: opcode = 65; case 65:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_Xor(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1593, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1594, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_BINARY_OR: opcode = 66; case 66:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_Or(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1605, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1606, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_LIST_APPEND: opcode = 94; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 94:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-(oparg)]);
            err = PyList_Append(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1617, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err == 0) {
                if (0) goto PRED_JUMP_ABSOLUTE;
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            break;
        }

        TARGET_SET_ADD: opcode = 146; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 146:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = stack_pointer[-oparg];
            err = PySet_Add(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1630, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err == 0) {
                if (0) goto PRED_JUMP_ABSOLUTE;
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            break;
        }

        TARGET_INPLACE_POWER: opcode = 67; case 67:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlacePower(v, w, (&_Py_NoneStruct));
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1643, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1644, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_MULTIPLY: opcode = 57; case 57:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceMultiply(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1655, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1656, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_DIVIDE: opcode = 58; case 58:
        {
            if (!_Py_QnewFlag) {
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                v = (stack_pointer[-1]);
                x = PyNumber_InPlaceDivide(v, w);
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1668, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1669, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                (stack_pointer[-1] = (x));
                if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
                break;
            }
        }


        TARGET_INPLACE_TRUE_DIVIDE: opcode = 29; case 29:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceTrueDivide(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1682, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1683, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_FLOOR_DIVIDE: opcode = 28; case 28:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceFloorDivide(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1694, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1695, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_MODULO: opcode = 59; case 59:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceRemainder(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1706, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1707, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_ADD: opcode = 55; case 55:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((v)->ob_type == &PyInt_Type) && ((w)->ob_type == &PyInt_Type)) {

                register long a, b, i;
                a = (((PyIntObject *)(v))->ob_ival);
                b = (((PyIntObject *)(w))->ob_ival);
                i = a + b;
                if ((i^a) < 0 && (i^b) < 0)
                    goto slow_iadd;
                x = PyInt_FromLong(i);
            }
            else if (((((PyObject*)(v))->ob_type) == &PyString_Type) &&
                     ((((PyObject*)(w))->ob_type) == &PyString_Type)) {
                x = string_concatenate(v, w, f, next_instr);

                goto skip_decref_v;
            }
            else {
              slow_iadd:
                x = PyNumber_InPlaceAdd(v, w);
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1737, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
          skip_decref_v:
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1739, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_SUBTRACT: opcode = 56; case 56:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((v)->ob_type == &PyInt_Type) && ((w)->ob_type == &PyInt_Type)) {

                register long a, b, i;
                a = (((PyIntObject *)(v))->ob_ival);
                b = (((PyIntObject *)(w))->ob_ival);
                i = a - b;
                if ((i^a) < 0 && (i^~b) < 0)
                    goto slow_isub;
                x = PyInt_FromLong(i);
            }
            else {
              slow_isub:
                x = PyNumber_InPlaceSubtract(v, w);
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1763, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1764, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_LSHIFT: opcode = 75; case 75:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceLshift(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1775, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1776, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_RSHIFT: opcode = 76; case 76:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceRshift(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1787, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1788, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_AND: opcode = 77; case 77:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceAnd(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1799, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1800, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_XOR: opcode = 78; case 78:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceXor(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1811, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1812, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_INPLACE_OR: opcode = 79; case 79:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            x = PyNumber_InPlaceOr(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1823, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1824, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }



        TARGET_SLICE: opcode = 30; case 30: goto _slice;
        TARGET_SLICE_1: opcode = 31; case 31: goto _slice;
        TARGET_SLICE_2: opcode = 32; case 32: goto _slice;
        TARGET_SLICE_3: opcode = 33; case 33: goto _slice;
        _slice:
        {
            if ((opcode-30) & 2)
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                w = ((void*)0);
            if ((opcode-30) & 1)
                v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                v = ((void*)0);
            u = (stack_pointer[-1]);
            x = apply_slice(u, v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1848, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if ((v) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1849, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0); } while (0);
            do { if ((w) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1850, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }


        TARGET_STORE_SLICE: opcode = 40; case 40: goto _store_slice;
        TARGET_STORE_SLICE_1: opcode = 41; case 41: goto _store_slice;
        TARGET_STORE_SLICE_2: opcode = 42; case 42: goto _store_slice;
        TARGET_STORE_SLICE_3: opcode = 43; case 43: goto _store_slice;
        _store_slice:
        {
            if ((opcode-40) & 2)
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                w = ((void*)0);
            if ((opcode-40) & 1)
                v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                v = ((void*)0);
            u = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            t = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            err = assign_slice(u, v, w, t);
            do { if (_Py_RefTotal-- , --((PyObject*)(t))->ob_refcnt != 0) { if (((PyObject*)t)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1874, (PyObject *)(t)); } else _Py_Dealloc((PyObject *)(t)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1875, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if ((v) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1876, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0); } while (0);
            do { if ((w) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1877, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }


        TARGET_DELETE_SLICE: opcode = 50; case 50: goto _delete_slice;
        TARGET_DELETE_SLICE_1: opcode = 51; case 51: goto _delete_slice;
        TARGET_DELETE_SLICE_2: opcode = 52; case 52: goto _delete_slice;
        TARGET_DELETE_SLICE_3: opcode = 53; case 53: goto _delete_slice;
        _delete_slice:
        {
            if ((opcode-50) & 2)
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                w = ((void*)0);
            if ((opcode-50) & 1)
                v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                v = ((void*)0);
            u = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            err = assign_slice(u, v, w, (PyObject *)((void*)0));

            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1900, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if ((v) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1901, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0); } while (0);
            do { if ((w) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1902, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_STORE_SUBSCR: opcode = 60; case 60:
        {
            w = (stack_pointer[-1]);
            v = (stack_pointer[-2]);
            u = (stack_pointer[-3]);
            { (void)((stack_pointer += -3), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1912, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };

            err = PyObject_SetItem(v, w, u);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1915, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1916, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1917, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_DELETE_SUBSCR: opcode = 61; case 61:
        {
            w = (stack_pointer[-1]);
            v = (stack_pointer[-2]);
            { (void)((stack_pointer += -2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 1926, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };

            err = PyObject_DelItem(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1929, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1930, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_PRINT_EXPR: opcode = 70; case 70:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            w = PySys_GetObject("displayhook");
            if (w == ((void*)0)) {
                PyErr_SetString(PyExc_RuntimeError,
                                "lost sys.displayhook");
                err = -1;
                x = ((void*)0);
            }
            if (err == 0) {
                x = PyTuple_Pack(1, v);
                if (x == ((void*)0))
                    err = -1;
            }
            if (err == 0) {
                w = PyEval_CallObjectWithKeywords(w, x, (PyObject *)((void*)0));
                do { if ((w) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1952, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0); } while (0);
                if (w == ((void*)0))
                    err = -1;
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1956, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if ((x) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 1957, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0); } while (0);
            break;
        }

        TARGET_PRINT_ITEM_TO: opcode = 73; case 73:
        {
            w = stream = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));

        }

        TARGET_PRINT_ITEM: opcode = 71; case 71:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if (stream == ((void*)0) || stream == (&_Py_NoneStruct)) {
                w = PySys_GetObject("stdout");
                if (w == ((void*)0)) {
                    PyErr_SetString(PyExc_RuntimeError,
                                    "lost sys.stdout");
                    err = -1;
                }
            }




            do { if ((w) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(w))->ob_refcnt++); } while (0);
            if (w != ((void*)0) && PyFile_SoftSpace(w, 0))
                err = PyFile_WriteString(" ", w);
            if (err == 0)
                err = PyFile_WriteObject(v, w, 1);
            if (err == 0) {

                if (((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
                    char *s = (((PyStringObject *)(v))->ob_sval);
                    Py_ssize_t len = (((PyVarObject*)(v))->ob_size);
                    if (len == 0 ||
                        !iswspace(btowc(((unsigned char)((s[len-1]) & 0xff)))) ||
                        s[len-1] == ' ')
                        PyFile_SoftSpace(w, 1);
                }

                else if (((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)) {
                    Py_UNICODE *s = (((PyUnicodeObject *)(v))->str);
                    Py_ssize_t len = (((PyUnicodeObject *)(v))->length);
                    if (len == 0 ||
                        !((s[len-1]) < 128U ? _Py_ascii_whitespace[(s[len-1])] : _PyUnicodeUCS2_IsWhitespace(s[len-1])) ||
                        s[len-1] == ' ')
                        PyFile_SoftSpace(w, 1);
                }

                else
                    PyFile_SoftSpace(w, 1);
            }
            do { if ((w) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2010, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2011, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if ((stream) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(stream))->ob_refcnt != 0) { if (((PyObject*)stream)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2012, (PyObject *)(stream)); } else _Py_Dealloc((PyObject *)(stream)); } while (0); } while (0);
            stream = ((void*)0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_PRINT_NEWLINE_TO: opcode = 74; case 74:
        {
            w = stream = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));

        }

        TARGET_PRINT_NEWLINE: opcode = 72; case 72:
        {
            if (stream == ((void*)0) || stream == (&_Py_NoneStruct))
            {
                w = PySys_GetObject("stdout");
                if (w == ((void*)0)) {
                    PyErr_SetString(PyExc_RuntimeError,
                                    "lost sys.stdout");
                    why = WHY_EXCEPTION;
                }
            }
            if (w != ((void*)0)) {


                ( _Py_RefTotal++ , ((PyObject*)(w))->ob_refcnt++);
                err = PyFile_WriteString("\n", w);
                if (err == 0)
                    PyFile_SoftSpace(w, 0);
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2042, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            }
            do { if ((stream) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(stream))->ob_refcnt != 0) { if (((PyObject*)stream)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2044, (PyObject *)(stream)); } else _Py_Dealloc((PyObject *)(stream)); } while (0); } while (0);
            stream = ((void*)0);
            break;
        }





        TARGET_RAISE_VARARGS: opcode = 130; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 130:
            {
            u = v = w = ((void*)0);
            switch (oparg) {
            case 3:
                u = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));

            case 2:
                v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));

            case 1:
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            case 0:
                why = do_raise(w, v, u);
                break;
            default:
                PyErr_SetString(PyExc_SystemError,
                           "bad RAISE_VARARGS oparg");
                why = WHY_EXCEPTION;
                break;
            }
            break;
            }

        TARGET_LOAD_LOCALS: opcode = 82; case 82:
        {
            if ((x = f->f_locals) != ((void*)0))
            {
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2082, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            PyErr_SetString(PyExc_SystemError, "no locals");
            break;
        }

        TARGET_RETURN_VALUE: opcode = 83; case 83:
        {
            retval = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            why = WHY_RETURN;
            goto fast_block_end;
        }

        TARGET_YIELD_VALUE: opcode = 86; case 86:
        {
            retval = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            f->f_stacktop = stack_pointer;
            why = WHY_YIELD;
            goto fast_yield;
        }

        TARGET_EXEC_STMT: opcode = 85; case 85:
        {
            w = (stack_pointer[-1]);
            v = (stack_pointer[-2]);
            u = (stack_pointer[-3]);
            { (void)((stack_pointer += -3), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2109, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                                 ;
            err = exec_statement(f, u, v, w);
                                 ;
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2113, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2114, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2115, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            break;
        }

        TARGET_POP_BLOCK: opcode = 87; case 87:
        {
            {
                PyTryBlock *b = PyFrame_BlockPop(f);
                while (((int)(stack_pointer - f->f_valuestack)) > b->b_level) {
                    v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                    do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2125, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                }
            }
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        PRED_END_FINALLY:;
        TARGET_END_FINALLY: opcode = 88; case 88:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if (((((v)->ob_type)->tp_flags & ((1L<<23))) != 0)) {
                why = (enum why_code) (((PyIntObject *)(v))->ob_ival);
                (__builtin_expect(!(why != WHY_YIELD), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2137, "why != WHY_YIELD") : (void)0);
                if (why == WHY_RETURN ||
                    why == WHY_CONTINUE)
                    retval = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            }
            else if (((((v))->ob_type == &PyClass_Type) || (((((((PyObject*)((v)))->ob_type))->tp_flags & ((1L<<31))) != 0) && ((((PyTypeObject*)(v))->tp_flags & ((1L<<30))) != 0))) ||
                     ((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                u = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                PyErr_Restore(v, w, u);
                why = WHY_RERAISE;
                break;
            }
            else if (v != (&_Py_NoneStruct)) {
                PyErr_SetString(PyExc_SystemError,
                    "'finally' pops bad exception");
                why = WHY_EXCEPTION;
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2155, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            break;
        }

        TARGET_BUILD_CLASS: opcode = 89; case 89:
        {
            u = (stack_pointer[-1]);
            v = (stack_pointer[-2]);
            w = (stack_pointer[-3]);
            { (void)((stack_pointer += -2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2164, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            x = build_class(u, v, w);
            (stack_pointer[-1] = (x));
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2167, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2168, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2169, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            break;
        }

        TARGET_STORE_NAME: opcode = 90; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 90:
        {
            w = PyTuple_GetItem((names), (oparg));
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if ((x = f->f_locals) != ((void*)0)) {
                if (((((PyObject*)(x))->ob_type) == &PyDict_Type))
                    err = PyDict_SetItem(x, w, v);
                else
                    err = PyObject_SetItem(x, w, v);
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2182, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
                break;
            }
            t = PyObject_Repr(w);
            if (t == ((void*)0))
                break;
            PyErr_Format(PyExc_SystemError,
                         "no locals found when storing %s",
                         (((PyStringObject *)(t))->ob_sval));
            do { if (_Py_RefTotal-- , --((PyObject*)(t))->ob_refcnt != 0) { if (((PyObject*)t)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2192, (PyObject *)(t)); } else _Py_Dealloc((PyObject *)(t)); } while (0);
            break;
        }

        TARGET_DELETE_NAME: opcode = 91; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 91:
        {
            w = PyTuple_GetItem((names), (oparg));
            if ((x = f->f_locals) != ((void*)0)) {
                if ((err = PyObject_DelItem(x, w)) != 0)
                    format_exc_check_arg(PyExc_NameError,
                                         "name '%.200s' is not defined",
                                         w);
                break;
            }
            t = PyObject_Repr(w);
            if (t == ((void*)0))
                break;
            PyErr_Format(PyExc_SystemError,
                         "no locals when deleting %s",
                         (((PyStringObject *)(w))->ob_sval));
            do { if (_Py_RefTotal-- , --((PyObject*)(t))->ob_refcnt != 0) { if (((PyObject*)t)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2212, (PyObject *)(t)); } else _Py_Dealloc((PyObject *)(t)); } while (0);
            break;
        }

        PRED_UNPACK_SEQUENCE:;
        TARGET_UNPACK_SEQUENCE: opcode = 92; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 92:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if (((((PyObject*)(v))->ob_type) == &PyTuple_Type) &&
                (((PyVarObject*)(v))->ob_size) == oparg) {
                PyObject **items = ((PyTupleObject *)v)->ob_item;

                while (oparg--) {
                    w = items[oparg];
                    ( _Py_RefTotal++ , ((PyObject*)(w))->ob_refcnt++);
                    { (void)((*stack_pointer++ = (w)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2227, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                }
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2229, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            } else if (((((PyObject*)(v))->ob_type) == &PyList_Type) &&
                       (((PyVarObject*)(v))->ob_size) == oparg) {
                PyObject **items = ((PyListObject *)v)->ob_item;

                while (oparg--) {
                    w = items[oparg];
                    ( _Py_RefTotal++ , ((PyObject*)(w))->ob_refcnt++);
                    { (void)((*stack_pointer++ = (w)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2238, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                }
            } else if (unpack_iterable(v, oparg,
                                       stack_pointer + oparg)) {
                { (void)((stack_pointer += oparg), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2242, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            } else {

                why = WHY_EXCEPTION;
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2247, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            break;
        }


        TARGET_STORE_ATTR: opcode = 95; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 95:
        {
            w = PyTuple_GetItem((names), (oparg));
            v = (stack_pointer[-1]);
            u = (stack_pointer[-2]);
            { (void)((stack_pointer += -2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2257, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            err = PyObject_SetAttr(v, w, u);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2259, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2260, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_DELETE_ATTR: opcode = 96; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 96:
        {
            w = PyTuple_GetItem((names), (oparg));
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            err = PyObject_SetAttr(v, w, (PyObject *)((void*)0));

            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2271, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            break;
        }


        TARGET_STORE_GLOBAL: opcode = 97; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 97:
        {
            w = PyTuple_GetItem((names), (oparg));
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            err = PyDict_SetItem(f->f_globals, w, v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2281, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_DELETE_GLOBAL: opcode = 98; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 98:
        {
            w = PyTuple_GetItem((names), (oparg));
            if ((err = PyDict_DelItem(f->f_globals, w)) != 0)
                format_exc_check_arg(
                    PyExc_NameError, "global name '%.200s' is not defined", w);
            break;
        }

        TARGET_LOAD_NAME: opcode = 101; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 101:
        {
            w = PyTuple_GetItem((names), (oparg));
            if ((v = f->f_locals) == ((void*)0)) {
                why = WHY_EXCEPTION;
                t = PyObject_Repr(w);
                if (t == ((void*)0))
                    break;
                PyErr_Format(PyExc_SystemError,
                             "no locals when loading %s",
                             (((PyStringObject *)(w))->ob_sval));
                do { if (_Py_RefTotal-- , --((PyObject*)(t))->ob_refcnt != 0) { if (((PyObject*)t)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2306, (PyObject *)(t)); } else _Py_Dealloc((PyObject *)(t)); } while (0);
                break;
            }
            if (((((PyObject*)(v))->ob_type) == &PyDict_Type)) {
                x = PyDict_GetItem(v, w);
                do { if ((x) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++); } while (0);
            }
            else {
                x = PyObject_GetItem(v, w);
                if (x == ((void*)0) && PyErr_Occurred()) {
                    if (!PyErr_ExceptionMatches(
                                    PyExc_KeyError))
                        break;
                    PyErr_Clear();
                }
            }
            if (x) printf("Found name [%s] in local namespace.\n", (((PyStringObject *)(w))->ob_sval));
            if (x == ((void*)0)) {
                x = PyDict_GetItem(f->f_globals, w);
                if (x) printf("Found name [%s] in global namespace.\n", (((PyStringObject *)(w))->ob_sval));
                if (x == ((void*)0)) {
                    x = PyDict_GetItem(f->f_builtins, w);
                    if (x) printf("Found name [%s] in builtin namespace.\n", (((PyStringObject *)(w))->ob_sval));
                    if (x == ((void*)0)) {
                        printf("Name [%s] not found.\n", (((PyStringObject *)(w))->ob_sval));
                        format_exc_check_arg(
                                    PyExc_NameError,
                                    "name '%.200s' is not defined", w);
                        break;
                    }
                }
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            }
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2339, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_LOAD_GLOBAL: opcode = 116; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 116:
        {
            w = PyTuple_GetItem((names), (oparg));
            if (((((PyObject*)(w))->ob_type) == &PyString_Type)) {



                long hash = ((PyStringObject *)w)->ob_shash;
                if (hash != -1) {
                    PyDictObject *d;
                    PyDictEntry *e;
                    d = (PyDictObject *)(f->f_globals);
                    e = d->ma_lookup(d, w, hash);
                    if (e == ((void*)0)) {
                        x = ((void*)0);
                        break;
                    }
                    x = e->me_value;
                    if (x != ((void*)0)) {
                        ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                        { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2363, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                        { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
                    }
                    d = (PyDictObject *)(f->f_builtins);
                    e = d->ma_lookup(d, w, hash);
                    if (e == ((void*)0)) {
                        x = ((void*)0);
                        break;
                    }
                    x = e->me_value;
                    if (x != ((void*)0)) {
                        ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                        { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2375, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                        { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
                    }
                    goto load_global_error;
                }
            }

            x = PyDict_GetItem(f->f_globals, w);
            if (x == ((void*)0)) {
                x = PyDict_GetItem(f->f_builtins, w);
                if (x == ((void*)0)) {
                  load_global_error:
                    format_exc_check_arg(
                                PyExc_NameError,
                                "global name '%.200s' is not defined", w);
                    break;
                }
            }
            ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2394, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_DELETE_FAST: opcode = 126; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 126:
        {
            x = (fastlocals[oparg]);
            if (x != ((void*)0)) {
                do { PyObject *tmp = (fastlocals[oparg]); (fastlocals[oparg]) = ((void*)0); do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2402, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            format_exc_check_arg(
                PyExc_UnboundLocalError,
                "local variable '%.200s' referenced before assignment",
                PyTuple_GetItem(co->co_varnames, oparg)
                );
            break;
        }

        TARGET_LOAD_CLOSURE: opcode = 135; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 135:
        {
            x = freevars[oparg];
            ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2417, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_LOAD_DEREF: opcode = 136; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 136:
        {
            x = freevars[oparg];
            w = PyCell_Get(x);
            if (w != ((void*)0)) {
                { (void)((*stack_pointer++ = (w)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2427, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            err = -1;

            if (PyErr_Occurred())
                break;
            if (oparg < (((PyVarObject*)(co->co_cellvars))->ob_size)) {
                v = (((PyTupleObject *)(co->co_cellvars))->ob_item[oparg]);

                format_exc_check_arg(
                       PyExc_UnboundLocalError,
                       "local variable '%.200s' referenced before assignment",
                       v);
            } else {
                v = (((PyTupleObject *)(co->co_freevars))->ob_item[oparg - (((PyVarObject*)(co->co_cellvars))->ob_size)]);

                format_exc_check_arg(PyExc_NameError,
                                     "free variable '%.200s' referenced before assignment" " in enclosing scope", v);
            }
            break;
        }

        TARGET_STORE_DEREF: opcode = 137; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 137:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            x = freevars[oparg];
            PyCell_Set(x, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2455, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_BUILD_TUPLE: opcode = 102; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 102:
        {
            x = PyTuple_New(oparg);
            if (x != ((void*)0)) {
                for (; --oparg >= 0;) {
                    w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                    (((PyTupleObject *)(x))->ob_item[oparg] = w);
                }
                { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2467, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            break;
        }

        TARGET_BUILD_LIST: opcode = 103; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 103:
        {
            x = PyList_New(oparg);
            if (x != ((void*)0)) {
                for (; --oparg >= 0;) {
                    w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                    (((PyListObject *)(x))->ob_item[oparg] = (w));
                }
                { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2481, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            break;
        }

        TARGET_BUILD_SET: opcode = 104; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 104:
        {
            x = PySet_New(((void*)0));
            if (x != ((void*)0)) {
                for (; --oparg >= 0;) {
                    w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                    if (err == 0)
                        err = PySet_Add(x, w);
                    do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2495, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                }
                if (err != 0) {
                    do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2498, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0);
                    break;
                }
                { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2501, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            break;
        }

        TARGET_BUILD_MAP: opcode = 105; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 105:
        {
            x = _PyDict_NewPresized((Py_ssize_t)oparg);
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2510, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_STORE_MAP: opcode = 54; case 54:
        {
            w = (stack_pointer[-1]);
            u = (stack_pointer[-2]);
            v = (stack_pointer[-3]);
            { (void)((stack_pointer += -2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2520, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            (__builtin_expect(!(((((PyObject*)(v))->ob_type) == &PyDict_Type)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2521, "PyDict_CheckExact(v)") : (void)0);
            err = PyDict_SetItem(v, w, u);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2523, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2524, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_MAP_ADD: opcode = 147; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 147:
        {
            w = (stack_pointer[-1]);
            u = (stack_pointer[-2]);
            { (void)((stack_pointer += -2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2533, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            v = stack_pointer[-oparg];
            (__builtin_expect(!(((((PyObject*)(v))->ob_type) == &PyDict_Type)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2535, "PyDict_CheckExact(v)") : (void)0);
            err = PyDict_SetItem(v, w, u);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2537, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2538, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err == 0) {
                if (0) goto PRED_JUMP_ABSOLUTE;
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            break;
        }

        TARGET_LOAD_ATTR: opcode = 106; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 106:
        {
            w = PyTuple_GetItem((names), (oparg));
            v = (stack_pointer[-1]);
            x = PyObject_GetAttr(v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2551, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_COMPARE_OP: opcode = 107; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 107:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            v = (stack_pointer[-1]);
            if (((w)->ob_type == &PyInt_Type) && ((v)->ob_type == &PyInt_Type)) {

                register long a, b;
                register int res;
                a = (((PyIntObject *)(v))->ob_ival);
                b = (((PyIntObject *)(w))->ob_ival);
                switch (oparg) {
                case PyCmp_LT: res = a < b; break;
                case PyCmp_LE: res = a <= b; break;
                case PyCmp_EQ: res = a == b; break;
                case PyCmp_NE: res = a != b; break;
                case PyCmp_GT: res = a > b; break;
                case PyCmp_GE: res = a >= b; break;
                case PyCmp_IS: res = v == w; break;
                case PyCmp_IS_NOT: res = v != w; break;
                default: goto slow_compare;
                }
                x = res ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_ZeroStruct);
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            }
            else {
              slow_compare:
                x = cmp_outcome(oparg, v, w);
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2585, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2586, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x == ((void*)0)) break;
            if (0) goto PRED_POP_JUMP_IF_FALSE;
            if (0) goto PRED_POP_JUMP_IF_TRUE;
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_IMPORT_NAME: opcode = 108; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 108:
        {
            w = PyTuple_GetItem((names), (oparg));
            x = PyDict_GetItemString(f->f_builtins, "__import__");
            if (x == ((void*)0)) {
                PyErr_SetString(PyExc_ImportError,
                                "__import__ not found");
                break;
            }
            ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            u = (stack_pointer[-1]);
            if (PyInt_AsLong(u) != -1 || PyErr_Occurred())
                w = PyTuple_Pack(5,
                            w,
                            f->f_globals,
                            f->f_locals == ((void*)0) ?
                                  (&_Py_NoneStruct) : f->f_locals,
                            v,
                            u);
            else
                w = PyTuple_Pack(4,
                            w,
                            f->f_globals,
                            f->f_locals == ((void*)0) ?
                                  (&_Py_NoneStruct) : f->f_locals,
                            v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2621, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2622, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            if (w == ((void*)0)) {
                u = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2625, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0);
                x = ((void*)0);
                break;
            }
                                 ;
            v = x;
            x = PyEval_CallObjectWithKeywords(v, w, (PyObject *)((void*)0));
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2632, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                                 ;
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2634, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_IMPORT_STAR: opcode = 84; case 84:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            PyFrame_FastToLocals(f);
            if ((x = f->f_locals) == ((void*)0)) {
                PyErr_SetString(PyExc_SystemError,
                    "no locals found during 'import *'");
                break;
            }
                                 ;
            err = import_all_from(x, v);
                                 ;
            PyFrame_LocalsToFast(f, 0);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2653, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            if (err == 0) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_IMPORT_FROM: opcode = 109; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 109:
        {
            w = PyTuple_GetItem((names), (oparg));
            v = (stack_pointer[-1]);
                                 ;
            x = import_from(v, w);
                                 ;
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2665, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_JUMP_FORWARD: opcode = 110; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 110:
        {
            (next_instr += (oparg));
            { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
        }

        PRED_POP_JUMP_IF_FALSE:;
        TARGET_POP_JUMP_IF_FALSE: opcode = 114; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 114:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if (w == ((PyObject *) &_Py_TrueStruct)) {
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2681, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            if (w == ((PyObject *) &_Py_ZeroStruct)) {
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2685, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                (next_instr = first_instr + (oparg));
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            err = PyObject_IsTrue(w);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2690, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err > 0)
                err = 0;
            else if (err == 0)
                (next_instr = first_instr + (oparg));
            else
                break;
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        PRED_POP_JUMP_IF_TRUE:;
        TARGET_POP_JUMP_IF_TRUE: opcode = 115; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 115:
        {
            w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if (w == ((PyObject *) &_Py_ZeroStruct)) {
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2705, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            if (w == ((PyObject *) &_Py_TrueStruct)) {
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2709, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                (next_instr = first_instr + (oparg));
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            err = PyObject_IsTrue(w);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2714, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (err > 0) {
                err = 0;
                (next_instr = first_instr + (oparg));
            }
            else if (err == 0)
                ;
            else
                break;
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_JUMP_IF_FALSE_OR_POP: opcode = 111; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 111:
        {
            w = (stack_pointer[-1]);
            if (w == ((PyObject *) &_Py_TrueStruct)) {
                { (void)((stack_pointer += -1), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2730, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2731, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            if (w == ((PyObject *) &_Py_ZeroStruct)) {
                (next_instr = first_instr + (oparg));
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            err = PyObject_IsTrue(w);
            if (err > 0) {
                { (void)((stack_pointer += -1), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2740, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2741, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                err = 0;
            }
            else if (err == 0)
                (next_instr = first_instr + (oparg));
            else
                break;
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_JUMP_IF_TRUE_OR_POP: opcode = 112; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 112:
        {
            w = (stack_pointer[-1]);
            if (w == ((PyObject *) &_Py_ZeroStruct)) {
                { (void)((stack_pointer += -1), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2755, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2756, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            if (w == ((PyObject *) &_Py_TrueStruct)) {
                (next_instr = first_instr + (oparg));
                { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; };
            }
            err = PyObject_IsTrue(w);
            if (err > 0) {
                err = 0;
                (next_instr = first_instr + (oparg));
            }
            else if (err == 0) {
                { (void)((stack_pointer += -1), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2769, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2770, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            }
            else
                break;
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        PRED_JUMP_ABSOLUTE:;
        TARGET_JUMP_ABSOLUTE: opcode = 113; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 113:
        {
            (next_instr = first_instr + (oparg));
# 2791 "Python/ceval.c"
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };

        }

        TARGET_GET_ITER: opcode = 68; case 68:
        {

            v = (stack_pointer[-1]);
            x = PyObject_GetIter(v);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2800, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            if (x != ((void*)0)) {
                (stack_pointer[-1] = (x));
                if (0) goto PRED_FOR_ITER;
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            { (void)((stack_pointer += -1), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2806, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            break;
        }

        PRED_FOR_ITER:;
        TARGET_FOR_ITER: opcode = 93; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 93:
        {

            v = (stack_pointer[-1]);
            x = (*v->ob_type->tp_iternext)(v);
            if (x != ((void*)0)) {
                { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2817, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                if (0) goto PRED_STORE_FAST;
                if (0) goto PRED_UNPACK_SEQUENCE;
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
            if (PyErr_Occurred()) {
                if (!PyErr_ExceptionMatches(
                                PyExc_StopIteration))
                    break;
                PyErr_Clear();
            }

            x = v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2830, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            (next_instr += (oparg));
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }

        TARGET_BREAK_LOOP: opcode = 80; case 80:
        {
            why = WHY_BREAK;
            goto fast_block_end;
        }

        TARGET_CONTINUE_LOOP: opcode = 119; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 119:
        {
            retval = PyInt_FromLong(oparg);
            if (!retval) {
                x = ((void*)0);
                break;
            }
            why = WHY_CONTINUE;
            goto fast_block_end;
        }

        TARGET_SETUP_LOOP: opcode = 120; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 120: goto _setup_finally;
        TARGET_SETUP_EXCEPT: opcode = 121; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 121: goto _setup_finally;
        TARGET_SETUP_FINALLY: opcode = 122; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 122:
        _setup_finally:
        {





            PyFrame_BlockSetup(f, opcode, ((int)(next_instr - first_instr)) + oparg,
                               ((int)(stack_pointer - f->f_valuestack)));
            { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
        }



        TARGET_SETUP_WITH: opcode = 143; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 143:
        {
        {
            static PyObject *exit, *enter;
            w = (stack_pointer[-1]);
            x = special_lookup(w, "__exit__", &exit);
            if (!x)
                break;
            (stack_pointer[-1] = (x));
            u = special_lookup(w, "__enter__", &enter);
            do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2879, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            if (!u) {
                x = ((void*)0);
                break;
            }
            x = PyObject_CallFunctionObjArgs(u, ((void*)0));
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2885, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            if (!x)
                break;




            PyFrame_BlockSetup(f, 143, ((int)(next_instr - first_instr)) + oparg,
                               ((int)(stack_pointer - f->f_valuestack)));

            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2895, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            }
        }

        TARGET_WITH_CLEANUP: opcode = 81; case 81:
        {
# 2924 "Python/ceval.c"
            PyObject *exit_func;

            u = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            if (u == (&_Py_NoneStruct)) {
                exit_func = (stack_pointer[-1]);
                (stack_pointer[-1] = (u));
                v = w = (&_Py_NoneStruct);
            }
            else if (((((u)->ob_type)->tp_flags & ((1L<<23))) != 0)) {
                switch((((PyIntObject *)(u))->ob_ival)) {
                case WHY_RETURN:
                case WHY_CONTINUE:

                    exit_func = (stack_pointer[-2]);
                    (stack_pointer[-2] = ((stack_pointer[-1])));
                    (stack_pointer[-1] = (u));
                    break;
                default:
                    exit_func = (stack_pointer[-1]);
                    (stack_pointer[-1] = (u));
                    break;
                }
                u = v = w = (&_Py_NoneStruct);
            }
            else {
                v = (stack_pointer[-1]);
                w = (stack_pointer[-2]);
                exit_func = (stack_pointer[-3]);
                (stack_pointer[-1] = (u));
                (stack_pointer[-2] = (v));
                (stack_pointer[-3] = (w));
            }

            x = PyObject_CallFunctionObjArgs(exit_func, u, v, w,
                                             ((void*)0));
            do { if (_Py_RefTotal-- , --((PyObject*)(exit_func))->ob_refcnt != 0) { if (((PyObject*)exit_func)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2959, (PyObject *)(exit_func)); } else _Py_Dealloc((PyObject *)(exit_func)); } while (0);
            if (x == ((void*)0))
                break;

            if (u != (&_Py_NoneStruct))
                err = PyObject_IsTrue(x);
            else
                err = 0;
            do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2967, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0);

            if (err < 0)
                break;
            else if (err > 0) {
                err = 0;

                { (void)((stack_pointer += -2), lltrace && prtrace((stack_pointer[-1]), "stackadj")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2974, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                ( _Py_RefTotal++ , ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
                (stack_pointer[-1] = ((&_Py_NoneStruct)));
                do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2977, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2978, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 2979, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            } else {


            }
            if (0) goto PRED_END_FINALLY;
            break;
        }

        TARGET_CALL_FUNCTION: opcode = 131; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 131:
        {
            PyObject **sp;
                            ;
            sp = stack_pointer;



            x = call_function(&sp, oparg);

            stack_pointer = sp;
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 2999, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_CALL_FUNCTION_VAR: opcode = 140; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 140: goto _call_function_var_kw;
        TARGET_CALL_FUNCTION_KW: opcode = 141; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 141: goto _call_function_var_kw;
        TARGET_CALL_FUNCTION_VAR_KW: opcode = 142; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 142:
        _call_function_var_kw:
        {
            int na = oparg & 0xff;
            int nk = (oparg>>8) & 0xff;
            int flags = (opcode - 131) & 3;
            int n = na + 2 * nk;
            PyObject **pfunc, *func, **sp;
                            ;
            if (flags & 1)
                n++;
            if (flags & 2)
                n++;
            pfunc = stack_pointer - n - 1;
            func = *pfunc;

            if (((func)->ob_type == &PyMethod_Type)
                && (((PyMethodObject *)func) -> im_self) != ((void*)0)) {
                PyObject *self = (((PyMethodObject *)func) -> im_self);
                ( _Py_RefTotal++ , ((PyObject*)(self))->ob_refcnt++);
                func = (((PyMethodObject *)func) -> im_func);
                ( _Py_RefTotal++ , ((PyObject*)(func))->ob_refcnt++);
                do { if (_Py_RefTotal-- , --((PyObject*)(*pfunc))->ob_refcnt != 0) { if (((PyObject*)*pfunc)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3028, (PyObject *)(*pfunc)); } else _Py_Dealloc((PyObject *)(*pfunc)); } while (0);
                *pfunc = self;
                na++;
            } else
                ( _Py_RefTotal++ , ((PyObject*)(func))->ob_refcnt++);
            sp = stack_pointer;
                                 ;
            x = ext_do_call(func, &sp, flags, na, nk);
                                 ;
            stack_pointer = sp;
            do { if (_Py_RefTotal-- , --((PyObject*)(func))->ob_refcnt != 0) { if (((PyObject*)func)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3038, (PyObject *)(func)); } else _Py_Dealloc((PyObject *)(func)); } while (0);

            while (stack_pointer > pfunc) {
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3042, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
            }
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3044, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }


        TARGET_MAKE_FUNCTION: opcode = 132; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 132:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            x = PyFunction_New(v, f->f_globals);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3054, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);

            if (x != ((void*)0) && oparg > 0) {
                v = PyTuple_New(oparg);
                if (v == ((void*)0)) {
                    do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3059, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0);
                    x = ((void*)0);
                    break;
                }
                while (--oparg >= 0) {
                    w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                    (((PyTupleObject *)(v))->ob_item[oparg] = w);
                }
                err = PyFunction_SetDefaults(x, v);
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3068, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            }
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3070, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            break;
        }

        TARGET_MAKE_CLOSURE: opcode = 134; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 134:
        {
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            x = PyFunction_New(v, f->f_globals);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3078, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            if (x != ((void*)0)) {
                v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                if (PyFunction_SetClosure(x, v) != 0) {

                    why = WHY_EXCEPTION;
                }
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3085, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            }
            if (x != ((void*)0) && oparg > 0) {
                v = PyTuple_New(oparg);
                if (v == ((void*)0)) {
                    do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3090, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0);
                    x = ((void*)0);
                    break;
                }
                while (--oparg >= 0) {
                    w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                    (((PyTupleObject *)(v))->ob_item[oparg] = w);
                }
                if (PyFunction_SetDefaults(x, v) != 0) {


                    why = WHY_EXCEPTION;
                }
                do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3103, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            }
            { (void)((*stack_pointer++ = (x)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3105, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
            break;
        }

        TARGET_BUILD_SLICE: opcode = 133; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 133:
        {
            if (oparg == 3)
                w = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            else
                w = ((void*)0);
            v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
            u = (stack_pointer[-1]);
            x = PySlice_New(u, v, w);
            do { if (_Py_RefTotal-- , --((PyObject*)(u))->ob_refcnt != 0) { if (((PyObject*)u)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3118, (PyObject *)(u)); } else _Py_Dealloc((PyObject *)(u)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3119, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
            do { if ((w) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3120, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0); } while (0);
            (stack_pointer[-1] = (x));
            if (x != ((void*)0)) { int _tick = _Py_Ticker - 1; _Py_Ticker = _tick; if (_tick >= 0) { { if (!lltrace && !_Py_TracingPossible) { f->f_lasti = ((int)(next_instr - first_instr)); goto *opcode_targets[*next_instr++]; } goto fast_next_opcode; }; } continue; };
            break;
        }

        TARGET_EXTENDED_ARG: opcode = 145; oparg = (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]); case 145:
        {
            opcode = (*next_instr++);
            oparg = oparg<<16 | (next_instr += 2, (next_instr[-1]<<8) + next_instr[-2]);
            goto dispatch_opcode;
        }


        _unknown_opcode:

        default:
            fprintf(__stderrp,
                "XXX lineno: %d, opcode: %d\n",
                PyFrame_GetLineNumber(f),
                opcode);
            PyErr_SetString(PyExc_SystemError, "unknown opcode");
            why = WHY_EXCEPTION;
            break;





        }

        on_error:

                             ;



        if (why == WHY_NOT) {
            if (err == 0 && x != ((void*)0)) {


                if (PyErr_Occurred())
                    fprintf(__stderrp,
                        "XXX undetected error\n");
                else {

                                         ;
                    continue;

                }

            }
            why = WHY_EXCEPTION;
            x = (&_Py_NoneStruct);
            err = 0;
        }



        if (why == WHY_EXCEPTION || why == WHY_RERAISE) {
            if (!PyErr_Occurred()) {
                PyErr_SetString(PyExc_SystemError,
                    "error return without exception set");
                why = WHY_EXCEPTION;
            }
        }

        else {

            if (PyErr_Occurred()) {
                char buf[128];
                __builtin___sprintf_chk (buf, 0, __builtin_object_size (buf, 2 > 1 ? 1 : 0), "Stack unwind with exception " "set and why=%d", why);

                Py_FatalError(buf);
            }
        }




        if (why == WHY_EXCEPTION) {
            PyTraceBack_Here(f);

            if (tstate->c_tracefunc != ((void*)0))
                call_exc_trace(tstate->c_tracefunc,
                               tstate->c_traceobj, f);
        }



        if (why == WHY_RERAISE)
            why = WHY_EXCEPTION;



fast_block_end:
        while (why != WHY_NOT && f->f_iblock > 0) {

            PyTryBlock *b = &f->f_blockstack[f->f_iblock - 1];

            (__builtin_expect(!(why != WHY_YIELD), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3220, "why != WHY_YIELD") : (void)0);
            if (b->b_type == 120 && why == WHY_CONTINUE) {
                why = WHY_NOT;
                (next_instr = first_instr + ((((PyIntObject *)(retval))->ob_ival)));
                do { if (_Py_RefTotal-- , --((PyObject*)(retval))->ob_refcnt != 0) { if (((PyObject*)retval)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3224, (PyObject *)(retval)); } else _Py_Dealloc((PyObject *)(retval)); } while (0);
                break;
            }


            f->f_iblock--;

            while (((int)(stack_pointer - f->f_valuestack)) > b->b_level) {
                v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
                do { if ((v) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3233, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0); } while (0);
            }
            if (b->b_type == 120 && why == WHY_BREAK) {
                why = WHY_NOT;
                (next_instr = first_instr + (b->b_handler));
                break;
            }
            if (b->b_type == 122 ||
                (b->b_type == 121 &&
                 why == WHY_EXCEPTION) ||
                b->b_type == 143) {
                if (why == WHY_EXCEPTION) {
                    PyObject *exc, *val, *tb;
                    PyErr_Fetch(&exc, &val, &tb);
                    if (val == ((void*)0)) {
                        val = (&_Py_NoneStruct);
                        ( _Py_RefTotal++ , ((PyObject*)(val))->ob_refcnt++);
                    }





                    if (b->b_type == 121 ||
                        b->b_type == 143) {
                        PyErr_NormalizeException(
                            &exc, &val, &tb);
                        set_exc_info(tstate,
                                     exc, val, tb);
                    }
                    if (tb == ((void*)0)) {
                        ( _Py_RefTotal++ , ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
                        { (void)((*stack_pointer++ = ((&_Py_NoneStruct))), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3265, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                    } else
                        { (void)((*stack_pointer++ = (tb)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3267, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                    { (void)((*stack_pointer++ = (val)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3268, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                    { (void)((*stack_pointer++ = (exc)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3269, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                }
                else {
                    if (why & (WHY_RETURN | WHY_CONTINUE))
                        { (void)((*stack_pointer++ = (retval)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3273, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                    v = PyInt_FromLong((long)why);
                    { (void)((*stack_pointer++ = (v)), lltrace && prtrace((stack_pointer[-1]), "push")); (__builtin_expect(!(((int)(stack_pointer - f->f_valuestack)) <= co->co_stacksize), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3275, "STACK_LEVEL() <= co->co_stacksize") : (void)0); };
                }
                why = WHY_NOT;
                (next_instr = first_instr + (b->b_handler));
                break;
            }
        }



        if (why != WHY_NOT)
            break;
                             ;

    }

    (__builtin_expect(!(why != WHY_YIELD), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3291, "why != WHY_YIELD") : (void)0);

    while (!(((int)(stack_pointer - f->f_valuestack)) == 0)) {
        v = ((void)(lltrace && prtrace((stack_pointer[-1]), "pop")), (*--stack_pointer));
        do { if ((v) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3295, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0); } while (0);
    }

    if (why != WHY_RETURN)
        retval = ((void*)0);

fast_yield:
    if (tstate->use_tracing) {
        if (tstate->c_tracefunc) {
            if (why == WHY_RETURN || why == WHY_YIELD) {
                if (call_trace(tstate->c_tracefunc,
                               tstate->c_traceobj, f,
                               3, retval)) {
                    do { if ((retval) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(retval))->ob_refcnt != 0) { if (((PyObject*)retval)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3308, (PyObject *)(retval)); } else _Py_Dealloc((PyObject *)(retval)); } while (0); } while (0);
                    retval = ((void*)0);
                    why = WHY_EXCEPTION;
                }
            }
            else if (why == WHY_EXCEPTION) {
                call_trace_protected(tstate->c_tracefunc,
                                     tstate->c_traceobj, f,
                                     3, ((void*)0));
            }
        }
        if (tstate->c_profilefunc) {
            if (why == WHY_EXCEPTION)
                call_trace_protected(tstate->c_profilefunc,
                                     tstate->c_profileobj, f,
                                     3, ((void*)0));
            else if (call_trace(tstate->c_profilefunc,
                                tstate->c_profileobj, f,
                                3, retval)) {
                do { if ((retval) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(retval))->ob_refcnt != 0) { if (((PyObject*)retval)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3327, (PyObject *)(retval)); } else _Py_Dealloc((PyObject *)(retval)); } while (0); } while (0);
                retval = ((void*)0);
                why = WHY_EXCEPTION;
            }
        }
    }

    if (tstate->frame->f_exc_type != ((void*)0))
        reset_exc_info(tstate);
    else {
        (__builtin_expect(!(tstate->frame->f_exc_value == ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3337, "tstate->frame->f_exc_value == NULL") : (void)0);
        (__builtin_expect(!(tstate->frame->f_exc_traceback == ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3338, "tstate->frame->f_exc_traceback == NULL") : (void)0);
    }


exit_eval_frame:
    (--PyThreadState_Get()->recursion_depth);
    tstate->frame = f->f_back;

    return retval;
}





PyObject *
PyEval_EvalCodeEx(PyCodeObject *co, PyObject *globals, PyObject *locals,
           PyObject **args, int argcount, PyObject **kws, int kwcount,
           PyObject **defs, int defcount, PyObject *closure)
{
    register PyFrameObject *f;
    register PyObject *retval = ((void*)0);
    register PyObject **fastlocals, **freevars;
    PyThreadState *tstate = PyThreadState_Get();
    PyObject *x, *u;

    if (globals == ((void*)0)) {
        PyErr_SetString(PyExc_SystemError,
                        "PyEval_EvalCodeEx: NULL globals");
        return ((void*)0);
    }

    (__builtin_expect(!(tstate != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3370, "tstate != NULL") : (void)0);
    (__builtin_expect(!(globals != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3371, "globals != NULL") : (void)0);
    f = PyFrame_New(tstate, co, globals, locals);
    if (f == ((void*)0))
        return ((void*)0);

    fastlocals = f->f_localsplus;
    freevars = f->f_localsplus + co->co_nlocals;

    if (co->co_argcount > 0 ||
        co->co_flags & (0x0004 | 0x0008)) {
        int i;
        int n = argcount;
        PyObject *kwdict = ((void*)0);
        if (co->co_flags & 0x0008) {
            kwdict = PyDict_New();
            if (kwdict == ((void*)0))
                goto fail;
            i = co->co_argcount;
            if (co->co_flags & 0x0004)
                i++;
            do { PyObject *tmp = (fastlocals[i]); (fastlocals[i]) = kwdict; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3391, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
        }
        if (argcount > co->co_argcount) {
            if (!(co->co_flags & 0x0004)) {
                PyErr_Format(PyExc_TypeError,
                    "%.200s() takes %s %d "
                    "argument%s (%d given)",
                    PyString_AsString(co->co_name),
                    defcount ? "at most" : "exactly",
                    co->co_argcount,
                    co->co_argcount == 1 ? "" : "s",
                    argcount + kwcount);
                goto fail;
            }
            n = co->co_argcount;
        }
        for (i = 0; i < n; i++) {
            x = args[i];
            ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
            do { PyObject *tmp = (fastlocals[i]); (fastlocals[i]) = x; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3410, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
        }
        if (co->co_flags & 0x0004) {
            u = PyTuple_New(argcount - n);
            if (u == ((void*)0))
                goto fail;
            do { PyObject *tmp = (fastlocals[co->co_argcount]); (fastlocals[co->co_argcount]) = u; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3416, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
            for (i = n; i < argcount; i++) {
                x = args[i];
                ( _Py_RefTotal++ , ((PyObject*)(x))->ob_refcnt++);
                (((PyTupleObject *)(u))->ob_item[i-n] = x);
            }
        }
        for (i = 0; i < kwcount; i++) {
            PyObject **co_varnames;
            PyObject *keyword = kws[2*i];
            PyObject *value = kws[2*i + 1];
            int j;
            if (keyword == ((void*)0) || !(((((((PyObject*)(keyword))->ob_type))->tp_flags & ((1L<<27))) != 0)

                                     || ((((((PyObject*)(keyword))->ob_type))->tp_flags & ((1L<<28))) != 0)

                        )) {
                PyErr_Format(PyExc_TypeError,
                    "%.200s() keywords must be strings",
                    PyString_AsString(co->co_name));
                goto fail;
            }


            co_varnames = ((PyTupleObject *)(co->co_varnames))->ob_item;
            for (j = 0; j < co->co_argcount; j++) {
                PyObject *nm = co_varnames[j];
                if (nm == keyword)
                    goto kw_found;
            }

            for (j = 0; j < co->co_argcount; j++) {
                PyObject *nm = co_varnames[j];
                int cmp = PyObject_RichCompareBool(
                    keyword, nm, 2);
                if (cmp > 0)
                    goto kw_found;
                else if (cmp < 0)
                    goto fail;
            }
            if (kwdict == ((void*)0)) {
                PyObject *kwd_str = kwd_as_string(keyword);
                if (kwd_str) {
                    PyErr_Format(PyExc_TypeError,
                                 "%.200s() got an unexpected "
                                 "keyword argument '%.400s'",
                                 PyString_AsString(co->co_name),
                                 PyString_AsString(kwd_str));
                    do { if (_Py_RefTotal-- , --((PyObject*)(kwd_str))->ob_refcnt != 0) { if (((PyObject*)kwd_str)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3464, (PyObject *)(kwd_str)); } else _Py_Dealloc((PyObject *)(kwd_str)); } while (0);
                }
                goto fail;
            }
            PyDict_SetItem(kwdict, keyword, value);
            continue;
          kw_found:
            if ((fastlocals[j]) != ((void*)0)) {
                PyObject *kwd_str = kwd_as_string(keyword);
                if (kwd_str) {
                    PyErr_Format(PyExc_TypeError,
                                 "%.200s() got multiple "
                                 "values for keyword "
                                 "argument '%.400s'",
                                 PyString_AsString(co->co_name),
                                 PyString_AsString(kwd_str));
                    do { if (_Py_RefTotal-- , --((PyObject*)(kwd_str))->ob_refcnt != 0) { if (((PyObject*)kwd_str)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3480, (PyObject *)(kwd_str)); } else _Py_Dealloc((PyObject *)(kwd_str)); } while (0);
                }
                goto fail;
            }
            ( _Py_RefTotal++ , ((PyObject*)(value))->ob_refcnt++);
            do { PyObject *tmp = (fastlocals[j]); (fastlocals[j]) = value; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3485, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
        }
        if (argcount < co->co_argcount) {
            int m = co->co_argcount - defcount;
            for (i = argcount; i < m; i++) {
                if ((fastlocals[i]) == ((void*)0)) {
                    int j, given = 0;
                    for (j = 0; j < co->co_argcount; j++)
                        if ((fastlocals[j]))
                            given++;
                    PyErr_Format(PyExc_TypeError,
                        "%.200s() takes %s %d "
                        "argument%s (%d given)",
                        PyString_AsString(co->co_name),
                        ((co->co_flags & 0x0004) ||
                         defcount) ? "at least"
                                   : "exactly",
                        m, m == 1 ? "" : "s", given);
                    goto fail;
                }
            }
            if (n > m)
                i = n - m;
            else
                i = 0;
            for (; i < defcount; i++) {
                if ((fastlocals[m+i]) == ((void*)0)) {
                    PyObject *def = defs[i];
                    ( _Py_RefTotal++ , ((PyObject*)(def))->ob_refcnt++);
                    do { PyObject *tmp = (fastlocals[m+i]); (fastlocals[m+i]) = def; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3514, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
                }
            }
        }
    }
    else if (argcount > 0 || kwcount > 0) {
        PyErr_Format(PyExc_TypeError,
                     "%.200s() takes no arguments (%d given)",
                     PyString_AsString(co->co_name),
                     argcount + kwcount);
        goto fail;
    }


    if ((((PyVarObject*)(co->co_cellvars))->ob_size)) {
        int i, j, nargs, found;
        char *cellname, *argname;
        PyObject *c;

        nargs = co->co_argcount;
        if (co->co_flags & 0x0004)
            nargs++;
        if (co->co_flags & 0x0008)
            nargs++;
# 3546 "Python/ceval.c"
        for (i = 0; i < (((PyVarObject*)(co->co_cellvars))->ob_size); ++i) {
            cellname = (((PyStringObject *)((((PyTupleObject *)(co->co_cellvars))->ob_item[i])))->ob_sval);

            found = 0;
            for (j = 0; j < nargs; j++) {
                argname = (((PyStringObject *)((((PyTupleObject *)(co->co_varnames))->ob_item[j])))->ob_sval);

                if (strcmp(cellname, argname) == 0) {
                    c = PyCell_New((fastlocals[j]));
                    if (c == ((void*)0))
                        goto fail;
                    (fastlocals[co->co_nlocals + i]) = c;
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                c = PyCell_New(((void*)0));
                if (c == ((void*)0))
                    goto fail;
                do { PyObject *tmp = (fastlocals[co->co_nlocals + i]); (fastlocals[co->co_nlocals + i]) = c; do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3566, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
            }
        }
    }
    if ((((PyVarObject*)(co->co_freevars))->ob_size)) {
        int i;
        for (i = 0; i < (((PyVarObject*)(co->co_freevars))->ob_size); ++i) {
            PyObject *o = (((PyTupleObject *)(closure))->ob_item[i]);
            ( _Py_RefTotal++ , ((PyObject*)(o))->ob_refcnt++);
            freevars[(((PyVarObject*)(co->co_cellvars))->ob_size) + i] = o;
        }
    }

    if (co->co_flags & 0x0020) {


        do { if (f->f_back) { PyObject *_py_tmp = (PyObject *)(f->f_back); (f->f_back) = ((void*)0); do { if (_Py_RefTotal-- , --((PyObject*)(_py_tmp))->ob_refcnt != 0) { if (((PyObject*)_py_tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3582, (PyObject *)(_py_tmp)); } else _Py_Dealloc((PyObject *)(_py_tmp)); } while (0); } } while (0);

                              ;



        return PyGen_New(f);
    }

    retval = PyEval_EvalFrameEx(f,0);

fail:






    (__builtin_expect(!(tstate != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3600, "tstate != NULL") : (void)0);
    ++tstate->recursion_depth;
    do { if (_Py_RefTotal-- , --((PyObject*)(f))->ob_refcnt != 0) { if (((PyObject*)f)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3602, (PyObject *)(f)); } else _Py_Dealloc((PyObject *)(f)); } while (0);
    --tstate->recursion_depth;
    return retval;
}


static PyObject *
special_lookup(PyObject *o, char *meth, PyObject **cache)
{
    PyObject *res;
    if (((o)->ob_type == &PyInstance_Type)) {
        if (!*cache)
            return PyObject_GetAttrString(o, meth);
        else
            return PyObject_GetAttr(o, *cache);
    }
    res = _PyObject_LookupSpecial(o, meth, cache);
    if (res == ((void*)0) && !PyErr_Occurred()) {
        PyErr_SetObject(PyExc_AttributeError, *cache);
        return ((void*)0);
    }
    return res;
}


static PyObject *
kwd_as_string(PyObject *kwd) {

    if (((((((PyObject*)(kwd))->ob_type))->tp_flags & ((1L<<27))) != 0)) {



        ( _Py_RefTotal++ , ((PyObject*)(kwd))->ob_refcnt++);
        return kwd;

    }
    return _PyUnicodeUCS2_AsDefaultEncodedString(kwd, "replace");

}
# 3705 "Python/ceval.c"
static void
set_exc_info(PyThreadState *tstate,
             PyObject *type, PyObject *value, PyObject *tb)
{
    PyFrameObject *frame = tstate->frame;
    PyObject *tmp_type, *tmp_value, *tmp_tb;

    (__builtin_expect(!(type != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3712, "type != NULL") : (void)0);
    (__builtin_expect(!(frame != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3713, "frame != NULL") : (void)0);
    if (frame->f_exc_type == ((void*)0)) {
        (__builtin_expect(!(frame->f_exc_value == ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3715, "frame->f_exc_value == NULL") : (void)0);
        (__builtin_expect(!(frame->f_exc_traceback == ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3716, "frame->f_exc_traceback == NULL") : (void)0);


        if (tstate->exc_type == ((void*)0)) {

            ( _Py_RefTotal++ , ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
            tstate->exc_type = (&_Py_NoneStruct);
        }
        ( _Py_RefTotal++ , ((PyObject*)(tstate->exc_type))->ob_refcnt++);
        do { if ((tstate->exc_value) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(tstate->exc_value))->ob_refcnt++); } while (0);
        do { if ((tstate->exc_traceback) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(tstate->exc_traceback))->ob_refcnt++); } while (0);
        frame->f_exc_type = tstate->exc_type;
        frame->f_exc_value = tstate->exc_value;
        frame->f_exc_traceback = tstate->exc_traceback;
    }

    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    ( _Py_RefTotal++ , ((PyObject*)(type))->ob_refcnt++);
    do { if ((value) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(value))->ob_refcnt++); } while (0);
    do { if ((tb) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(tb))->ob_refcnt++); } while (0);
    tstate->exc_type = type;
    tstate->exc_value = value;
    tstate->exc_traceback = tb;
    do { if ((tmp_type) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_type))->ob_refcnt != 0) { if (((PyObject*)tmp_type)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3741, (PyObject *)(tmp_type)); } else _Py_Dealloc((PyObject *)(tmp_type)); } while (0); } while (0);
    do { if ((tmp_value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_value))->ob_refcnt != 0) { if (((PyObject*)tmp_value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3742, (PyObject *)(tmp_value)); } else _Py_Dealloc((PyObject *)(tmp_value)); } while (0); } while (0);
    do { if ((tmp_tb) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_tb))->ob_refcnt != 0) { if (((PyObject*)tmp_tb)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3743, (PyObject *)(tmp_tb)); } else _Py_Dealloc((PyObject *)(tmp_tb)); } while (0); } while (0);

    PySys_SetObject("exc_type", type);
    PySys_SetObject("exc_value", value);
    PySys_SetObject("exc_traceback", tb);
}

static void
reset_exc_info(PyThreadState *tstate)
{
    PyFrameObject *frame;
    PyObject *tmp_type, *tmp_value, *tmp_tb;




    (__builtin_expect(!(tstate != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3759, "tstate != NULL") : (void)0);
    frame = tstate->frame;
    (__builtin_expect(!(frame != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3761, "frame != NULL") : (void)0);
    (__builtin_expect(!(frame->f_exc_type != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3762, "frame->f_exc_type != NULL") : (void)0);


    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    ( _Py_RefTotal++ , ((PyObject*)(frame->f_exc_type))->ob_refcnt++);
    do { if ((frame->f_exc_value) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(frame->f_exc_value))->ob_refcnt++); } while (0);
    do { if ((frame->f_exc_traceback) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(frame->f_exc_traceback))->ob_refcnt++); } while (0);
    tstate->exc_type = frame->f_exc_type;
    tstate->exc_value = frame->f_exc_value;
    tstate->exc_traceback = frame->f_exc_traceback;
    do { if ((tmp_type) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_type))->ob_refcnt != 0) { if (((PyObject*)tmp_type)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3774, (PyObject *)(tmp_type)); } else _Py_Dealloc((PyObject *)(tmp_type)); } while (0); } while (0);
    do { if ((tmp_value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_value))->ob_refcnt != 0) { if (((PyObject*)tmp_value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3775, (PyObject *)(tmp_value)); } else _Py_Dealloc((PyObject *)(tmp_value)); } while (0); } while (0);
    do { if ((tmp_tb) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_tb))->ob_refcnt != 0) { if (((PyObject*)tmp_tb)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3776, (PyObject *)(tmp_tb)); } else _Py_Dealloc((PyObject *)(tmp_tb)); } while (0); } while (0);


    PySys_SetObject("exc_type", frame->f_exc_type);
    PySys_SetObject("exc_value", frame->f_exc_value);
    PySys_SetObject("exc_traceback", frame->f_exc_traceback);


    tmp_type = frame->f_exc_type;
    tmp_value = frame->f_exc_value;
    tmp_tb = frame->f_exc_traceback;
    frame->f_exc_type = ((void*)0);
    frame->f_exc_value = ((void*)0);
    frame->f_exc_traceback = ((void*)0);
    do { if (_Py_RefTotal-- , --((PyObject*)(tmp_type))->ob_refcnt != 0) { if (((PyObject*)tmp_type)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3790, (PyObject *)(tmp_type)); } else _Py_Dealloc((PyObject *)(tmp_type)); } while (0);
    do { if ((tmp_value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_value))->ob_refcnt != 0) { if (((PyObject*)tmp_value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3791, (PyObject *)(tmp_value)); } else _Py_Dealloc((PyObject *)(tmp_value)); } while (0); } while (0);
    do { if ((tmp_tb) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp_tb))->ob_refcnt != 0) { if (((PyObject*)tmp_tb)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3792, (PyObject *)(tmp_tb)); } else _Py_Dealloc((PyObject *)(tmp_tb)); } while (0); } while (0);
}



static enum why_code
do_raise(PyObject *type, PyObject *value, PyObject *tb)
{
    if (type == ((void*)0)) {

        PyThreadState *tstate = PyThreadState_Get();
        type = tstate->exc_type == ((void*)0) ? (&_Py_NoneStruct) : tstate->exc_type;
        value = tstate->exc_value;
        tb = tstate->exc_traceback;
        do { if ((type) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(type))->ob_refcnt++); } while (0);
        do { if ((value) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(value))->ob_refcnt++); } while (0);
        do { if ((tb) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(tb))->ob_refcnt++); } while (0);
    }
# 3832 "Python/ceval.c"
    if (tb == (&_Py_NoneStruct)) {
        do { if (_Py_RefTotal-- , --((PyObject*)(tb))->ob_refcnt != 0) { if (((PyObject*)tb)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3833, (PyObject *)(tb)); } else _Py_Dealloc((PyObject *)(tb)); } while (0);
        tb = ((void*)0);
    }
    else if (tb != ((void*)0) && !((((PyObject*)(tb))->ob_type) == &PyTraceBack_Type)) {
        PyErr_SetString(PyExc_TypeError,
                   "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }


    if (value == ((void*)0)) {
        value = (&_Py_NoneStruct);
        ( _Py_RefTotal++ , ((PyObject*)(value))->ob_refcnt++);
    }


    while (((((((PyObject*)(type))->ob_type))->tp_flags & ((1L<<26))) != 0) && PyTuple_Size(type) > 0) {
        PyObject *tmp = type;
        type = (((PyTupleObject *)(type))->ob_item[0]);
        ( _Py_RefTotal++ , ((PyObject*)(type))->ob_refcnt++);
        do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3853, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0);
    }

    if (((((type))->ob_type == &PyClass_Type) || (((((((PyObject*)((type)))->ob_type))->tp_flags & ((1L<<31))) != 0) && ((((PyTypeObject*)(type))->tp_flags & ((1L<<30))) != 0)))) {
        PyErr_NormalizeException(&type, &value, &tb);
        if (!((((value))->ob_type == &PyInstance_Type) || ((((value)->ob_type)->tp_flags & ((1L<<30))) != 0))) {
            PyErr_Format(PyExc_TypeError,
                         "calling %s() should have returned an instance of "
                         "BaseException, not '%s'",
                         ((PyTypeObject *)type)->tp_name,
                         (((PyObject*)(value))->ob_type)->tp_name);
            goto raise_error;
        }
    }
    else if (((((type))->ob_type == &PyInstance_Type) || ((((type)->ob_type)->tp_flags & ((1L<<30))) != 0))) {

        if (value != (&_Py_NoneStruct)) {
            PyErr_SetString(PyExc_TypeError,
              "instance exception may not have a separate value");
            goto raise_error;
        }
        else {

            do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3876, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0);
            value = type;
            type = (((((type))->ob_type == &PyInstance_Type) ? (PyObject*)((PyInstanceObject*)(type))->in_class : (PyObject*)((type)->ob_type)));
            ( _Py_RefTotal++ , ((PyObject*)(type))->ob_refcnt++);
        }
    }
    else {


        PyErr_Format(PyExc_TypeError,
                     "exceptions must be old-style classes or "
                     "derived from BaseException, not %s",
                     type->ob_type->tp_name);
        goto raise_error;
    }

    (__builtin_expect(!(((((type))->ob_type == &PyClass_Type) || (((((((PyObject*)((type)))->ob_type))->tp_flags & ((1L<<31))) != 0) && ((((PyTypeObject*)(type))->tp_flags & ((1L<<30))) != 0)))), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3892, "PyExceptionClass_Check(type)") : (void)0);
    if (Py_Py3kWarningFlag && ((type)->ob_type == &PyClass_Type)) {
        if (PyErr_WarnEx(PyExc_DeprecationWarning,
                        "exceptions must derive from BaseException "
                        "in 3.x", 1) < 0)
            goto raise_error;
    }

    PyErr_Restore(type, value, tb);
    if (tb == ((void*)0))
        return WHY_EXCEPTION;
    else
        return WHY_RERAISE;
 raise_error:
    do { if ((value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3906, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0); } while (0);
    do { if ((type) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(type))->ob_refcnt != 0) { if (((PyObject*)type)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3907, (PyObject *)(type)); } else _Py_Dealloc((PyObject *)(type)); } while (0); } while (0);
    do { if ((tb) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tb))->ob_refcnt != 0) { if (((PyObject*)tb)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3908, (PyObject *)(tb)); } else _Py_Dealloc((PyObject *)(tb)); } while (0); } while (0);
    return WHY_EXCEPTION;
}




static int
unpack_iterable(PyObject *v, int argcnt, PyObject **sp)
{
    int i = 0;
    PyObject *it;
    PyObject *w;

    (__builtin_expect(!(v != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 3922, "v != NULL") : (void)0);

    it = PyObject_GetIter(v);
    if (it == ((void*)0))
        goto Error;

    for (; i < argcnt; i++) {
        w = PyIter_Next(it);
        if (w == ((void*)0)) {

            if (!PyErr_Occurred()) {
                PyErr_Format(PyExc_ValueError,
                    "need more than %d value%s to unpack",
                    i, i == 1 ? "" : "s");
            }
            goto Error;
        }
        *--sp = w;
    }


    w = PyIter_Next(it);
    if (w == ((void*)0)) {
        if (PyErr_Occurred())
            goto Error;
        do { if (_Py_RefTotal-- , --((PyObject*)(it))->ob_refcnt != 0) { if (((PyObject*)it)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3947, (PyObject *)(it)); } else _Py_Dealloc((PyObject *)(it)); } while (0);
        return 1;
    }
    do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3950, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");

Error:
    for (; i > 0; i--, sp++)
        do { if (_Py_RefTotal-- , --((PyObject*)(*sp))->ob_refcnt != 0) { if (((PyObject*)*sp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3955, (PyObject *)(*sp)); } else _Py_Dealloc((PyObject *)(*sp)); } while (0);
    do { if ((it) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(it))->ob_refcnt != 0) { if (((PyObject*)it)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3956, (PyObject *)(it)); } else _Py_Dealloc((PyObject *)(it)); } while (0); } while (0);
    return 0;
}



static int
prtrace(PyObject *v, char *str)
{
    printf("%s ", str);
    if (PyObject_Print(v, __stdoutp, 0) != 0)
        PyErr_Clear();
    printf("\n");
    return 1;
}


static void
call_exc_trace(Py_tracefunc func, PyObject *self, PyFrameObject *f)
{
    PyObject *type, *value, *traceback, *arg;
    int err;
    PyErr_Fetch(&type, &value, &traceback);
    if (value == ((void*)0)) {
        value = (&_Py_NoneStruct);
        ( _Py_RefTotal++ , ((PyObject*)(value))->ob_refcnt++);
    }
    arg = PyTuple_Pack(3, type, value, traceback);
    if (arg == ((void*)0)) {
        PyErr_Restore(type, value, traceback);
        return;
    }
    err = call_trace(func, self, f, 1, arg);
    do { if (_Py_RefTotal-- , --((PyObject*)(arg))->ob_refcnt != 0) { if (((PyObject*)arg)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3989, (PyObject *)(arg)); } else _Py_Dealloc((PyObject *)(arg)); } while (0);
    if (err == 0)
        PyErr_Restore(type, value, traceback);
    else {
        do { if ((type) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(type))->ob_refcnt != 0) { if (((PyObject*)type)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3993, (PyObject *)(type)); } else _Py_Dealloc((PyObject *)(type)); } while (0); } while (0);
        do { if ((value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3994, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0); } while (0);
        do { if ((traceback) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(traceback))->ob_refcnt != 0) { if (((PyObject*)traceback)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 3995, (PyObject *)(traceback)); } else _Py_Dealloc((PyObject *)(traceback)); } while (0); } while (0);
    }
}

static int
call_trace_protected(Py_tracefunc func, PyObject *obj, PyFrameObject *frame,
                     int what, PyObject *arg)
{
    PyObject *type, *value, *traceback;
    int err;
    PyErr_Fetch(&type, &value, &traceback);
    err = call_trace(func, obj, frame, what, arg);
    if (err == 0)
    {
        PyErr_Restore(type, value, traceback);
        return 0;
    }
    else {
        do { if ((type) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(type))->ob_refcnt != 0) { if (((PyObject*)type)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4013, (PyObject *)(type)); } else _Py_Dealloc((PyObject *)(type)); } while (0); } while (0);
        do { if ((value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4014, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0); } while (0);
        do { if ((traceback) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(traceback))->ob_refcnt != 0) { if (((PyObject*)traceback)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4015, (PyObject *)(traceback)); } else _Py_Dealloc((PyObject *)(traceback)); } while (0); } while (0);
        return -1;
    }
}

static int
call_trace(Py_tracefunc func, PyObject *obj, PyFrameObject *frame,
           int what, PyObject *arg)
{
    register PyThreadState *tstate = frame->f_tstate;
    int result;
    if (tstate->tracing)
        return 0;
    tstate->tracing++;
    tstate->use_tracing = 0;
    result = func(obj, frame, what, arg);
    tstate->use_tracing = ((tstate->c_tracefunc != ((void*)0))
                           || (tstate->c_profilefunc != ((void*)0)));
    tstate->tracing--;
    return result;
}

PyObject *
_PyEval_CallTracing(PyObject *func, PyObject *args)
{
    PyFrameObject *frame = PyEval_GetFrame();
    PyThreadState *tstate = frame->f_tstate;
    int save_tracing = tstate->tracing;
    int save_use_tracing = tstate->use_tracing;
    PyObject *result;

    tstate->tracing = 0;
    tstate->use_tracing = ((tstate->c_tracefunc != ((void*)0))
                           || (tstate->c_profilefunc != ((void*)0)));
    result = PyObject_Call(func, args, ((void*)0));
    tstate->tracing = save_tracing;
    tstate->use_tracing = save_use_tracing;
    return result;
}


static int
maybe_call_line_trace(Py_tracefunc func, PyObject *obj,
                      PyFrameObject *frame, int *instr_lb, int *instr_ub,
                      int *instr_prev)
{
    int result = 0;
    int line = frame->f_lineno;




    if (frame->f_lasti < *instr_lb || frame->f_lasti >= *instr_ub) {
        PyAddrPair bounds;
        line = _PyCode_CheckLineNumber(frame->f_code, frame->f_lasti,
                                       &bounds);
        *instr_lb = bounds.ap_lower;
        *instr_ub = bounds.ap_upper;
    }



    if (frame->f_lasti == *instr_lb || frame->f_lasti < *instr_prev) {
        frame->f_lineno = line;
        result = call_trace(func, obj, frame, 2, (&_Py_NoneStruct));
    }
    *instr_prev = frame->f_lasti;
    return result;
}

void
PyEval_SetProfile(Py_tracefunc func, PyObject *arg)
{
    PyThreadState *tstate = PyThreadState_Get();
    PyObject *temp = tstate->c_profileobj;
    do { if ((arg) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(arg))->ob_refcnt++); } while (0);
    tstate->c_profilefunc = ((void*)0);
    tstate->c_profileobj = ((void*)0);

    tstate->use_tracing = tstate->c_tracefunc != ((void*)0);
    do { if ((temp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(temp))->ob_refcnt != 0) { if (((PyObject*)temp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4095, (PyObject *)(temp)); } else _Py_Dealloc((PyObject *)(temp)); } while (0); } while (0);
    tstate->c_profilefunc = func;
    tstate->c_profileobj = arg;

    tstate->use_tracing = (func != ((void*)0)) || (tstate->c_tracefunc != ((void*)0));
}

void
PyEval_SetTrace(Py_tracefunc func, PyObject *arg)
{
    PyThreadState *tstate = PyThreadState_Get();
    PyObject *temp = tstate->c_traceobj;
    _Py_TracingPossible += (func != ((void*)0)) - (tstate->c_tracefunc != ((void*)0));
    do { if ((arg) == ((void*)0)) ; else ( _Py_RefTotal++ , ((PyObject*)(arg))->ob_refcnt++); } while (0);
    tstate->c_tracefunc = ((void*)0);
    tstate->c_traceobj = ((void*)0);

    tstate->use_tracing = tstate->c_profilefunc != ((void*)0);
    do { if ((temp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(temp))->ob_refcnt != 0) { if (((PyObject*)temp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4113, (PyObject *)(temp)); } else _Py_Dealloc((PyObject *)(temp)); } while (0); } while (0);
    tstate->c_tracefunc = func;
    tstate->c_traceobj = arg;

    tstate->use_tracing = ((func != ((void*)0))
                           || (tstate->c_profilefunc != ((void*)0)));
}

PyObject *
PyEval_GetBuiltins(void)
{
    PyFrameObject *current_frame = PyEval_GetFrame();
    if (current_frame == ((void*)0))
        return PyThreadState_Get()->interp->builtins;
    else
        return current_frame->f_builtins;
}

PyObject *
PyEval_GetLocals(void)
{
    PyFrameObject *current_frame = PyEval_GetFrame();
    if (current_frame == ((void*)0))
        return ((void*)0);
    PyFrame_FastToLocals(current_frame);
    return current_frame->f_locals;
}

PyObject *
PyEval_GetGlobals(void)
{
    PyFrameObject *current_frame = PyEval_GetFrame();
    if (current_frame == ((void*)0))
        return ((void*)0);
    else
        return current_frame->f_globals;
}

PyFrameObject *
PyEval_GetFrame(void)
{
    PyThreadState *tstate = PyThreadState_Get();
    return _PyThreadState_GetFrame(tstate);
}

int
PyEval_GetRestricted(void)
{
    PyFrameObject *current_frame = PyEval_GetFrame();
    return current_frame == ((void*)0) ? 0 : ((current_frame)->f_builtins != (current_frame)->f_tstate->interp->builtins);
}

int
PyEval_MergeCompilerFlags(PyCompilerFlags *cf)
{
    PyFrameObject *current_frame = PyEval_GetFrame();
    int result = cf->cf_flags != 0;

    if (current_frame != ((void*)0)) {
        const int codeflags = current_frame->f_code->co_flags;
        const int compilerflags = codeflags & (0x2000 | 0x4000 | 0x8000 | 0x10000 | 0x20000);
        if (compilerflags) {
            result = 1;
            cf->cf_flags |= compilerflags;
        }






    }
    return result;
}

int
Py_FlushLine(void)
{
    PyObject *f = PySys_GetObject("stdout");
    if (f == ((void*)0))
        return 0;
    if (!PyFile_SoftSpace(f, 0))
        return 0;
    return PyFile_WriteString("\n", f);
}





PyObject *
PyEval_CallObjectWithKeywords(PyObject *func, PyObject *arg, PyObject *kw)
{
    PyObject *result;

    if (arg == ((void*)0)) {
        arg = PyTuple_New(0);
        if (arg == ((void*)0))
            return ((void*)0);
    }
    else if (!((((((PyObject*)(arg))->ob_type))->tp_flags & ((1L<<26))) != 0)) {
        PyErr_SetString(PyExc_TypeError,
                        "argument list must be a tuple");
        return ((void*)0);
    }
    else
        ( _Py_RefTotal++ , ((PyObject*)(arg))->ob_refcnt++);

    if (kw != ((void*)0) && !((((((PyObject*)(kw))->ob_type))->tp_flags & ((1L<<29))) != 0)) {
        PyErr_SetString(PyExc_TypeError,
                        "keyword list must be a dictionary");
        do { if (_Py_RefTotal-- , --((PyObject*)(arg))->ob_refcnt != 0) { if (((PyObject*)arg)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4224, (PyObject *)(arg)); } else _Py_Dealloc((PyObject *)(arg)); } while (0);
        return ((void*)0);
    }

    result = PyObject_Call(func, arg, kw);
    do { if (_Py_RefTotal-- , --((PyObject*)(arg))->ob_refcnt != 0) { if (((PyObject*)arg)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4229, (PyObject *)(arg)); } else _Py_Dealloc((PyObject *)(arg)); } while (0);
    return result;
}

const char *
PyEval_GetFuncName(PyObject *func)
{
    if (((func)->ob_type == &PyMethod_Type))
        return PyEval_GetFuncName((((PyMethodObject *)func) -> im_func));
    else if (((((PyObject*)(func))->ob_type) == &PyFunction_Type))
        return PyString_AsString(((PyFunctionObject*)func)->func_name);
    else if (((((PyObject*)(func))->ob_type) == &PyCFunction_Type))
        return ((PyCFunctionObject*)func)->m_ml->ml_name;
    else if (((func)->ob_type == &PyClass_Type))
        return PyString_AsString(((PyClassObject*)func)->cl_name);
    else if (((func)->ob_type == &PyInstance_Type)) {
        return PyString_AsString(
            ((PyInstanceObject*)func)->in_class->cl_name);
    } else {
        return func->ob_type->tp_name;
    }
}

const char *
PyEval_GetFuncDesc(PyObject *func)
{
    if (((func)->ob_type == &PyMethod_Type))
        return "()";
    else if (((((PyObject*)(func))->ob_type) == &PyFunction_Type))
        return "()";
    else if (((((PyObject*)(func))->ob_type) == &PyCFunction_Type))
        return "()";
    else if (((func)->ob_type == &PyClass_Type))
        return " constructor";
    else if (((func)->ob_type == &PyInstance_Type)) {
        return " instance";
    } else {
        return " object";
    }
}

static void
err_args(PyObject *func, int flags, int nargs)
{
    if (flags & 0x0004)
        PyErr_Format(PyExc_TypeError,
                     "%.200s() takes no arguments (%d given)",
                     ((PyCFunctionObject *)func)->m_ml->ml_name,
                     nargs);
    else
        PyErr_Format(PyExc_TypeError,
                     "%.200s() takes exactly one argument (%d given)",
                     ((PyCFunctionObject *)func)->m_ml->ml_name,
                     nargs);
}
# 4317 "Python/ceval.c"
static PyObject *
call_function(PyObject ***pp_stack, int oparg



                )
{
    int na = oparg & 0xff;
    int nk = (oparg>>8) & 0xff;
    int n = na + 2 * nk;
    PyObject **pfunc = (*pp_stack) - n - 1;
    PyObject *func = *pfunc;
    PyObject *x, *w;




    if (((((PyObject*)(func))->ob_type) == &PyCFunction_Type) && nk == 0) {
        int flags = (((PyCFunctionObject *)func) -> m_ml -> ml_flags);
        PyThreadState *tstate = PyThreadState_Get();

                              ;
        if (flags & (0x0004 | 0x0008)) {
            PyCFunction meth = (((PyCFunctionObject *)func) -> m_ml -> ml_meth);
            PyObject *self = (((PyCFunctionObject *)func) -> m_self);
            if (flags & 0x0004 && na == 0) {
                if (tstate->use_tracing && tstate->c_profilefunc) { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 4, func)) { x = ((void*)0); } else { x = (*meth)(self,((void*)0)); if (tstate->c_profilefunc != ((void*)0)) { if (x == ((void*)0)) { call_trace_protected(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 5, func); } else { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 6, func)) { do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4343, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0); x = ((void*)0); } } } } } else { x = (*meth)(self,((void*)0)); };
            }
            else if (flags & 0x0008 && na == 1) {
                PyObject *arg = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
                if (tstate->use_tracing && tstate->c_profilefunc) { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 4, func)) { x = ((void*)0); } else { x = (*meth)(self,arg); if (tstate->c_profilefunc != ((void*)0)) { if (x == ((void*)0)) { call_trace_protected(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 5, func); } else { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 6, func)) { do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4347, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0); x = ((void*)0); } } } } } else { x = (*meth)(self,arg); };
                do { if (_Py_RefTotal-- , --((PyObject*)(arg))->ob_refcnt != 0) { if (((PyObject*)arg)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4348, (PyObject *)(arg)); } else _Py_Dealloc((PyObject *)(arg)); } while (0);
            }
            else {
                err_args(func, flags, na);
                x = ((void*)0);
            }
        }
        else {
            PyObject *callargs;
            callargs = load_args(pp_stack, na);
                                   ;
            if (tstate->use_tracing && tstate->c_profilefunc) { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 4, func)) { x = ((void*)0); } else { x = PyCFunction_Call(func,callargs,((void*)0)); if (tstate->c_profilefunc != ((void*)0)) { if (x == ((void*)0)) { call_trace_protected(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 5, func); } else { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 6, func)) { do { if (_Py_RefTotal-- , --((PyObject*)(x))->ob_refcnt != 0) { if (((PyObject*)x)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4359, (PyObject *)(x)); } else _Py_Dealloc((PyObject *)(x)); } while (0); x = ((void*)0); } } } } } else { x = PyCFunction_Call(func,callargs,((void*)0)); };
                                   ;
            do { if ((callargs) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(callargs))->ob_refcnt != 0) { if (((PyObject*)callargs)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4361, (PyObject *)(callargs)); } else _Py_Dealloc((PyObject *)(callargs)); } while (0); } while (0);
        }
    } else {
        if (((func)->ob_type == &PyMethod_Type) && (((PyMethodObject *)func) -> im_self) != ((void*)0)) {

            PyObject *self = (((PyMethodObject *)func) -> im_self);
                               ;
                                     ;
            ( _Py_RefTotal++ , ((PyObject*)(self))->ob_refcnt++);
            func = (((PyMethodObject *)func) -> im_func);
            ( _Py_RefTotal++ , ((PyObject*)(func))->ob_refcnt++);
            do { PyObject *_py_tmp = (PyObject *)(*pfunc); (*pfunc) = (self); do { if (_Py_RefTotal-- , --((PyObject*)(_py_tmp))->ob_refcnt != 0) { if (((PyObject*)_py_tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4372, (PyObject *)(_py_tmp)); } else _Py_Dealloc((PyObject *)(_py_tmp)); } while (0); } while (0);
            na++;
            n++;
        } else
            ( _Py_RefTotal++ , ((PyObject*)(func))->ob_refcnt++);
                               ;
        if (((((PyObject*)(func))->ob_type) == &PyFunction_Type))
            x = fast_function(func, pp_stack, n, na, nk);
        else
            x = do_call(func, pp_stack, na, nk);
                               ;
        do { if (_Py_RefTotal-- , --((PyObject*)(func))->ob_refcnt != 0) { if (((PyObject*)func)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4383, (PyObject *)(func)); } else _Py_Dealloc((PyObject *)(func)); } while (0);
    }





    while ((*pp_stack) > pfunc) {
        w = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        do { if (_Py_RefTotal-- , --((PyObject*)(w))->ob_refcnt != 0) { if (((PyObject*)w)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4392, (PyObject *)(w)); } else _Py_Dealloc((PyObject *)(w)); } while (0);
                        ;
    }
    return x;
}
# 4407 "Python/ceval.c"
static PyObject *
fast_function(PyObject *func, PyObject ***pp_stack, int n, int na, int nk)
{
    PyCodeObject *co = (PyCodeObject *)(((PyFunctionObject *)func) -> func_code);
    PyObject *globals = (((PyFunctionObject *)func) -> func_globals);
    PyObject *argdefs = (((PyFunctionObject *)func) -> func_defaults);
    PyObject **d = ((void*)0);
    int nd = 0;

                         ;
                              ;
    if (argdefs == ((void*)0) && co->co_argcount == n && nk==0 &&
        co->co_flags == (0x0001 | 0x0002 | 0x0040)) {
        PyFrameObject *f;
        PyObject *retval = ((void*)0);
        PyThreadState *tstate = PyThreadState_Get();
        PyObject **fastlocals, **stack;
        int i;

                                    ;
        (__builtin_expect(!(globals != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 4427, "globals != NULL") : (void)0);




        (__builtin_expect(!(tstate != ((void*)0)), 0) ? __assert_rtn(__func__, "Python/ceval.c", 4432, "tstate != NULL") : (void)0);
        f = PyFrame_New(tstate, co, globals, ((void*)0));
        if (f == ((void*)0))
            return ((void*)0);

        fastlocals = f->f_localsplus;
        stack = (*pp_stack) - n;

        for (i = 0; i < n; i++) {
            ( _Py_RefTotal++ , ((PyObject*)(*stack))->ob_refcnt++);
            fastlocals[i] = *stack++;
        }
        retval = PyEval_EvalFrameEx(f,0);
        ++tstate->recursion_depth;
        do { if (_Py_RefTotal-- , --((PyObject*)(f))->ob_refcnt != 0) { if (((PyObject*)f)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4446, (PyObject *)(f)); } else _Py_Dealloc((PyObject *)(f)); } while (0);
        --tstate->recursion_depth;
        return retval;
    }
    if (argdefs != ((void*)0)) {
        d = &(((PyTupleObject *)(argdefs))->ob_item[0]);
        nd = (((PyVarObject*)(argdefs))->ob_size);
    }
    return PyEval_EvalCodeEx(co, globals,
                             (PyObject *)((void*)0), (*pp_stack)-n, na,
                             (*pp_stack)-2*nk, nk, d, nd,
                             (((PyFunctionObject *)func) -> func_closure));
}

static PyObject *
update_keyword_args(PyObject *orig_kwdict, int nk, PyObject ***pp_stack,
                    PyObject *func)
{
    PyObject *kwdict = ((void*)0);
    if (orig_kwdict == ((void*)0))
        kwdict = PyDict_New();
    else {
        kwdict = PyDict_Copy(orig_kwdict);
        do { if (_Py_RefTotal-- , --((PyObject*)(orig_kwdict))->ob_refcnt != 0) { if (((PyObject*)orig_kwdict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4469, (PyObject *)(orig_kwdict)); } else _Py_Dealloc((PyObject *)(orig_kwdict)); } while (0);
    }
    if (kwdict == ((void*)0))
        return ((void*)0);
    while (--nk >= 0) {
        int err;
        PyObject *value = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        PyObject *key = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        if (PyDict_GetItem(kwdict, key) != ((void*)0)) {
            PyErr_Format(PyExc_TypeError,
                         "%.200s%s got multiple values "
                         "for keyword argument '%.200s'",
                         PyEval_GetFuncName(func),
                         PyEval_GetFuncDesc(func),
                         PyString_AsString(key));
            do { if (_Py_RefTotal-- , --((PyObject*)(key))->ob_refcnt != 0) { if (((PyObject*)key)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4484, (PyObject *)(key)); } else _Py_Dealloc((PyObject *)(key)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4485, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0);
            do { if (_Py_RefTotal-- , --((PyObject*)(kwdict))->ob_refcnt != 0) { if (((PyObject*)kwdict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4486, (PyObject *)(kwdict)); } else _Py_Dealloc((PyObject *)(kwdict)); } while (0);
            return ((void*)0);
        }
        err = PyDict_SetItem(kwdict, key, value);
        do { if (_Py_RefTotal-- , --((PyObject*)(key))->ob_refcnt != 0) { if (((PyObject*)key)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4490, (PyObject *)(key)); } else _Py_Dealloc((PyObject *)(key)); } while (0);
        do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4491, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0);
        if (err) {
            do { if (_Py_RefTotal-- , --((PyObject*)(kwdict))->ob_refcnt != 0) { if (((PyObject*)kwdict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4493, (PyObject *)(kwdict)); } else _Py_Dealloc((PyObject *)(kwdict)); } while (0);
            return ((void*)0);
        }
    }
    return kwdict;
}

static PyObject *
update_star_args(int nstack, int nstar, PyObject *stararg,
                 PyObject ***pp_stack)
{
    PyObject *callargs, *w;

    callargs = PyTuple_New(nstack + nstar);
    if (callargs == ((void*)0)) {
        return ((void*)0);
    }
    if (nstar) {
        int i;
        for (i = 0; i < nstar; i++) {
            PyObject *a = (((PyTupleObject *)(stararg))->ob_item[i]);
            ( _Py_RefTotal++ , ((PyObject*)(a))->ob_refcnt++);
            (((PyTupleObject *)(callargs))->ob_item[nstack + i] = a);
        }
    }
    while (--nstack >= 0) {
        w = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        (((PyTupleObject *)(callargs))->ob_item[nstack] = w);
    }
    return callargs;
}

static PyObject *
load_args(PyObject ***pp_stack, int na)
{
    PyObject *args = PyTuple_New(na);
    PyObject *w;

    if (args == ((void*)0))
        return ((void*)0);
    while (--na >= 0) {
        w = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        (((PyTupleObject *)(args))->ob_item[na] = w);
    }
    return args;
}

static PyObject *
do_call(PyObject *func, PyObject ***pp_stack, int na, int nk)
{
    PyObject *callargs = ((void*)0);
    PyObject *kwdict = ((void*)0);
    PyObject *result = ((void*)0);

    if (nk > 0) {
        kwdict = update_keyword_args(((void*)0), nk, pp_stack, func);
        if (kwdict == ((void*)0))
            goto call_fail;
    }
    callargs = load_args(pp_stack, na);
    if (callargs == ((void*)0))
        goto call_fail;
# 4571 "Python/ceval.c"
    if (((((PyObject*)(func))->ob_type) == &PyCFunction_Type)) {
        PyThreadState *tstate = PyThreadState_Get();
        if (tstate->use_tracing && tstate->c_profilefunc) { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 4, func)) { result = ((void*)0); } else { result = PyCFunction_Call(func, callargs, kwdict); if (tstate->c_profilefunc != ((void*)0)) { if (result == ((void*)0)) { call_trace_protected(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 5, func); } else { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 6, func)) { do { if (_Py_RefTotal-- , --((PyObject*)(result))->ob_refcnt != 0) { if (((PyObject*)result)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4573, (PyObject *)(result)); } else _Py_Dealloc((PyObject *)(result)); } while (0); result = ((void*)0); } } } } } else { result = PyCFunction_Call(func, callargs, kwdict); };
    }
    else
        result = PyObject_Call(func, callargs, kwdict);
 call_fail:
    do { if ((callargs) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(callargs))->ob_refcnt != 0) { if (((PyObject*)callargs)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4578, (PyObject *)(callargs)); } else _Py_Dealloc((PyObject *)(callargs)); } while (0); } while (0);
    do { if ((kwdict) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(kwdict))->ob_refcnt != 0) { if (((PyObject*)kwdict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4579, (PyObject *)(kwdict)); } else _Py_Dealloc((PyObject *)(kwdict)); } while (0); } while (0);
    return result;
}

static PyObject *
ext_do_call(PyObject *func, PyObject ***pp_stack, int flags, int na, int nk)
{
    int nstar = 0;
    PyObject *callargs = ((void*)0);
    PyObject *stararg = ((void*)0);
    PyObject *kwdict = ((void*)0);
    PyObject *result = ((void*)0);

    if (flags & 2) {
        kwdict = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        if (!((((((PyObject*)(kwdict))->ob_type))->tp_flags & ((1L<<29))) != 0)) {
            PyObject *d;
            d = PyDict_New();
            if (d == ((void*)0))
                goto ext_call_fail;
            if (PyDict_Update(d, kwdict) != 0) {
                do { if (_Py_RefTotal-- , --((PyObject*)(d))->ob_refcnt != 0) { if (((PyObject*)d)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4600, (PyObject *)(d)); } else _Py_Dealloc((PyObject *)(d)); } while (0);






                if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
                    PyErr_Format(PyExc_TypeError,
                                 "%.200s%.200s argument after ** "
                                 "must be a mapping, not %.200s",
                                 PyEval_GetFuncName(func),
                                 PyEval_GetFuncDesc(func),
                                 kwdict->ob_type->tp_name);
                }
                goto ext_call_fail;
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(kwdict))->ob_refcnt != 0) { if (((PyObject*)kwdict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4617, (PyObject *)(kwdict)); } else _Py_Dealloc((PyObject *)(kwdict)); } while (0);
            kwdict = d;
        }
    }
    if (flags & 1) {
        stararg = ((void)(lltrace && prtrace((*pp_stack)[-1], "ext_pop")), *--(*pp_stack));
        if (!((((((PyObject*)(stararg))->ob_type))->tp_flags & ((1L<<26))) != 0)) {
            PyObject *t = ((void*)0);
            t = PySequence_Tuple(stararg);
            if (t == ((void*)0)) {
                if (PyErr_ExceptionMatches(PyExc_TypeError) &&

                        !((((PyObject*)(stararg))->ob_type) == (&PyGen_Type) || PyType_IsSubtype((((PyObject*)(stararg))->ob_type), (&PyGen_Type)))) {
                    PyErr_Format(PyExc_TypeError,
                                 "%.200s%.200s argument after * "
                                 "must be an iterable, not %200s",
                                 PyEval_GetFuncName(func),
                                 PyEval_GetFuncDesc(func),
                                 stararg->ob_type->tp_name);
                }
                goto ext_call_fail;
            }
            do { if (_Py_RefTotal-- , --((PyObject*)(stararg))->ob_refcnt != 0) { if (((PyObject*)stararg)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4639, (PyObject *)(stararg)); } else _Py_Dealloc((PyObject *)(stararg)); } while (0);
            stararg = t;
        }
        nstar = (((PyVarObject*)(stararg))->ob_size);
    }
    if (nk > 0) {
        kwdict = update_keyword_args(kwdict, nk, pp_stack, func);
        if (kwdict == ((void*)0))
            goto ext_call_fail;
    }
    callargs = update_star_args(na, nstar, stararg, pp_stack);
    if (callargs == ((void*)0))
        goto ext_call_fail;
# 4668 "Python/ceval.c"
    if (((((PyObject*)(func))->ob_type) == &PyCFunction_Type)) {
        PyThreadState *tstate = PyThreadState_Get();
        if (tstate->use_tracing && tstate->c_profilefunc) { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 4, func)) { result = ((void*)0); } else { result = PyCFunction_Call(func, callargs, kwdict); if (tstate->c_profilefunc != ((void*)0)) { if (result == ((void*)0)) { call_trace_protected(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 5, func); } else { if (call_trace(tstate->c_profilefunc, tstate->c_profileobj, tstate->frame, 6, func)) { do { if (_Py_RefTotal-- , --((PyObject*)(result))->ob_refcnt != 0) { if (((PyObject*)result)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4670, (PyObject *)(result)); } else _Py_Dealloc((PyObject *)(result)); } while (0); result = ((void*)0); } } } } } else { result = PyCFunction_Call(func, callargs, kwdict); };
    }
    else
        result = PyObject_Call(func, callargs, kwdict);
ext_call_fail:
    do { if ((callargs) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(callargs))->ob_refcnt != 0) { if (((PyObject*)callargs)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4675, (PyObject *)(callargs)); } else _Py_Dealloc((PyObject *)(callargs)); } while (0); } while (0);
    do { if ((kwdict) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(kwdict))->ob_refcnt != 0) { if (((PyObject*)kwdict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4676, (PyObject *)(kwdict)); } else _Py_Dealloc((PyObject *)(kwdict)); } while (0); } while (0);
    do { if ((stararg) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(stararg))->ob_refcnt != 0) { if (((PyObject*)stararg)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4677, (PyObject *)(stararg)); } else _Py_Dealloc((PyObject *)(stararg)); } while (0); } while (0);
    return result;
}
# 4691 "Python/ceval.c"
int
_PyEval_SliceIndex(PyObject *v, Py_ssize_t *pi)
{
    if (v != ((void*)0)) {
        Py_ssize_t x;
        if (((((v)->ob_type)->tp_flags & ((1L<<23))) != 0)) {




            x = (((PyIntObject *)(v))->ob_ival);
        }
        else if (((v)->ob_type->tp_as_number != ((void*)0) && ((((v)->ob_type)->tp_flags & ((1L<<17))) != 0) && (v)->ob_type->tp_as_number->nb_index != ((void*)0))) {
            x = PyNumber_AsSsize_t(v, ((void*)0));
            if (x == -1 && PyErr_Occurred())
                return 0;
        }
        else {
            PyErr_SetString(PyExc_TypeError,
                            "slice indices must be integers or "
                            "None or have an __index__ method");
            return 0;
        }
        *pi = x;
    }
    return 1;
}





static PyObject *
apply_slice(PyObject *u, PyObject *v, PyObject *w)
{
    PyTypeObject *tp = u->ob_type;
    PySequenceMethods *sq = tp->tp_as_sequence;

    if (sq && sq->sq_slice && ((v) == ((void*)0) || ((((v)->ob_type)->tp_flags & ((1L<<23))) != 0) || ((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0) || ((v)->ob_type->tp_as_number != ((void*)0) && ((((v)->ob_type)->tp_flags & ((1L<<17))) != 0) && (v)->ob_type->tp_as_number->nb_index != ((void*)0))) && ((w) == ((void*)0) || ((((w)->ob_type)->tp_flags & ((1L<<23))) != 0) || ((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<24))) != 0) || ((w)->ob_type->tp_as_number != ((void*)0) && ((((w)->ob_type)->tp_flags & ((1L<<17))) != 0) && (w)->ob_type->tp_as_number->nb_index != ((void*)0)))) {
        Py_ssize_t ilow = 0, ihigh = ((Py_ssize_t)(((size_t)-1)>>1));
        if (!_PyEval_SliceIndex(v, &ilow))
            return ((void*)0);
        if (!_PyEval_SliceIndex(w, &ihigh))
            return ((void*)0);
        return PySequence_GetSlice(u, ilow, ihigh);
    }
    else {
        PyObject *slice = PySlice_New(v, w, ((void*)0));
        if (slice != ((void*)0)) {
            PyObject *res = PyObject_GetItem(u, slice);
            do { if (_Py_RefTotal-- , --((PyObject*)(slice))->ob_refcnt != 0) { if (((PyObject*)slice)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4741, (PyObject *)(slice)); } else _Py_Dealloc((PyObject *)(slice)); } while (0);
            return res;
        }
        else
            return ((void*)0);
    }
}

static int
assign_slice(PyObject *u, PyObject *v, PyObject *w, PyObject *x)

{
    PyTypeObject *tp = u->ob_type;
    PySequenceMethods *sq = tp->tp_as_sequence;

    if (sq && sq->sq_ass_slice && ((v) == ((void*)0) || ((((v)->ob_type)->tp_flags & ((1L<<23))) != 0) || ((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0) || ((v)->ob_type->tp_as_number != ((void*)0) && ((((v)->ob_type)->tp_flags & ((1L<<17))) != 0) && (v)->ob_type->tp_as_number->nb_index != ((void*)0))) && ((w) == ((void*)0) || ((((w)->ob_type)->tp_flags & ((1L<<23))) != 0) || ((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<24))) != 0) || ((w)->ob_type->tp_as_number != ((void*)0) && ((((w)->ob_type)->tp_flags & ((1L<<17))) != 0) && (w)->ob_type->tp_as_number->nb_index != ((void*)0)))) {
        Py_ssize_t ilow = 0, ihigh = ((Py_ssize_t)(((size_t)-1)>>1));
        if (!_PyEval_SliceIndex(v, &ilow))
            return -1;
        if (!_PyEval_SliceIndex(w, &ihigh))
            return -1;
        if (x == ((void*)0))
            return PySequence_DelSlice(u, ilow, ihigh);
        else
            return PySequence_SetSlice(u, ilow, ihigh, x);
    }
    else {
        PyObject *slice = PySlice_New(v, w, ((void*)0));
        if (slice != ((void*)0)) {
            int res;
            if (x != ((void*)0))
                res = PyObject_SetItem(u, slice, x);
            else
                res = PyObject_DelItem(u, slice);
            do { if (_Py_RefTotal-- , --((PyObject*)(slice))->ob_refcnt != 0) { if (((PyObject*)slice)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4775, (PyObject *)(slice)); } else _Py_Dealloc((PyObject *)(slice)); } while (0);
            return res;
        }
        else
            return -1;
    }
}
# 4790 "Python/ceval.c"
static PyObject *
cmp_outcome(int op, register PyObject *v, register PyObject *w)
{
    int res = 0;
    switch (op) {
    case PyCmp_IS:
        res = (v == w);
        break;
    case PyCmp_IS_NOT:
        res = (v != w);
        break;
    case PyCmp_IN:
        res = PySequence_Contains(w, v);
        if (res < 0)
            return ((void*)0);
        break;
    case PyCmp_NOT_IN:
        res = PySequence_Contains(w, v);
        if (res < 0)
            return ((void*)0);
        res = !res;
        break;
    case PyCmp_EXC_MATCH:
        if (((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<26))) != 0)) {
            Py_ssize_t i, length;
            length = PyTuple_Size(w);
            for (i = 0; i < length; i += 1) {
                PyObject *exc = (((PyTupleObject *)(w))->ob_item[i]);
                if (((((((PyObject*)(exc))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
                    int ret_val;
                    ret_val = PyErr_WarnEx(
                        PyExc_DeprecationWarning,
                        "catching of string "
                        "exceptions is deprecated", 1);
                    if (ret_val < 0)
                        return ((void*)0);
                }
                else if (Py_Py3kWarningFlag &&
                         !((((((PyObject*)(exc))->ob_type))->tp_flags & ((1L<<26))) != 0) &&
                         !(((((((PyObject*)((exc)))->ob_type))->tp_flags & ((1L<<31))) != 0) && ((((PyTypeObject*)(exc))->tp_flags & ((1L<<30))) != 0)))
                {
                    int ret_val;
                    ret_val = PyErr_WarnEx(
                        PyExc_DeprecationWarning,
                        "catching classes that don't inherit from " "BaseException is not allowed in 3.x", 1);
                    if (ret_val < 0)
                        return ((void*)0);
                }
            }
        }
        else {
            if (((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
                int ret_val;
                ret_val = PyErr_WarnEx(
                                PyExc_DeprecationWarning,
                                "catching of string "
                                "exceptions is deprecated", 1);
                if (ret_val < 0)
                    return ((void*)0);
            }
            else if (Py_Py3kWarningFlag &&
                     !((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<26))) != 0) &&
                     !(((((((PyObject*)((w)))->ob_type))->tp_flags & ((1L<<31))) != 0) && ((((PyTypeObject*)(w))->tp_flags & ((1L<<30))) != 0)))
            {
                int ret_val;
                ret_val = PyErr_WarnEx(
                    PyExc_DeprecationWarning,
                    "catching classes that don't inherit from " "BaseException is not allowed in 3.x", 1);
                if (ret_val < 0)
                    return ((void*)0);
            }
        }
        res = PyErr_GivenExceptionMatches(v, w);
        break;
    default:
        return PyObject_RichCompare(v, w, op);
    }
    v = res ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_ZeroStruct);
    ( _Py_RefTotal++ , ((PyObject*)(v))->ob_refcnt++);
    return v;
}

static PyObject *
import_from(PyObject *v, PyObject *name)
{
    PyObject *x;

    x = PyObject_GetAttr(v, name);
    if (x == ((void*)0) && PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Format(PyExc_ImportError,
                     "cannot import name %.230s",
                     PyString_AsString(name));
    }
    return x;
}

static int
import_all_from(PyObject *locals, PyObject *v)
{
    PyObject *all = PyObject_GetAttrString(v, "__all__");
    PyObject *dict, *name, *value;
    int skip_leading_underscores = 0;
    int pos, err;

    if (all == ((void*)0)) {
        if (!PyErr_ExceptionMatches(PyExc_AttributeError))
            return -1;
        PyErr_Clear();
        dict = PyObject_GetAttrString(v, "__dict__");
        if (dict == ((void*)0)) {
            if (!PyErr_ExceptionMatches(PyExc_AttributeError))
                return -1;
            PyErr_SetString(PyExc_ImportError,
            "from-import-* object has no __dict__ and no __all__");
            return -1;
        }
        all = PyObject_CallMethod(dict,"keys",((void*)0));
        do { if (_Py_RefTotal-- , --((PyObject*)(dict))->ob_refcnt != 0) { if (((PyObject*)dict)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4907, (PyObject *)(dict)); } else _Py_Dealloc((PyObject *)(dict)); } while (0);
        if (all == ((void*)0))
            return -1;
        skip_leading_underscores = 1;
    }

    for (pos = 0, err = 0; ; pos++) {
        name = PySequence_GetItem(all, pos);
        if (name == ((void*)0)) {
            if (!PyErr_ExceptionMatches(PyExc_IndexError))
                err = -1;
            else
                PyErr_Clear();
            break;
        }
        if (skip_leading_underscores &&
            ((((((PyObject*)(name))->ob_type))->tp_flags & ((1L<<27))) != 0) &&
            (((PyStringObject *)(name))->ob_sval)[0] == '_')
        {
            do { if (_Py_RefTotal-- , --((PyObject*)(name))->ob_refcnt != 0) { if (((PyObject*)name)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4926, (PyObject *)(name)); } else _Py_Dealloc((PyObject *)(name)); } while (0);
            continue;
        }
        value = PyObject_GetAttr(v, name);
        if (value == ((void*)0))
            err = -1;
        else if (((((PyObject*)(locals))->ob_type) == &PyDict_Type))
            err = PyDict_SetItem(locals, name, value);
        else
            err = PyObject_SetItem(locals, name, value);
        do { if (_Py_RefTotal-- , --((PyObject*)(name))->ob_refcnt != 0) { if (((PyObject*)name)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4936, (PyObject *)(name)); } else _Py_Dealloc((PyObject *)(name)); } while (0);
        do { if ((value) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(value))->ob_refcnt != 0) { if (((PyObject*)value)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4937, (PyObject *)(value)); } else _Py_Dealloc((PyObject *)(value)); } while (0); } while (0);
        if (err != 0)
            break;
    }
    do { if (_Py_RefTotal-- , --((PyObject*)(all))->ob_refcnt != 0) { if (((PyObject*)all)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4941, (PyObject *)(all)); } else _Py_Dealloc((PyObject *)(all)); } while (0);
    return err;
}

static PyObject *
build_class(PyObject *methods, PyObject *bases, PyObject *name)
{
    PyObject *metaclass = ((void*)0), *result, *base;

    if (((((((PyObject*)(methods))->ob_type))->tp_flags & ((1L<<29))) != 0))
        metaclass = PyDict_GetItemString(methods, "__metaclass__");
    if (metaclass != ((void*)0))
        ( _Py_RefTotal++ , ((PyObject*)(metaclass))->ob_refcnt++);
    else if (((((((PyObject*)(bases))->ob_type))->tp_flags & ((1L<<26))) != 0) && (((PyVarObject*)(bases))->ob_size) > 0) {
        base = (((PyTupleObject *)(bases))->ob_item[0]);
        metaclass = PyObject_GetAttrString(base, "__class__");
        if (metaclass == ((void*)0)) {
            PyErr_Clear();
            metaclass = (PyObject *)base->ob_type;
            ( _Py_RefTotal++ , ((PyObject*)(metaclass))->ob_refcnt++);
        }
    }
    else {
        PyObject *g = PyEval_GetGlobals();
        if (g != ((void*)0) && ((((((PyObject*)(g))->ob_type))->tp_flags & ((1L<<29))) != 0))
            metaclass = PyDict_GetItemString(g, "__metaclass__");
        if (metaclass == ((void*)0))
            metaclass = (PyObject *) &PyClass_Type;
        ( _Py_RefTotal++ , ((PyObject*)(metaclass))->ob_refcnt++);
    }
    result = PyObject_CallFunctionObjArgs(metaclass, name, bases, methods,
                                          ((void*)0));
    do { if (_Py_RefTotal-- , --((PyObject*)(metaclass))->ob_refcnt != 0) { if (((PyObject*)metaclass)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4973, (PyObject *)(metaclass)); } else _Py_Dealloc((PyObject *)(metaclass)); } while (0);
    if (result == ((void*)0) && PyErr_ExceptionMatches(PyExc_TypeError)) {





        PyObject *ptype, *pvalue, *ptraceback;

        PyErr_Fetch(&ptype, &pvalue, &ptraceback);
        if (((((((PyObject*)(pvalue))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
            PyObject *newmsg;
            newmsg = PyString_FromFormat(
                "Error when calling the metaclass bases\n"
                "    %s",
                (((PyStringObject *)(pvalue))->ob_sval));
            if (newmsg != ((void*)0)) {
                do { if (_Py_RefTotal-- , --((PyObject*)(pvalue))->ob_refcnt != 0) { if (((PyObject*)pvalue)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 4990, (PyObject *)(pvalue)); } else _Py_Dealloc((PyObject *)(pvalue)); } while (0);
                pvalue = newmsg;
            }
        }
        PyErr_Restore(ptype, pvalue, ptraceback);
    }
    return result;
}

static int
exec_statement(PyFrameObject *f, PyObject *prog, PyObject *globals,
               PyObject *locals)
{
    int n;
    PyObject *v;
    int plain = 0;

    if (((((((PyObject*)(prog))->ob_type))->tp_flags & ((1L<<26))) != 0) && globals == (&_Py_NoneStruct) && locals == (&_Py_NoneStruct) &&
        ((n = PyTuple_Size(prog)) == 2 || n == 3)) {

        globals = PyTuple_GetItem(prog, 1);
        if (n == 3)
            locals = PyTuple_GetItem(prog, 2);
        prog = PyTuple_GetItem(prog, 0);
    }
    if (globals == (&_Py_NoneStruct)) {
        globals = PyEval_GetGlobals();
        if (locals == (&_Py_NoneStruct)) {
            locals = PyEval_GetLocals();
            plain = 1;
        }
        if (!globals || !locals) {
            PyErr_SetString(PyExc_SystemError,
                            "globals and locals cannot be NULL");
            return -1;
        }
    }
    else if (locals == (&_Py_NoneStruct))
        locals = globals;
    if (!((((((PyObject*)(prog))->ob_type))->tp_flags & ((1L<<27))) != 0) &&

        !((((((PyObject*)(prog))->ob_type))->tp_flags & ((1L<<28))) != 0) &&

        !((((PyObject*)(prog))->ob_type) == &PyCode_Type) &&
        !((((PyObject*)(prog))->ob_type) == (&PyFile_Type) || PyType_IsSubtype((((PyObject*)(prog))->ob_type), (&PyFile_Type)))) {
        PyErr_SetString(PyExc_TypeError,
            "exec: arg 1 must be a string, file, or code object");
        return -1;
    }
    if (!((((((PyObject*)(globals))->ob_type))->tp_flags & ((1L<<29))) != 0)) {
        PyErr_SetString(PyExc_TypeError,
            "exec: arg 2 must be a dictionary or None");
        return -1;
    }
    if (!PyMapping_Check(locals)) {
        PyErr_SetString(PyExc_TypeError,
            "exec: arg 3 must be a mapping or None");
        return -1;
    }
    if (PyDict_GetItemString(globals, "__builtins__") == ((void*)0))
        PyDict_SetItemString(globals, "__builtins__", f->f_builtins);
    if (((((PyObject*)(prog))->ob_type) == &PyCode_Type)) {
        if (((((PyVarObject*)(((PyCodeObject *)prog)->co_freevars))->ob_size)) > 0) {
            PyErr_SetString(PyExc_TypeError,
        "code object passed to exec may not contain free variables");
            return -1;
        }
        v = PyEval_EvalCode((PyCodeObject *) prog, globals, locals);
    }
    else if (((((PyObject*)(prog))->ob_type) == (&PyFile_Type) || PyType_IsSubtype((((PyObject*)(prog))->ob_type), (&PyFile_Type)))) {
        FILE *fp = PyFile_AsFile(prog);
        char *name = PyString_AsString(PyFile_Name(prog));
        PyCompilerFlags cf;
        if (name == ((void*)0))
            return -1;
        cf.cf_flags = 0;
        if (PyEval_MergeCompilerFlags(&cf))
            v = PyRun_FileExFlags(fp, name, 257, globals, locals, 0, &cf);

        else
            v = PyRun_FileExFlags(fp, name, 257, globals, locals, 0, ((void*)0));

    }
    else {
        PyObject *tmp = ((void*)0);
        char *str;
        PyCompilerFlags cf;
        cf.cf_flags = 0;

        if (((((((PyObject*)(prog))->ob_type))->tp_flags & ((1L<<28))) != 0)) {
            tmp = PyUnicodeUCS2_AsUTF8String(prog);
            if (tmp == ((void*)0))
                return -1;
            prog = tmp;
            cf.cf_flags |= 0x0100;
        }

        if (PyString_AsStringAndSize(prog, &str, ((void*)0)))
            return -1;
        if (PyEval_MergeCompilerFlags(&cf))
            v = PyRun_StringFlags(str, 257, globals,
                                  locals, &cf);
        else
            v = PyRun_StringFlags(str, 257, globals, locals, ((void*)0));
        do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 5094, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0);
    }
    if (plain)
        PyFrame_LocalsToFast(f, 0);
    if (v == ((void*)0))
        return -1;
    do { if (_Py_RefTotal-- , --((PyObject*)(v))->ob_refcnt != 0) { if (((PyObject*)v)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 5100, (PyObject *)(v)); } else _Py_Dealloc((PyObject *)(v)); } while (0);
    return 0;
}

static void
format_exc_check_arg(PyObject *exc, char *format_str, PyObject *obj)
{
    char *obj_str;

    if (!obj)
        return;

    obj_str = PyString_AsString(obj);
    if (!obj_str)
        return;

    PyErr_Format(exc, format_str, obj_str);
}

static PyObject *
string_concatenate(PyObject *v, PyObject *w,
                   PyFrameObject *f, unsigned char *next_instr)
{


    Py_ssize_t v_len = (((PyVarObject*)(v))->ob_size);
    Py_ssize_t w_len = (((PyVarObject*)(w))->ob_size);
    Py_ssize_t new_len = v_len + w_len;
    if (new_len < 0) {
        PyErr_SetString(PyExc_OverflowError,
                        "strings are too large to concat");
        return ((void*)0);
    }

    if (v->ob_refcnt == 2) {






        switch (*next_instr) {
        case 125:
        {
            int oparg = ((next_instr[2]<<8) + next_instr[1]);
            PyObject **fastlocals = f->f_localsplus;
            if ((fastlocals[oparg]) == v)
                do { PyObject *tmp = (fastlocals[oparg]); (fastlocals[oparg]) = ((void*)0); do { if ((tmp) == ((void*)0)) ; else do { if (_Py_RefTotal-- , --((PyObject*)(tmp))->ob_refcnt != 0) { if (((PyObject*)tmp)->ob_refcnt < 0) _Py_NegativeRefcount("Python/ceval.c", 5147, (PyObject *)(tmp)); } else _Py_Dealloc((PyObject *)(tmp)); } while (0); } while (0); } while (0);
            break;
        }
        case 137:
        {
            PyObject **freevars = (f->f_localsplus +
                                   f->f_code->co_nlocals);
            PyObject *c = freevars[((next_instr[2]<<8) + next_instr[1])];
            if ((((PyCellObject *)(c))->ob_ref) == v)
                PyCell_Set(c, ((void*)0));
            break;
        }
        case 90:
        {
            PyObject *names = f->f_code->co_names;
            PyObject *name = PyTuple_GetItem((names), (((next_instr[2]<<8) + next_instr[1])));
            PyObject *locals = f->f_locals;
            if (((((PyObject*)(locals))->ob_type) == &PyDict_Type) &&
                PyDict_GetItem(locals, name) == v) {
                if (PyDict_DelItem(locals, name) != 0) {
                    PyErr_Clear();
                }
            }
            break;
        }
        }
    }

    if (v->ob_refcnt == 1 && !(((PyStringObject *)(v))->ob_sstate)) {



        if (_PyString_Resize(&v, new_len) != 0) {






            return ((void*)0);
        }

        __builtin___memcpy_chk ((((PyStringObject *)(v))->ob_sval) + v_len, (((PyStringObject *)(w))->ob_sval), w_len, __builtin_object_size ((((PyStringObject *)(v))->ob_sval) + v_len, 0));

        return v;
    }
    else {

        PyString_Concat(&v, w);
        return v;
    }
}
