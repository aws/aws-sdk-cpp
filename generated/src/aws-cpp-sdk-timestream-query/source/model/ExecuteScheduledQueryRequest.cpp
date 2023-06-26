/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ExecuteScheduledQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteScheduledQueryRequest::ExecuteScheduledQueryRequest() : 
    m_scheduledQueryArnHasBeenSet(false),
    m_invocationTimeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String ExecuteScheduledQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduledQueryArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryArn", m_scheduledQueryArn);

  }

  if(m_invocationTimeHasBeenSet)
  {
   payload.WithDouble("InvocationTime", m_invocationTime.SecondsWithMSPrecision());
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteScheduledQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.ExecuteScheduledQuery"));
  return headers;

}




