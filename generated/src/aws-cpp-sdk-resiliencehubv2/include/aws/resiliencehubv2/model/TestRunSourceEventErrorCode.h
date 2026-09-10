/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class TestRunSourceEventErrorCode { NOT_SET, ACCESS_DENIED, INTERNAL_ERROR };

namespace TestRunSourceEventErrorCodeMapper {
AWS_RESILIENCEHUBV2_API TestRunSourceEventErrorCode GetTestRunSourceEventErrorCodeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForTestRunSourceEventErrorCode(TestRunSourceEventErrorCode value);
}  // namespace TestRunSourceEventErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
