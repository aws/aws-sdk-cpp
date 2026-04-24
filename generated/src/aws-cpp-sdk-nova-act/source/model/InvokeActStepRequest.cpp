/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/InvokeActStepRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeActStepRequest::SerializePayload() const {
  JsonValue payload;

  if (m_callResultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> callResultsJsonList(m_callResults.size());
    for (unsigned callResultsIndex = 0; callResultsIndex < callResultsJsonList.GetLength(); ++callResultsIndex) {
      callResultsJsonList[callResultsIndex].AsObject(m_callResults[callResultsIndex].Jsonize());
    }
    payload.WithArray("callResults", std::move(callResultsJsonList));
  }

  if (m_previousStepIdHasBeenSet) {
    payload.WithString("previousStepId", m_previousStepId);
  }

  return payload.View().WriteReadable();
}
