#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("short:[%d, %d]\n",SHRT_MIN,SHRT_MAX);
    printf("int:[%d, %d]\n",INT_MIN,INT_MAX);
    printf("long:[%ld,  %ld]\n",LONG_MIN,LONG_MAX);
    printf("long long:[%lld,  %lld]\n",LLONG_MIN,LLONG_MAX);
    printf("unsigned short:[0, %u]\n",USHRT_MAX);
    printf("char:[%d, %d]\n",CHAR_MIN,CHAR_MAX);
    printf("unsigned char:[0, %u]\n",UCHAR_MAX);
    printf("float:[%f, %f]\n",FLT_MIN,FLT_MAX);
    printf("double:[%f, %g]\n",DBL_MIN,DBL_MAX);
    printf("long double:[%f, %g]\n",LDBL_MIN,LDBL_MAX);
    
    

    return 0;
}
