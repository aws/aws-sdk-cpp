/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/CreateWorkflowRequest.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkflowRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_definitionS3LocationHasBeenSet) {
    payload.WithObject("DefinitionS3Location", m_definitionS3Location.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  if (m_engineVersionHasBeenSet) {
    payload.WithInteger("EngineVersion", m_engineVersion);
  }

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_triggerModeHasBeenSet) {
    payload.WithString("TriggerMode", m_triggerMode);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkflowRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMWAAServerless.CreateWorkflow"));
  return headers;
}
