/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

namespace Aws {
namespace PricingPlanManager {
namespace Model {
enum class ScheduledChangeType { NOT_SET, DOWNGRADE, CANCELLATION };

namespace ScheduledChangeTypeMapper {
AWS_PRICINGPLANMANAGER_API ScheduledChangeType GetScheduledChangeTypeForName(const Aws::String& name);

AWS_PRICINGPLANMANAGER_API Aws::String GetNameForScheduledChangeType(ScheduledChangeType value);
}  // namespace ScheduledChangeTypeMapper
}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
