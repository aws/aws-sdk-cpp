/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/IndustrySegment.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace IndustrySegmentMapper {

static const int AGRICULTURE_MINING_HASH = HashingUtils::HashString("AGRICULTURE_MINING");
static const int BIOTECHNOLOGY_HASH = HashingUtils::HashString("BIOTECHNOLOGY");
static const int BUSINESS_CONSUMER_SERVICES_HASH = HashingUtils::HashString("BUSINESS_CONSUMER_SERVICES");
static const int BUSINESS_SERV_HASH = HashingUtils::HashString("BUSINESS_SERV");
static const int COMMUNICATIONS_HASH = HashingUtils::HashString("COMMUNICATIONS");
static const int COMPUTER_HARDWARE_HASH = HashingUtils::HashString("COMPUTER_HARDWARE");
static const int COMPUTERS_ELECTRONICS_HASH = HashingUtils::HashString("COMPUTERS_ELECTRONICS");
static const int COMPUTER_SOFTWARE_HASH = HashingUtils::HashString("COMPUTER_SOFTWARE");
static const int CONSUMER_GOODS_HASH = HashingUtils::HashString("CONSUMER_GOODS");
static const int CONSUMER_RELATED_HASH = HashingUtils::HashString("CONSUMER_RELATED");
static const int EDUCATION_HASH = HashingUtils::HashString("EDUCATION");
static const int ENERGY_UTILITIES_HASH = HashingUtils::HashString("ENERGY_UTILITIES");
static const int FINANCIAL_SERVICES_HASH = HashingUtils::HashString("FINANCIAL_SERVICES");
static const int GAMING_HASH = HashingUtils::HashString("GAMING");
static const int GOVERNMENT_HASH = HashingUtils::HashString("GOVERNMENT");
static const int GOVERNMENT_EDUCATION_PUBLIC_SERVICES_HASH = HashingUtils::HashString("GOVERNMENT_EDUCATION_PUBLIC_SERVICES");
static const int HEALTHCARE_HASH = HashingUtils::HashString("HEALTHCARE");
static const int HEALTHCARE_PHARMACEUTICALS_BIOTECH_HASH = HashingUtils::HashString("HEALTHCARE_PHARMACEUTICALS_BIOTECH");
static const int INDUSTRIAL_ENERGY_HASH = HashingUtils::HashString("INDUSTRIAL_ENERGY");
static const int INTERNET_SPECIFIC_HASH = HashingUtils::HashString("INTERNET_SPECIFIC");
static const int LIFE_SCIENCES_HASH = HashingUtils::HashString("LIFE_SCIENCES");
static const int MANUFACTURING_HASH = HashingUtils::HashString("MANUFACTURING");
static const int MEDIA_ENTERTAINMENT_LEISURE_HASH = HashingUtils::HashString("MEDIA_ENTERTAINMENT_LEISURE");
static const int MEDIA_ENTERTAINMENT_HASH = HashingUtils::HashString("MEDIA_ENTERTAINMENT");
static const int MEDICAL_HEALTH_HASH = HashingUtils::HashString("MEDICAL_HEALTH");
static const int NON_PROFIT_ORGANIZATION_HASH = HashingUtils::HashString("NON_PROFIT_ORGANIZATION");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int PROFESSIONAL_SERVICES_HASH = HashingUtils::HashString("PROFESSIONAL_SERVICES");
static const int REAL_ESTATE_CONSTRUCTION_HASH = HashingUtils::HashString("REAL_ESTATE_CONSTRUCTION");
static const int RETAIL_HASH = HashingUtils::HashString("RETAIL");
static const int RETAIL_WHOLESALE_DISTRIBUTION_HASH = HashingUtils::HashString("RETAIL_WHOLESALE_DISTRIBUTION");
static const int SEMICONDUCTOR_ELECTR_HASH = HashingUtils::HashString("SEMICONDUCTOR_ELECTR");
static const int SOFTWARE_INTERNET_HASH = HashingUtils::HashString("SOFTWARE_INTERNET");
static const int TELECOMMUNICATIONS_HASH = HashingUtils::HashString("TELECOMMUNICATIONS");
static const int TRANSPORTATION_LOGISTICS_HASH = HashingUtils::HashString("TRANSPORTATION_LOGISTICS");
static const int TRAVEL_HOSPITALITY_HASH = HashingUtils::HashString("TRAVEL_HOSPITALITY");
static const int WHOLESALE_DISTRIBUTION_HASH = HashingUtils::HashString("WHOLESALE_DISTRIBUTION");

IndustrySegment GetIndustrySegmentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGRICULTURE_MINING_HASH) {
    return IndustrySegment::AGRICULTURE_MINING;
  } else if (hashCode == BIOTECHNOLOGY_HASH) {
    return IndustrySegment::BIOTECHNOLOGY;
  } else if (hashCode == BUSINESS_CONSUMER_SERVICES_HASH) {
    return IndustrySegment::BUSINESS_CONSUMER_SERVICES;
  } else if (hashCode == BUSINESS_SERV_HASH) {
    return IndustrySegment::BUSINESS_SERV;
  } else if (hashCode == COMMUNICATIONS_HASH) {
    return IndustrySegment::COMMUNICATIONS;
  } else if (hashCode == COMPUTER_HARDWARE_HASH) {
    return IndustrySegment::COMPUTER_HARDWARE;
  } else if (hashCode == COMPUTERS_ELECTRONICS_HASH) {
    return IndustrySegment::COMPUTERS_ELECTRONICS;
  } else if (hashCode == COMPUTER_SOFTWARE_HASH) {
    return IndustrySegment::COMPUTER_SOFTWARE;
  } else if (hashCode == CONSUMER_GOODS_HASH) {
    return IndustrySegment::CONSUMER_GOODS;
  } else if (hashCode == CONSUMER_RELATED_HASH) {
    return IndustrySegment::CONSUMER_RELATED;
  } else if (hashCode == EDUCATION_HASH) {
    return IndustrySegment::EDUCATION;
  } else if (hashCode == ENERGY_UTILITIES_HASH) {
    return IndustrySegment::ENERGY_UTILITIES;
  } else if (hashCode == FINANCIAL_SERVICES_HASH) {
    return IndustrySegment::FINANCIAL_SERVICES;
  } else if (hashCode == GAMING_HASH) {
    return IndustrySegment::GAMING;
  } else if (hashCode == GOVERNMENT_HASH) {
    return IndustrySegment::GOVERNMENT;
  } else if (hashCode == GOVERNMENT_EDUCATION_PUBLIC_SERVICES_HASH) {
    return IndustrySegment::GOVERNMENT_EDUCATION_PUBLIC_SERVICES;
  } else if (hashCode == HEALTHCARE_HASH) {
    return IndustrySegment::HEALTHCARE;
  } else if (hashCode == HEALTHCARE_PHARMACEUTICALS_BIOTECH_HASH) {
    return IndustrySegment::HEALTHCARE_PHARMACEUTICALS_BIOTECH;
  } else if (hashCode == INDUSTRIAL_ENERGY_HASH) {
    return IndustrySegment::INDUSTRIAL_ENERGY;
  } else if (hashCode == INTERNET_SPECIFIC_HASH) {
    return IndustrySegment::INTERNET_SPECIFIC;
  } else if (hashCode == LIFE_SCIENCES_HASH) {
    return IndustrySegment::LIFE_SCIENCES;
  } else if (hashCode == MANUFACTURING_HASH) {
    return IndustrySegment::MANUFACTURING;
  } else if (hashCode == MEDIA_ENTERTAINMENT_LEISURE_HASH) {
    return IndustrySegment::MEDIA_ENTERTAINMENT_LEISURE;
  } else if (hashCode == MEDIA_ENTERTAINMENT_HASH) {
    return IndustrySegment::MEDIA_ENTERTAINMENT;
  } else if (hashCode == MEDICAL_HEALTH_HASH) {
    return IndustrySegment::MEDICAL_HEALTH;
  } else if (hashCode == NON_PROFIT_ORGANIZATION_HASH) {
    return IndustrySegment::NON_PROFIT_ORGANIZATION;
  } else if (hashCode == OTHER_HASH) {
    return IndustrySegment::OTHER;
  } else if (hashCode == PROFESSIONAL_SERVICES_HASH) {
    return IndustrySegment::PROFESSIONAL_SERVICES;
  } else if (hashCode == REAL_ESTATE_CONSTRUCTION_HASH) {
    return IndustrySegment::REAL_ESTATE_CONSTRUCTION;
  } else if (hashCode == RETAIL_HASH) {
    return IndustrySegment::RETAIL;
  } else if (hashCode == RETAIL_WHOLESALE_DISTRIBUTION_HASH) {
    return IndustrySegment::RETAIL_WHOLESALE_DISTRIBUTION;
  } else if (hashCode == SEMICONDUCTOR_ELECTR_HASH) {
    return IndustrySegment::SEMICONDUCTOR_ELECTR;
  } else if (hashCode == SOFTWARE_INTERNET_HASH) {
    return IndustrySegment::SOFTWARE_INTERNET;
  } else if (hashCode == TELECOMMUNICATIONS_HASH) {
    return IndustrySegment::TELECOMMUNICATIONS;
  } else if (hashCode == TRANSPORTATION_LOGISTICS_HASH) {
    return IndustrySegment::TRANSPORTATION_LOGISTICS;
  } else if (hashCode == TRAVEL_HOSPITALITY_HASH) {
    return IndustrySegment::TRAVEL_HOSPITALITY;
  } else if (hashCode == WHOLESALE_DISTRIBUTION_HASH) {
    return IndustrySegment::WHOLESALE_DISTRIBUTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IndustrySegment>(hashCode);
  }

  return IndustrySegment::NOT_SET;
}

