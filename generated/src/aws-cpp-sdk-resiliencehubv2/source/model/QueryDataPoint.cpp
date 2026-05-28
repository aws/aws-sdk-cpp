/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/QueryDataPoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

QueryDataPoint::QueryDataPoint(JsonView jsonValue) { *this = jsonValue; }

QueryDataPoint& QueryDataPoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryCount")) {
    m_queryCount = jsonValue.GetInt64("queryCount");
    m_queryCountHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryDataPoint::Jsonize() const {
  JsonValue payload;

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_queryCountHasBeenSet) {
    payload.WithInt64("queryCount", m_queryCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
