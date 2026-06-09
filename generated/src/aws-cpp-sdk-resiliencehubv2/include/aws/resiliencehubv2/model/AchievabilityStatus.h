/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class AchievabilityStatus { NOT_SET, ACHIEVABLE, NOT_ACHIEVABLE };

namespace AchievabilityStatusMapper {
AWS_RESILIENCEHUBV2_API AchievabilityStatus GetAchievabilityStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForAchievabilityStatus(AchievabilityStatus value);
}  // namespace AchievabilityStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
