/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

/* cJSON */
/* JSON parser in C. */

/* disable warnings about old C89 functions in MSVC */
#if !defined(_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER)
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifdef __GNUC__
#pragma GCC visibility push(default)
#endif
#if defined(_MSC_VER)
#pragma warning (push)
/* disable warning about single line comments in system headers */
#pragma warning (disable : 4001)
#endif

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

#ifdef ENABLE_LOCALES
#include <locale.h>
#endif

#if defined(_MSC_VER)
#pragma warning (pop)
#endif
#ifdef __GNUC__
#pragma GCC visibility pop
#endif

#include <aws/core/external/cjson/cJSON.h>

typedef struct internal_hooks {
    void *(CJSON_CDECL *allocate)(size_t size);
    void (CJSON_CDECL *deallocate)(void *pointer);
    void *(CJSON_CDECL *reallocate)(void *pointer, size_t size);
} internal_hooks;

#if defined(_MSC_VER)
/* work around MSVC error C2322: '...' address of dllimport '...' is not static */
static void * CJSON_AS4CPP_CDECL internal_malloc(size_t size)
{
    return malloc(size);
}
static void CJSON_AS4CPP_CDECL internal_free(void *pointer)
{
    free(pointer);
}
static void * CJSON_AS4CPP_CDECL internal_realloc(void *pointer, size_t size)
{
    return realloc(pointer, size);
}
#else
#define internal_malloc malloc
#define internal_free free
#define internal_realloc realloc
#endif

static internal_hooks global_hooks = {internal_malloc, internal_free, internal_realloc};

static unsigned char *cJSON_AS4CPP_strdup(const unsigned char *string, const internal_hooks *const hooks) {
    size_t length = 0;
    unsigned char *copy = NULL;

    if (string == NULL) {
        return NULL;
    }

    length = strlen((const char *) string) + sizeof("");
    copy = (unsigned char *) hooks->allocate(length);
    if (copy == NULL) {
        return NULL;
    }
    memcpy(copy, string, length);

    return copy;
}

/* Internal constructor. */
static cJSON *cJSON_AS4CPP_New_Item(const internal_hooks *const hooks) {
    cJSON *node = (cJSON *) hooks->allocate(sizeof(cJSON));
    if (node) {
        memset(node, '\0', sizeof(cJSON));
    }

    return node;
}

CJSON_PUBLIC(cJSON *)cJSON_AS4CPP_CreateInt64(long long num) {
    cJSON *item = cJSON_AS4CPP_New_Item(&global_hooks);
    if (item) {
        item->type = cJSON_Number;
        item->valuedouble = static_cast<double>(num);

        // For integer which is out of the range of [INT_MIN, INT_MAX], it may lose precision if we cast it to double.
        // Instead, we keep the integer literal as a string.
        if (num > INT_MAX || num < INT_MIN) {
            char buf[21];
            sprintf(buf, "%lld", num);
            item->valuestring = (char *) cJSON_AS4CPP_strdup((const unsigned char *) buf, &global_hooks);
        }

        /* use saturation in case of overflow */
        if (num >= INT_MAX) {
            item->valueint = INT_MAX;
        } else if (num <= INT_MIN) {
            item->valueint = INT_MIN;
        } else {
            item->valueint = (int) num;
        }
    }

    return item;
}