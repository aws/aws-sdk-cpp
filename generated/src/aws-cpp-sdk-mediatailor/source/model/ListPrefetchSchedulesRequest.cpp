/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ListPrefetchSchedulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListPrefetchSchedulesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_scheduleTypeHasBeenSet)
  {
   payload.WithString("ScheduleType", ListPrefetchScheduleTypeMapper::GetNameForListPrefetchScheduleType(m_scheduleType));
  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("StreamId", m_streamId);

  }

  return payload.View().WriteReadable();
}




