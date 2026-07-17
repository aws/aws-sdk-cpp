/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
namespace Model {
enum class WaterAllocationType { NOT_SET, TOTAL_WATER_WITHDRAWALS };

namespace WaterAllocationTypeMapper {
AWS_SUSTAINABILITY_API WaterAllocationType GetWaterAllocationTypeForName(const Aws::String& name);

AWS_SUSTAINABILITY_API Aws::String GetNameForWaterAllocationType(WaterAllocationType value);
}  // namespace WaterAllocationTypeMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
