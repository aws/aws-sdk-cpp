/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeleteMaintenanceWindowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMaintenanceWindowRequest::DeleteMaintenanceWindowRequest() : 
    m_windowIdHasBeenSet(false)
{
}

Aws::String DeleteMaintenanceWindowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteMaintenanceWindowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeleteMaintenanceWindow"));
  return headers;

}




