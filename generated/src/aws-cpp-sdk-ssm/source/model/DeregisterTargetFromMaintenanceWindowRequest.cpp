/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterTargetFromMaintenanceWindowRequest::DeregisterTargetFromMaintenanceWindowRequest() : 
    m_windowIdHasBeenSet(false),
    m_windowTargetIdHasBeenSet(false),
    m_safe(false),
    m_safeHasBeenSet(false)
{
}

Aws::String DeregisterTargetFromMaintenanceWindowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_windowTargetIdHasBeenSet)
  {
   payload.WithString("WindowTargetId", m_windowTargetId);

  }

  if(m_safeHasBeenSet)
  {
   payload.WithBool("Safe", m_safe);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterTargetFromMaintenanceWindowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeregisterTargetFromMaintenanceWindow"));
  return headers;

}




