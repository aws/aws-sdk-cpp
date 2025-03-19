/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/UpdateScopeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScopeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourcesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesToAddJsonList(m_resourcesToAdd.size());
   for(unsigned resourcesToAddIndex = 0; resourcesToAddIndex < resourcesToAddJsonList.GetLength(); ++resourcesToAddIndex)
   {
     resourcesToAddJsonList[resourcesToAddIndex].AsObject(m_resourcesToAdd[resourcesToAddIndex].Jsonize());
   }
   payload.WithArray("resourcesToAdd", std::move(resourcesToAddJsonList));

  }

  if(m_resourcesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesToDeleteJsonList(m_resourcesToDelete.size());
   for(unsigned resourcesToDeleteIndex = 0; resourcesToDeleteIndex < resourcesToDeleteJsonList.GetLength(); ++resourcesToDeleteIndex)
   {
     resourcesToDeleteJsonList[resourcesToDeleteIndex].AsObject(m_resourcesToDelete[resourcesToDeleteIndex].Jsonize());
   }
   payload.WithArray("resourcesToDelete", std::move(resourcesToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}




