/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Model {

BatchWriteRecordEntry::BatchWriteRecordEntry(JsonView jsonValue) { *this = jsonValue; }

BatchWriteRecordEntry& BatchWriteRecordEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FeatureGroupName")) {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");
    m_featureGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Record")) {
    Aws::Utils::Array<JsonView> recordJsonList = jsonValue.GetArray("Record");
    for (unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex) {
      m_record.push_back(recordJsonList[recordIndex].AsObject());
    }
    m_recordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetStores")) {
    Aws::Utils::Array<JsonView> targetStoresJsonList = jsonValue.GetArray("TargetStores");
    for (unsigned targetStoresIndex = 0; targetStoresIndex < targetStoresJsonList.GetLength(); ++targetStoresIndex) {
      m_targetStores.push_back(TargetStoreMapper::GetTargetStoreForName(targetStoresJsonList[targetStoresIndex].AsString()));
    }
    m_targetStoresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TtlDuration")) {
    m_ttlDuration = jsonValue.GetObject("TtlDuration");
    m_ttlDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchWriteRecordEntry::Jsonize() const {
  JsonValue payload;

  if (m_featureGroupNameHasBeenSet) {
    payload.WithString("FeatureGroupName", m_featureGroupName);
  }

  if (m_recordHasBeenSet) {
    Aws::Utils::Array<JsonValue> recordJsonList(m_record.size());
    for (unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex) {
      recordJsonList[recordIndex].AsObject(m_record[recordIndex].Jsonize());
    }
    payload.WithArray("Record", std::move(recordJsonList));
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

  return payload;
}

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
