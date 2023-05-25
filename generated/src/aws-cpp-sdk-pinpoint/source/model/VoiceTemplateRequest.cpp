/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/VoiceTemplateRequest.h>
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

VoiceTemplateRequest::VoiceTemplateRequest() : 
    m_bodyHasBeenSet(false),
    m_defaultSubstitutionsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
}

VoiceTemplateRequest::VoiceTemplateRequest(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_defaultSubstitutionsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceTemplateRequest& VoiceTemplateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSubstitutions"))
  {
    m_defaultSubstitutions = jsonValue.GetString("DefaultSubstitutions");

    m_defaultSubstitutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = jsonValue.GetString("LanguageCode");

    m_languageCodeHasBeenSet = true;
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

  if(jsonValue.ValueExists("VoiceId"))
  {
    m_voiceId = jsonValue.GetString("VoiceId");

    m_voiceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceTemplateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_defaultSubstitutionsHasBeenSet)
  {
   payload.WithString("DefaultSubstitutions", m_defaultSubstitutions);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", m_languageCode);

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

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", m_voiceId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
