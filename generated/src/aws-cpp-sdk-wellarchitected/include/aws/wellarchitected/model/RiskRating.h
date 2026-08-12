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
enum class RiskRating { NOT_SET, LOW, MEDIUM, HIGH };

namespace RiskRatingMapper {
AWS_WELLARCHITECTED_API RiskRating GetRiskRatingForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRiskRating(RiskRating value);
}  // namespace RiskRatingMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
