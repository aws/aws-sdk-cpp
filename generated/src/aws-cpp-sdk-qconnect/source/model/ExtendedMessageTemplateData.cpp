/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ExtendedMessageTemplateData.h>
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

ExtendedMessageTemplateData::ExtendedMessageTemplateData(JsonView jsonValue)
{
  *this = jsonValue;
}

ExtendedMessageTemplateData& ExtendedMessageTemplateData::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("language"))
  {
    m_language = jsonValue.GetString("language");
    m_languageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupingConfiguration"))
  {
    m_groupingConfiguration = jsonValue.GetObject("groupingConfiguration");
    m_groupingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultAttributes"))
  {
    m_defaultAttributes = jsonValue.GetObject("defaultAttributes");
    m_defaultAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeTypes"))
  {
    Aws::Utils::Array<JsonView> attributeTypesJsonList = jsonValue.GetArray("attributeTypes");
    for(unsigned attributeTypesIndex = 0; attributeTypesIndex < attributeTypesJsonList.GetLength(); ++attributeTypesIndex)
    {
      m_attributeTypes.push_back(MessageTemplateAttributeTypeMapper::GetMessageTemplateAttributeTypeForName(attributeTypesJsonList[attributeTypesIndex].AsString()));
    }
    m_attributeTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachments"))
  {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
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
  if(jsonValue.ValueExists("messageTemplateContentSha256"))
  {
    m_messageTemplateContentSha256 = jsonValue.GetString("messageTemplateContentSha256");
    m_messageTemplateContentSha256HasBeenSet = true;
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

JsonValue ExtendedMessageTemplateData::Jsonize() const
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

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_groupingConfigurationHasBeenSet)
  {
   payload.WithObject("groupingConfiguration", m_groupingConfiguration.Jsonize());

  }

  if(m_defaultAttributesHasBeenSet)
  {
   payload.WithObject("defaultAttributes", m_defaultAttributes.Jsonize());

  }

  if(m_attributeTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeTypesJsonList(m_attributeTypes.size());
   for(unsigned attributeTypesIndex = 0; attributeTypesIndex < attributeTypesJsonList.GetLength(); ++attributeTypesIndex)
   {
     attributeTypesJsonList[attributeTypesIndex].AsString(MessageTemplateAttributeTypeMapper::GetNameForMessageTemplateAttributeType(m_attributeTypes[attributeTypesIndex]));
   }
   payload.WithArray("attributeTypes", std::move(attributeTypesJsonList));

  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  if(m_messageTemplateContentSha256HasBeenSet)
  {
   payload.WithString("messageTemplateContentSha256", m_messageTemplateContentSha256);

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
