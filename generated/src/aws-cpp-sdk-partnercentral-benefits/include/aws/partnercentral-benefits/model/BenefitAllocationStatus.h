/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
enum class BenefitAllocationStatus { NOT_SET, ACTIVE, INACTIVE, FULFILLED };

namespace BenefitAllocationStatusMapper {
AWS_PARTNERCENTRALBENEFITS_API BenefitAllocationStatus GetBenefitAllocationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForBenefitAllocationStatus(BenefitAllocationStatus value);
}  // namespace BenefitAllocationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
