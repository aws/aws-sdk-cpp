/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <cstring>

namespace Aws
{
    namespace Utils
    {
        namespace Memory
        {
            /**
             * Securely clear memory to prevent sensitive data from remaining in freed memory.
             * This function uses a volatile pointer to prevent compiler optimization from
             * removing the memory clearing operation.
             * 
             * @param ptr Pointer to memory to clear
             * @param size Number of bytes to clear
             */
            AWS_CORE_API void SecureClear(void* ptr, size_t size);

        } // namespace Memory
    } // namespace Utils
} // namespace Aws