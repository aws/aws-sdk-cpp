﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/UntagResourceRequest.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UntagResourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workspaceInstanceIdHasBeenSet) {
    payload.WithString("WorkspaceInstanceId", m_workspaceInstanceId);
  }

  if (m_tagKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
    for (unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex) {
      tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
    }
    payload.WithArray("TagKeys", std::move(tagKeysJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UntagResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EUCMIFrontendAPIService.UntagResource"));
  return headers;
}
