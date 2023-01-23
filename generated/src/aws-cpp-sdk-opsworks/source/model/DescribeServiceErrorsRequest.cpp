/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeServiceErrorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeServiceErrorsRequest::DescribeServiceErrorsRequest() : 
    m_stackIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_serviceErrorIdsHasBeenSet(false)
{
}

Aws::String DescribeServiceErrorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_serviceErrorIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceErrorIdsJsonList(m_serviceErrorIds.size());
   for(unsigned serviceErrorIdsIndex = 0; serviceErrorIdsIndex < serviceErrorIdsJsonList.GetLength(); ++serviceErrorIdsIndex)
   {
     serviceErrorIdsJsonList[serviceErrorIdsIndex].AsString(m_serviceErrorIds[serviceErrorIdsIndex]);
   }
   payload.WithArray("ServiceErrorIds", std::move(serviceErrorIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServiceErrorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeServiceErrors"));
  return headers;

}




