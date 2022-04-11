#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdarg.h>

typedef struct
{
    char type;
    char flags;
    int width;
    int height;
    int next_index;
    int content_len;
} combination;

int ft_printf(const char *line, ...);

#endif
