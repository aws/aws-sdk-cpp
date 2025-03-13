/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementMemberSummary.h>
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

EngagementMemberSummary::EngagementMemberSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EngagementMemberSummary& EngagementMemberSummary::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue EngagementMemberSummary::Jsonize() const
{
  JsonValue payload;

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

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
