/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetScheduledActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetScheduledActionRequest::GetScheduledActionRequest() : 
    m_scheduledActionNameHasBeenSet(false)
{
}

Aws::String GetScheduledActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scheduledActionNameHasBeenSet)
  {
   payload.WithString("scheduledActionName", m_scheduledActionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetScheduledActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetScheduledAction"));
  return headers;

}




