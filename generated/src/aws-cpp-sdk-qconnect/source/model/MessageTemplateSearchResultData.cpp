/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateSearchResultData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

MessageTemplateSearchResultData::MessageTemplateSearchResultData(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateSearchResultData& MessageTemplateSearchResultData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageTemplateArn"))
  {
    m_messageTemplateArn = jsonValue.GetString("messageTemplateArn");
    m_messageTemplateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("messageTemplateId"))
  {
    m_messageTemplateId = jsonValue.GetString("messageTemplateId");
    m_messageTemplateIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelSubtype"))
  {
    m_channelSubtype = ChannelSubtypeMapper::GetChannelSubtypeForName(jsonValue.GetString("channelSubtype"));
    m_channelSubtypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");
    m_isActiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");
    m_versionNumberHasBeenSet = true;
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
  if(jsonValue.ValueExists("language"))
  {
    m_language = jsonValue.GetString("language");
    m_languageHasBeenSet = true;
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

JsonValue MessageTemplateSearchResultData::Jsonize() const
{
  JsonValue payload;

  if(m_messageTemplateArnHasBeenSet)
  {
   payload.WithString("messageTemplateArn", m_messageTemplateArn);

  }

  if(m_messageTemplateIdHasBeenSet)
  {
   payload.WithString("messageTemplateId", m_messageTemplateId);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_channelSubtypeHasBeenSet)
  {
   payload.WithString("channelSubtype", ChannelSubtypeMapper::GetNameForChannelSubtype(m_channelSubtype));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("lastModifiedBy", m_lastModifiedBy);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_groupingConfigurationHasBeenSet)
  {
   payload.WithObject("groupingConfiguration", m_groupingConfiguration.Jsonize());

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

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
} // namespace QConnect
} // namespace Aws
