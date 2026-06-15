/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/RevenuePathStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

RevenuePathStatistics::RevenuePathStatistics(JsonView jsonValue) { *this = jsonValue; }

RevenuePathStatistics& RevenuePathStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Path")) {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Percentage")) {
    m_percentage = jsonValue.GetDouble("Percentage");
    m_percentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Amount")) {
    m_amount = jsonValue.GetString("Amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestCount")) {
    m_requestCount = jsonValue.GetInt64("RequestCount");
    m_requestCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RevenuePathStatistics::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("Path", m_path);
  }

  if (m_percentageHasBeenSet) {
    payload.WithDouble("Percentage", m_percentage);
  }

  if (m_amountHasBeenSet) {
    payload.WithString("Amount", m_amount);
  }

  if (m_requestCountHasBeenSet) {
    payload.WithInt64("RequestCount", m_requestCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
