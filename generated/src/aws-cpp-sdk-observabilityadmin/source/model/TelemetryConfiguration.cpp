/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/TelemetryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

TelemetryConfiguration::TelemetryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TelemetryConfiguration& TelemetryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountIdentifier"))
  {
    m_accountIdentifier = jsonValue.GetString("AccountIdentifier");
    m_accountIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TelemetryConfigurationState"))
  {
    Aws::Map<Aws::String, JsonView> telemetryConfigurationStateJsonMap = jsonValue.GetObject("TelemetryConfigurationState").GetAllObjects();
    for(auto& telemetryConfigurationStateItem : telemetryConfigurationStateJsonMap)
    {
      m_telemetryConfigurationState[TelemetryTypeMapper::GetTelemetryTypeForName(telemetryConfigurationStateItem.first)] = TelemetryStateMapper::GetTelemetryStateForName(telemetryConfigurationStateItem.second.AsString());
    }
    m_telemetryConfigurationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");
    m_resourceIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceTags"))
  {
    Aws::Map<Aws::String, JsonView> resourceTagsJsonMap = jsonValue.GetObject("ResourceTags").GetAllObjects();
    for(auto& resourceTagsItem : resourceTagsJsonMap)
    {
      m_resourceTags[resourceTagsItem.first] = resourceTagsItem.second.AsString();
    }
    m_resourceTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTimeStamp"))
  {
    m_lastUpdateTimeStamp = jsonValue.GetInt64("LastUpdateTimeStamp");
    m_lastUpdateTimeStampHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdentifierHasBeenSet)
  {
   payload.WithString("AccountIdentifier", m_accountIdentifier);

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

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

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

  if(m_lastUpdateTimeStampHasBeenSet)
  {
   payload.WithInt64("LastUpdateTimeStamp", m_lastUpdateTimeStamp);

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
