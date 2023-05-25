/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/UpdateInstanceCustomHealthStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInstanceCustomHealthStatusRequest::UpdateInstanceCustomHealthStatusRequest() : 
    m_serviceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_status(CustomHealthStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateInstanceCustomHealthStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CustomHealthStatusMapper::GetNameForCustomHealthStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInstanceCustomHealthStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.UpdateInstanceCustomHealthStatus"));
  return headers;

}




