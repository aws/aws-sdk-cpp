/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInputSecurityGroupRequest::CreateInputSecurityGroupRequest() : 
    m_tagsHasBeenSet(false),
    m_whitelistRulesHasBeenSet(false)
{
}

Aws::String CreateInputSecurityGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_whitelistRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whitelistRulesJsonList(m_whitelistRules.size());
   for(unsigned whitelistRulesIndex = 0; whitelistRulesIndex < whitelistRulesJsonList.GetLength(); ++whitelistRulesIndex)
   {
     whitelistRulesJsonList[whitelistRulesIndex].AsObject(m_whitelistRules[whitelistRulesIndex].Jsonize());
   }
   payload.WithArray("whitelistRules", std::move(whitelistRulesJsonList));

  }

  return payload.View().WriteReadable();
}




