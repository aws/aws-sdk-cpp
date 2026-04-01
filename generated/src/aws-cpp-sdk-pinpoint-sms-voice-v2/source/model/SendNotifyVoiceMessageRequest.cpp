/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/SendNotifyVoiceMessageRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendNotifyVoiceMessageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_notifyConfigurationIdHasBeenSet) {
    payload.WithString("NotifyConfigurationId", m_notifyConfigurationId);
  }

  if (m_destinationPhoneNumberHasBeenSet) {
    payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);
  }

  if (m_templateIdHasBeenSet) {
    payload.WithString("TemplateId", m_templateId);
  }

  if (m_templateVariablesHasBeenSet) {
    JsonValue templateVariablesJsonMap;
    for (auto& templateVariablesItem : m_templateVariables) {
      templateVariablesJsonMap.WithString(templateVariablesItem.first, templateVariablesItem.second);
    }
    payload.WithObject("TemplateVariables", std::move(templateVariablesJsonMap));
  }

  if (m_voiceIdHasBeenSet) {
    payload.WithString("VoiceId", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

  if (m_timeToLiveHasBeenSet) {
    payload.WithInteger("TimeToLive", m_timeToLive);
  }

  if (m_contextHasBeenSet) {
    JsonValue contextJsonMap;
    for (auto& contextItem : m_context) {
      contextJsonMap.WithString(contextItem.first, contextItem.second);
    }
    payload.WithObject("Context", std::move(contextJsonMap));
  }

  if (m_configurationSetNameHasBeenSet) {
    payload.WithString("ConfigurationSetName", m_configurationSetName);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("DryRun", m_dryRun);
  }

  if (m_messageFeedbackEnabledHasBeenSet) {
    payload.WithBool("MessageFeedbackEnabled", m_messageFeedbackEnabled);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendNotifyVoiceMessageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.SendNotifyVoiceMessage"));
  return headers;
}
