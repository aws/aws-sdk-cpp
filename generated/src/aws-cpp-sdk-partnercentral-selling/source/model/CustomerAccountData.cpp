/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/CustomerAccountData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

CustomerAccountData::CustomerAccountData(JsonView jsonValue) { *this = jsonValue; }

CustomerAccountData& CustomerAccountData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CompanyName")) {
    m_companyName = jsonValue.GetString("CompanyName");
    m_companyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebsiteUrl")) {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");
    m_websiteUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Duns")) {
    m_duns = jsonValue.GetString("Duns");
    m_dunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Address")) {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Industry")) {
    m_industry = jsonValue.GetString("Industry");
    m_industryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OtherIndustry")) {
    m_otherIndustry = jsonValue.GetString("OtherIndustry");
    m_otherIndustryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Domain")) {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ParentCompanyName")) {
    m_parentCompanyName = jsonValue.GetString("ParentCompanyName");
    m_parentCompanyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAccountData::Jsonize() const {
  JsonValue payload;

  if (m_companyNameHasBeenSet) {
    payload.WithString("CompanyName", m_companyName);
  }

  if (m_websiteUrlHasBeenSet) {
    payload.WithString("WebsiteUrl", m_websiteUrl);
  }

  if (m_dunsHasBeenSet) {
    payload.WithString("Duns", m_duns);
  }

  if (m_addressHasBeenSet) {
    payload.WithObject("Address", m_address.Jsonize());
  }

  if (m_industryHasBeenSet) {
    payload.WithString("Industry", m_industry);
  }

  if (m_otherIndustryHasBeenSet) {
    payload.WithString("OtherIndustry", m_otherIndustry);
  }

  if (m_domainHasBeenSet) {
    payload.WithString("Domain", m_domain);
  }

  if (m_parentCompanyNameHasBeenSet) {
    payload.WithString("ParentCompanyName", m_parentCompanyName);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
