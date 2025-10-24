﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNotebookInstanceLifecycleConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_notebookInstanceLifecycleConfigNameHasBeenSet) {
    payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);
  }

  if (m_onCreateHasBeenSet) {
    Aws::Utils::Array<JsonValue> onCreateJsonList(m_onCreate.size());
    for (unsigned onCreateIndex = 0; onCreateIndex < onCreateJsonList.GetLength(); ++onCreateIndex) {
      onCreateJsonList[onCreateIndex].AsObject(m_onCreate[onCreateIndex].Jsonize());
    }
    payload.WithArray("OnCreate", std::move(onCreateJsonList));
  }

  if (m_onStartHasBeenSet) {
    Aws::Utils::Array<JsonValue> onStartJsonList(m_onStart.size());
    for (unsigned onStartIndex = 0; onStartIndex < onStartJsonList.GetLength(); ++onStartIndex) {
      onStartJsonList[onStartIndex].AsObject(m_onStart[onStartIndex].Jsonize());
    }
    payload.WithArray("OnStart", std::move(onStartJsonList));
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

Aws::Http::HeaderValueCollection CreateNotebookInstanceLifecycleConfigRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateNotebookInstanceLifecycleConfig"));
  return headers;
}
