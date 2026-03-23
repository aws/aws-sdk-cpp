/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/StartRunBatchRequest.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartRunBatchRequest::SerializePayload() const {
  JsonValue payload;

  if (m_batchNameHasBeenSet) {
    payload.WithString("batchName", m_batchName);
  }

  if (m_requestIdHasBeenSet) {
    payload.WithString("requestId", m_requestId);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_defaultRunSettingHasBeenSet) {
    payload.WithObject("defaultRunSetting", m_defaultRunSetting.Jsonize());
  }

  if (m_batchRunSettingsHasBeenSet) {
    payload.WithObject("batchRunSettings", m_batchRunSettings.Jsonize());
  }

  return payload.View().WriteReadable();
}
