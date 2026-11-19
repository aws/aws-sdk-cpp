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
enum class OpportunitySearchSortName {
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
  Origin,
  NextStep,
  CosellMotion,
  OpportunityOwner,
  EngagementScore,
  EstimatedMrr,
  Tags,
  OfferId,
  OfferSetId,
  ApnPrograms
};

namespace OpportunitySearchSortNameMapper {
AWS_PARTNERCENTRALSELLING_API OpportunitySearchSortName GetOpportunitySearchSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForOpportunitySearchSortName(OpportunitySearchSortName value);
}  // namespace OpportunitySearchSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
