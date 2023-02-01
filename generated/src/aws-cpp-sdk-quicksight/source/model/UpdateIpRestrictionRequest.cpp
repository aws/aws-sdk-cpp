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

UpdateIpRestrictionRequest::UpdateIpRestrictionRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_ipRestrictionRuleMapHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

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

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload.View().WriteReadable();
}




