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
enum class TestSourceType { NOT_SET, SUCCESS_CRITERIA, OBSERVABILITY };

namespace TestSourceTypeMapper {
AWS_RESILIENCEHUBV2_API TestSourceType GetTestSourceTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForTestSourceType(TestSourceType value);
}  // namespace TestSourceTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
