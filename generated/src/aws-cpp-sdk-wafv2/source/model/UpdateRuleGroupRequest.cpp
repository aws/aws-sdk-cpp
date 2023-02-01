/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/UpdateRuleGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuleGroupRequest::UpdateRuleGroupRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_lockTokenHasBeenSet(false),
    m_customResponseBodiesHasBeenSet(false)
{
}

Aws::String UpdateRuleGroupRequest::SerializePayload() const
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

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

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

  if(m_lockTokenHasBeenSet)
  {
   payload.WithString("LockToken", m_lockToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRuleGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.UpdateRuleGroup"));
  return headers;

}




