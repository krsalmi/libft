# LIBFT - or Coding my first basic library
Libft is the first major project part of the École42 curriculum. The aim of the project is to code a library with many basic libc functions, for ex. `strcmp()`, and some other ones, which have come in handy (I could mention `ft_lstadd_back()` which adds a node to the end of a linked list). I first coded this project back in October  2019, but I keep adding more functions I find useful to it. I have used this library and its functions in almost all of the projects I have worked on during my time studying in Hive Helsinki.

## How-to
After downloading the repo, run `make all` which will create the library libft.a.
To try out the functions, include "libft.h" in the headers of your .c file and compile the executable for ex. with
```
gcc <yourfile.c> -L relative/path/to/my_libft_repo -lft -I relative/path/to/libft/includes
```