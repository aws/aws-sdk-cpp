﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateAIGuardrailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAIGuardrailRequest::UpdateAIGuardrailRequest() : 
    m_aiGuardrailIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_blockedInputMessagingHasBeenSet(false),
    m_blockedOutputsMessagingHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_contentPolicyConfigHasBeenSet(false),
    m_contextualGroundingPolicyConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sensitiveInformationPolicyConfigHasBeenSet(false),
    m_topicPolicyConfigHasBeenSet(false),
    m_visibilityStatus(VisibilityStatus::NOT_SET),
    m_visibilityStatusHasBeenSet(false),
    m_wordPolicyConfigHasBeenSet(false)
{
}

Aws::String UpdateAIGuardrailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blockedInputMessagingHasBeenSet)
  {
   payload.WithString("blockedInputMessaging", m_blockedInputMessaging);

  }

  if(m_blockedOutputsMessagingHasBeenSet)
  {
   payload.WithString("blockedOutputsMessaging", m_blockedOutputsMessaging);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_contentPolicyConfigHasBeenSet)
  {
   payload.WithObject("contentPolicyConfig", m_contentPolicyConfig.Jsonize());

  }

  if(m_contextualGroundingPolicyConfigHasBeenSet)
  {
   payload.WithObject("contextualGroundingPolicyConfig", m_contextualGroundingPolicyConfig.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sensitiveInformationPolicyConfigHasBeenSet)
  {
   payload.WithObject("sensitiveInformationPolicyConfig", m_sensitiveInformationPolicyConfig.Jsonize());

  }

  if(m_topicPolicyConfigHasBeenSet)
  {
   payload.WithObject("topicPolicyConfig", m_topicPolicyConfig.Jsonize());

  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  if(m_wordPolicyConfigHasBeenSet)
  {
   payload.WithObject("wordPolicyConfig", m_wordPolicyConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




