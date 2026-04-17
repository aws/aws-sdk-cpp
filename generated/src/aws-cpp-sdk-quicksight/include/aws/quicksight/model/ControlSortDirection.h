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
enum class ControlSortDirection { NOT_SET, ASC, DESC, USER_DEFINED_ORDER };

namespace ControlSortDirectionMapper {
AWS_QUICKSIGHT_API ControlSortDirection GetControlSortDirectionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForControlSortDirection(ControlSortDirection value);
}  // namespace ControlSortDirectionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
