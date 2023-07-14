/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/testing/Testing_EXPORTS.h>
#include <aws/core/Aws.h>

namespace Aws
{
namespace Environment
{

    /**
    * shim for setenv
    */
    AWS_TESTING_API int SetEnv(const char* name, const char* value, int overwrite);

    /**
    * shim for unsetenv
    */
    AWS_TESTING_API int UnSetEnv(const char* name);

} // namespace Environment
namespace Testing
{
    AWS_TESTING_API void InitPlatformTest(Aws::SDKOptions& sdkOptions);
    AWS_TESTING_API void ShutdownPlatformTest(Aws::SDKOptions& sdkOptions);
    AWS_TESTING_API const char* GetDefaultWriteFolder();
} // namespace Testing
} // namespace Aws
