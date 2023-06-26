/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/StartServiceSoftwareUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartServiceSoftwareUpdateRequest::StartServiceSoftwareUpdateRequest() : 
    m_domainNameHasBeenSet(false),
    m_scheduleAt(ScheduleAt::NOT_SET),
    m_scheduleAtHasBeenSet(false),
    m_desiredStartTime(0),
    m_desiredStartTimeHasBeenSet(false)
{
}

Aws::String StartServiceSoftwareUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_scheduleAtHasBeenSet)
  {
   payload.WithString("ScheduleAt", ScheduleAtMapper::GetNameForScheduleAt(m_scheduleAt));
  }

  if(m_desiredStartTimeHasBeenSet)
  {
   payload.WithInt64("DesiredStartTime", m_desiredStartTime);

  }

  return payload.View().WriteReadable();
}




