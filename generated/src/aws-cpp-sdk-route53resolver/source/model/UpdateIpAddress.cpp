/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateIpAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

UpdateIpAddress::UpdateIpAddress() : 
    m_ipIdHasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
}

UpdateIpAddress::UpdateIpAddress(JsonView jsonValue) : 
    m_ipIdHasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
  *this = jsonValue;
}

UpdateIpAddress& UpdateIpAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpId"))
  {
    m_ipId = jsonValue.GetString("IpId");

    m_ipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6"))
  {
    m_ipv6 = jsonValue.GetString("Ipv6");

    m_ipv6HasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateIpAddress::Jsonize() const
{
  JsonValue payload;

  if(m_ipIdHasBeenSet)
  {
   payload.WithString("IpId", m_ipId);

  }

  if(m_ipv6HasBeenSet)
  {
   payload.WithString("Ipv6", m_ipv6);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
