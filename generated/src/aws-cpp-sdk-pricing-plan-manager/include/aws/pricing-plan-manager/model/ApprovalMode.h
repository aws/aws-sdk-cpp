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
enum class ApprovalMode { NOT_SET, MANUAL, IMMEDIATE };

namespace ApprovalModeMapper {
AWS_PRICINGPLANMANAGER_API ApprovalMode GetApprovalModeForName(const Aws::String& name);

AWS_PRICINGPLANMANAGER_API Aws::String GetNameForApprovalMode(ApprovalMode value);
}  // namespace ApprovalModeMapper
}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
