/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetServiceSyncConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetServiceSyncConfigRequest::GetServiceSyncConfigRequest() : 
    m_serviceNameHasBeenSet(false)
{
}

Aws::String GetServiceSyncConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetServiceSyncConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.GetServiceSyncConfig"));
  return headers;

}




