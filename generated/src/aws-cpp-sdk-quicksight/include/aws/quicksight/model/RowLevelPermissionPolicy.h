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
enum class RowLevelPermissionPolicy { NOT_SET, GRANT_ACCESS, DENY_ACCESS };

namespace RowLevelPermissionPolicyMapper {
AWS_QUICKSIGHT_API RowLevelPermissionPolicy GetRowLevelPermissionPolicyForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRowLevelPermissionPolicy(RowLevelPermissionPolicy value);
}  // namespace RowLevelPermissionPolicyMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
