/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/IpAddressUpdate.h>
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

IpAddressUpdate::IpAddressUpdate() : 
    m_ipIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
}

IpAddressUpdate::IpAddressUpdate(JsonView jsonValue) : 
    m_ipIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
  *this = jsonValue;
}

IpAddressUpdate& IpAddressUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpId"))
  {
    m_ipId = jsonValue.GetString("IpId");

    m_ipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");

    m_ipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6"))
  {
    m_ipv6 = jsonValue.GetString("Ipv6");

    m_ipv6HasBeenSet = true;
  }

  return *this;
}

JsonValue IpAddressUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_ipIdHasBeenSet)
  {
   payload.WithString("IpId", m_ipId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

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
