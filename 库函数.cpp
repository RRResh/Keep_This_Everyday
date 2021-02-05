void* Memcpy(void* dest,void* src,size_t n)
{
    if(!dest||!src||!n) return NULL;
    char*desttmp=(char*)dest;
    char*srctmp=(char*)src;
    while(n--) *desttmp++=*srctmp++;
    return dest;
}
void* Memmove(void*dest,void* src,size_t n)
{
    if(dest==NULL||src==NULL||n<0) return NULL;
    char* desttmp=(char*)dest;
    char* srctmp=(char*)src;
    if(dest<=src||(char*)dest>=(char*)src+n)
    {
        while(n--)
        {
            *desttmp++=*srctmp++;
        }
    }
    else{
        desttmp+=n;
        srctmp+=n;
        while(n--)
        {
            *desttmp--=*srctmp--;
        }
    }
    return dest;
}
void* Memset(void *s,int c,size_t n)
{
    if(!s||!n) return NULL;
    char*tmps=(char*)s;
    while(n--)
    {
        *tmps++=c;
    }
    return s;
}
int Memcmp(const void *buffer1,const void *buffer2,int count)
{
   if (!count)
     return 0;
   //注意要是--count
   while ( --count && *(char *)buffer1 == *(char *)buffer2)
   {
       buffer1 = (char *)buffer1 + 1;
       buffer2 = (char *)buffer2 + 1;
   }
   return *(char *)buffer1 - *(char *)buffer2;
}