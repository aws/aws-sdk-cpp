/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/UpdateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_localResourcesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localResourcesToAddJsonList(m_localResourcesToAdd.size());
   for(unsigned localResourcesToAddIndex = 0; localResourcesToAddIndex < localResourcesToAddJsonList.GetLength(); ++localResourcesToAddIndex)
   {
     localResourcesToAddJsonList[localResourcesToAddIndex].AsObject(m_localResourcesToAdd[localResourcesToAddIndex].Jsonize());
   }
   payload.WithArray("localResourcesToAdd", std::move(localResourcesToAddJsonList));

  }

  if(m_localResourcesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localResourcesToRemoveJsonList(m_localResourcesToRemove.size());
   for(unsigned localResourcesToRemoveIndex = 0; localResourcesToRemoveIndex < localResourcesToRemoveJsonList.GetLength(); ++localResourcesToRemoveIndex)
   {
     localResourcesToRemoveJsonList[localResourcesToRemoveIndex].AsObject(m_localResourcesToRemove[localResourcesToRemoveIndex].Jsonize());
   }
   payload.WithArray("localResourcesToRemove", std::move(localResourcesToRemoveJsonList));

  }

  if(m_remoteResourcesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remoteResourcesToAddJsonList(m_remoteResourcesToAdd.size());
   for(unsigned remoteResourcesToAddIndex = 0; remoteResourcesToAddIndex < remoteResourcesToAddJsonList.GetLength(); ++remoteResourcesToAddIndex)
   {
     remoteResourcesToAddJsonList[remoteResourcesToAddIndex].AsObject(m_remoteResourcesToAdd[remoteResourcesToAddIndex].Jsonize());
   }
   payload.WithArray("remoteResourcesToAdd", std::move(remoteResourcesToAddJsonList));

  }

  if(m_remoteResourcesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remoteResourcesToRemoveJsonList(m_remoteResourcesToRemove.size());
   for(unsigned remoteResourcesToRemoveIndex = 0; remoteResourcesToRemoveIndex < remoteResourcesToRemoveJsonList.GetLength(); ++remoteResourcesToRemoveIndex)
   {
     remoteResourcesToRemoveJsonList[remoteResourcesToRemoveIndex].AsObject(m_remoteResourcesToRemove[remoteResourcesToRemoveIndex].Jsonize());
   }
   payload.WithArray("remoteResourcesToRemove", std::move(remoteResourcesToRemoveJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




