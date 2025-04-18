/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateAIGuardrailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAIGuardrailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_blockedInputMessagingHasBeenSet)
  {
   payload.WithString("blockedInputMessaging", m_blockedInputMessaging);

  }

  if(m_blockedOutputsMessagingHasBeenSet)
  {
   payload.WithString("blockedOutputsMessaging", m_blockedOutputsMessaging);

  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_topicPolicyConfigHasBeenSet)
  {
   payload.WithObject("topicPolicyConfig", m_topicPolicyConfig.Jsonize());

  }

  if(m_contentPolicyConfigHasBeenSet)
  {
   payload.WithObject("contentPolicyConfig", m_contentPolicyConfig.Jsonize());

  }

  if(m_wordPolicyConfigHasBeenSet)
  {
   payload.WithObject("wordPolicyConfig", m_wordPolicyConfig.Jsonize());

  }

  if(m_sensitiveInformationPolicyConfigHasBeenSet)
  {
   payload.WithObject("sensitiveInformationPolicyConfig", m_sensitiveInformationPolicyConfig.Jsonize());

  }

  if(m_contextualGroundingPolicyConfigHasBeenSet)
  {
   payload.WithObject("contextualGroundingPolicyConfig", m_contextualGroundingPolicyConfig.Jsonize());

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

  return payload.View().WriteReadable();
}




