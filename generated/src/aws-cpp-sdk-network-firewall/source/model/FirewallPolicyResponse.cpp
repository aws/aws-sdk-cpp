/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FirewallPolicyResponse.h>
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

FirewallPolicyResponse::FirewallPolicyResponse() : 
    m_firewallPolicyNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_firewallPolicyStatus(ResourceStatus::NOT_SET),
    m_firewallPolicyStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_consumedStatelessRuleCapacity(0),
    m_consumedStatelessRuleCapacityHasBeenSet(false),
    m_consumedStatefulRuleCapacity(0),
    m_consumedStatefulRuleCapacityHasBeenSet(false),
    m_numberOfAssociations(0),
    m_numberOfAssociationsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

FirewallPolicyResponse::FirewallPolicyResponse(JsonView jsonValue) : 
    m_firewallPolicyNameHasBeenSet(false),
    m_firewallPolicyArnHasBeenSet(false),
    m_firewallPolicyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_firewallPolicyStatus(ResourceStatus::NOT_SET),
    m_firewallPolicyStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_consumedStatelessRuleCapacity(0),
    m_consumedStatelessRuleCapacityHasBeenSet(false),
    m_consumedStatefulRuleCapacity(0),
    m_consumedStatefulRuleCapacityHasBeenSet(false),
    m_numberOfAssociations(0),
    m_numberOfAssociationsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicyResponse& FirewallPolicyResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallPolicyName"))
  {
    m_firewallPolicyName = jsonValue.GetString("FirewallPolicyName");

    m_firewallPolicyNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyStatus"))
  {
    m_firewallPolicyStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("FirewallPolicyStatus"));

    m_firewallPolicyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedStatelessRuleCapacity"))
  {
    m_consumedStatelessRuleCapacity = jsonValue.GetInteger("ConsumedStatelessRuleCapacity");

    m_consumedStatelessRuleCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedStatefulRuleCapacity"))
  {
    m_consumedStatefulRuleCapacity = jsonValue.GetInteger("ConsumedStatefulRuleCapacity");

    m_consumedStatefulRuleCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfAssociations"))
  {
    m_numberOfAssociations = jsonValue.GetInteger("NumberOfAssociations");

    m_numberOfAssociationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallPolicyResponse::Jsonize() const
{
  JsonValue payload;

  if(m_firewallPolicyNameHasBeenSet)
  {
   payload.WithString("FirewallPolicyName", m_firewallPolicyName);

  }

  if(m_firewallPolicyArnHasBeenSet)
  {
   payload.WithString("FirewallPolicyArn", m_firewallPolicyArn);

  }

  if(m_firewallPolicyIdHasBeenSet)
  {
   payload.WithString("FirewallPolicyId", m_firewallPolicyId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_firewallPolicyStatusHasBeenSet)
  {
   payload.WithString("FirewallPolicyStatus", ResourceStatusMapper::GetNameForResourceStatus(m_firewallPolicyStatus));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_consumedStatelessRuleCapacityHasBeenSet)
  {
   payload.WithInteger("ConsumedStatelessRuleCapacity", m_consumedStatelessRuleCapacity);

  }

  if(m_consumedStatefulRuleCapacityHasBeenSet)
  {
   payload.WithInteger("ConsumedStatefulRuleCapacity", m_consumedStatefulRuleCapacity);

  }

  if(m_numberOfAssociationsHasBeenSet)
  {
   payload.WithInteger("NumberOfAssociations", m_numberOfAssociations);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
