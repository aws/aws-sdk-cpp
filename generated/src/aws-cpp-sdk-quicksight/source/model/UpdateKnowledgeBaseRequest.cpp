/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateKnowledgeBaseRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateKnowledgeBaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_knowledgeBaseConfigurationHasBeenSet) {
    payload.WithObject("KnowledgeBaseConfiguration", m_knowledgeBaseConfiguration.Jsonize());
  }

  if (m_mediaExtractionConfigurationHasBeenSet) {
    payload.WithObject("MediaExtractionConfiguration", m_mediaExtractionConfiguration.Jsonize());
  }

  if (m_isEmailNotificationOptedForIngestionFailuresHasBeenSet) {
    payload.WithBool("IsEmailNotificationOptedForIngestionFailures", m_isEmailNotificationOptedForIngestionFailures);
  }

  if (m_accessControlConfigurationHasBeenSet) {
    payload.WithObject("AccessControlConfiguration", m_accessControlConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
