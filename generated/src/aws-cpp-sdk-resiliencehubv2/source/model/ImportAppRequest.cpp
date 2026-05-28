/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ImportAppRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportAppRequest::SerializePayload() const {
  JsonValue payload;

  if (m_v1AppArnHasBeenSet) {
    payload.WithString("v1AppArn", m_v1AppArn);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_skipManuallyAddedResourcesHasBeenSet) {
    payload.WithBool("skipManuallyAddedResources", m_skipManuallyAddedResources);
  }

  if (m_associatedSystemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedSystemsJsonList(m_associatedSystems.size());
    for (unsigned associatedSystemsIndex = 0; associatedSystemsIndex < associatedSystemsJsonList.GetLength(); ++associatedSystemsIndex) {
      associatedSystemsJsonList[associatedSystemsIndex].AsObject(m_associatedSystems[associatedSystemsIndex].Jsonize());
    }
    payload.WithArray("associatedSystems", std::move(associatedSystemsJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
