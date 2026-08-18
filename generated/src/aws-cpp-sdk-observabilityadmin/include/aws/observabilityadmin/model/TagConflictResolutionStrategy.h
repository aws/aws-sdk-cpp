/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class TagConflictResolutionStrategy { NOT_SET, IN_SYNC, ADD_ONLY, UPDATE_SYNC };

namespace TagConflictResolutionStrategyMapper {
AWS_OBSERVABILITYADMIN_API TagConflictResolutionStrategy GetTagConflictResolutionStrategyForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTagConflictResolutionStrategy(TagConflictResolutionStrategy value);
}  // namespace TagConflictResolutionStrategyMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
