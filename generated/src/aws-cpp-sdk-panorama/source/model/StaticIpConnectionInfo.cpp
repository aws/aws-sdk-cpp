/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/StaticIpConnectionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

StaticIpConnectionInfo::StaticIpConnectionInfo() : 
    m_defaultGatewayHasBeenSet(false),
    m_dnsHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_maskHasBeenSet(false)
{
}

StaticIpConnectionInfo::StaticIpConnectionInfo(JsonView jsonValue) : 
    m_defaultGatewayHasBeenSet(false),
    m_dnsHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_maskHasBeenSet(false)
{
  *this = jsonValue;
}

StaticIpConnectionInfo& StaticIpConnectionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultGateway"))
  {
    m_defaultGateway = jsonValue.GetString("DefaultGateway");

    m_defaultGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dns"))
  {
    Aws::Utils::Array<JsonView> dnsJsonList = jsonValue.GetArray("Dns");
    for(unsigned dnsIndex = 0; dnsIndex < dnsJsonList.GetLength(); ++dnsIndex)
    {
      m_dns.push_back(dnsJsonList[dnsIndex].AsString());
    }
    m_dnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mask"))
  {
    m_mask = jsonValue.GetString("Mask");

    m_maskHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticIpConnectionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_defaultGatewayHasBeenSet)
  {
   payload.WithString("DefaultGateway", m_defaultGateway);

  }

  if(m_dnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsJsonList(m_dns.size());
   for(unsigned dnsIndex = 0; dnsIndex < dnsJsonList.GetLength(); ++dnsIndex)
   {
     dnsJsonList[dnsIndex].AsString(m_dns[dnsIndex]);
   }
   payload.WithArray("Dns", std::move(dnsJsonList));

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_maskHasBeenSet)
  {
   payload.WithString("Mask", m_mask);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
