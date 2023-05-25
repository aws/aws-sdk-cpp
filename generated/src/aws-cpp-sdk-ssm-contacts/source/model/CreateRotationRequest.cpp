/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/CreateRotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRotationRequest::CreateRotationRequest() : 
    m_nameHasBeenSet(false),
    m_contactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false)
{
}

Aws::String CreateRotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_contactIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactIdsJsonList(m_contactIds.size());
   for(unsigned contactIdsIndex = 0; contactIdsIndex < contactIdsJsonList.GetLength(); ++contactIdsIndex)
   {
     contactIdsJsonList[contactIdsIndex].AsString(m_contactIds[contactIdsIndex]);
   }
   payload.WithArray("ContactIds", std::move(contactIdsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithObject("Recurrence", m_recurrence.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.CreateRotation"));
  return headers;

}




