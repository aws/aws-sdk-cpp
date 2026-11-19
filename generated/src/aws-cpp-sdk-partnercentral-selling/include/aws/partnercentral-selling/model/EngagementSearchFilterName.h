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
enum class EngagementSearchFilterName {
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
  LeadInteractionsSourceType,
  LeadCustomerCompanyName,
  LeadInteractionsContactFirstName,
  LeadInteractionsContactLastName,
  LeadInteractionsUsecase,
  LeadInteractionsSourceName,
  LeadInteractionsContactBusinessTitle,
  ContextType
};

namespace EngagementSearchFilterNameMapper {
AWS_PARTNERCENTRALSELLING_API EngagementSearchFilterName GetEngagementSearchFilterNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEngagementSearchFilterName(EngagementSearchFilterName value);
}  // namespace EngagementSearchFilterNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
