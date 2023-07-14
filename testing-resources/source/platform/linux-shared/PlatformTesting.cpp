/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <stdlib.h>

#include <aws/core/Aws.h>

namespace Aws
{
namespace Environment
{

int SetEnv(const char* name, const char* value, int overwrite)
{
    return setenv(name, value, overwrite);
}

int UnSetEnv(const char* name)
{
    return unsetenv(name);
}

} // namespace Environment

namespace Testing
{
    void InitPlatformTest(Aws::SDKOptions& sdkOptions)
    {
        AWS_UNREFERENCED_PARAM(sdkOptions);
    }

    void ShutdownPlatformTest(Aws::SDKOptions& sdkOptions)
    {
        AWS_UNREFERENCED_PARAM(sdkOptions);
    }
    const char* GetDefaultWriteFolder()
    {
        return "";
    }
} // namespace Testing
} // namespace Aws
