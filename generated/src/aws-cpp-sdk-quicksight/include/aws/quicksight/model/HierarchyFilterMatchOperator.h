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
enum class HierarchyFilterMatchOperator { NOT_SET, INCLUDE, EXCLUDE };

namespace HierarchyFilterMatchOperatorMapper {
AWS_QUICKSIGHT_API HierarchyFilterMatchOperator GetHierarchyFilterMatchOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForHierarchyFilterMatchOperator(HierarchyFilterMatchOperator value);
}  // namespace HierarchyFilterMatchOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
