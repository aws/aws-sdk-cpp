/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingControlStatesRequest::UpdateRoutingControlStatesRequest() : 
    m_updateRoutingControlStateEntriesHasBeenSet(false),
    m_safetyRulesToOverrideHasBeenSet(false)
{
}

Aws::String UpdateRoutingControlStatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateRoutingControlStateEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updateRoutingControlStateEntriesJsonList(m_updateRoutingControlStateEntries.size());
   for(unsigned updateRoutingControlStateEntriesIndex = 0; updateRoutingControlStateEntriesIndex < updateRoutingControlStateEntriesJsonList.GetLength(); ++updateRoutingControlStateEntriesIndex)
   {
     updateRoutingControlStateEntriesJsonList[updateRoutingControlStateEntriesIndex].AsObject(m_updateRoutingControlStateEntries[updateRoutingControlStateEntriesIndex].Jsonize());
   }
   payload.WithArray("UpdateRoutingControlStateEntries", std::move(updateRoutingControlStateEntriesJsonList));

  }

  if(m_safetyRulesToOverrideHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> safetyRulesToOverrideJsonList(m_safetyRulesToOverride.size());
   for(unsigned safetyRulesToOverrideIndex = 0; safetyRulesToOverrideIndex < safetyRulesToOverrideJsonList.GetLength(); ++safetyRulesToOverrideIndex)
   {
     safetyRulesToOverrideJsonList[safetyRulesToOverrideIndex].AsString(m_safetyRulesToOverride[safetyRulesToOverrideIndex]);
   }
   payload.WithArray("SafetyRulesToOverride", std::move(safetyRulesToOverrideJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRoutingControlStatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ToggleCustomerAPI.UpdateRoutingControlStates"));
  return headers;

}




