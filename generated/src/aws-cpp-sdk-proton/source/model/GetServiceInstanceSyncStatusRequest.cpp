/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetServiceInstanceSyncStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetServiceInstanceSyncStatusRequest::GetServiceInstanceSyncStatusRequest() : 
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

Aws::String GetServiceInstanceSyncStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceInstanceNameHasBeenSet)
  {
   payload.WithString("serviceInstanceName", m_serviceInstanceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetServiceInstanceSyncStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.GetServiceInstanceSyncStatus"));
  return headers;

}




