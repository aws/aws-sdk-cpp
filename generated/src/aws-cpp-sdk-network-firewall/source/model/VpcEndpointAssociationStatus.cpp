/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/VpcEndpointAssociationStatus.h>
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

VpcEndpointAssociationStatus::VpcEndpointAssociationStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcEndpointAssociationStatus& VpcEndpointAssociationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FirewallStatusValueMapper::GetFirewallStatusValueForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationSyncState"))
  {
    Aws::Map<Aws::String, JsonView> associationSyncStateJsonMap = jsonValue.GetObject("AssociationSyncState").GetAllObjects();
    for(auto& associationSyncStateItem : associationSyncStateJsonMap)
    {
      m_associationSyncState[associationSyncStateItem.first] = associationSyncStateItem.second.AsObject();
    }
    m_associationSyncStateHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcEndpointAssociationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FirewallStatusValueMapper::GetNameForFirewallStatusValue(m_status));
  }

  if(m_associationSyncStateHasBeenSet)
  {
   JsonValue associationSyncStateJsonMap;
   for(auto& associationSyncStateItem : m_associationSyncState)
   {
     associationSyncStateJsonMap.WithObject(associationSyncStateItem.first, associationSyncStateItem.second.Jsonize());
   }
   payload.WithObject("AssociationSyncState", std::move(associationSyncStateJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
