/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppTemplateResponse.h>
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

InAppTemplateResponse::InAppTemplateResponse() : 
    m_arnHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_customConfigHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_layout(Layout::NOT_SET),
    m_layoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

InAppTemplateResponse::InAppTemplateResponse(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_customConfigHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_layout(Layout::NOT_SET),
    m_layoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

InAppTemplateResponse& InAppTemplateResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("Content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomConfig"))
  {
    Aws::Map<Aws::String, JsonView> customConfigJsonMap = jsonValue.GetObject("CustomConfig").GetAllObjects();
    for(auto& customConfigItem : customConfigJsonMap)
    {
      m_customConfig[customConfigItem.first] = customConfigItem.second.AsString();
    }
    m_customConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Layout"))
  {
    m_layout = LayoutMapper::GetLayoutForName(jsonValue.GetString("Layout"));

    m_layoutHasBeenSet = true;
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

  if(jsonValue.ValueExists("TemplateDescription"))
  {
    m_templateDescription = jsonValue.GetString("TemplateDescription");

    m_templateDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("TemplateType"));

    m_templateTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppTemplateResponse::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("Content", std::move(contentJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_customConfigHasBeenSet)
  {
   JsonValue customConfigJsonMap;
   for(auto& customConfigItem : m_customConfig)
   {
     customConfigJsonMap.WithString(customConfigItem.first, customConfigItem.second);
   }
   payload.WithObject("CustomConfig", std::move(customConfigJsonMap));

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_layoutHasBeenSet)
  {
   payload.WithString("Layout", LayoutMapper::GetNameForLayout(m_layout));
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

  if(m_templateDescriptionHasBeenSet)
  {
   payload.WithString("TemplateDescription", m_templateDescription);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("TemplateType", TemplateTypeMapper::GetNameForTemplateType(m_templateType));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
