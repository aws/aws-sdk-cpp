/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/StartAutomationJobRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAutomationJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_inputPayloadHasBeenSet) {
    payload.WithString("InputPayload", m_inputPayload);
  }

  return payload.View().WriteReadable();
}
