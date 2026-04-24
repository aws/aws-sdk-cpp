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
enum class EmissionsType {
  NOT_SET,
  TOTAL_LBM_CARBON_EMISSIONS,
  TOTAL_MBM_CARBON_EMISSIONS,
  TOTAL_SCOPE_1_CARBON_EMISSIONS,
  TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS,
  TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS,
  TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS,
  TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS
};

namespace EmissionsTypeMapper {
AWS_SUSTAINABILITY_API EmissionsType GetEmissionsTypeForName(const Aws::String& name);

AWS_SUSTAINABILITY_API Aws::String GetNameForEmissionsType(EmissionsType value);
}  // namespace EmissionsTypeMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
