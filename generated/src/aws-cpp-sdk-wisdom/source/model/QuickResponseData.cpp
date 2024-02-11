/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QuickResponseData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

QuickResponseData::QuickResponseData() : 
    m_channelsHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupingConfigurationHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_quickResponseArnHasBeenSet(false),
    m_quickResponseIdHasBeenSet(false),
    m_shortcutKeyHasBeenSet(false),
    m_status(QuickResponseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

QuickResponseData::QuickResponseData(JsonView jsonValue) : 
    m_channelsHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupingConfigurationHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_quickResponseArnHasBeenSet(false),
    m_quickResponseIdHasBeenSet(false),
    m_shortcutKeyHasBeenSet(false),
    m_status(QuickResponseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

QuickResponseData& QuickResponseData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channels"))
  {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("channels");
    for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
    {
      m_channels.push_back(channelsJsonList[channelsIndex].AsString());
    }
    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contents"))
  {
    m_contents = jsonValue.GetObject("contents");

    m_contentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupingConfiguration"))
  {
    m_groupingConfiguration = jsonValue.GetObject("groupingConfiguration");

    m_groupingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("language"))
  {
    m_language = jsonValue.GetString("language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quickResponseArn"))
  {
    m_quickResponseArn = jsonValue.GetString("quickResponseArn");

    m_quickResponseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quickResponseId"))
  {
    m_quickResponseId = jsonValue.GetString("quickResponseId");

    m_quickResponseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shortcutKey"))
  {
    m_shortcutKey = jsonValue.GetString("shortcutKey");

    m_shortcutKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QuickResponseStatusMapper::GetQuickResponseStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickResponseData::Jsonize() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
   for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
   {
     channelsJsonList[channelsIndex].AsString(m_channels[channelsIndex]);
   }
   payload.WithArray("channels", std::move(channelsJsonList));

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_contentsHasBeenSet)
  {
   payload.WithObject("contents", m_contents.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_groupingConfigurationHasBeenSet)
  {
   payload.WithObject("groupingConfiguration", m_groupingConfiguration.Jsonize());

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("lastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("lastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_quickResponseArnHasBeenSet)
  {
   payload.WithString("quickResponseArn", m_quickResponseArn);

  }

  if(m_quickResponseIdHasBeenSet)
  {
   payload.WithString("quickResponseId", m_quickResponseId);

  }

  if(m_shortcutKeyHasBeenSet)
  {
   payload.WithString("shortcutKey", m_shortcutKey);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QuickResponseStatusMapper::GetNameForQuickResponseStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
