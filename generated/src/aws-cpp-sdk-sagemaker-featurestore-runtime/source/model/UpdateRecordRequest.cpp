/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/model/UpdateRecordRequest.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recordIdentifierValueAsStringHasBeenSet) {
    payload.WithString("RecordIdentifierValueAsString", m_recordIdentifierValueAsString);
  }

  if (m_featuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
    }
    payload.WithArray("Features", std::move(featuresJsonList));
  }

  if (m_targetStoresHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetStoresJsonList(m_targetStores.size());
    for (unsigned targetStoresIndex = 0; targetStoresIndex < targetStoresJsonList.GetLength(); ++targetStoresIndex) {
      targetStoresJsonList[targetStoresIndex].AsString(TargetStoreMapper::GetNameForTargetStore(m_targetStores[targetStoresIndex]));
    }
    payload.WithArray("TargetStores", std::move(targetStoresJsonList));
  }

  if (m_ttlDurationHasBeenSet) {
    payload.WithObject("TtlDuration", m_ttlDuration.Jsonize());
  }

  return payload.View().WriteReadable();
}
