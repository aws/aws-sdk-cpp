/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceIpv6Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

InstanceIpv6Address::InstanceIpv6Address(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceIpv6Address& InstanceIpv6Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("Ipv6Address");
    m_ipv6AddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsPrimaryIpv6"))
  {
    m_isPrimaryIpv6 = jsonValue.GetBool("IsPrimaryIpv6");
    m_isPrimaryIpv6HasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceIpv6Address::Jsonize() const
{
  JsonValue payload;

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("Ipv6Address", m_ipv6Address);

  }

  if(m_isPrimaryIpv6HasBeenSet)
  {
   payload.WithBool("IsPrimaryIpv6", m_isPrimaryIpv6);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
