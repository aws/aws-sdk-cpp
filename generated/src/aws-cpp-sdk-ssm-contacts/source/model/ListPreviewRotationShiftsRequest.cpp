/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ListPreviewRotationShiftsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPreviewRotationShiftsRequest::ListPreviewRotationShiftsRequest() : 
    m_rotationStartTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListPreviewRotationShiftsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rotationStartTimeHasBeenSet)
  {
   payload.WithDouble("RotationStartTime", m_rotationStartTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_membersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsString(m_members[membersIndex]);
   }
   payload.WithArray("Members", std::move(membersJsonList));

  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithObject("Recurrence", m_recurrence.Jsonize());

  }

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("Overrides", std::move(overridesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListPreviewRotationShiftsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.ListPreviewRotationShifts"));
  return headers;

}




