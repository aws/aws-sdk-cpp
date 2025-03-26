/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ManifestServiceInteractionLog.h>
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

ManifestServiceInteractionLog::ManifestServiceInteractionLog(JsonView jsonValue)
{
  *this = jsonValue;
}

ManifestServiceInteractionLog& ManifestServiceInteractionLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExcludeEventTypes"))
  {
    Aws::Utils::Array<JsonView> excludeEventTypesJsonList = jsonValue.GetArray("ExcludeEventTypes");
    for(unsigned excludeEventTypesIndex = 0; excludeEventTypesIndex < excludeEventTypesJsonList.GetLength(); ++excludeEventTypesIndex)
    {
      m_excludeEventTypes.push_back(ManifestServiceExcludeEventTypeMapper::GetManifestServiceExcludeEventTypeForName(excludeEventTypesJsonList[excludeEventTypesIndex].AsString()));
    }
    m_excludeEventTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ManifestServiceInteractionLog::Jsonize() const
{
  JsonValue payload;

  if(m_excludeEventTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeEventTypesJsonList(m_excludeEventTypes.size());
   for(unsigned excludeEventTypesIndex = 0; excludeEventTypesIndex < excludeEventTypesJsonList.GetLength(); ++excludeEventTypesIndex)
   {
     excludeEventTypesJsonList[excludeEventTypesIndex].AsString(ManifestServiceExcludeEventTypeMapper::GetNameForManifestServiceExcludeEventType(m_excludeEventTypes[excludeEventTypesIndex]));
   }
   payload.WithArray("ExcludeEventTypes", std::move(excludeEventTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
