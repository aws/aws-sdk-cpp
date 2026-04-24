/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/LeadInvitationCustomer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

LeadInvitationCustomer::LeadInvitationCustomer(JsonView jsonValue) { *this = jsonValue; }

LeadInvitationCustomer& LeadInvitationCustomer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Industry")) {
    m_industry = IndustryMapper::GetIndustryForName(jsonValue.GetString("Industry"));
    m_industryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompanyName")) {
    m_companyName = jsonValue.GetString("CompanyName");
    m_companyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebsiteUrl")) {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");
    m_websiteUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CountryCode")) {
    m_countryCode = CountryCodeMapper::GetCountryCodeForName(jsonValue.GetString("CountryCode"));
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsMaturity")) {
    m_awsMaturity = jsonValue.GetString("AwsMaturity");
    m_awsMaturityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MarketSegment")) {
    m_marketSegment = MarketSegmentMapper::GetMarketSegmentForName(jsonValue.GetString("MarketSegment"));
    m_marketSegmentHasBeenSet = true;
  }
  return *this;
}

JsonValue LeadInvitationCustomer::Jsonize() const {
  JsonValue payload;

  if (m_industryHasBeenSet) {
    payload.WithString("Industry", IndustryMapper::GetNameForIndustry(m_industry));
  }

  if (m_companyNameHasBeenSet) {
    payload.WithString("CompanyName", m_companyName);
  }

  if (m_websiteUrlHasBeenSet) {
    payload.WithString("WebsiteUrl", m_websiteUrl);
  }

  if (m_countryCodeHasBeenSet) {
    payload.WithString("CountryCode", CountryCodeMapper::GetNameForCountryCode(m_countryCode));
  }

  if (m_awsMaturityHasBeenSet) {
    payload.WithString("AwsMaturity", m_awsMaturity);
  }

  if (m_marketSegmentHasBeenSet) {
    payload.WithString("MarketSegment", MarketSegmentMapper::GetNameForMarketSegment(m_marketSegment));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
