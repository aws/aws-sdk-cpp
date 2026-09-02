/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/OnlineStoreConfigUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

OnlineStoreConfigUpdate::OnlineStoreConfigUpdate(JsonView jsonValue) { *this = jsonValue; }

OnlineStoreConfigUpdate& OnlineStoreConfigUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TtlDuration")) {
    m_ttlDuration = jsonValue.GetObject("TtlDuration");
    m_ttlDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageType")) {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));
    m_storageTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue OnlineStoreConfigUpdate::Jsonize() const {
  JsonValue payload;

  if (m_ttlDurationHasBeenSet) {
    payload.WithObject("TtlDuration", m_ttlDuration.Jsonize());
  }

  if (m_storageTypeHasBeenSet) {
    payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
