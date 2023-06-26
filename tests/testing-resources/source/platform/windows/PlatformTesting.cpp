/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/platform/PlatformTesting.h>

#pragma warning(disable: 4996)
#include <windows.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

namespace Aws
{
namespace Environment
{

int SetEnv(const char* name, const char* value, int overwrite)
{
    AWS_UNREFERENCED_PARAM(overwrite);

    std::stringstream ss;
    ss << name << "=" << value;
    return _putenv(ss.str().c_str());
}

int UnSetEnv(const char* name)
{
    return SetEnv(name, "", 1);
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
