/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/CreateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMonitorRequest::CreateMonitorRequest() : 
    m_monitorNameHasBeenSet(false),
    m_probesHasBeenSet(false),
    m_aggregationPeriod(0),
    m_aggregationPeriodHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("monitorName", m_monitorName);

  }

  if(m_probesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> probesJsonList(m_probes.size());
   for(unsigned probesIndex = 0; probesIndex < probesJsonList.GetLength(); ++probesIndex)
   {
     probesJsonList[probesIndex].AsObject(m_probes[probesIndex].Jsonize());
   }
   payload.WithArray("probes", std::move(probesJsonList));

  }

  if(m_aggregationPeriodHasBeenSet)
  {
   payload.WithInt64("aggregationPeriod", m_aggregationPeriod);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




