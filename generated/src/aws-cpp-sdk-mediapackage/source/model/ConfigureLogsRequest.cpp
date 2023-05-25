/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/ConfigureLogsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfigureLogsRequest::ConfigureLogsRequest() : 
    m_egressAccessLogsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ingressAccessLogsHasBeenSet(false)
{
}

Aws::String ConfigureLogsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_egressAccessLogsHasBeenSet)
  {
   payload.WithObject("egressAccessLogs", m_egressAccessLogs.Jsonize());

  }

  if(m_ingressAccessLogsHasBeenSet)
  {
   payload.WithObject("ingressAccessLogs", m_ingressAccessLogs.Jsonize());

  }

  return payload.View().WriteReadable();
}




