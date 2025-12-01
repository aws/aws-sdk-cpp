/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class IndustrySegment {
  NOT_SET,
  AGRICULTURE_MINING,
  BIOTECHNOLOGY,
  BUSINESS_CONSUMER_SERVICES,
  BUSINESS_SERV,
  COMMUNICATIONS,
  COMPUTER_HARDWARE,
  COMPUTERS_ELECTRONICS,
  COMPUTER_SOFTWARE,
  CONSUMER_GOODS,
  CONSUMER_RELATED,
  EDUCATION,
  ENERGY_UTILITIES,
  FINANCIAL_SERVICES,
  GAMING,
  GOVERNMENT,
  GOVERNMENT_EDUCATION_PUBLIC_SERVICES,
  HEALTHCARE,
  HEALTHCARE_PHARMACEUTICALS_BIOTECH,
  INDUSTRIAL_ENERGY,
  INTERNET_SPECIFIC,
  LIFE_SCIENCES,
  MANUFACTURING,
  MEDIA_ENTERTAINMENT_LEISURE,
  MEDIA_ENTERTAINMENT,
  MEDICAL_HEALTH,
  NON_PROFIT_ORGANIZATION,
  OTHER,
  PROFESSIONAL_SERVICES,
  REAL_ESTATE_CONSTRUCTION,
  RETAIL,
  RETAIL_WHOLESALE_DISTRIBUTION,
  SEMICONDUCTOR_ELECTR,
  SOFTWARE_INTERNET,
  TELECOMMUNICATIONS,
  TRANSPORTATION_LOGISTICS,
  TRAVEL_HOSPITALITY,
  WHOLESALE_DISTRIBUTION
};

namespace IndustrySegmentMapper {
AWS_PARTNERCENTRALACCOUNT_API IndustrySegment GetIndustrySegmentForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForIndustrySegment(IndustrySegment value);
}  // namespace IndustrySegmentMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
