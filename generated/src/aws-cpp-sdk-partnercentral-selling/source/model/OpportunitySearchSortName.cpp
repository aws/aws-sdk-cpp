/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/OpportunitySearchSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace OpportunitySearchSortNameMapper {

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
static const int Origin_HASH = HashingUtils::HashString("Origin");
static const int NextStep_HASH = HashingUtils::HashString("NextStep");
static const int CosellMotion_HASH = HashingUtils::HashString("CosellMotion");
static const int OpportunityOwner_HASH = HashingUtils::HashString("OpportunityOwner");
static const int EngagementScore_HASH = HashingUtils::HashString("EngagementScore");
static const int EstimatedMrr_HASH = HashingUtils::HashString("EstimatedMrr");
static const int Tags_HASH = HashingUtils::HashString("Tags");
static const int OfferId_HASH = HashingUtils::HashString("OfferId");
static const int OfferSetId_HASH = HashingUtils::HashString("OfferSetId");
static const int ApnPrograms_HASH = HashingUtils::HashString("ApnPrograms");

OpportunitySearchSortName GetOpportunitySearchSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OpportunityId_HASH) {
    return OpportunitySearchSortName::OpportunityId;
  } else if (hashCode == Stage_HASH) {
    return OpportunitySearchSortName::Stage;
  } else if (hashCode == ReviewStatus_HASH) {
    return OpportunitySearchSortName::ReviewStatus;
  } else if (hashCode == CustomerCompanyName_HASH) {
    return OpportunitySearchSortName::CustomerCompanyName;
  } else if (hashCode == LastModifiedDate_HASH) {
    return OpportunitySearchSortName::LastModifiedDate;
  } else if (hashCode == TargetCloseDate_HASH) {
    return OpportunitySearchSortName::TargetCloseDate;
  } else if (hashCode == CreatedDate_HASH) {
    return OpportunitySearchSortName::CreatedDate;
  } else if (hashCode == CountryCode_HASH) {
    return OpportunitySearchSortName::CountryCode;
  } else if (hashCode == PartnerProjectTitle_HASH) {
    return OpportunitySearchSortName::PartnerProjectTitle;
  } else if (hashCode == OpportunityType_HASH) {
    return OpportunitySearchSortName::OpportunityType;
  } else if (hashCode == PartnerOpportunityIdentifier_HASH) {
    return OpportunitySearchSortName::PartnerOpportunityIdentifier;
  } else if (hashCode == Industry_HASH) {
    return OpportunitySearchSortName::Industry;
  } else if (hashCode == AwsAccountId_HASH) {
    return OpportunitySearchSortName::AwsAccountId;
  } else if (hashCode == Origin_HASH) {
    return OpportunitySearchSortName::Origin;
  } else if (hashCode == NextStep_HASH) {
    return OpportunitySearchSortName::NextStep;
  } else if (hashCode == CosellMotion_HASH) {
    return OpportunitySearchSortName::CosellMotion;
  } else if (hashCode == OpportunityOwner_HASH) {
    return OpportunitySearchSortName::OpportunityOwner;
  } else if (hashCode == EngagementScore_HASH) {
    return OpportunitySearchSortName::EngagementScore;
  } else if (hashCode == EstimatedMrr_HASH) {
    return OpportunitySearchSortName::EstimatedMrr;
  } else if (hashCode == Tags_HASH) {
    return OpportunitySearchSortName::Tags;
  } else if (hashCode == OfferId_HASH) {
    return OpportunitySearchSortName::OfferId;
  } else if (hashCode == OfferSetId_HASH) {
    return OpportunitySearchSortName::OfferSetId;
  } else if (hashCode == ApnPrograms_HASH) {
    return OpportunitySearchSortName::ApnPrograms;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OpportunitySearchSortName>(hashCode);
  }

  return OpportunitySearchSortName::NOT_SET;
}

Aws::String GetNameForOpportunitySearchSortName(OpportunitySearchSortName enumValue) {
  switch (enumValue) {
    case OpportunitySearchSortName::NOT_SET:
      return {};
    case OpportunitySearchSortName::OpportunityId:
      return "OpportunityId";
    case OpportunitySearchSortName::Stage:
      return "Stage";
    case OpportunitySearchSortName::ReviewStatus:
      return "ReviewStatus";
    case OpportunitySearchSortName::CustomerCompanyName:
      return "CustomerCompanyName";
    case OpportunitySearchSortName::LastModifiedDate:
      return "LastModifiedDate";
    case OpportunitySearchSortName::TargetCloseDate:
      return "TargetCloseDate";
    case OpportunitySearchSortName::CreatedDate:
      return "CreatedDate";
    case OpportunitySearchSortName::CountryCode:
      return "CountryCode";
    case OpportunitySearchSortName::PartnerProjectTitle:
      return "PartnerProjectTitle";
    case OpportunitySearchSortName::OpportunityType:
      return "OpportunityType";
    case OpportunitySearchSortName::PartnerOpportunityIdentifier:
      return "PartnerOpportunityIdentifier";
    case OpportunitySearchSortName::Industry:
      return "Industry";
    case OpportunitySearchSortName::AwsAccountId:
      return "AwsAccountId";
    case OpportunitySearchSortName::Origin:
      return "Origin";
    case OpportunitySearchSortName::NextStep:
      return "NextStep";
    case OpportunitySearchSortName::CosellMotion:
      return "CosellMotion";
    case OpportunitySearchSortName::OpportunityOwner:
      return "OpportunityOwner";
    case OpportunitySearchSortName::EngagementScore:
      return "EngagementScore";
    case OpportunitySearchSortName::EstimatedMrr:
      return "EstimatedMrr";
    case OpportunitySearchSortName::Tags:
      return "Tags";
    case OpportunitySearchSortName::OfferId:
      return "OfferId";
    case OpportunitySearchSortName::OfferSetId:
      return "OfferSetId";
    case OpportunitySearchSortName::ApnPrograms:
      return "ApnPrograms";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OpportunitySearchSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
