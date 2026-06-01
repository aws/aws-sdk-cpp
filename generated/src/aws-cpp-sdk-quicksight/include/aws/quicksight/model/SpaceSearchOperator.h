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
enum class SpaceSearchOperator { NOT_SET, STRING_EQUALS, STRING_LIKE, NUMBER_RANGE };

namespace SpaceSearchOperatorMapper {
AWS_QUICKSIGHT_API SpaceSearchOperator GetSpaceSearchOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSpaceSearchOperator(SpaceSearchOperator value);
}  // namespace SpaceSearchOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
