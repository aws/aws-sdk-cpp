/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CapacityBytesRangeFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CapacityBytesRangeFilter::CapacityBytesRangeFilter(JsonView jsonValue) { *this = jsonValue; }

CapacityBytesRangeFilter& CapacityBytesRangeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minBytes")) {
    m_minBytes = jsonValue.GetInt64("minBytes");
    m_minBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxBytes")) {
    m_maxBytes = jsonValue.GetInt64("maxBytes");
    m_maxBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityBytesRangeFilter::Jsonize() const {
  JsonValue payload;

  if (m_minBytesHasBeenSet) {
    payload.WithInt64("minBytes", m_minBytes);
  }

  if (m_maxBytesHasBeenSet) {
    payload.WithInt64("maxBytes", m_maxBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
