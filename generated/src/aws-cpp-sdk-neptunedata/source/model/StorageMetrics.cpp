/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/model/StorageMetrics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {

StorageMetrics::StorageMetrics(JsonView jsonValue) { *this = jsonValue; }

StorageMetrics& StorageMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sizeInBytes")) {
    m_sizeInBytes = jsonValue.GetInt64("sizeInBytes");
    m_sizeInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageMetrics::Jsonize() const {
  JsonValue payload;

  if (m_sizeInBytesHasBeenSet) {
    payload.WithInt64("sizeInBytes", m_sizeInBytes);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