Aws::String GetNameForIndustrySegment(IndustrySegment enumValue) {
  switch (enumValue) {
    case IndustrySegment::NOT_SET:
      return {};
    case IndustrySegment::AGRICULTURE_MINING:
      return "AGRICULTURE_MINING";
    case IndustrySegment::BIOTECHNOLOGY:
      return "BIOTECHNOLOGY";
    case IndustrySegment::BUSINESS_CONSUMER_SERVICES:
      return "BUSINESS_CONSUMER_SERVICES";
    case IndustrySegment::BUSINESS_SERV:
      return "BUSINESS_SERV";
    case IndustrySegment::COMMUNICATIONS:
      return "COMMUNICATIONS";
    case IndustrySegment::COMPUTER_HARDWARE:
      return "COMPUTER_HARDWARE";
    case IndustrySegment::COMPUTERS_ELECTRONICS:
      return "COMPUTERS_ELECTRONICS";
    case IndustrySegment::COMPUTER_SOFTWARE:
      return "COMPUTER_SOFTWARE";
    case IndustrySegment::CONSUMER_GOODS:
      return "CONSUMER_GOODS";
    case IndustrySegment::CONSUMER_RELATED:
      return "CONSUMER_RELATED";
    case IndustrySegment::EDUCATION:
      return "EDUCATION";
    case IndustrySegment::ENERGY_UTILITIES:
      return "ENERGY_UTILITIES";
    case IndustrySegment::FINANCIAL_SERVICES:
      return "FINANCIAL_SERVICES";
    case IndustrySegment::GAMING:
      return "GAMING";
    case IndustrySegment::GOVERNMENT:
      return "GOVERNMENT";
    case IndustrySegment::GOVERNMENT_EDUCATION_PUBLIC_SERVICES:
      return "GOVERNMENT_EDUCATION_PUBLIC_SERVICES";
    case IndustrySegment::HEALTHCARE:
      return "HEALTHCARE";
    case IndustrySegment::HEALTHCARE_PHARMACEUTICALS_BIOTECH:
      return "HEALTHCARE_PHARMACEUTICALS_BIOTECH";
    case IndustrySegment::INDUSTRIAL_ENERGY:
      return "INDUSTRIAL_ENERGY";
    case IndustrySegment::INTERNET_SPECIFIC:
      return "INTERNET_SPECIFIC";
    case IndustrySegment::LIFE_SCIENCES:
      return "LIFE_SCIENCES";
    case IndustrySegment::MANUFACTURING:
      return "MANUFACTURING";
    case IndustrySegment::MEDIA_ENTERTAINMENT_LEISURE:
      return "MEDIA_ENTERTAINMENT_LEISURE";
    case IndustrySegment::MEDIA_ENTERTAINMENT:
      return "MEDIA_ENTERTAINMENT";
    case IndustrySegment::MEDICAL_HEALTH:
      return "MEDICAL_HEALTH";
    case IndustrySegment::NON_PROFIT_ORGANIZATION:
      return "NON_PROFIT_ORGANIZATION";
    case IndustrySegment::OTHER:
      return "OTHER";
    case IndustrySegment::PROFESSIONAL_SERVICES:
      return "PROFESSIONAL_SERVICES";
    case IndustrySegment::REAL_ESTATE_CONSTRUCTION:
      return "REAL_ESTATE_CONSTRUCTION";
    case IndustrySegment::RETAIL:
      return "RETAIL";
    case IndustrySegment::RETAIL_WHOLESALE_DISTRIBUTION:
      return "RETAIL_WHOLESALE_DISTRIBUTION";
    case IndustrySegment::SEMICONDUCTOR_ELECTR:
      return "SEMICONDUCTOR_ELECTR";
    case IndustrySegment::SOFTWARE_INTERNET:
      return "SOFTWARE_INTERNET";
    case IndustrySegment::TELECOMMUNICATIONS:
      return "TELECOMMUNICATIONS";
    case IndustrySegment::TRANSPORTATION_LOGISTICS:
      return "TRANSPORTATION_LOGISTICS";
    case IndustrySegment::TRAVEL_HOSPITALITY:
      return "TRAVEL_HOSPITALITY";
    case IndustrySegment::WHOLESALE_DISTRIBUTION:
      return "WHOLESALE_DISTRIBUTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IndustrySegmentMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
