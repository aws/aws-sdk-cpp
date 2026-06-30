/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordRequest.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchWriteRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_entriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
    for (unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex) {
      entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
    }
    payload.WithArray("Entries", std::move(entriesJsonList));
  }

  if (m_ttlDurationHasBeenSet) {
    payload.WithObject("TtlDuration", m_ttlDuration.Jsonize());
  }

  return payload.View().WriteReadable();
}
