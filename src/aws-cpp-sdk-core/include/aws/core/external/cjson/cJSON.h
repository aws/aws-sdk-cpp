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


#ifndef NON_LEGACY_BUILD
#include <aws/core/external/cjson/cJSON_legacy.h>
#else
/**
 * This code below is an interface wrapper for cJSON intended for transition cJSON into an external dependency in
 * Aws SDK for C++ 1.10 while still supporting legacy build code. It will be removed when the legacy build
 * support is removed.
 */

#ifndef cJSON_TRANSITION_WRAP__h
#define cJSON_TRANSITION_WRAP__h

#include <cjson/cJSON.h>

/* project version */
#define CJSON_AS4CPP_VERSION_MAJOR CJSON_VERSION_MAJOR
#define CJSON_AS4CPP_VERSION_MINOR CJSON_VERSION_MINOR
#define CJSON_AS4CPP_VERSION_PATCH CJSON_VERSION_PATCH
// Wrapped functions
#define cJSON_AS4CPP_Duplicate cJSON_Duplicate
#define cJSON_AS4CPP_ParseWithOpts cJSON_ParseWithOpts
#define cJSON_AS4CPP_IsInvalid cJSON_IsInvalid
#define cJSON_AS4CPP_Delete cJSON_Delete
#define cJSON_AS4CPP_GetObjectItemCaseSensitive cJSON_GetObjectItemCaseSensitive
#define cJSON_AS4CPP_ReplaceItemInObjectCaseSensitive cJSON_ReplaceItemInObjectCaseSensitive
#define cJSON_AS4CPP_AddItemToObject cJSON_AddItemToObject
#define cJSON_AS4CPP_CreateObject cJSON_CreateObject
#define cJSON_AS4CPP_CreateString cJSON_CreateString
#define cJSON_AS4CPP_CreateBool cJSON_CreateBool
#define cJSON_AS4CPP_CreateNumber cJSON_CreateNumber
#define cJSON_AS4CPP_CreateArray cJSON_CreateArray
#define cJSON_AS4CPP_Compare cJSON_Compare
#define cJSON_AS4CPP_AddItemToArray cJSON_AddItemToArray
#define cJSON_AS4CPP_GetStringValue cJSON_GetStringValue
#define cJSON_AS4CPP_IsBool cJSON_IsBool
#define cJSON_AS4CPP_GetArraySize cJSON_GetArraySize
#define cJSON_AS4CPP_IsArray cJSON_IsArray
#define cJSON_AS4CPP_IsTrue cJSON_IsTrue
#define cJSON_AS4CPP_IsNull cJSON_IsNull
#define cJSON_AS4CPP_IsNumber cJSON_IsNumber
#define cJSON_AS4CPP_IsObject cJSON_IsObject
#define cJSON_AS4CPP_IsString cJSON_IsString
#define cJSON_AS4CPP_free cJSON_free
#define cJSON_AS4CPP_Print cJSON_Print
#define cJSON_AS4CPP_PrintUnformatted cJSON_PrintUnformatted
#define cJSON_AS4CPP_Hooks cJSON_Hooks
#define cJSON_AS4CPP_InitHooks cJSON_InitHooks

CJSON_PUBLIC(cJSON *)cJSON_AS4CPP_CreateInt64(long long num);

#endif
#endif