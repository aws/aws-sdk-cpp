/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteTrainingOperationRequest.h>

#include <utility>

using namespace Aws::SageMakerTrainingSessionRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExecuteTrainingOperationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_operationConfigHasBeenSet) {
    payload.WithObject("operationConfig", m_operationConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
