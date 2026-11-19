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
enum class EngagementSearchSortName {
  NOT_SET,
  EngagementId,
  Title,
  PartnerId,
  CreatedAt,
  LastModifiedAt,
  MemberCount,
  ProspectingCustomerGeo,
  ProspectingCustomerRegion,
  ProspectingCustomerIndustry,
  ProspectingCustomerSegment,
  ProspectingCustomerCountry,
  ProspectingCustomerCompanySize,
  ProspectingInsightsMarketplaceEngagementScore,
  ProspectingInsightsSolutionCategory,
  ProspectingInsightsSolutionSubCategory,
  LeadQualificationStatus,
  LeadReadinessScore,
  LeadCustomerIndustry,
  LeadCustomerCountryCode,
  LeadCustomerAwsMaturity,
  LeadCustomerMarketSegment,
  LeadCustomerCompanyName,
  LeadInteractionsContactFirstName,
  LeadInteractionsContactLastName,
  LeadInteractionsUsecase,
  LeadInteractionsContactBusinessTitle
};

namespace EngagementSearchSortNameMapper {
AWS_PARTNERCENTRALSELLING_API EngagementSearchSortName GetEngagementSearchSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEngagementSearchSortName(EngagementSearchSortName value);
}  // namespace EngagementSearchSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
