﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourceTelemetryForOrganizationRequest::ListResourceTelemetryForOrganizationRequest() : 
    m_accountIdentifiersHasBeenSet(false),
    m_resourceIdentifierPrefixHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_telemetryConfigurationStateHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListResourceTelemetryForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdentifiersJsonList(m_accountIdentifiers.size());
   for(unsigned accountIdentifiersIndex = 0; accountIdentifiersIndex < accountIdentifiersJsonList.GetLength(); ++accountIdentifiersIndex)
   {
     accountIdentifiersJsonList[accountIdentifiersIndex].AsString(m_accountIdentifiers[accountIdentifiersIndex]);
   }
   payload.WithArray("AccountIdentifiers", std::move(accountIdentifiersJsonList));

  }

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




