/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/EngagementSearchSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace EngagementSearchSortNameMapper {

static const int EngagementId_HASH = HashingUtils::HashString("EngagementId");
static const int Title_HASH = HashingUtils::HashString("Title");
static const int PartnerId_HASH = HashingUtils::HashString("PartnerId");
static const int CreatedAt_HASH = HashingUtils::HashString("CreatedAt");
static const int LastModifiedAt_HASH = HashingUtils::HashString("LastModifiedAt");
static const int MemberCount_HASH = HashingUtils::HashString("MemberCount");
static const int ProspectingCustomerGeo_HASH = HashingUtils::HashString("ProspectingCustomerGeo");
static const int ProspectingCustomerRegion_HASH = HashingUtils::HashString("ProspectingCustomerRegion");
static const int ProspectingCustomerIndustry_HASH = HashingUtils::HashString("ProspectingCustomerIndustry");
static const int ProspectingCustomerSegment_HASH = HashingUtils::HashString("ProspectingCustomerSegment");
static const int ProspectingCustomerCountry_HASH = HashingUtils::HashString("ProspectingCustomerCountry");
static const int ProspectingCustomerCompanySize_HASH = HashingUtils::HashString("ProspectingCustomerCompanySize");
static const int ProspectingInsightsMarketplaceEngagementScore_HASH =
    HashingUtils::HashString("ProspectingInsightsMarketplaceEngagementScore");
static const int ProspectingInsightsSolutionCategory_HASH = HashingUtils::HashString("ProspectingInsightsSolutionCategory");
static const int ProspectingInsightsSolutionSubCategory_HASH = HashingUtils::HashString("ProspectingInsightsSolutionSubCategory");
static const int LeadQualificationStatus_HASH = HashingUtils::HashString("LeadQualificationStatus");
static const int LeadReadinessScore_HASH = HashingUtils::HashString("LeadReadinessScore");
static const int LeadCustomerIndustry_HASH = HashingUtils::HashString("LeadCustomerIndustry");
static const int LeadCustomerCountryCode_HASH = HashingUtils::HashString("LeadCustomerCountryCode");
static const int LeadCustomerAwsMaturity_HASH = HashingUtils::HashString("LeadCustomerAwsMaturity");
static const int LeadCustomerMarketSegment_HASH = HashingUtils::HashString("LeadCustomerMarketSegment");
static const int LeadCustomerCompanyName_HASH = HashingUtils::HashString("LeadCustomerCompanyName");
static const int LeadInteractionsContactFirstName_HASH = HashingUtils::HashString("LeadInteractionsContactFirstName");
static const int LeadInteractionsContactLastName_HASH = HashingUtils::HashString("LeadInteractionsContactLastName");
static const int LeadInteractionsUsecase_HASH = HashingUtils::HashString("LeadInteractionsUsecase");
static const int LeadInteractionsContactBusinessTitle_HASH = HashingUtils::HashString("LeadInteractionsContactBusinessTitle");

EngagementSearchSortName GetEngagementSearchSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EngagementId_HASH) {
    return EngagementSearchSortName::EngagementId;
  } else if (hashCode == Title_HASH) {
    return EngagementSearchSortName::Title;
  } else if (hashCode == PartnerId_HASH) {
    return EngagementSearchSortName::PartnerId;
  } else if (hashCode == CreatedAt_HASH) {
    return EngagementSearchSortName::CreatedAt;
  } else if (hashCode == LastModifiedAt_HASH) {
    return EngagementSearchSortName::LastModifiedAt;
  } else if (hashCode == MemberCount_HASH) {
    return EngagementSearchSortName::MemberCount;
  } else if (hashCode == ProspectingCustomerGeo_HASH) {
    return EngagementSearchSortName::ProspectingCustomerGeo;
  } else if (hashCode == ProspectingCustomerRegion_HASH) {
    return EngagementSearchSortName::ProspectingCustomerRegion;
  } else if (hashCode == ProspectingCustomerIndustry_HASH) {
    return EngagementSearchSortName::ProspectingCustomerIndustry;
  } else if (hashCode == ProspectingCustomerSegment_HASH) {
    return EngagementSearchSortName::ProspectingCustomerSegment;
  } else if (hashCode == ProspectingCustomerCountry_HASH) {
    return EngagementSearchSortName::ProspectingCustomerCountry;
  } else if (hashCode == ProspectingCustomerCompanySize_HASH) {
    return EngagementSearchSortName::ProspectingCustomerCompanySize;
  } else if (hashCode == ProspectingInsightsMarketplaceEngagementScore_HASH) {
    return EngagementSearchSortName::ProspectingInsightsMarketplaceEngagementScore;
  } else if (hashCode == ProspectingInsightsSolutionCategory_HASH) {
    return EngagementSearchSortName::ProspectingInsightsSolutionCategory;
  } else if (hashCode == ProspectingInsightsSolutionSubCategory_HASH) {
    return EngagementSearchSortName::ProspectingInsightsSolutionSubCategory;
  } else if (hashCode == LeadQualificationStatus_HASH) {
    return EngagementSearchSortName::LeadQualificationStatus;
  } else if (hashCode == LeadReadinessScore_HASH) {
    return EngagementSearchSortName::LeadReadinessScore;
  } else if (hashCode == LeadCustomerIndustry_HASH) {
    return EngagementSearchSortName::LeadCustomerIndustry;
  } else if (hashCode == LeadCustomerCountryCode_HASH) {
    return EngagementSearchSortName::LeadCustomerCountryCode;
  } else if (hashCode == LeadCustomerAwsMaturity_HASH) {
    return EngagementSearchSortName::LeadCustomerAwsMaturity;
  } else if (hashCode == LeadCustomerMarketSegment_HASH) {
    return EngagementSearchSortName::LeadCustomerMarketSegment;
  } else if (hashCode == LeadCustomerCompanyName_HASH) {
    return EngagementSearchSortName::LeadCustomerCompanyName;
  } else if (hashCode == LeadInteractionsContactFirstName_HASH) {
    return EngagementSearchSortName::LeadInteractionsContactFirstName;
  } else if (hashCode == LeadInteractionsContactLastName_HASH) {
    return EngagementSearchSortName::LeadInteractionsContactLastName;
  } else if (hashCode == LeadInteractionsUsecase_HASH) {
    return EngagementSearchSortName::LeadInteractionsUsecase;
  } else if (hashCode == LeadInteractionsContactBusinessTitle_HASH) {
    return EngagementSearchSortName::LeadInteractionsContactBusinessTitle;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EngagementSearchSortName>(hashCode);
  }

  return EngagementSearchSortName::NOT_SET;
}

