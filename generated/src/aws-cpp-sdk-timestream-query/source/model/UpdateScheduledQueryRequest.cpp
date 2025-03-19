/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/UpdateScheduledQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScheduledQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduledQueryArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryArn", m_scheduledQueryArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ScheduledQueryStateMapper::GetNameForScheduledQueryState(m_state));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateScheduledQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.UpdateScheduledQuery"));
  return headers;

}




