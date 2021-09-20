
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
	char strm[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    memset(str + 13, '.', 10*sizeof(char));
	ft_memset(strm + 13, '.', 10*sizeof(char));
  
    printf("After memset():  %s\n", str);
	printf("After ft_memset():  %s", strm);
    return 0;
}