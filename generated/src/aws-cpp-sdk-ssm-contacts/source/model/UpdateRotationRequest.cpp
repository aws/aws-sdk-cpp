/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/UpdateRotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRotationRequest::UpdateRotationRequest() : 
    m_rotationIdHasBeenSet(false),
    m_contactIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
}

Aws::String UpdateRotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rotationIdHasBeenSet)
  {
   payload.WithString("RotationId", m_rotationId);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.UpdateRotation"));
  return headers;

}




