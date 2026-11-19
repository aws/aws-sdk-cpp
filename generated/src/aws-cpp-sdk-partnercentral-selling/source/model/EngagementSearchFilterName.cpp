/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/EngagementSearchFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace EngagementSearchFilterNameMapper {

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
static const int LeadInteractionsSourceType_HASH = HashingUtils::HashString("LeadInteractionsSourceType");
static const int LeadCustomerCompanyName_HASH = HashingUtils::HashString("LeadCustomerCompanyName");
static const int LeadInteractionsContactFirstName_HASH = HashingUtils::HashString("LeadInteractionsContactFirstName");
static const int LeadInteractionsContactLastName_HASH = HashingUtils::HashString("LeadInteractionsContactLastName");
static const int LeadInteractionsUsecase_HASH = HashingUtils::HashString("LeadInteractionsUsecase");
static const int LeadInteractionsSourceName_HASH = HashingUtils::HashString("LeadInteractionsSourceName");
static const int LeadInteractionsContactBusinessTitle_HASH = HashingUtils::HashString("LeadInteractionsContactBusinessTitle");
static const int ContextType_HASH = HashingUtils::HashString("ContextType");

EngagementSearchFilterName GetEngagementSearchFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EngagementId_HASH) {
    return EngagementSearchFilterName::EngagementId;
  } else if (hashCode == Title_HASH) {
    return EngagementSearchFilterName::Title;
  } else if (hashCode == PartnerId_HASH) {
    return EngagementSearchFilterName::PartnerId;
  } else if (hashCode == CreatedAt_HASH) {
    return EngagementSearchFilterName::CreatedAt;
  } else if (hashCode == LastModifiedAt_HASH) {
    return EngagementSearchFilterName::LastModifiedAt;
  } else if (hashCode == MemberCount_HASH) {
    return EngagementSearchFilterName::MemberCount;
  } else if (hashCode == ProspectingCustomerGeo_HASH) {
    return EngagementSearchFilterName::ProspectingCustomerGeo;
  } else if (hashCode == ProspectingCustomerRegion_HASH) {
    return EngagementSearchFilterName::ProspectingCustomerRegion;
  } else if (hashCode == ProspectingCustomerIndustry_HASH) {
    return EngagementSearchFilterName::ProspectingCustomerIndustry;
  } else if (hashCode == ProspectingCustomerSegment_HASH) {
    return EngagementSearchFilterName::ProspectingCustomerSegment;
  } else if (hashCode == ProspectingCustomerCountry_HASH) {
    return EngagementSearchFilterName::ProspectingCustomerCountry;
  } else if (hashCode == ProspectingCustomerCompanySize_HASH) {
    return EngagementSearchFilterName::ProspectingCustomerCompanySize;
  } else if (hashCode == ProspectingInsightsMarketplaceEngagementScore_HASH) {
    return EngagementSearchFilterName::ProspectingInsightsMarketplaceEngagementScore;
  } else if (hashCode == ProspectingInsightsSolutionCategory_HASH) {
    return EngagementSearchFilterName::ProspectingInsightsSolutionCategory;
  } else if (hashCode == ProspectingInsightsSolutionSubCategory_HASH) {
    return EngagementSearchFilterName::ProspectingInsightsSolutionSubCategory;
  } else if (hashCode == LeadQualificationStatus_HASH) {
    return EngagementSearchFilterName::LeadQualificationStatus;
  } else if (hashCode == LeadReadinessScore_HASH) {
    return EngagementSearchFilterName::LeadReadinessScore;
  } else if (hashCode == LeadCustomerIndustry_HASH) {
    return EngagementSearchFilterName::LeadCustomerIndustry;
  } else if (hashCode == LeadCustomerCountryCode_HASH) {
    return EngagementSearchFilterName::LeadCustomerCountryCode;
  } else if (hashCode == LeadCustomerAwsMaturity_HASH) {
    return EngagementSearchFilterName::LeadCustomerAwsMaturity;
  } else if (hashCode == LeadCustomerMarketSegment_HASH) {
    return EngagementSearchFilterName::LeadCustomerMarketSegment;
  } else if (hashCode == LeadInteractionsSourceType_HASH) {
    return EngagementSearchFilterName::LeadInteractionsSourceType;
  } else if (hashCode == LeadCustomerCompanyName_HASH) {
    return EngagementSearchFilterName::LeadCustomerCompanyName;
  } else if (hashCode == LeadInteractionsContactFirstName_HASH) {
    return EngagementSearchFilterName::LeadInteractionsContactFirstName;
  } else if (hashCode == LeadInteractionsContactLastName_HASH) {
    return EngagementSearchFilterName::LeadInteractionsContactLastName;
  } else if (hashCode == LeadInteractionsUsecase_HASH) {
    return EngagementSearchFilterName::LeadInteractionsUsecase;
  } else if (hashCode == LeadInteractionsSourceName_HASH) {
    return EngagementSearchFilterName::LeadInteractionsSourceName;
  } else if (hashCode == LeadInteractionsContactBusinessTitle_HASH) {
    return EngagementSearchFilterName::LeadInteractionsContactBusinessTitle;
  } else if (hashCode == ContextType_HASH) {
    return EngagementSearchFilterName::ContextType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EngagementSearchFilterName>(hashCode);
  }

  return EngagementSearchFilterName::NOT_SET;
}

