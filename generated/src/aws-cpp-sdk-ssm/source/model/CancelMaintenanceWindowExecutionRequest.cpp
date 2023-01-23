/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CancelMaintenanceWindowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelMaintenanceWindowExecutionRequest::CancelMaintenanceWindowExecutionRequest() : 
    m_windowExecutionIdHasBeenSet(false)
{
}

Aws::String CancelMaintenanceWindowExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowExecutionIdHasBeenSet)
  {
   payload.WithString("WindowExecutionId", m_windowExecutionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelMaintenanceWindowExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CancelMaintenanceWindowExecution"));
  return headers;

}




