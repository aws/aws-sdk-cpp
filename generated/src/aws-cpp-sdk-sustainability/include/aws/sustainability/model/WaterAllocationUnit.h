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
enum class WaterAllocationUnit { NOT_SET, m3 };

namespace WaterAllocationUnitMapper {
AWS_SUSTAINABILITY_API WaterAllocationUnit GetWaterAllocationUnitForName(const Aws::String& name);

AWS_SUSTAINABILITY_API Aws::String GetNameForWaterAllocationUnit(WaterAllocationUnit value);
}  // namespace WaterAllocationUnitMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
