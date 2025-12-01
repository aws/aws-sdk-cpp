/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/UpdateAIPromptRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAIPromptRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_visibilityStatusHasBeenSet) {
    payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  if (m_templateConfigurationHasBeenSet) {
    payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_inferenceConfigurationHasBeenSet) {
    payload.WithObject("inferenceConfiguration", m_inferenceConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
