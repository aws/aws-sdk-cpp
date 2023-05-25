/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/CreateRotationOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRotationOverrideRequest::CreateRotationOverrideRequest() : 
    m_rotationIdHasBeenSet(false),
    m_newContactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false)
{
}

Aws::String CreateRotationOverrideRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rotationIdHasBeenSet)
  {
   payload.WithString("RotationId", m_rotationId);

  }

  if(m_newContactIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> newContactIdsJsonList(m_newContactIds.size());
   for(unsigned newContactIdsIndex = 0; newContactIdsIndex < newContactIdsJsonList.GetLength(); ++newContactIdsIndex)
   {
     newContactIdsJsonList[newContactIdsIndex].AsString(m_newContactIds[newContactIdsIndex]);
   }
   payload.WithArray("NewContactIds", std::move(newContactIdsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRotationOverrideRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.CreateRotationOverride"));
  return headers;

}




