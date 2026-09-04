/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/PutFunctionRequest.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutFunctionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_functionTypeHasBeenSet) {
    payload.WithString("FunctionType", FunctionTypeMapper::GetNameForFunctionType(m_functionType));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_httpRequestConfigurationHasBeenSet) {
    payload.WithObject("HttpRequestConfiguration", m_httpRequestConfiguration.Jsonize());
  }

  if (m_customOutputConfigurationHasBeenSet) {
    payload.WithObject("CustomOutputConfiguration", m_customOutputConfiguration.Jsonize());
  }

  if (m_concurrentExecutorConfigurationHasBeenSet) {
    payload.WithObject("ConcurrentExecutorConfiguration", m_concurrentExecutorConfiguration.Jsonize());
  }

  if (m_sequentialExecutorConfigurationHasBeenSet) {
    payload.WithObject("SequentialExecutorConfiguration", m_sequentialExecutorConfiguration.Jsonize());
  }

  if (m_vastRequestConfigurationHasBeenSet) {
    payload.WithObject("VastRequestConfiguration", m_vastRequestConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
