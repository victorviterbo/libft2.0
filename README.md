Libft 2.0 - Enhanced C Library

The second, enhanced iteration of my personal standard C library. This expanded version includes not only the required functions for the project (see pdf) but also a comprehensive collection of utility functions for linked lists, memory allocation, string manipulation, mathematical operations, and data structures.

# 📁 Project Structure

```
libft2.0/
├── characters/     # Character classification functions
├── conversions/    # Type conversion functions  
├── lists/          # Linked list operations
├── math/           # Mathematical utilities
├── memory/         # Memory management functions
├── miscs/          # Miscellaneous utilities
├── strings/        # String manipulation
├── tree/           # Tree data structure
└── write_read/     # I/O functions
```

# 📚 Functions Reference
## 🔤 Characters
```int ft_isalnum(int c)``` - Checks if character is alphanumeric

```int ft_isalpha(int c)``` - Checks if character is alphabetic

```int ft_isascii(int c)``` - Checks if character is ASCII

```int ft_isdigit(int c)``` - Checks if character is digit

```int ft_isprint(int c)``` - Checks if character is printable

```int ft_iswhitespace_eq(int c)``` - Checks if character is whitespace or equivalent

```int ft_tolower(int c)``` - Converts character to lowercase

```int ft_toupper(int c)``` - Converts character to uppercase

## 🔄 Conversions
```int ft_atoi(const char *str)``` - Converts string to integer

```float ft_atof(char *str)``` - Converts string to float

```char *ft_ctoa(char c)``` - Converts character to string

```char *ft_itoa_base(long long n, char *base)``` - Converts integer to string with base

```char *ft_itoa(int n)``` - Converts integer to string

```int ft_number_len(long long n, int base_size)``` - Returns digit count of number in the given base

```char *ft_utoa_base(unsigned long number, char *base)``` - Converts unsigned to string with base

## 🔗 Lists (Linked Lists)
```t_list *ft_lst_getn(t_list **lst, int n)``` - Gets node at position n

```t_list *ft_lst_isin_int(t_list **lst, int elem)``` - Checks if int exists in a list of int

```t_list *ft_lst_isin_void(t_list **lst, void *elem, int size)``` - Checks if void* exists in list of void*

```void ft_lstadd_back(t_list **lst, t_list *new_node)``` - Adds node to back of list

```void ft_lstadd_front(t_list **lst, t_list *new_node)``` - Adds node to front of list

```void ft_lstclear(t_list **lst, void (*del)(void *))``` - Clears entire list

```void ft_lstcut(t_list **lst, void (*del)(void *), int start, int end)``` - Removes nodes from start to end

```void ft_lstdelone(t_list *lst, void (*del)(void *))``` - Deletes single node

```void ft_lstiter(t_list *lst, void (*f)(void *))``` - Iterates function over list

```t_list *ft_lstlast(t_list *lst)``` - Returns last node of list

```t_list *ft_lstmap_void(t_list *lst, void *(*f)(void *), void (*del)(void *))``` - Maps function over list

```double ft_lstmax(t_list **lst, int dtype)``` - Returns max value in list, for dtype see section Structure

```int ft_lstmaxi(t_list **lst)``` - Returns max value in a list of ints

```double ft_lstmin(t_list **lst, int dtype)``` - Returns min value in list, for dtype see section Structure

```int ft_lstmini(t_list **lst)``` - Returns min value in a list of ints

```t_list *ft_lstnew_int(int i)``` - Creates new int node

```t_list *ft_lstnew_void(void *content)``` - Creates new void* node

```void ft_lstpop(t_list **lst, t_list *node, void (*del)(void *))``` - Removes node from list

```int ft_lstsize(t_list *lst)``` - Returns size of list

## 🧮 Math
```double ft_abs(double n)``` - Returns absolute value

```double ft_dotprod(t_coor v1, t_coor v2)``` - Returns dot product of vectors

```t_coor ft_initvec(double x, double y, double z)``` - Initializes 3D vector

