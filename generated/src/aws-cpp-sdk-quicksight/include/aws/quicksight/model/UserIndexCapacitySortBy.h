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
enum class UserIndexCapacitySortBy { NOT_SET, TOTAL_CAPACITY_BYTES };

namespace UserIndexCapacitySortByMapper {
AWS_QUICKSIGHT_API UserIndexCapacitySortBy GetUserIndexCapacitySortByForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForUserIndexCapacitySortBy(UserIndexCapacitySortBy value);
}  // namespace UserIndexCapacitySortByMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
