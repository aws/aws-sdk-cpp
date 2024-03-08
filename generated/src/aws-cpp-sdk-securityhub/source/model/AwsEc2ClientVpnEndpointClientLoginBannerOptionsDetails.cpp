/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails::AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_bannerTextHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails::AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_bannerTextHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BannerText"))
  {
    m_bannerText = jsonValue.GetString("BannerText");

    m_bannerTextHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_bannerTextHasBeenSet)
  {
   payload.WithString("BannerText", m_bannerText);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
