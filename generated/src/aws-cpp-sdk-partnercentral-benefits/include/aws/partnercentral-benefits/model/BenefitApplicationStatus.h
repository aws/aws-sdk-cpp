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
enum class BenefitApplicationStatus { NOT_SET, PENDING_SUBMISSION, IN_REVIEW, ACTION_REQUIRED, APPROVED, REJECTED, CANCELED };

namespace BenefitApplicationStatusMapper {
AWS_PARTNERCENTRALBENEFITS_API BenefitApplicationStatus GetBenefitApplicationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForBenefitApplicationStatus(BenefitApplicationStatus value);
}  // namespace BenefitApplicationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
