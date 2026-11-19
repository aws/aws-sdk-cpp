/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class AggregatableField {
  NOT_SET,
  ENRICHMENT_STATUS,
  AWS_INDUSTRY,
  SEGMENT,
  REGION,
  SOLUTION_CATEGORY,
  ACCOUNT_PLANNING_QUALIFICATION,
  PROGRAM_ELIGIBILITY,
  MARKETPLACE_ENGAGEMENT_SCORE,
  GEO,
  COUNTRY,
  SOLUTION_SCORE
};

namespace AggregatableFieldMapper {
AWS_PARTNERCENTRALSELLING_API AggregatableField GetAggregatableFieldForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAggregatableField(AggregatableField value);
}  // namespace AggregatableFieldMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
