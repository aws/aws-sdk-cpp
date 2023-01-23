/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsNetworkFirewallFirewallPolicyDetails.h>
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

AwsNetworkFirewallFirewallPolicyDetails::AwsNetworkFirewallFirewallPolicyDetails() : 
    m_firewallPolicyHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyIdHasBeenSet(false),
    m_firewallPolicyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

AwsNetworkFirewallFirewallPolicyDetails::AwsNetworkFirewallFirewallPolicyDetails(JsonView jsonValue) : 
    m_firewallPolicyHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyIdHasBeenSet(false),
    m_firewallPolicyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsNetworkFirewallFirewallPolicyDetails& AwsNetworkFirewallFirewallPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallPolicy"))
  {
    m_firewallPolicy = jsonValue.GetObject("FirewallPolicy");

    m_firewallPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyArn"))
  {
    m_firewallPolicyArn = jsonValue.GetString("FirewallPolicyArn");

    m_firewallPolicyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyId"))
  {
    m_firewallPolicyId = jsonValue.GetString("FirewallPolicyId");

    m_firewallPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyName"))
  {
    m_firewallPolicyName = jsonValue.GetString("FirewallPolicyName");

    m_firewallPolicyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsNetworkFirewallFirewallPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_firewallPolicyHasBeenSet)
  {
   payload.WithObject("FirewallPolicy", m_firewallPolicy.Jsonize());

  }

  if(m_firewallPolicyArnHasBeenSet)
  {
   payload.WithString("FirewallPolicyArn", m_firewallPolicyArn);

  }

  if(m_firewallPolicyIdHasBeenSet)
  {
   payload.WithString("FirewallPolicyId", m_firewallPolicyId);

  }

  if(m_firewallPolicyNameHasBeenSet)
  {
   payload.WithString("FirewallPolicyName", m_firewallPolicyName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
