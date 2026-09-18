/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribe/model/UpdateLanguageModelRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLanguageModelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_modelNameHasBeenSet) {
    payload.WithString("ModelName", m_modelName);
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLanguageModelRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.UpdateLanguageModel"));
  return headers;
}
