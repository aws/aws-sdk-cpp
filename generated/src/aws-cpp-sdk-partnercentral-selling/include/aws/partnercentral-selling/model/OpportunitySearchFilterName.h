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
enum class OpportunitySearchFilterName {
  NOT_SET,
  OpportunityId,
  Stage,
  ReviewStatus,
  CustomerCompanyName,
  LastModifiedDate,
  TargetCloseDate,
  CreatedDate,
  CountryCode,
  PartnerProjectTitle,
  OpportunityType,
  PartnerOpportunityIdentifier,
  Industry,
  AwsAccountId,
  ApnPrograms,
  Origin,
  Tags,
  NextStep,
  OfferId,
  OfferSetId,
  AwsMarketplaceSolution,
  CosellMotion,
  OpportunityOwner,
  EstimatedMrr,
  EngagementScore
};

namespace OpportunitySearchFilterNameMapper {
AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilterName GetOpportunitySearchFilterNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForOpportunitySearchFilterName(OpportunitySearchFilterName value);
}  // namespace OpportunitySearchFilterNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
