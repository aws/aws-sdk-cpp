/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include "aws/testing/AwsCppSdkGTestSuite.h"

namespace Aws
{
    namespace Testing
    {
        // Define static symbols
        Aws::SDKOptions AwsCppSdkGTestSuite::s_sdkOptions;
        std::unique_ptr<ExactTestMemorySystem> AwsCppSdkGTestSuite::s_testMemorySystem;
    }
}