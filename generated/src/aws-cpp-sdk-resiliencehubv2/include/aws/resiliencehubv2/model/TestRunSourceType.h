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
enum class TestRunSourceType { NOT_SET, SUCCESS_CRITERIA, OBSERVABILITY };

namespace TestRunSourceTypeMapper {
AWS_RESILIENCEHUBV2_API TestRunSourceType GetTestRunSourceTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForTestRunSourceType(TestRunSourceType value);
}  // namespace TestRunSourceTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
