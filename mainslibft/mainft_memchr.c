int main(int argc, char const *argv[])
{
	char l[10] = "kkkkklkkk";
	
	printf("%s\n", ft_memchr(l, 'l', 6));	
	printf("%s\n", memchr(l, 'l', 6));

	return 0;
}