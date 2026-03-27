/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/SecureMemory.h>

namespace Aws
{
    namespace Utils
    {
        namespace Memory
        {
            void SecureClear(void* ptr, size_t size)
            {
                if (ptr && size > 0)
                {
                    volatile char* vptr = static_cast<volatile char*>(ptr);
                    for (size_t i = 0; i < size; ++i)
                    {
                        vptr[i] = 0;
                    }
                }
            }

        } // namespace Memory
    } // namespace Utils
} // namespace Aws