/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class PolicyType { NOT_SET, LIMITS_PROFILE, CUSTOM_PERMISSIONS };

namespace PolicyTypeMapper {
AWS_QUICKSIGHT_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPolicyType(PolicyType value);
}  // namespace PolicyTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
