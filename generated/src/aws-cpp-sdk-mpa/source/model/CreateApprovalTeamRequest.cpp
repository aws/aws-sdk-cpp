/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/CreateApprovalTeamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApprovalTeamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_approvalStrategyHasBeenSet)
  {
   payload.WithObject("ApprovalStrategy", m_approvalStrategy.Jsonize());

  }

  if(m_approversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approversJsonList(m_approvers.size());
   for(unsigned approversIndex = 0; approversIndex < approversJsonList.GetLength(); ++approversIndex)
   {
     approversJsonList[approversIndex].AsObject(m_approvers[approversIndex].Jsonize());
   }
   payload.WithArray("Approvers", std::move(approversJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_policiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
   }
   payload.WithArray("Policies", std::move(policiesJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




