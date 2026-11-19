/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/OpportunitySearchFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace OpportunitySearchFilterNameMapper {

static const int OpportunityId_HASH = HashingUtils::HashString("OpportunityId");
static const int Stage_HASH = HashingUtils::HashString("Stage");
static const int ReviewStatus_HASH = HashingUtils::HashString("ReviewStatus");
static const int CustomerCompanyName_HASH = HashingUtils::HashString("CustomerCompanyName");
static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");
static const int TargetCloseDate_HASH = HashingUtils::HashString("TargetCloseDate");
static const int CreatedDate_HASH = HashingUtils::HashString("CreatedDate");
static const int CountryCode_HASH = HashingUtils::HashString("CountryCode");
static const int PartnerProjectTitle_HASH = HashingUtils::HashString("PartnerProjectTitle");
static const int OpportunityType_HASH = HashingUtils::HashString("OpportunityType");
static const int PartnerOpportunityIdentifier_HASH = HashingUtils::HashString("PartnerOpportunityIdentifier");
static const int Industry_HASH = HashingUtils::HashString("Industry");
static const int AwsAccountId_HASH = HashingUtils::HashString("AwsAccountId");
static const int ApnPrograms_HASH = HashingUtils::HashString("ApnPrograms");
static const int Origin_HASH = HashingUtils::HashString("Origin");
static const int Tags_HASH = HashingUtils::HashString("Tags");
static const int NextStep_HASH = HashingUtils::HashString("NextStep");
static const int OfferId_HASH = HashingUtils::HashString("OfferId");
static const int OfferSetId_HASH = HashingUtils::HashString("OfferSetId");
static const int AwsMarketplaceSolution_HASH = HashingUtils::HashString("AwsMarketplaceSolution");
static const int CosellMotion_HASH = HashingUtils::HashString("CosellMotion");
static const int OpportunityOwner_HASH = HashingUtils::HashString("OpportunityOwner");
static const int EstimatedMrr_HASH = HashingUtils::HashString("EstimatedMrr");
static const int EngagementScore_HASH = HashingUtils::HashString("EngagementScore");

OpportunitySearchFilterName GetOpportunitySearchFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OpportunityId_HASH) {
    return OpportunitySearchFilterName::OpportunityId;
  } else if (hashCode == Stage_HASH) {
    return OpportunitySearchFilterName::Stage;
  } else if (hashCode == ReviewStatus_HASH) {
    return OpportunitySearchFilterName::ReviewStatus;
  } else if (hashCode == CustomerCompanyName_HASH) {
    return OpportunitySearchFilterName::CustomerCompanyName;
  } else if (hashCode == LastModifiedDate_HASH) {
    return OpportunitySearchFilterName::LastModifiedDate;
  } else if (hashCode == TargetCloseDate_HASH) {
    return OpportunitySearchFilterName::TargetCloseDate;
  } else if (hashCode == CreatedDate_HASH) {
    return OpportunitySearchFilterName::CreatedDate;
  } else if (hashCode == CountryCode_HASH) {
    return OpportunitySearchFilterName::CountryCode;
  } else if (hashCode == PartnerProjectTitle_HASH) {
    return OpportunitySearchFilterName::PartnerProjectTitle;
  } else if (hashCode == OpportunityType_HASH) {
    return OpportunitySearchFilterName::OpportunityType;
  } else if (hashCode == PartnerOpportunityIdentifier_HASH) {
    return OpportunitySearchFilterName::PartnerOpportunityIdentifier;
  } else if (hashCode == Industry_HASH) {
    return OpportunitySearchFilterName::Industry;
  } else if (hashCode == AwsAccountId_HASH) {
    return OpportunitySearchFilterName::AwsAccountId;
  } else if (hashCode == ApnPrograms_HASH) {
    return OpportunitySearchFilterName::ApnPrograms;
  } else if (hashCode == Origin_HASH) {
    return OpportunitySearchFilterName::Origin;
  } else if (hashCode == Tags_HASH) {
    return OpportunitySearchFilterName::Tags;
  } else if (hashCode == NextStep_HASH) {
    return OpportunitySearchFilterName::NextStep;
  } else if (hashCode == OfferId_HASH) {
    return OpportunitySearchFilterName::OfferId;
  } else if (hashCode == OfferSetId_HASH) {
    return OpportunitySearchFilterName::OfferSetId;
  } else if (hashCode == AwsMarketplaceSolution_HASH) {
    return OpportunitySearchFilterName::AwsMarketplaceSolution;
  } else if (hashCode == CosellMotion_HASH) {
    return OpportunitySearchFilterName::CosellMotion;
  } else if (hashCode == OpportunityOwner_HASH) {
    return OpportunitySearchFilterName::OpportunityOwner;
  } else if (hashCode == EstimatedMrr_HASH) {
    return OpportunitySearchFilterName::EstimatedMrr;
  } else if (hashCode == EngagementScore_HASH) {
    return OpportunitySearchFilterName::EngagementScore;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OpportunitySearchFilterName>(hashCode);
  }

  return OpportunitySearchFilterName::NOT_SET;
}

Aws::String GetNameForOpportunitySearchFilterName(OpportunitySearchFilterName enumValue) {
  switch (enumValue) {
    case OpportunitySearchFilterName::NOT_SET:
      return {};
    case OpportunitySearchFilterName::OpportunityId:
      return "OpportunityId";
    case OpportunitySearchFilterName::Stage:
      return "Stage";
    case OpportunitySearchFilterName::ReviewStatus:
      return "ReviewStatus";
    case OpportunitySearchFilterName::CustomerCompanyName:
      return "CustomerCompanyName";
    case OpportunitySearchFilterName::LastModifiedDate:
      return "LastModifiedDate";
    case OpportunitySearchFilterName::TargetCloseDate:
      return "TargetCloseDate";
    case OpportunitySearchFilterName::CreatedDate:
      return "CreatedDate";
    case OpportunitySearchFilterName::CountryCode:
      return "CountryCode";
    case OpportunitySearchFilterName::PartnerProjectTitle:
      return "PartnerProjectTitle";
    case OpportunitySearchFilterName::OpportunityType:
      return "OpportunityType";
    case OpportunitySearchFilterName::PartnerOpportunityIdentifier:
      return "PartnerOpportunityIdentifier";
    case OpportunitySearchFilterName::Industry:
      return "Industry";
    case OpportunitySearchFilterName::AwsAccountId:
      return "AwsAccountId";
    case OpportunitySearchFilterName::ApnPrograms:
      return "ApnPrograms";
    case OpportunitySearchFilterName::Origin:
      return "Origin";
    case OpportunitySearchFilterName::Tags:
      return "Tags";
    case OpportunitySearchFilterName::NextStep:
      return "NextStep";
    case OpportunitySearchFilterName::OfferId:
      return "OfferId";
    case OpportunitySearchFilterName::OfferSetId:
      return "OfferSetId";
    case OpportunitySearchFilterName::AwsMarketplaceSolution:
      return "AwsMarketplaceSolution";
    case OpportunitySearchFilterName::CosellMotion:
      return "CosellMotion";
    case OpportunitySearchFilterName::OpportunityOwner:
      return "OpportunityOwner";
    case OpportunitySearchFilterName::EstimatedMrr:
      return "EstimatedMrr";
    case OpportunitySearchFilterName::EngagementScore:
      return "EngagementScore";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OpportunitySearchFilterNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
