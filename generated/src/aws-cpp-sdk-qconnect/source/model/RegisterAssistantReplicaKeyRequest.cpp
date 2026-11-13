/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/RegisterAssistantReplicaKeyRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterAssistantReplicaKeyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_replicaKmsKeyHasBeenSet) {
    payload.WithObject("replicaKmsKey", m_replicaKmsKey.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