```double ft_max(double a, double b)``` - Returns maximum of two values

```double ft_min(double a, double b)``` - Returns minimum of two values

```double ft_norm(t_coor vector)``` - Returns vector norm

```double ft_prev_power(double n, int base_size)``` - Returns p such that ```base_size ** abs(p) <= abs(n) < base_size ** (abs(p) + 1)``` and p has the same sign as n

```int *ft_range(int min, int max)``` - Creates array of integers from min to max (```[min, max[```)

```t_coor ft_vecadd(t_coor v1, t_coor v2)``` - Returns the result of the addition of the two vectors

```t_coor ft_vecscale(t_coor base, t_coor tip, float scale)``` - Returns the result of the scaling of the vector

```t_coor ft_vecsubstr(t_coor v1, t_coor v2)``` - Returns the result of the substraction of the two vectors

## 💾 Memory
```void ft_bzero(void *s, unsigned int n)``` - Zeros memory region

```void *ft_calloc(size_t count, size_t size)``` - Allocates and zeros memory

```void *ft_memchr(const void *s, int c, size_t n)``` - Searches for character in memory

```int ft_memcmp(const void *s1, const void *s2, size_t n)``` - Compares memory regions

```void *ft_memcpy(void *dst, const void *src, size_t n)``` - Copies memory region

```void *ft_memmove(void *dst, const void *src, size_t n)``` - Moves memory region

```void *ft_memset(void *str, int c, size_t len)``` - Sets memory region to value

## 🛠️ Miscellaneous
```char **ft_array_append(char **array, char *str, bool first)``` - Appends string to array (if ```first=true```, the element is added at the beggining of the array)

```size_t ft_arrlen(char **array)``` - Returns length of string array

```void ft_dummy(void *ptr)``` - Dummy function (no operation, used for functions that requires a function pointer as one of their arguments)

```void ft_free_array(void **array, int size)``` - Frees array of pointers

```double ft_parse_as(void *ptr, t_Datatype dtype)``` - Parses pointer as specified datatype

```void ft_print_array(char **arr, bool nl)``` - Prints string array (if ```nl=true```, a ```\n``` is printed in between each element)

```char **ft_strarray_mapi(char **strarray, char *(*f)(const char *))``` - Maps function over string array

```void ft_swap_void(void **ptr1, void **ptr2)``` - Swaps two void pointers

## 📝 Strings
```char *ft_coalesce_char(char *str, char c, bool inplace)``` - Coalesces consecutive identical characters (```ft_coalesce_char("aaaabcc122233") = "abc123"```), for inplace see section Structures

```int ft_count_charocc(char *str, char c)``` - Counts character occurrences

```int ft_count_strocc(char *str, char *to_count, bool distinct)``` - Counts substring occurrences (if ```distinct=true```, overlapping of matches is not allowed)

```int ft_isfloat(char *str)``` - Checks if string is valid float

```int ft_isint(char *str)``` - Checks if string is valid integer

```char **ft_split(char const *s, char c)``` - Splits string by delimiter

```char *ft_str_replace(char *str, char *to_repl, char *repl_w)``` - Replaces all occurences non overlapping occurences of ```to_repl``` with ```repl_w```

```char *ft_strchr(const char *s, int c)``` - Finds first occurrence of character

```int ft_strcmp(const char *s1, const char *s2)``` - Compares two strings

```char *ft_strdup(const char *s1)``` - Duplicates string

```void ft_striteri(char *s, void (*f)(unsigned int, char *))``` - Iterates function f over string passing each character to the function along with it's index

```char *ft_strjoin_ip(char const *s1, char const *s2, t_Inplace_Type in_place)``` - Joins strings with memory management

```char *ft_strjoin(char const *s1, char const *s2)``` - Joins two strings

```size_t ft_strlcat(char *dst, const char *src, size_t dstsize)``` - Safely concatenates strings

```size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)``` - Safely copies strings

```size_t ft_strlen(const char *str)``` - Returns string length

