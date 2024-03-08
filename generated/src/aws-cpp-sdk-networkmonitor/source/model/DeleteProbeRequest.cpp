/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/DeleteProbeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProbeRequest::DeleteProbeRequest() : 
    m_monitorNameHasBeenSet(false),
    m_probeIdHasBeenSet(false)
{
}

Aws::String DeleteProbeRequest::SerializePayload() const
{
  return {};
}




