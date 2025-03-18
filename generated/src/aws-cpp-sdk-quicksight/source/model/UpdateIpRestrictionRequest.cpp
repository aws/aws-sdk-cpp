/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateIpRestrictionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIpRestrictionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ipRestrictionRuleMapHasBeenSet)
  {
   JsonValue ipRestrictionRuleMapJsonMap;
   for(auto& ipRestrictionRuleMapItem : m_ipRestrictionRuleMap)
   {
     ipRestrictionRuleMapJsonMap.WithString(ipRestrictionRuleMapItem.first, ipRestrictionRuleMapItem.second);
   }
   payload.WithObject("IpRestrictionRuleMap", std::move(ipRestrictionRuleMapJsonMap));

  }

  if(m_vpcIdRestrictionRuleMapHasBeenSet)
  {
   JsonValue vpcIdRestrictionRuleMapJsonMap;
   for(auto& vpcIdRestrictionRuleMapItem : m_vpcIdRestrictionRuleMap)
   {
     vpcIdRestrictionRuleMapJsonMap.WithString(vpcIdRestrictionRuleMapItem.first, vpcIdRestrictionRuleMapItem.second);
   }
   payload.WithObject("VpcIdRestrictionRuleMap", std::move(vpcIdRestrictionRuleMapJsonMap));

  }

  if(m_vpcEndpointIdRestrictionRuleMapHasBeenSet)
  {
   JsonValue vpcEndpointIdRestrictionRuleMapJsonMap;
   for(auto& vpcEndpointIdRestrictionRuleMapItem : m_vpcEndpointIdRestrictionRuleMap)
   {
     vpcEndpointIdRestrictionRuleMapJsonMap.WithString(vpcEndpointIdRestrictionRuleMapItem.first, vpcEndpointIdRestrictionRuleMapItem.second);
   }
   payload.WithObject("VpcEndpointIdRestrictionRuleMap", std::move(vpcEndpointIdRestrictionRuleMapJsonMap));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload.View().WriteReadable();
}




