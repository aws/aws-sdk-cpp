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
enum class FailureCategory { NOT_SET, SHARED_FATE, EXCESSIVE_LOAD, EXCESSIVE_LATENCY, MISCONFIGURATION_AND_BUGS, SINGLE_POINT_OF_FAILURE };

namespace FailureCategoryMapper {
AWS_RESILIENCEHUBV2_API FailureCategory GetFailureCategoryForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForFailureCategory(FailureCategory value);
}  // namespace FailureCategoryMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
