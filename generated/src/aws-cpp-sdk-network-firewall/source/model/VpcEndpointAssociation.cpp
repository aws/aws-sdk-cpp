/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/VpcEndpointAssociation.h>
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

VpcEndpointAssociation::VpcEndpointAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcEndpointAssociation& VpcEndpointAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcEndpointAssociationId"))
  {
    m_vpcEndpointAssociationId = jsonValue.GetString("VpcEndpointAssociationId");
    m_vpcEndpointAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointAssociationArn"))
  {
    m_vpcEndpointAssociationArn = jsonValue.GetString("VpcEndpointAssociationArn");
    m_vpcEndpointAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");
    m_firewallArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetMapping"))
  {
    m_subnetMapping = jsonValue.GetObject("SubnetMapping");
    m_subnetMappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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
  return *this;
}

JsonValue VpcEndpointAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointAssociationIdHasBeenSet)
  {
   payload.WithString("VpcEndpointAssociationId", m_vpcEndpointAssociationId);

  }

  if(m_vpcEndpointAssociationArnHasBeenSet)
  {
   payload.WithString("VpcEndpointAssociationArn", m_vpcEndpointAssociationArn);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetMappingHasBeenSet)
  {
   payload.WithObject("SubnetMapping", m_subnetMapping.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
