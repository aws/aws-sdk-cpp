/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/AddPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddPermissionRequest::AddPermissionRequest() : 
    m_queueUrlHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_aWSAccountIdsHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

Aws::String AddPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_aWSAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aWSAccountIdsJsonList(m_aWSAccountIds.size());
   for(unsigned aWSAccountIdsIndex = 0; aWSAccountIdsIndex < aWSAccountIdsJsonList.GetLength(); ++aWSAccountIdsIndex)
   {
     aWSAccountIdsJsonList[aWSAccountIdsIndex].AsString(m_aWSAccountIds[aWSAccountIdsIndex]);
   }
   payload.WithArray("AWSAccountIds", std::move(aWSAccountIdsJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.AddPermission"));
  return headers;

}




