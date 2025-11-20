/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/TrendsMetricsResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

TrendsMetricsResult::TrendsMetricsResult(JsonView jsonValue) { *this = jsonValue; }

TrendsMetricsResult& TrendsMetricsResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetString("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrendsValues")) {
    m_trendsValues = jsonValue.GetObject("TrendsValues");
    m_trendsValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue TrendsMetricsResult::Jsonize() const {
  JsonValue payload;

  if (m_timestampHasBeenSet) {
    payload.WithString("Timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_trendsValuesHasBeenSet) {
    payload.WithObject("TrendsValues", m_trendsValues.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
