/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementCustomer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

EngagementCustomer::EngagementCustomer() : 
    m_companyNameHasBeenSet(false),
    m_countryCode(CountryCode::NOT_SET),
    m_countryCodeHasBeenSet(false),
    m_industry(Industry::NOT_SET),
    m_industryHasBeenSet(false),
    m_websiteUrlHasBeenSet(false)
{
}

EngagementCustomer::EngagementCustomer(JsonView jsonValue)
  : EngagementCustomer()
{
  *this = jsonValue;
}

EngagementCustomer& EngagementCustomer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompanyName"))
  {
    m_companyName = jsonValue.GetString("CompanyName");

    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = CountryCodeMapper::GetCountryCodeForName(jsonValue.GetString("CountryCode"));

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Industry"))
  {
    m_industry = IndustryMapper::GetIndustryForName(jsonValue.GetString("Industry"));

    m_industryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebsiteUrl"))
  {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");

    m_websiteUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue EngagementCustomer::Jsonize() const
{
  JsonValue payload;

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", CountryCodeMapper::GetNameForCountryCode(m_countryCode));
  }

  if(m_industryHasBeenSet)
  {
   payload.WithString("Industry", IndustryMapper::GetNameForIndustry(m_industry));
  }

  if(m_websiteUrlHasBeenSet)
  {
   payload.WithString("WebsiteUrl", m_websiteUrl);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
