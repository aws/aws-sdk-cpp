/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMaintenanceWindowTaskRequest::GetMaintenanceWindowTaskRequest() : 
    m_windowIdHasBeenSet(false),
    m_windowTaskIdHasBeenSet(false)
{
}

Aws::String GetMaintenanceWindowTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_windowTaskIdHasBeenSet)
  {
   payload.WithString("WindowTaskId", m_windowTaskId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMaintenanceWindowTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetMaintenanceWindowTask"));
  return headers;

}




