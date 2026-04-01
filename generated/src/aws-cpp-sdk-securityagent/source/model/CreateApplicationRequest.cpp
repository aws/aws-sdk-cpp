/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateApplicationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idcInstanceArnHasBeenSet) {
    payload.WithString("idcInstanceArn", m_idcInstanceArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_defaultKmsKeyIdHasBeenSet) {
    payload.WithString("defaultKmsKeyId", m_defaultKmsKeyId);
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
