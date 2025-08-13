/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Account.h>
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

Account::Account(JsonView jsonValue)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Industry"))
  {
    m_industry = IndustryMapper::GetIndustryForName(jsonValue.GetString("Industry"));
    m_industryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtherIndustry"))
  {
    m_otherIndustry = jsonValue.GetString("OtherIndustry");
    m_otherIndustryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompanyName"))
  {
    m_companyName = jsonValue.GetString("CompanyName");
    m_companyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebsiteUrl"))
  {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");
    m_websiteUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duns"))
  {
    m_duns = jsonValue.GetString("Duns");
    m_dunsHasBeenSet = true;
  }
  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_industryHasBeenSet)
  {
   payload.WithString("Industry", IndustryMapper::GetNameForIndustry(m_industry));
  }

  if(m_otherIndustryHasBeenSet)
  {
   payload.WithString("OtherIndustry", m_otherIndustry);

  }

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

  }

  if(m_websiteUrlHasBeenSet)
  {
   payload.WithString("WebsiteUrl", m_websiteUrl);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

  }

  if(m_dunsHasBeenSet)
  {
   payload.WithString("Duns", m_duns);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
