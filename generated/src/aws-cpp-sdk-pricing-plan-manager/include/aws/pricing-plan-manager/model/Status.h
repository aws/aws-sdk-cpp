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
enum class Status { NOT_SET, PENDING_APPROVAL, ACTIVE, SYNC_IN_PROGRESS, FAILED };

namespace StatusMapper {
AWS_PRICINGPLANMANAGER_API Status GetStatusForName(const Aws::String& name);

AWS_PRICINGPLANMANAGER_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
