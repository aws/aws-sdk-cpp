/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>

#include <aws/core/utils/memory/stl/AWSString.h>

#include <regex>

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