Aws::String GetNameForEngagementSearchFilterName(EngagementSearchFilterName enumValue) {
  switch (enumValue) {
    case EngagementSearchFilterName::NOT_SET:
      return {};
    case EngagementSearchFilterName::EngagementId:
      return "EngagementId";
    case EngagementSearchFilterName::Title:
      return "Title";
    case EngagementSearchFilterName::PartnerId:
      return "PartnerId";
    case EngagementSearchFilterName::CreatedAt:
      return "CreatedAt";
    case EngagementSearchFilterName::LastModifiedAt:
      return "LastModifiedAt";
    case EngagementSearchFilterName::MemberCount:
      return "MemberCount";
    case EngagementSearchFilterName::ProspectingCustomerGeo:
      return "ProspectingCustomerGeo";
    case EngagementSearchFilterName::ProspectingCustomerRegion:
      return "ProspectingCustomerRegion";
    case EngagementSearchFilterName::ProspectingCustomerIndustry:
      return "ProspectingCustomerIndustry";
    case EngagementSearchFilterName::ProspectingCustomerSegment:
      return "ProspectingCustomerSegment";
    case EngagementSearchFilterName::ProspectingCustomerCountry:
      return "ProspectingCustomerCountry";
    case EngagementSearchFilterName::ProspectingCustomerCompanySize:
      return "ProspectingCustomerCompanySize";
    case EngagementSearchFilterName::ProspectingInsightsMarketplaceEngagementScore:
      return "ProspectingInsightsMarketplaceEngagementScore";
    case EngagementSearchFilterName::ProspectingInsightsSolutionCategory:
      return "ProspectingInsightsSolutionCategory";
    case EngagementSearchFilterName::ProspectingInsightsSolutionSubCategory:
      return "ProspectingInsightsSolutionSubCategory";
    case EngagementSearchFilterName::LeadQualificationStatus:
      return "LeadQualificationStatus";
    case EngagementSearchFilterName::LeadReadinessScore:
      return "LeadReadinessScore";
    case EngagementSearchFilterName::LeadCustomerIndustry:
      return "LeadCustomerIndustry";
    case EngagementSearchFilterName::LeadCustomerCountryCode:
      return "LeadCustomerCountryCode";
    case EngagementSearchFilterName::LeadCustomerAwsMaturity:
      return "LeadCustomerAwsMaturity";
    case EngagementSearchFilterName::LeadCustomerMarketSegment:
      return "LeadCustomerMarketSegment";
    case EngagementSearchFilterName::LeadInteractionsSourceType:
      return "LeadInteractionsSourceType";
    case EngagementSearchFilterName::LeadCustomerCompanyName:
      return "LeadCustomerCompanyName";
    case EngagementSearchFilterName::LeadInteractionsContactFirstName:
      return "LeadInteractionsContactFirstName";
    case EngagementSearchFilterName::LeadInteractionsContactLastName:
      return "LeadInteractionsContactLastName";
    case EngagementSearchFilterName::LeadInteractionsUsecase:
      return "LeadInteractionsUsecase";
    case EngagementSearchFilterName::LeadInteractionsSourceName:
      return "LeadInteractionsSourceName";
    case EngagementSearchFilterName::LeadInteractionsContactBusinessTitle:
      return "LeadInteractionsContactBusinessTitle";
    case EngagementSearchFilterName::ContextType:
      return "ContextType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EngagementSearchFilterNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
