/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class CostFrequency { NOT_SET, Hourly, Daily, Monthly, Yearly };

namespace CostFrequencyMapper {
AWS_RESILIENCEHUB_API CostFrequency GetCostFrequencyForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForCostFrequency(CostFrequency value);
}  // namespace CostFrequencyMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
