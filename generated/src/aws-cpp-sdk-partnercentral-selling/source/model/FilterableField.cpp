/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/FilterableField.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace FilterableFieldMapper {

static const int ENRICHMENT_STATUS_HASH = HashingUtils::HashString("ENRICHMENT_STATUS");
static const int COMPANY_NAME_HASH = HashingUtils::HashString("COMPANY_NAME");
static const int AWS_INDUSTRY_HASH = HashingUtils::HashString("AWS_INDUSTRY");
static const int ACCOUNT_PLANNING_QUALIFICATION_HASH = HashingUtils::HashString("ACCOUNT_PLANNING_QUALIFICATION");
static const int PROGRAM_ELIGIBILITY_HASH = HashingUtils::HashString("PROGRAM_ELIGIBILITY");
static const int IMPORT_ID_HASH = HashingUtils::HashString("IMPORT_ID");
static const int CREATED_DATE_HASH = HashingUtils::HashString("CREATED_DATE");
static const int LAST_MODIFIED_DATE_HASH = HashingUtils::HashString("LAST_MODIFIED_DATE");
static const int GEO_HASH = HashingUtils::HashString("GEO");
static const int COUNTRY_HASH = HashingUtils::HashString("COUNTRY");
static const int SEGMENT_HASH = HashingUtils::HashString("SEGMENT");
static const int SOLUTION_CATEGORY_HASH = HashingUtils::HashString("SOLUTION_CATEGORY");
static const int MARKETPLACE_ENGAGEMENT_SCORE_HASH = HashingUtils::HashString("MARKETPLACE_ENGAGEMENT_SCORE");
static const int SOLUTION_SCORE_HASH = HashingUtils::HashString("SOLUTION_SCORE");

FilterableField GetFilterableFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENRICHMENT_STATUS_HASH) {
    return FilterableField::ENRICHMENT_STATUS;
  } else if (hashCode == COMPANY_NAME_HASH) {
    return FilterableField::COMPANY_NAME;
  } else if (hashCode == AWS_INDUSTRY_HASH) {
    return FilterableField::AWS_INDUSTRY;
  } else if (hashCode == ACCOUNT_PLANNING_QUALIFICATION_HASH) {
    return FilterableField::ACCOUNT_PLANNING_QUALIFICATION;
  } else if (hashCode == PROGRAM_ELIGIBILITY_HASH) {
    return FilterableField::PROGRAM_ELIGIBILITY;
  } else if (hashCode == IMPORT_ID_HASH) {
    return FilterableField::IMPORT_ID;
  } else if (hashCode == CREATED_DATE_HASH) {
    return FilterableField::CREATED_DATE;
  } else if (hashCode == LAST_MODIFIED_DATE_HASH) {
    return FilterableField::LAST_MODIFIED_DATE;
  } else if (hashCode == GEO_HASH) {
    return FilterableField::GEO;
  } else if (hashCode == COUNTRY_HASH) {
    return FilterableField::COUNTRY;
  } else if (hashCode == SEGMENT_HASH) {
    return FilterableField::SEGMENT;
  } else if (hashCode == SOLUTION_CATEGORY_HASH) {
    return FilterableField::SOLUTION_CATEGORY;
  } else if (hashCode == MARKETPLACE_ENGAGEMENT_SCORE_HASH) {
    return FilterableField::MARKETPLACE_ENGAGEMENT_SCORE;
  } else if (hashCode == SOLUTION_SCORE_HASH) {
    return FilterableField::SOLUTION_SCORE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterableField>(hashCode);
  }

  return FilterableField::NOT_SET;
}

Aws::String GetNameForFilterableField(FilterableField enumValue) {
  switch (enumValue) {
    case FilterableField::NOT_SET:
      return {};
    case FilterableField::ENRICHMENT_STATUS:
      return "ENRICHMENT_STATUS";
    case FilterableField::COMPANY_NAME:
      return "COMPANY_NAME";
    case FilterableField::AWS_INDUSTRY:
      return "AWS_INDUSTRY";
    case FilterableField::ACCOUNT_PLANNING_QUALIFICATION:
      return "ACCOUNT_PLANNING_QUALIFICATION";
    case FilterableField::PROGRAM_ELIGIBILITY:
      return "PROGRAM_ELIGIBILITY";
    case FilterableField::IMPORT_ID:
      return "IMPORT_ID";
    case FilterableField::CREATED_DATE:
      return "CREATED_DATE";
    case FilterableField::LAST_MODIFIED_DATE:
      return "LAST_MODIFIED_DATE";
    case FilterableField::GEO:
      return "GEO";
    case FilterableField::COUNTRY:
      return "COUNTRY";
    case FilterableField::SEGMENT:
      return "SEGMENT";
    case FilterableField::SOLUTION_CATEGORY:
      return "SOLUTION_CATEGORY";
    case FilterableField::MARKETPLACE_ENGAGEMENT_SCORE:
      return "MARKETPLACE_ENGAGEMENT_SCORE";
    case FilterableField::SOLUTION_SCORE:
      return "SOLUTION_SCORE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterableFieldMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
