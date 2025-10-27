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
enum class TableTotalsPlacement { NOT_SET, START, END, AUTO };

namespace TableTotalsPlacementMapper {
AWS_QUICKSIGHT_API TableTotalsPlacement GetTableTotalsPlacementForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTableTotalsPlacement(TableTotalsPlacement value);
}  // namespace TableTotalsPlacementMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
