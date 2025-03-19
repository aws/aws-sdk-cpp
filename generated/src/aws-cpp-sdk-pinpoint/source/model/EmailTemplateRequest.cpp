/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EmailTemplateRequest.h>
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

EmailTemplateRequest::EmailTemplateRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailTemplateRequest& EmailTemplateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultSubstitutions"))
  {
    m_defaultSubstitutions = jsonValue.GetString("DefaultSubstitutions");
    m_defaultSubstitutionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HtmlPart"))
  {
    m_htmlPart = jsonValue.GetString("HtmlPart");
    m_htmlPartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecommenderId"))
  {
    m_recommenderId = jsonValue.GetString("RecommenderId");
    m_recommenderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Headers"))
  {
    Aws::Utils::Array<JsonView> headersJsonList = jsonValue.GetArray("Headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
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
  if(jsonValue.ValueExists("TextPart"))
  {
    m_textPart = jsonValue.GetString("TextPart");
    m_textPartHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailTemplateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_defaultSubstitutionsHasBeenSet)
  {
   payload.WithString("DefaultSubstitutions", m_defaultSubstitutions);

  }

  if(m_htmlPartHasBeenSet)
  {
   payload.WithString("HtmlPart", m_htmlPart);

  }

  if(m_recommenderIdHasBeenSet)
  {
   payload.WithString("RecommenderId", m_recommenderId);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_headersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("Headers", std::move(headersJsonList));

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

  if(m_textPartHasBeenSet)
  {
   payload.WithString("TextPart", m_textPart);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
