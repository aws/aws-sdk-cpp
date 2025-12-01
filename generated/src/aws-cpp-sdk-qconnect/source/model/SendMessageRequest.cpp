/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SendMessageRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendMessageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", MessageTypeMapper::GetNameForMessageType(m_type));
  }

  if (m_messageHasBeenSet) {
    payload.WithObject("message", m_message.Jsonize());
  }

  if (m_aiAgentIdHasBeenSet) {
    payload.WithString("aiAgentId", m_aiAgentId);
  }

  if (m_conversationContextHasBeenSet) {
    payload.WithObject("conversationContext", m_conversationContext.Jsonize());
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_orchestratorUseCaseHasBeenSet) {
    payload.WithString("orchestratorUseCase", m_orchestratorUseCase);
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  return payload.View().WriteReadable();
}
