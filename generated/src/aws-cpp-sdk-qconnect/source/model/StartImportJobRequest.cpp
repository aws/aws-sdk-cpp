﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/StartImportJobRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartImportJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_importJobTypeHasBeenSet) {
    payload.WithString("importJobType", ImportJobTypeMapper::GetNameForImportJobType(m_importJobType));
  }

  if (m_uploadIdHasBeenSet) {
    payload.WithString("uploadId", m_uploadId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_externalSourceConfigurationHasBeenSet) {
    payload.WithObject("externalSourceConfiguration", m_externalSourceConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
