/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/scheduler/Scheduler_EXPORTS.h>

namespace Aws {
namespace Scheduler {
namespace Model {
enum class PlacementConstraintType { NOT_SET, distinctInstance, memberOf };

namespace PlacementConstraintTypeMapper {
AWS_SCHEDULER_API PlacementConstraintType GetPlacementConstraintTypeForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForPlacementConstraintType(PlacementConstraintType value);
}  // namespace PlacementConstraintTypeMapper
}  // namespace Model
}  // namespace Scheduler
}  // namespace Aws
