/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CreateWebACLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWebACLRequest::CreateWebACLRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_customResponseBodiesHasBeenSet(false),
    m_captchaConfigHasBeenSet(false),
    m_challengeConfigHasBeenSet(false),
    m_tokenDomainsHasBeenSet(false)
{
}

Aws::String CreateWebACLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithObject("DefaultAction", m_defaultAction.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_customResponseBodiesHasBeenSet)
  {
   JsonValue customResponseBodiesJsonMap;
   for(auto& customResponseBodiesItem : m_customResponseBodies)
   {
     customResponseBodiesJsonMap.WithObject(customResponseBodiesItem.first, customResponseBodiesItem.second.Jsonize());
   }
   payload.WithObject("CustomResponseBodies", std::move(customResponseBodiesJsonMap));

  }

  if(m_captchaConfigHasBeenSet)
  {
   payload.WithObject("CaptchaConfig", m_captchaConfig.Jsonize());

  }

  if(m_challengeConfigHasBeenSet)
  {
   payload.WithObject("ChallengeConfig", m_challengeConfig.Jsonize());

  }

  if(m_tokenDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenDomainsJsonList(m_tokenDomains.size());
   for(unsigned tokenDomainsIndex = 0; tokenDomainsIndex < tokenDomainsJsonList.GetLength(); ++tokenDomainsIndex)
   {
     tokenDomainsJsonList[tokenDomainsIndex].AsString(m_tokenDomains[tokenDomainsIndex]);
   }
   payload.WithArray("TokenDomains", std::move(tokenDomainsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWebACLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.CreateWebACL"));
  return headers;

}




