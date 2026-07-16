/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateKnowledgeBaseRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateKnowledgeBaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_knowledgeBaseIdHasBeenSet) {
    payload.WithString("KnowledgeBaseId", m_knowledgeBaseId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_dataSourceArnHasBeenSet) {
    payload.WithString("DataSourceArn", m_dataSourceArn);
  }

  if (m_knowledgeBaseConfigurationHasBeenSet) {
    payload.WithObject("KnowledgeBaseConfiguration", m_knowledgeBaseConfiguration.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_permissionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
    }
    payload.WithArray("Permissions", std::move(permissionsJsonList));
  }

  if (m_mediaExtractionConfigurationHasBeenSet) {
    payload.WithObject("MediaExtractionConfiguration", m_mediaExtractionConfiguration.Jsonize());
  }

  if (m_accessControlConfigurationHasBeenSet) {
    payload.WithObject("AccessControlConfiguration", m_accessControlConfiguration.Jsonize());
  }

  if (m_primaryOwnerArnHasBeenSet) {
    payload.WithString("PrimaryOwnerArn", m_primaryOwnerArn);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
