/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/AggregatableField.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace AggregatableFieldMapper {

static const int ENRICHMENT_STATUS_HASH = HashingUtils::HashString("ENRICHMENT_STATUS");
static const int AWS_INDUSTRY_HASH = HashingUtils::HashString("AWS_INDUSTRY");
static const int SEGMENT_HASH = HashingUtils::HashString("SEGMENT");
static const int REGION_HASH = HashingUtils::HashString("REGION");
static const int SOLUTION_CATEGORY_HASH = HashingUtils::HashString("SOLUTION_CATEGORY");
static const int ACCOUNT_PLANNING_QUALIFICATION_HASH = HashingUtils::HashString("ACCOUNT_PLANNING_QUALIFICATION");
static const int PROGRAM_ELIGIBILITY_HASH = HashingUtils::HashString("PROGRAM_ELIGIBILITY");
static const int MARKETPLACE_ENGAGEMENT_SCORE_HASH = HashingUtils::HashString("MARKETPLACE_ENGAGEMENT_SCORE");
static const int GEO_HASH = HashingUtils::HashString("GEO");
static const int COUNTRY_HASH = HashingUtils::HashString("COUNTRY");
static const int SOLUTION_SCORE_HASH = HashingUtils::HashString("SOLUTION_SCORE");

AggregatableField GetAggregatableFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENRICHMENT_STATUS_HASH) {
    return AggregatableField::ENRICHMENT_STATUS;
  } else if (hashCode == AWS_INDUSTRY_HASH) {
    return AggregatableField::AWS_INDUSTRY;
  } else if (hashCode == SEGMENT_HASH) {
    return AggregatableField::SEGMENT;
  } else if (hashCode == REGION_HASH) {
    return AggregatableField::REGION;
  } else if (hashCode == SOLUTION_CATEGORY_HASH) {
    return AggregatableField::SOLUTION_CATEGORY;
  } else if (hashCode == ACCOUNT_PLANNING_QUALIFICATION_HASH) {
    return AggregatableField::ACCOUNT_PLANNING_QUALIFICATION;
  } else if (hashCode == PROGRAM_ELIGIBILITY_HASH) {
    return AggregatableField::PROGRAM_ELIGIBILITY;
  } else if (hashCode == MARKETPLACE_ENGAGEMENT_SCORE_HASH) {
    return AggregatableField::MARKETPLACE_ENGAGEMENT_SCORE;
  } else if (hashCode == GEO_HASH) {
    return AggregatableField::GEO;
  } else if (hashCode == COUNTRY_HASH) {
    return AggregatableField::COUNTRY;
  } else if (hashCode == SOLUTION_SCORE_HASH) {
    return AggregatableField::SOLUTION_SCORE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AggregatableField>(hashCode);
  }

  return AggregatableField::NOT_SET;
}

Aws::String GetNameForAggregatableField(AggregatableField enumValue) {
  switch (enumValue) {
    case AggregatableField::NOT_SET:
      return {};
    case AggregatableField::ENRICHMENT_STATUS:
      return "ENRICHMENT_STATUS";
    case AggregatableField::AWS_INDUSTRY:
      return "AWS_INDUSTRY";
    case AggregatableField::SEGMENT:
      return "SEGMENT";
    case AggregatableField::REGION:
      return "REGION";
    case AggregatableField::SOLUTION_CATEGORY:
      return "SOLUTION_CATEGORY";
    case AggregatableField::ACCOUNT_PLANNING_QUALIFICATION:
      return "ACCOUNT_PLANNING_QUALIFICATION";
    case AggregatableField::PROGRAM_ELIGIBILITY:
      return "PROGRAM_ELIGIBILITY";
    case AggregatableField::MARKETPLACE_ENGAGEMENT_SCORE:
      return "MARKETPLACE_ENGAGEMENT_SCORE";
    case AggregatableField::GEO:
      return "GEO";
    case AggregatableField::COUNTRY:
      return "COUNTRY";
    case AggregatableField::SOLUTION_SCORE:
      return "SOLUTION_SCORE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AggregatableFieldMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
