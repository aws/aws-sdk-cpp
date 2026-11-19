/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class Industry {
  NOT_SET,
  FINANCIAL_SERVICES,
  HEALTHCARE,
  MANUFACTURING,
  RETAIL,
  MEDIA_ENTERTAINMENT,
  ENERGY,
  EDUCATION,
  GOVERNMENT,
  TELECOMMUNICATIONS,
  AUTOMOTIVE,
  INSURANCE,
  OTHER
};

namespace IndustryMapper {
AWS_PARTNERCENTRALMARKETING_API Industry GetIndustryForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForIndustry(Industry value);
}  // namespace IndustryMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
