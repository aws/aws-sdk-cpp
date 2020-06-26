/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/testing/Testing_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Testing
{

    AWS_TESTING_API void RedirectHomeToTempIfAppropriate();
    AWS_TESTING_API void SetAwsResourcePrefix(const char* resourcePrefix);
    AWS_TESTING_API const Aws::String GetAwsResourcePrefix();
    AWS_TESTING_API void ParseArgs(int argc, char** argv);

} // namespace Testing
} // namespace Aws
