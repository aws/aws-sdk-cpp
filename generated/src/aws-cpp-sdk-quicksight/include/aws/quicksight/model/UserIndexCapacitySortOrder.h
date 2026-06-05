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
enum class UserIndexCapacitySortOrder { NOT_SET, ASC, DESC };

namespace UserIndexCapacitySortOrderMapper {
AWS_QUICKSIGHT_API UserIndexCapacitySortOrder GetUserIndexCapacitySortOrderForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForUserIndexCapacitySortOrder(UserIndexCapacitySortOrder value);
}  // namespace UserIndexCapacitySortOrderMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
