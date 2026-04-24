/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/Security.h>

#include <aws/core/utils/UnreferencedParam.h>

#include <cstring>

namespace Aws
{
namespace Security
{

void SecureMemClear(unsigned char *data, size_t length)
{
    memset(data, 0, length);
    if(length > 0)
    {
        volatile unsigned char* volData = (volatile unsigned char *)data;

        auto val = *volData;
        AWS_UNREFERENCED_PARAM(val);
    }
}

} // namespace Security
} // namespace Aws
