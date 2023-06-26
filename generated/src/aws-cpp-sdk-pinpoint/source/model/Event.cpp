/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

Event::Event() : 
    m_appPackageNameHasBeenSet(false),
    m_appTitleHasBeenSet(false),
    m_appVersionCodeHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_clientSdkVersionHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_sdkNameHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_appPackageNameHasBeenSet(false),
    m_appTitleHasBeenSet(false),
    m_appVersionCodeHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_clientSdkVersionHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_sdkNameHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppPackageName"))
  {
    m_appPackageName = jsonValue.GetString("AppPackageName");

    m_appPackageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppTitle"))
  {
    m_appTitle = jsonValue.GetString("AppTitle");

    m_appTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppVersionCode"))
  {
    m_appVersionCode = jsonValue.GetString("AppVersionCode");

    m_appVersionCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientSdkVersion"))
  {
    m_clientSdkVersion = jsonValue.GetString("ClientSdkVersion");

    m_clientSdkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = jsonValue.GetString("EventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SdkName"))
  {
    m_sdkName = jsonValue.GetString("SdkName");

    m_sdkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Session"))
  {
    m_session = jsonValue.GetObject("Session");

    m_sessionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_appPackageNameHasBeenSet)
  {
   payload.WithString("AppPackageName", m_appPackageName);

  }

  if(m_appTitleHasBeenSet)
  {
   payload.WithString("AppTitle", m_appTitle);

  }

  if(m_appVersionCodeHasBeenSet)
  {
   payload.WithString("AppVersionCode", m_appVersionCode);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_clientSdkVersionHasBeenSet)
  {
   payload.WithString("ClientSdkVersion", m_clientSdkVersion);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", m_eventType);

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithDouble(metricsItem.first, metricsItem.second);
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  if(m_sdkNameHasBeenSet)
  {
   payload.WithString("SdkName", m_sdkName);

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithObject("Session", m_session.Jsonize());

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
