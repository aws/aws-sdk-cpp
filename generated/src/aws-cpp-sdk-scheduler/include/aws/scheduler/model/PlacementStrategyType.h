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
enum class PlacementStrategyType { NOT_SET, random, spread, binpack };

namespace PlacementStrategyTypeMapper {
AWS_SCHEDULER_API PlacementStrategyType GetPlacementStrategyTypeForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForPlacementStrategyType(PlacementStrategyType value);
}  // namespace PlacementStrategyTypeMapper
}  // namespace Model
}  // namespace Scheduler
}  // namespace Aws
