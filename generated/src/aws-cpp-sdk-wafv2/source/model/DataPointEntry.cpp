/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/DataPointEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

DataPointEntry::DataPointEntry(JsonView jsonValue) { *this = jsonValue; }

DataPointEntry& DataPointEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Date")) {
    m_date = jsonValue.GetDouble("Date");
    m_dateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MonetizeServedCount")) {
    m_monetizeServedCount = jsonValue.GetInt64("MonetizeServedCount");
    m_monetizeServedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SettledCount")) {
    m_settledCount = jsonValue.GetInt64("SettledCount");
    m_settledCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalAmount")) {
    m_totalAmount = jsonValue.GetString("TotalAmount");
    m_totalAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Intent")) {
    m_intent = jsonValue.GetString("Intent");
    m_intentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupByValue")) {
    m_groupByValue = jsonValue.GetString("GroupByValue");
    m_groupByValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPointEntry::Jsonize() const {
  JsonValue payload;

  if (m_dateHasBeenSet) {
    payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  if (m_monetizeServedCountHasBeenSet) {
    payload.WithInt64("MonetizeServedCount", m_monetizeServedCount);
  }

  if (m_settledCountHasBeenSet) {
    payload.WithInt64("SettledCount", m_settledCount);
  }

  if (m_totalAmountHasBeenSet) {
    payload.WithString("TotalAmount", m_totalAmount);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  if (m_intentHasBeenSet) {
    payload.WithString("Intent", m_intent);
  }

  if (m_groupByValueHasBeenSet) {
    payload.WithString("GroupByValue", m_groupByValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
