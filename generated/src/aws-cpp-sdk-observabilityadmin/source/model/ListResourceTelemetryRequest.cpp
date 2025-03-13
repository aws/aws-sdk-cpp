/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListResourceTelemetryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdentifierPrefixHasBeenSet)
  {
   payload.WithString("ResourceIdentifierPrefix", m_resourceIdentifierPrefix);

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeMapper::GetNameForResourceType(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_telemetryConfigurationStateHasBeenSet)
  {
   JsonValue telemetryConfigurationStateJsonMap;
   for(auto& telemetryConfigurationStateItem : m_telemetryConfigurationState)
   {
     telemetryConfigurationStateJsonMap.WithString(TelemetryTypeMapper::GetNameForTelemetryType(telemetryConfigurationStateItem.first), TelemetryStateMapper::GetNameForTelemetryState(telemetryConfigurationStateItem.second));
   }
   payload.WithObject("TelemetryConfigurationState", std::move(telemetryConfigurationStateJsonMap));

  }

  if(m_resourceTagsHasBeenSet)
  {
   JsonValue resourceTagsJsonMap;
   for(auto& resourceTagsItem : m_resourceTags)
   {
     resourceTagsJsonMap.WithString(resourceTagsItem.first, resourceTagsItem.second);
   }
   payload.WithObject("ResourceTags", std::move(resourceTagsJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




