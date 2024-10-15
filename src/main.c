#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

extern size_t ft_strlen(char *str);
extern char* ft_strcpy(char *dst,char *src);
extern int ft_strcmp(char *dst,char *src);
extern size_t ft_write(int fd,char *src, int len);
extern size_t ft_read(int fd,char *src, int len);
extern char* ft_strdup(char* dup);

//int *get_saucisse_location {
//    static int saucisse = 0;
//    return &saucisse;
//}
//
//
//#define saucisse *get_saucisse_location()



int main(){
    int saveErrno;
    int saveFtErrno;
    size_t saveReturn;
    size_t saveFtReturn;
    char *Buff = calloc(11,1);
    char *ftBuff = calloc(11,1);
    char *BuffDup;
    char *ftBuffDup;
    printf("test----------------------------------------------------------------------------write\n");
    /****************************************************************************************************************************/
    printf ("\"1\",\"Coucou\",\"0\" : \n"); 
    printf ("write output : \n");
    errno = 0;
    saveReturn = write(1,"Coucou",0);
    saveErrno = errno;
    printf ("\n");
    printf ("ft_write output : \n");
    errno = 0;
    saveFtReturn = ft_write(1,"Coucou",0);
    saveFtErrno = errno;
    printf ("\n");
    printf("write = %ld, write errno = %d, ft_write = %ld, ft_write errno = %d,\n",saveReturn,saveErrno,saveFtReturn,saveFtErrno);
    /****************************************************************************************************************************/
    printf ("\"1\",\"Coucou\",\"1\" : \n"); 
    printf ("write output : \n");
    errno = 0;
    saveReturn = write(1,"Coucou",1);
    saveErrno = errno;
    printf ("\n");
    printf ("ft_write output : \n");
    errno = 0;
    saveFtReturn = ft_write(1,"Coucou",1);
    saveFtErrno = errno;
    printf ("\n");
    printf("write = %ld, write errno = %d, ft_write = %ld, ft_write errno = %d,\n",saveReturn,saveErrno,saveFtReturn,saveFtErrno);
    /****************************************************************************************************************************/
    printf ("\"1\",\"Coucou\",\"6\" : \n"); 
    printf ("write output : \n");
    errno = 0;
    saveReturn = write(1,"Coucou",6);
    saveErrno = errno;
    printf ("\n");
    printf ("ft_write output : \n");
    errno = 0;
    saveFtReturn = ft_write(1,"Coucou",6);
    saveFtErrno = errno;
    printf ("\n");
    printf("write = %ld, write errno = %d, ft_write = %ld, ft_write errno = %d,\n",saveReturn,saveErrno,saveFtReturn,saveFtErrno);
    /****************************************************************************************************************************/
    printf ("\"1\",\"Coucou\",\"7\" : \n"); 
    printf ("write output : \n");
    errno = 0;
    saveReturn = write(1,"Coucou",7);
    saveErrno = errno;
    printf ("\n");
    printf ("ft_write output : \n");
    errno = 0;
    saveFtReturn = ft_write(1,"Coucou",7);
    saveFtErrno = errno;
    printf ("\n");
    printf("write = %ld, write errno = %d, ft_write = %ld, ft_write errno = %d,\n",saveReturn,saveErrno,saveFtReturn,saveFtErrno);
    /****************************************************************************************************************************/
    printf ("\"2\",\"Coucou\",\"6\" : \n"); 
    printf ("write output : \n");
    errno = 0;
    saveReturn = write(2,"Coucou",6);
    saveErrno = errno;
    printf ("\n");
    printf ("ft_write output : \n");
    errno = 0;
    saveFtReturn = ft_write(2,"Coucou",6);
    saveFtErrno = errno;
    printf ("\n");
    printf("write = %ld, write errno = %d, ft_write = %ld, ft_write errno = %d,\n",saveReturn,saveErrno,saveFtReturn,saveFtErrno);
    /****************************************************************************************************************************/
    printf ("\"3\",\"Coucou\",\"6\" : \n"); 
    printf ("write output : \n");
    errno = 0;
    saveReturn = write(3,"Coucou",6);
    saveErrno = errno;
    printf ("\n");
    printf ("ft_write output : \n");
    errno = 0;
    saveFtReturn = ft_write(3,"Coucou",6);
    saveFtErrno = errno;
    printf ("\n");
    printf("write = %ld, write errno = %d, ft_write = %ld, ft_write errno = %d,\n",saveReturn,saveErrno,saveFtReturn,saveFtErrno);
    /****************************************************************************************************************************/
    printf("test----------------------------------------------------------------------------read\n");
    printf ("\"0\",\"buff of size 11\",\"10\" : \n");
    printf ("read input : \n");
    errno = 0;
    saveReturn = read(0,Buff,10);
    saveErrno = errno;
    printf ("ft_read input : \n");
    errno = 0;
    saveFtReturn = ft_read(0,ftBuff,10);
    saveFtErrno = errno;
    printf("read = \"%s\"\nread return = %ld, read errno = %d\nft_read = \"%s\"\nft_read return = %ld, ft_read errno = %d,\n",Buff, saveReturn , errno, ftBuff, saveFtReturn , errno);
    /****************************************************************************************************************************/
    printf ("\"3\",\"buff of size 11\",\"10\" : \n");
    printf ("read input : \n");
    errno = 0;
    saveReturn = read(3,Buff,10);
    saveErrno = errno;
    printf ("ft_read input : \n");
    errno = 0;
    saveFtReturn = ft_read(3,ftBuff,10);
    saveFtErrno = errno;
    printf("read = \"%s\"\nread return = %ld, read errno = %d\nft_read = \"%s\"\nft_read return = %ld, ft_read errno = %d,\n",Buff, saveReturn , errno, ftBuff, saveFtReturn , errno);
    /****************************************************************************************************************************/
    printf ("\"0\",\"buff of size 11\",\"5\" : \n");
    printf ("read input : \n");
    errno = 0;
    saveReturn = read(0,Buff,5);
    saveErrno = errno;
    printf ("ft_read input : \n");
    errno = 0;
    saveFtReturn = ft_read(0,ftBuff,5);
    saveFtErrno = errno;
    printf("read = \"%s\"\nread return = %ld, read errno = %d\nft_read = \"%s\"\nft_read return = %ld, ft_read errno = %d,\n",Buff, saveReturn , errno, ftBuff, saveFtReturn , errno);
    /****************************************************************************************************************************/
    printf("test----------------------------------------------------------------------------strlen\n");
    printf ("\"\" : strlen = %ld, ft_strlen = %ld\n",strlen(""),ft_strlen(""));
    /****************************************************************************************************************************/
    printf ("\"Coucou\" : strlen = %ld, ft_strlen = %ld\n",strlen("Coucou"),strlen("Coucou"));
    /****************************************************************************************************************************/
    printf ("\"\\n\" : strlen = %ld, ft_strlen = %ld\n",strlen("\n"),strlen("\n"));
    /****************************************************************************************************************************/
    printf ("\"AB\\0CD\" : strlen = %ld, ft_strlen = %ld\n",strlen("AB\0CD"),strlen("AB\0CD"));
    /****************************************************************************************************************************/
    printf("test----------------------------------------------------------------------------strcmp\n");
    /****************************************************************************************************************************/
    printf ("\"A\",\"B\" : strcmp = %d, ft_strcmp = %d\n",strcmp("A","B"),ft_strcmp("A","B"));
    /****************************************************************************************************************************/
    printf ("\"A\",\"Z\" : strcmp = %d, ft_strcmp = %d\n",strcmp("A","Z"),ft_strcmp("A","Z"));
    /****************************************************************************************************************************/
    printf ("\"A\",\"AA\" : strcmp = %d, ft_strcmp = %d\n",strcmp("A","AA"),ft_strcmp("A","AA"));
    /****************************************************************************************************************************/
    printf ("\"\",\"Z\" : strcmp = %d, ft_strcmp = %d\n",strcmp("","Z"),ft_strcmp("","Z"));
    /****************************************************************************************************************************/
    printf ("\"\",\"\" : strcmp = %d, ft_strcmp = %d\n",strcmp("",""),ft_strcmp("",""));
    /****************************************************************************************************************************/
    printf ("\"A\",\"A\" : strcmp = %d, ft_strcmp = %d\n",strcmp("A","A"),ft_strcmp("A","A"));
    /****************************************************************************************************************************/
    printf ("\"B\",\"A\" : strcmp = %d, ft_strcmp = %d\n",strcmp("B","A"),ft_strcmp("B","A"));
    /****************************************************************************************************************************/
    printf ("\"Z\",\"A\" : strcmp = %d, ft_strcmp = %d\n",strcmp("Z","A"),ft_strcmp("Z","A"));
    /****************************************************************************************************************************/
    printf ("\"AA\",\"A\" : strcmp = %d, ft_strcmp = %d\n",strcmp("AA","A"),ft_strcmp("AA","A"));
    /****************************************************************************************************************************/
    printf ("\"Z\",\"\" : strcmp = %d, ft_strcmp = %d\n",strcmp("Z",""),ft_strcmp("Z",""));
    /****************************************************************************************************************************/
    printf("test----------------------------------------------------------------------------strcpy    \n");
    /****************************************************************************************************************************/
    bzero(Buff,11);
    bzero(ftBuff,11);
    printf ("\"%s\",\"\" : strcpy = \"%s\", ft_strcpy = \"%s\"\n",ftBuff,strcpy(Buff,""),ft_strcpy(ftBuff,""));
    /****************************************************************************************************************************/
    printf ("\"%s\",\"TEST\" : strcpy = \"%s\", ft_strcpy = \"%s\"\n",ftBuff,strcpy(Buff,"TEST"),ft_strcpy(ftBuff,"TEST"));
    /****************************************************************************************************************************/
    printf ("\"%s\",\"\" : strcpy = \"%s\", ft_strcpy = \"%s\"\n",ftBuff,strcpy(Buff,""),ft_strcpy(ftBuff,""));
    /****************************************************************************************************************************/
    printf("test----------------------------------------------------------------------------strdup\n");
    /****************************************************************************************************************************/
    BuffDup = strdup("ABCD");
    ftBuffDup = strdup("ABCD");
    printf ("\"\",\"ABCD\" : strdup = \"%s\", ft_strdup = \"%s\"\n",BuffDup,ftBuffDup);
    free(BuffDup);
    free(ftBuffDup);
    /****************************************************************************************************************************/
    BuffDup = strdup("");
    ftBuffDup = strdup("");
    printf ("\"\",\"\" : strdup = \"%s\", ft_strdup = \"%s\"\n",BuffDup,ftBuffDup);
    free(BuffDup);
    free(ftBuffDup);
    /****************************************************************************************************************************/
    free(Buff);
    free(ftBuff);
}   
