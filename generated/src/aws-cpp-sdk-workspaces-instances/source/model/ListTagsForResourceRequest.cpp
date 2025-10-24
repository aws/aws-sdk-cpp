﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/ListTagsForResourceRequest.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListTagsForResourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workspaceInstanceIdHasBeenSet) {
    payload.WithString("WorkspaceInstanceId", m_workspaceInstanceId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsForResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EUCMIFrontendAPIService.ListTagsForResource"));
  return headers;
}
