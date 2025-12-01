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
enum class BenefitStatus { NOT_SET, ACTIVE, INACTIVE };

namespace BenefitStatusMapper {
AWS_PARTNERCENTRALBENEFITS_API BenefitStatus GetBenefitStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForBenefitStatus(BenefitStatus value);
}  // namespace BenefitStatusMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
