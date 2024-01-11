#include <stdio.h>
#include <string.h>

void generate_key(const char *username, char *key)
{
    // Simple example: Concatenate username with a secret string
   sprintf(key, "%s-secret", username);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s username\n", argv[0]);
	return (1);
	}

	char key[256];
	generate_key(argv[1], key);

	printf("%s\n", key);

	return (0);
}
