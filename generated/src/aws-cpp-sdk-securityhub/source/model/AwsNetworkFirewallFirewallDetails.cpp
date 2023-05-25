/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsNetworkFirewallFirewallDetails.h>
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

AwsNetworkFirewallFirewallDetails::AwsNetworkFirewallFirewallDetails() : 
    m_deleteProtection(false),
    m_deleteProtectionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_firewallArnHasBeenSet(false),
    m_firewallIdHasBeenSet(false),
    m_firewallNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyChangeProtection(false),
    m_firewallPolicyChangeProtectionHasBeenSet(false),
    m_subnetChangeProtection(false),
    m_subnetChangeProtectionHasBeenSet(false),
    m_subnetMappingsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

AwsNetworkFirewallFirewallDetails::AwsNetworkFirewallFirewallDetails(JsonView jsonValue) : 
    m_deleteProtection(false),
    m_deleteProtectionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_firewallArnHasBeenSet(false),
    m_firewallIdHasBeenSet(false),
    m_firewallNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyChangeProtection(false),
    m_firewallPolicyChangeProtectionHasBeenSet(false),
    m_subnetChangeProtection(false),
    m_subnetChangeProtectionHasBeenSet(false),
    m_subnetMappingsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsNetworkFirewallFirewallDetails& AwsNetworkFirewallFirewallDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeleteProtection"))
  {
    m_deleteProtection = jsonValue.GetBool("DeleteProtection");

    m_deleteProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");

    m_firewallArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallId"))
  {
    m_firewallId = jsonValue.GetString("FirewallId");

    m_firewallIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");

    m_firewallNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyArn"))
  {
    m_firewallPolicyArn = jsonValue.GetString("FirewallPolicyArn");

    m_firewallPolicyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyChangeProtection"))
  {
    m_firewallPolicyChangeProtection = jsonValue.GetBool("FirewallPolicyChangeProtection");

    m_firewallPolicyChangeProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetChangeProtection"))
  {
    m_subnetChangeProtection = jsonValue.GetBool("SubnetChangeProtection");

    m_subnetChangeProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetMappings"))
  {
    Aws::Utils::Array<JsonView> subnetMappingsJsonList = jsonValue.GetArray("SubnetMappings");
    for(unsigned subnetMappingsIndex = 0; subnetMappingsIndex < subnetMappingsJsonList.GetLength(); ++subnetMappingsIndex)
    {
      m_subnetMappings.push_back(subnetMappingsJsonList[subnetMappingsIndex].AsObject());
    }
    m_subnetMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsNetworkFirewallFirewallDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deleteProtectionHasBeenSet)
  {
   payload.WithBool("DeleteProtection", m_deleteProtection);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_firewallIdHasBeenSet)
  {
   payload.WithString("FirewallId", m_firewallId);

  }

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_firewallPolicyArnHasBeenSet)
  {
   payload.WithString("FirewallPolicyArn", m_firewallPolicyArn);

  }

  if(m_firewallPolicyChangeProtectionHasBeenSet)
  {
   payload.WithBool("FirewallPolicyChangeProtection", m_firewallPolicyChangeProtection);

  }

  if(m_subnetChangeProtectionHasBeenSet)
  {
   payload.WithBool("SubnetChangeProtection", m_subnetChangeProtection);

  }

  if(m_subnetMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetMappingsJsonList(m_subnetMappings.size());
   for(unsigned subnetMappingsIndex = 0; subnetMappingsIndex < subnetMappingsJsonList.GetLength(); ++subnetMappingsIndex)
   {
     subnetMappingsJsonList[subnetMappingsIndex].AsObject(m_subnetMappings[subnetMappingsIndex].Jsonize());
   }
   payload.WithArray("SubnetMappings", std::move(subnetMappingsJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
