/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

namespace Aws
{
    namespace Utils
    {
        /**
        * Generic constexpr utils for hashing strings
        */
        class AWS_CORE_API ConstExprHashingUtils
        {
        public:
            /**
             * Calculates hash value of a buffer of a 8-or-less bytes and starting hash value
             * Uses the following formula with unsigned int arithmetics (including overflow)
             *   s[0]*31^(n-1) + s[1]*31^(n-2) + ... + s[n-1]
             *
             *   What happens here is the attempt to reduce the recursion depth
             *     by computing the hash value of 8 bytes in one step per frame of a callstack.
             *
             *   (the recursion is used to be compliant with C++11 constexpr limitations;
             *    C++11 does not allow loops and variables within constexpr methods)
             */
            static constexpr uint32_t Hash8BytesOfString(const char* bytes, uint32_t currentHashValue)
            {
#define AWS_H_GET_CHAR(POSITION) (*(bytes+POSITION))
#define AWS_H_1ST_CHAR AWS_H_GET_CHAR(0)
#define AWS_H_2ND_CHAR AWS_H_GET_CHAR(1)
#define AWS_H_3RD_CHAR AWS_H_GET_CHAR(2)
#define AWS_H_4TH_CHAR AWS_H_GET_CHAR(3)
#define AWS_H_5TH_CHAR AWS_H_GET_CHAR(4)
#define AWS_H_6TH_CHAR AWS_H_GET_CHAR(5)
#define AWS_H_7TH_CHAR AWS_H_GET_CHAR(6)
#define AWS_H_8TH_CHAR AWS_H_GET_CHAR(7)
              return AWS_H_1ST_CHAR == 0 ? currentHashValue :
                       AWS_H_2ND_CHAR == 0 ? AWS_H_1ST_CHAR + 31 * currentHashValue :
                         AWS_H_3RD_CHAR == 0 ? AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue) :
                           AWS_H_4TH_CHAR == 0 ? AWS_H_3RD_CHAR + 31 * (AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue)) :
                             AWS_H_5TH_CHAR == 0 ? AWS_H_4TH_CHAR + 31 * (AWS_H_3RD_CHAR + 31 * (AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue))) :
                               AWS_H_6TH_CHAR == 0 ? AWS_H_5TH_CHAR + 31 * (AWS_H_4TH_CHAR + 31 * (AWS_H_3RD_CHAR + 31 * (AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue)))) :
                                 AWS_H_7TH_CHAR == 0 ? AWS_H_6TH_CHAR + 31 * (AWS_H_5TH_CHAR + 31 * (AWS_H_4TH_CHAR + 31 * (AWS_H_3RD_CHAR + 31 * (AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue))))) :
                                   AWS_H_8TH_CHAR == 0 ? AWS_H_7TH_CHAR + 31 * (AWS_H_6TH_CHAR + 31 * (AWS_H_5TH_CHAR + 31 * (AWS_H_4TH_CHAR + 31 * (AWS_H_3RD_CHAR + 31 * (AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue)))))) :
                                      AWS_H_8TH_CHAR + 31 * (AWS_H_7TH_CHAR + 31 * (AWS_H_6TH_CHAR + 31 * (AWS_H_5TH_CHAR + 31 * (AWS_H_4TH_CHAR + 31 * (AWS_H_3RD_CHAR + 31 * (AWS_H_2ND_CHAR + 31 * (AWS_H_1ST_CHAR + 31 * currentHashValue)))))));
            }

            /**
             * Calculates hash code of a string and a starting hash value
             * using following formula with unsigned int arithmetics (including overflow)
             *   s[0]*31^(n-1) + s[1]*31^(n-2) + ... + s[n-1]
             */
            static constexpr uint32_t HashString(const char* bytes, uint32_t currentHashValue)
            {
              return !bytes ? 0 :
                       AWS_H_1ST_CHAR && AWS_H_2ND_CHAR && AWS_H_3RD_CHAR && AWS_H_4TH_CHAR && AWS_H_5TH_CHAR && AWS_H_6TH_CHAR && AWS_H_7TH_CHAR && AWS_H_8TH_CHAR ?
                         HashString(bytes + 8, Hash8BytesOfString(bytes, currentHashValue)) :
                         Hash8BytesOfString(bytes, currentHashValue);
#undef AWS_H_1ST_CHAR
#undef AWS_H_2ND_CHAR
#undef AWS_H_3RD_CHAR
#undef AWS_H_4TH_CHAR
#undef AWS_H_5TH_CHAR
#undef AWS_H_6TH_CHAR
#undef AWS_H_7TH_CHAR
#undef AWS_H_8TH_CHAR
#undef AWS_H_GET_CHAR
            }

            /**
             * Calculates hash code of a string using following formula with unsigned int arithmetics (including overflow)
             *   s[0]*31^(n-1) + s[1]*31^(n-2) + ... + s[n-1]
             */
            static constexpr uint32_t HashString(const char* strToHash)
            {
              return HashString(strToHash, 0);
            }
        };

    } // namespace Utils
} // namespace Aws

