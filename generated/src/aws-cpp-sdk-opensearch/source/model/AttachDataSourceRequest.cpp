/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/AttachDataSourceRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AttachDataSourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_dataSourceArnHasBeenSet) {
    payload.WithString("dataSourceArn", m_dataSourceArn);
  }

  if (m_workspaceIdHasBeenSet) {
    payload.WithString("workspaceId", m_workspaceId);
  }

  if (m_workspaceConfigurationHasBeenSet) {
    payload.WithObject("workspaceConfiguration", m_workspaceConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
