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
enum class FilterableField {
  NOT_SET,
  ENRICHMENT_STATUS,
  COMPANY_NAME,
  AWS_INDUSTRY,
  ACCOUNT_PLANNING_QUALIFICATION,
  PROGRAM_ELIGIBILITY,
  IMPORT_ID,
  CREATED_DATE,
  LAST_MODIFIED_DATE,
  GEO,
  COUNTRY,
  SEGMENT,
  SOLUTION_CATEGORY,
  MARKETPLACE_ENGAGEMENT_SCORE,
  SOLUTION_SCORE
};

namespace FilterableFieldMapper {
AWS_PARTNERCENTRALSELLING_API FilterableField GetFilterableFieldForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForFilterableField(FilterableField value);
}  // namespace FilterableFieldMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
