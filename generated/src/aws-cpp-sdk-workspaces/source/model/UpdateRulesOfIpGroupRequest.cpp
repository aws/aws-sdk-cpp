/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateRulesOfIpGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRulesOfIpGroupRequest::UpdateRulesOfIpGroupRequest() : 
    m_groupIdHasBeenSet(false),
    m_userRulesHasBeenSet(false)
{
}

Aws::String UpdateRulesOfIpGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_userRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userRulesJsonList(m_userRules.size());
   for(unsigned userRulesIndex = 0; userRulesIndex < userRulesJsonList.GetLength(); ++userRulesIndex)
   {
     userRulesJsonList[userRulesIndex].AsObject(m_userRules[userRulesIndex].Jsonize());
   }
   payload.WithArray("UserRules", std::move(userRulesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRulesOfIpGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateRulesOfIpGroup"));
  return headers;

}




