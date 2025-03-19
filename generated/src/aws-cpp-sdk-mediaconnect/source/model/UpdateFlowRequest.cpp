/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceFailoverConfigHasBeenSet)
  {
   payload.WithObject("sourceFailoverConfig", m_sourceFailoverConfig.Jsonize());

  }

  if(m_maintenanceHasBeenSet)
  {
   payload.WithObject("maintenance", m_maintenance.Jsonize());

  }

  if(m_sourceMonitoringConfigHasBeenSet)
  {
   payload.WithObject("sourceMonitoringConfig", m_sourceMonitoringConfig.Jsonize());

  }

  if(m_ndiConfigHasBeenSet)
  {
   payload.WithObject("ndiConfig", m_ndiConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