Aws::String GetNameForEngagementSearchSortName(EngagementSearchSortName enumValue) {
  switch (enumValue) {
    case EngagementSearchSortName::NOT_SET:
      return {};
    case EngagementSearchSortName::EngagementId:
      return "EngagementId";
    case EngagementSearchSortName::Title:
      return "Title";
    case EngagementSearchSortName::PartnerId:
      return "PartnerId";
    case EngagementSearchSortName::CreatedAt:
      return "CreatedAt";
    case EngagementSearchSortName::LastModifiedAt:
      return "LastModifiedAt";
    case EngagementSearchSortName::MemberCount:
      return "MemberCount";
    case EngagementSearchSortName::ProspectingCustomerGeo:
      return "ProspectingCustomerGeo";
    case EngagementSearchSortName::ProspectingCustomerRegion:
      return "ProspectingCustomerRegion";
    case EngagementSearchSortName::ProspectingCustomerIndustry:
      return "ProspectingCustomerIndustry";
    case EngagementSearchSortName::ProspectingCustomerSegment:
      return "ProspectingCustomerSegment";
    case EngagementSearchSortName::ProspectingCustomerCountry:
      return "ProspectingCustomerCountry";
    case EngagementSearchSortName::ProspectingCustomerCompanySize:
      return "ProspectingCustomerCompanySize";
    case EngagementSearchSortName::ProspectingInsightsMarketplaceEngagementScore:
      return "ProspectingInsightsMarketplaceEngagementScore";
    case EngagementSearchSortName::ProspectingInsightsSolutionCategory:
      return "ProspectingInsightsSolutionCategory";
    case EngagementSearchSortName::ProspectingInsightsSolutionSubCategory:
      return "ProspectingInsightsSolutionSubCategory";
    case EngagementSearchSortName::LeadQualificationStatus:
      return "LeadQualificationStatus";
    case EngagementSearchSortName::LeadReadinessScore:
      return "LeadReadinessScore";
    case EngagementSearchSortName::LeadCustomerIndustry:
      return "LeadCustomerIndustry";
    case EngagementSearchSortName::LeadCustomerCountryCode:
      return "LeadCustomerCountryCode";
    case EngagementSearchSortName::LeadCustomerAwsMaturity:
      return "LeadCustomerAwsMaturity";
    case EngagementSearchSortName::LeadCustomerMarketSegment:
      return "LeadCustomerMarketSegment";
    case EngagementSearchSortName::LeadCustomerCompanyName:
      return "LeadCustomerCompanyName";
    case EngagementSearchSortName::LeadInteractionsContactFirstName:
      return "LeadInteractionsContactFirstName";
    case EngagementSearchSortName::LeadInteractionsContactLastName:
      return "LeadInteractionsContactLastName";
    case EngagementSearchSortName::LeadInteractionsUsecase:
      return "LeadInteractionsUsecase";
    case EngagementSearchSortName::LeadInteractionsContactBusinessTitle:
      return "LeadInteractionsContactBusinessTitle";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EngagementSearchSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
