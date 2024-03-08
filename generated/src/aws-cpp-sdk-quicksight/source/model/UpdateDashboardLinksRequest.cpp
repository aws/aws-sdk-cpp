/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardLinksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardLinksRequest::UpdateDashboardLinksRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_linkEntitiesHasBeenSet(false)
{
}

Aws::String UpdateDashboardLinksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_linkEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkEntitiesJsonList(m_linkEntities.size());
   for(unsigned linkEntitiesIndex = 0; linkEntitiesIndex < linkEntitiesJsonList.GetLength(); ++linkEntitiesIndex)
   {
     linkEntitiesJsonList[linkEntitiesIndex].AsString(m_linkEntities[linkEntitiesIndex]);
   }
   payload.WithArray("LinkEntities", std::move(linkEntitiesJsonList));

  }

  return payload.View().WriteReadable();
}




