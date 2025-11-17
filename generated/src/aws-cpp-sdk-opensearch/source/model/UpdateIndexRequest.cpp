/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/UpdateIndexRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIndexRequest::SerializePayload() const {
  JsonValue payload;

  if (m_indexSchemaHasBeenSet) {
    if (!m_indexSchema.View().IsNull()) {
      payload.WithObject("IndexSchema", JsonValue(m_indexSchema.View()));
    }
  }

  return payload.View().WriteReadable();
}
