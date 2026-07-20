/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class PricingPlan { NOT_SET, NONE, ESSENTIALS, PRO, ENTERPRISE };

namespace PricingPlanMapper {
AWS_SESV2_API PricingPlan GetPricingPlanForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForPricingPlan(PricingPlan value);
}  // namespace PricingPlanMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
