/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/DetachDataSourceRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DetachDataSourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_dataSourceArnHasBeenSet) {
    payload.WithString("dataSourceArn", m_dataSourceArn);
  }

  return payload.View().WriteReadable();
}
