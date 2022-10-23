/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:11:21 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/23 19:41:04 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

// void f(unsigned int a,char *b)
// 	{
// 		printf(" b[%d]= %s\n",a,b);
// 		return ;	
// 	}
// char  ft_f(unsigned int i, char c)
// {
//   return c - 32;
// }
int	main(void)
{

	// printf("res -> %d\n", atoi("9999999999999999999333"));
	// printf("ft -> %d", ft_atoi("9999999999999999999333"));
	// unsigned char src[11] = "salam";
	// unsigned char sr[11] = "salam";
	// bzero(src, 2);
	// ft_bzero(sr, 2);
	// printf("bzero: %s\n", src);
	// printf("ft_bzero: %s\n", src);
	// char *ptr;
	// ptr = ft_calloc(SIZE_MAX,SIZE_MAX);
	// if (!ptr)
	// {
	// 	printf("ok");
	// }else{
	// 	printf("error");
	// }
	// printf("res -> %d\n",ft_isalnum(0));
	// printf("res -> %d",isalnum(0));
	// printf("res->%s\n",ft_itoa(LONG_MAX));
	// char *str;
	// str = "salam cv hmd";
	// printf("res -> %s\t\n",ft_memchr(str,'m',5));
	// printf("dylhom -> %s\t",memchr(str,'m',5));
	//  printf("dylhom -> %d\t\n",memcmp(0,0,0));
	//  printf("res -> %d\t",ft_memcmp(0,0,0));
	//char str[3] = "abc";
	//char *d;
	//printf("dylhom -> %s\t\n",memmove(d ,str ,2));
	//printf("res -> %s\t",ft_memmove(d,str,2));
	// int	fd;
	// fd =  open("test.txt", O_WRONLY | O_CREAT);
	// ft_putstr_fd("salam cv", fd);
	// printf("res -> %d", fd);

	// char **split;
	// split = ft_split("AAAAAAbvvabaac",'a');
	// int i = -1;
	//  while (split[++i])
	// 	printf("split[%d] = %s\n",i,split[i]);

	 
	 //printf("res -> %s\n",ft_strchr(0,0));
	 //printf("strch -> %s",strchr(0,0));

	//  char *res;
	//  res = strdup("salam cv");
	//  printf("res -> %s",res);

	
	// ft_striteri("salam",f);

	
	// printf("res -> %s",ft_strjoin("salam",0)); 

	// char dst[] ="salam";
	// char src[] ="cv";
	// printf("res -> %zu\n",ft_strlcpy(dst,src,3));
	// printf("dst -> %s",dst);


//   char str[] = "helloworld";
//   char *p;
//   char (*f)(unsigned int, char);
//   int i;
//   f = 0;
//   p = ft_strmapi(0,f);
//   i = 0;
//   printf("%s", p);

//printf("res -> %s\n",ft_strnstr(s1,tofind,22));
// printf("res -> %s\n",strnstr(s1,tofind,22));

// char s[] = "";
//   printf("%s\n", s);
//   printf("%s", ft_substr(s,0,0));

int fd = open("test.sh", O_RDWR | O_CREAT);

ft_putnbr_fd(,fd);
printf("%d",fd);



}
