﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/UpdateWorkflowVersionRequest.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkflowVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_storageTypeHasBeenSet) {
    payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if (m_storageCapacityHasBeenSet) {
    payload.WithInteger("storageCapacity", m_storageCapacity);
  }

  if (m_readmeMarkdownHasBeenSet) {
    payload.WithString("readmeMarkdown", m_readmeMarkdown);
  }

  return payload.View().WriteReadable();
}
