﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Document.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

Document::Document() : 
    m_idHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_accessConfigurationHasBeenSet(false),
    m_documentEnrichmentConfigurationHasBeenSet(false),
    m_mediaExtractionConfigurationHasBeenSet(false)
{
}

Document::Document(JsonView jsonValue)
  : Document()
{
  *this = jsonValue;
}

Document& Document::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("contentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessConfiguration"))
  {
    m_accessConfiguration = jsonValue.GetObject("accessConfiguration");

    m_accessConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentEnrichmentConfiguration"))
  {
    m_documentEnrichmentConfiguration = jsonValue.GetObject("documentEnrichmentConfiguration");

    m_documentEnrichmentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaExtractionConfiguration"))
  {
    m_mediaExtractionConfiguration = jsonValue.GetObject("mediaExtractionConfiguration");

    m_mediaExtractionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Document::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_accessConfigurationHasBeenSet)
  {
   payload.WithObject("accessConfiguration", m_accessConfiguration.Jsonize());

  }

  if(m_documentEnrichmentConfigurationHasBeenSet)
  {
   payload.WithObject("documentEnrichmentConfiguration", m_documentEnrichmentConfiguration.Jsonize());

  }

  if(m_mediaExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("mediaExtractionConfiguration", m_mediaExtractionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
