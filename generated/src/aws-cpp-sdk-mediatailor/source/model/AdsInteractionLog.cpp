/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdsInteractionLog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AdsInteractionLog::AdsInteractionLog(JsonView jsonValue)
{
  *this = jsonValue;
}

AdsInteractionLog& AdsInteractionLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublishOptInEventTypes"))
  {
    Aws::Utils::Array<JsonView> publishOptInEventTypesJsonList = jsonValue.GetArray("PublishOptInEventTypes");
    for(unsigned publishOptInEventTypesIndex = 0; publishOptInEventTypesIndex < publishOptInEventTypesJsonList.GetLength(); ++publishOptInEventTypesIndex)
    {
      m_publishOptInEventTypes.push_back(AdsInteractionPublishOptInEventTypeMapper::GetAdsInteractionPublishOptInEventTypeForName(publishOptInEventTypesJsonList[publishOptInEventTypesIndex].AsString()));
    }
    m_publishOptInEventTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeEventTypes"))
  {
    Aws::Utils::Array<JsonView> excludeEventTypesJsonList = jsonValue.GetArray("ExcludeEventTypes");
    for(unsigned excludeEventTypesIndex = 0; excludeEventTypesIndex < excludeEventTypesJsonList.GetLength(); ++excludeEventTypesIndex)
    {
      m_excludeEventTypes.push_back(AdsInteractionExcludeEventTypeMapper::GetAdsInteractionExcludeEventTypeForName(excludeEventTypesJsonList[excludeEventTypesIndex].AsString()));
    }
    m_excludeEventTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue AdsInteractionLog::Jsonize() const
{
  JsonValue payload;

  if(m_publishOptInEventTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publishOptInEventTypesJsonList(m_publishOptInEventTypes.size());
   for(unsigned publishOptInEventTypesIndex = 0; publishOptInEventTypesIndex < publishOptInEventTypesJsonList.GetLength(); ++publishOptInEventTypesIndex)
   {
     publishOptInEventTypesJsonList[publishOptInEventTypesIndex].AsString(AdsInteractionPublishOptInEventTypeMapper::GetNameForAdsInteractionPublishOptInEventType(m_publishOptInEventTypes[publishOptInEventTypesIndex]));
   }
   payload.WithArray("PublishOptInEventTypes", std::move(publishOptInEventTypesJsonList));

  }

  if(m_excludeEventTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeEventTypesJsonList(m_excludeEventTypes.size());
   for(unsigned excludeEventTypesIndex = 0; excludeEventTypesIndex < excludeEventTypesJsonList.GetLength(); ++excludeEventTypesIndex)
   {
     excludeEventTypesJsonList[excludeEventTypesIndex].AsString(AdsInteractionExcludeEventTypeMapper::GetNameForAdsInteractionExcludeEventType(m_excludeEventTypes[excludeEventTypesIndex]));
   }
   payload.WithArray("ExcludeEventTypes", std::move(excludeEventTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
