/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CreateAggregatorV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAggregatorV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_regionLinkingModeHasBeenSet)
  {
   payload.WithString("RegionLinkingMode", m_regionLinkingMode);

  }

  if(m_linkedRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkedRegionsJsonList(m_linkedRegions.size());
   for(unsigned linkedRegionsIndex = 0; linkedRegionsIndex < linkedRegionsJsonList.GetLength(); ++linkedRegionsIndex)
   {
     linkedRegionsJsonList[linkedRegionsIndex].AsString(m_linkedRegions[linkedRegionsIndex]);
   }
   payload.WithArray("LinkedRegions", std::move(linkedRegionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




