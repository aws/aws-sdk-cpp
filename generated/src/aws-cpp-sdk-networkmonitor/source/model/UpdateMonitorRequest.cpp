/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/UpdateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aggregationPeriodHasBeenSet)
  {
   payload.WithInt64("aggregationPeriod", m_aggregationPeriod);

  }

  return payload.View().WriteReadable();
}