```char *ft_strmapi(char const *s, char (*f)(unsigned int, char))``` - Maps function over string with index

```int ft_strncmp(const char *s1, const char *s2, size_t n)``` - Compares strings up to n characters

```char *ft_strnstr(const char *haystack, const char *needle, size_t len)``` - Finds the first occurence of substring needle in string haystack with length limit len

```char *ft_strrchr(const char *s, int c)``` - Finds last occurrence of character c

```char *ft_strtrim_char(char *str, char c, bool inplace)``` - Remove all occurences of the characters c from both extremities of the string, for inplace see details below

```char *ft_strtrim(char const *s1, char const *set)``` - Remove all occurences of any of the characters contained in set from both extremities of the string

```char *ft_substr(char const *s, unsigned int start, size_t len)``` - Returns a new string containing the substring starting a ```start``` and of size ```len```

## 🌳 Tree Data Structure
```void ft_tree_clear(t_tree *tree, void (*del)(void *))``` - Clears entire tree

```t_tree *ft_tree_new(void *content)``` - Creates new tree node

```void ft_tree_trav(t_tree *tree, void (*f)(void *), t_Tree_Travel_Type trav_type)``` - Traverses tree in specified order, see Structures

## 📖 Write/Read (I/O)
```char *ft_get_next_line(int fd)``` - Reads next line from file descriptor

```int ft_printf(const char *str, ...)``` - Formatted output function

```void ft_putchar_fd(char c, int fd)``` - Outputs character to file descriptor

```void ft_putendl_fd(char *s, int fd)``` - Outputs string with newline to fd

```void ft_putnbr_fd(int n, int fd)``` - Outputs number to file descriptor

```void ft_putstr_fd(char *s, int fd)``` - Outputs string to file descriptor

```char *ft_readfile(int fd)``` - Reads entire file and return it's content as a string

# ⚙️ Enumerations & Structures

## 🔄 Inplace

```c
typedef enum e_Inplace_Type
{
	NOFREE,
	FREE_S1,
	FREE_S2,
	FREE_S1S2
}	t_Inplace_Type;
```
This flag is used for certain string operations to specify if a string argument should be freed during the operation and if yes which one. This allow operations like :
```c
string1 = ft_strjoin_ip(string1, " adding text to string1", FREE_S1);
```
without the risk of memory leaks

## 🗂️ Data Types

```c
typedef enum e_Datatype
{
	SHORT,
	INT,
	FLOAT,
	DOUBLE,
}	t_Datatype;
```
This flag is used for lists of void* to specify the content to be expected

## 🌳 Tree traversal

```c
typedef enum e_Tree_Travel_Type
{
	PRE_ORDER,
	IN_ORDER,
	POST_ORDER
}	t_Tree_Travel_Type;
```
This flag is used to specify in which order should the tree traversal should be performed.
<p align="center">
<img width="480" height="409" alt="image" src="https://github.com/user-attachments/assets/7a5446c1-2ce1-4652-bd8d-0725768a3b00" />

*the order in which the black line touches the circles indicate the order, red = PRE-ORDER, green=IN_ORDER, blue=POST_ORDER*

</p>

##  🌳 Tree

```c
typedef struct s_tree
{
	void			*content;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;
```

## 📍 Coordinates

```c
typedef struct s_coor
{
	double	x;
	double	y;
	double	z;
}	t_coor;
```
Implementation of the structure used for vector operations

## 🔗 List

```c
typedef struct s_list
{
	union
	{
		void	*content;
		int		i;
	};
	struct s_list	*next;
}	t_list;
```
Implementation of the structure used for lists

Implementation of the tree structure

# 🚀 Usage

Compilation
```bash
make
```
In Your Code
```c
#include "libft.h"

int main(void)
{
    // Use any libft function
    char *str = ft_strdup("Hello World");
    ft_printf("%s\n", str);
    free(str);
    return (0);
}
```

Linking
```bash
gcc your_program.c -L. -lft
