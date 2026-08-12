/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class Pillar { NOT_SET, COST_OPTIMIZATION, SECURITY, RESILIENCE, PERFORMANCE, OPERATIONAL_EXCELLENCE };

namespace PillarMapper {
AWS_WELLARCHITECTED_API Pillar GetPillarForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForPillar(Pillar value);
}  // namespace PillarMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
