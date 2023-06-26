/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetUsageLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUsageLimitRequest::GetUsageLimitRequest() : 
    m_usageLimitIdHasBeenSet(false)
{
}

Aws::String GetUsageLimitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usageLimitIdHasBeenSet)
  {
   payload.WithString("usageLimitId", m_usageLimitId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUsageLimitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetUsageLimit"));
  return headers;

}




