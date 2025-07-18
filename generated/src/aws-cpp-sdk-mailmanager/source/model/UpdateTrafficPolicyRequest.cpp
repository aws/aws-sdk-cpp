/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/UpdateTrafficPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTrafficPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trafficPolicyIdHasBeenSet)
  {
   payload.WithString("TrafficPolicyId", m_trafficPolicyId);

  }

  if(m_trafficPolicyNameHasBeenSet)
  {
   payload.WithString("TrafficPolicyName", m_trafficPolicyName);

  }

  if(m_policyStatementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyStatementsJsonList(m_policyStatements.size());
   for(unsigned policyStatementsIndex = 0; policyStatementsIndex < policyStatementsJsonList.GetLength(); ++policyStatementsIndex)
   {
     policyStatementsJsonList[policyStatementsIndex].AsObject(m_policyStatements[policyStatementsIndex].Jsonize());
   }
   payload.WithArray("PolicyStatements", std::move(policyStatementsJsonList));

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("DefaultAction", AcceptActionMapper::GetNameForAcceptAction(m_defaultAction));
  }

  if(m_maxMessageSizeBytesHasBeenSet)
  {
   payload.WithInteger("MaxMessageSizeBytes", m_maxMessageSizeBytes);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTrafficPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.UpdateTrafficPolicy"));
  return headers;

}




