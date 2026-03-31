/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/CancelRunBatchRequest.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelRunBatchRequest::SerializePayload() const {
  JsonValue payload;

  if (m_batchIdHasBeenSet) {
    payload.WithString("batchId", m_batchId);
  }

  return payload.View().WriteReadable();
}
