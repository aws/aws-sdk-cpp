/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class PricingPlan { NOT_SET, ON_DEMAND, RESERVED };

namespace PricingPlanMapper {
AWS_MEDIACONVERT_API PricingPlan GetPricingPlanForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForPricingPlan(PricingPlan value);
}  // namespace PricingPlanMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
