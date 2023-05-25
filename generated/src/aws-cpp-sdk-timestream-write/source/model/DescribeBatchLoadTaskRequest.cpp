/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DescribeBatchLoadTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBatchLoadTaskRequest::DescribeBatchLoadTaskRequest() : 
    m_taskIdHasBeenSet(false)
{
}

Aws::String DescribeBatchLoadTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBatchLoadTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.DescribeBatchLoadTask"));
  return headers;

}




