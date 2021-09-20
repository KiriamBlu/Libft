
int main(int argc, char const *argv[])
{
	char j[13] = "PERO A PASA";
	char l[13] = "PERO CMK Ine";

	printf("%d\n", ft_strncmp(j, l, 6));
	printf("%d\n", strncmp(j, l, 6));

	return 0;
}