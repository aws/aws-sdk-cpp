/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FirewallMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

FirewallMetadata::FirewallMetadata() : 
    m_firewallNameHasBeenSet(false),
    m_firewallArnHasBeenSet(false)
{
}

FirewallMetadata::FirewallMetadata(JsonView jsonValue) : 
    m_firewallNameHasBeenSet(false),
    m_firewallArnHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallMetadata& FirewallMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");

    m_firewallNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");

    m_firewallArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
