#include "include/libasm.h"


int main()
{
// 	printf("----------------------Strlen-------------------\n\n");
// 	printf("return of the real one on \"test\" = %zu and my lib = %zu\n", strlen("test"), ft_strlen("test"));
// 	printf("return of the real one on \"1\" = %zu and my lib = %zu\n", strlen("1"), ft_strlen("1"));
// 	printf("return of the real one on \"\" = %zu and my lib = %zu\n", strlen(""), ft_strlen(""));
// 	printf("return of the real one on \"terrreerarfrffeferferf\" = %zu and my lib = %zu\n", strlen("terrreerarfrffeferferf"), ft_strlen("terrreerarfrffeferferf"));
// 	printf("return of the real one on \"test\" = %zu and my lib = %zu\n", strlen("test"), ft_strlen("test"));
// 	printf("return of my lib = %zu\n on NULL", strlen("test"), ft_strlen("test"));
// 	// Will segfault with null exactly like the real one

	// printf("\n\n----------------------Strcpy-------------------\n\n");
	// char str[10000];
	// char *src1 = "terrreerarfrffeferferf";
	// char *result1_real = strcpy(str, src1);
	// char *result1_lib = ft_strcpy(str, src1);
	// printf("return of the real one on \"%s\" = %s and my lib = %s\n", src1, result1_real, result1_lib);
	// char *src2 = "test";
	// char *result2_real = strcpy(str, src2);
	// char *result2_lib = ft_strcpy(str, src2);
	// printf("return of the real one on \"%s\" = %s and my lib = %s\n", src2, result2_real, result2_lib);
	// char *src3 = "";
	// char *result3_real = strcpy(str, src3);
	// char *result3_lib = ft_strcpy(str, src3);
	// printf("return of the real one on \"%s\" = %s and my lib = %s\n", src3, result3_real, result3_lib);
	//printf("\n\n----------------------strcmp-------------------\n\n");
	// const char *str1 = "apple";
	// const char *str2 = "banana";
	// int result1_real = strcmp(str1, str2);
	// int result1_lib = ft_strcmp(str1, str2);
	// printf("strcmp result for \"%s\" vs \"%s\": %d (real) vs %d (custom)\n", str1, str2, result1_real, result1_lib);

	// // Test case 2
	// const char *str3 = "apple";
	// const char *str4 = "apple";
	// int result2_real = strcmp(str3, str4);
	// int result2_lib = ft_strcmp(str3, str4);
	// printf("strcmp result for \"%s\" vs \"%s\": %d (real) vs %d (custom)\n", str3, str4, result2_real, result2_lib);

	// // Test case 3
	// const char *str5 = "banana";
	// const char *str6 = "apple";
	// int result3_real = strcmp(str5, str6);
	// int result3_lib = ft_strcmp(str5, str6);
	// printf("strcmp result for \"%s\" vs \"%s\": %d (real) vs %d (custom)\n", str5, str6, result3_real, result3_lib);

	// //Test case 4
	// const char *str7 = "";
	// const char *str8 = "";
	// int result4_real = strcmp(str5, str6);
	// int result4_lib = ft_strcmp(str5, str6);
	// printf("strcmp result for \"%s\" vs \"%s\": %d (real) vs %d (custom)\n", str7, str8, result4_real, result4_lib);

	// printf("\n\n----------------------ft_write-------------------\n\n");
	// {
	// 	// Test case 1
	// 	const char *str1 = "Hello, world!\n";
	// 	ssize_t result1_real = write(1, str1, 14); // 1 is the file descriptor for stdout
	// 	ssize_t result1_lib = ft_write(1, str1,14);
	// 	printf("write result: %zd (real) vs %zd (custom)\n", result1_real, result1_lib);

	// 	// Test case 2
	// 	const char *str2 = "This is a custom write function.\n";
	// 	ssize_t result2_real = write(1, str2, 33);
	// 	ssize_t result2_lib = ft_write(1, str2, 33);
	// 	printf("write result: %zd (real) vs %zd (custom)\n", result2_real, result2_lib);

	// 	// Test case 3
	// 	{
	// 		printf("Let s crash it and check erno value on success\n");
	// 		const char *str3 = "12345";
	// 		ssize_t result3_real = write(2, str3, 6);
	// 		perror("");
	// 		ssize_t result3_lib = ft_write(2, str3, 6);
	// 		perror("");
	// 		printf("write result: %zd (real) vs %zd (custom)\n", result3_real, result3_lib);
	// 	}

	// 	printf("Let s crash it and check erno value on failure\n");
	// 	const char *str3 = "12345";
	// 	ssize_t result3_real = write(6, str3, 6);
	// 	perror("");
	// 	ssize_t result3_lib = ft_write(6, str3, 6);
	// 	perror("");
	// 	printf("write result: %zd (real) vs %zd (custom)\n", result3_real, result3_lib);
	// }

	// printf("\n\n----------------------ft_read-------------------\n\n");
	// {
	// 	char buffer1[20];
	// 	ssize_t result1_real = read(0, buffer1, sizeof(buffer1)); // 0 is the file descriptor for stdin
	// 	ssize_t result1_lib = ft_read(0, buffer1, sizeof(buffer1));
	// 	printf("read result: %zd (real) vs %zd (custom)\n", result1_real, result1_lib);

	// 	// Test case 2
	// 	char buffer2[30];
	// 	ssize_t result2_real = read(0, buffer2, sizeof(buffer2));
	// 	ssize_t result2_lib = ft_read(0, buffer2, sizeof(buffer2));
	// 	printf("read result: %zd (real) vs %zd (custom)\n", result2_real, result2_lib);

	// 	// Test case 3
	// 	char buffer3[15];
	// 	ssize_t result3_real = read(0, buffer3, sizeof(buffer3));
	// 	ssize_t result3_lib = ft_read(0, buffer3, sizeof(buffer3));
	// 	printf("read result: %zd (real) vs %zd %s(custom), \n", result3_real, result3_lib, buffer3);

	// 	printf("\nlet s crash it now and check perror: \n");
	// 	char buffer4[15];
	// 	read(12, buffer4, sizeof(buffer4));
	// 	perror("");
	// 	ft_read(12, buffer4, sizeof(buffer4));
	// 	perror("");
	// }
	{

		const char *str1 = "Hello, world!";
		char *result1_real = strdup(str1);
		char *result1_lib = ft_strdup(str1);
		printf("strdup result for \"%s\": \"%s\" (real) vs \"%s\" (custom)\n", str1, result1_real, result1_lib);
		free(result1_real);
		free(result1_lib);

		// Test case 2
		const char *str2 = "This is a custom strdup function.";
		char *result2_real = strdup(str2);
		char *result2_lib = ft_strdup(str2);
		printf("strdup result for \"%s\": \"%s\" (real) vs \"%s\" (custom)\n", str2, result2_real, result2_lib);
		free(result2_real);
		free(result2_lib);

		// Test case 3
		const char *str3 = "";
		char *result3_real = strdup(str3);
		char *result3_lib = ft_strdup(str3);
		printf("strdup result for \"%s\": \"%s\" (real) vs \"%s\" (custom)\n", str3, result3_real, result3_lib);
		free(result3_real);
		free(result3_lib);
	}
}
