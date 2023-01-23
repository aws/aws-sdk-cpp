/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CancelJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelJobRequest::CancelJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String CancelJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.CancelJob"));
  return headers;

}




