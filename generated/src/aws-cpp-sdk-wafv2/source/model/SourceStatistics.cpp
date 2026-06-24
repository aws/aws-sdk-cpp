/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/SourceStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

SourceStatistics::SourceStatistics(JsonView jsonValue) { *this = jsonValue; }

SourceStatistics& SourceStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceName")) {
    m_sourceName = jsonValue.GetString("SourceName");
    m_sourceNameHasBeenSet = true;
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
  if (jsonValue.ValueExists("SourceCategory")) {
    m_sourceCategory = jsonValue.GetString("SourceCategory");
    m_sourceCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Intent")) {
    m_intent = jsonValue.GetString("Intent");
    m_intentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Organization")) {
    m_organization = jsonValue.GetString("Organization");
    m_organizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Verified")) {
    m_verified = jsonValue.GetBool("Verified");
    m_verifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupByValue")) {
    m_groupByValue = jsonValue.GetString("GroupByValue");
    m_groupByValueHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceStatistics::Jsonize() const {
  JsonValue payload;

  if (m_sourceNameHasBeenSet) {
    payload.WithString("SourceName", m_sourceName);
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

  if (m_sourceCategoryHasBeenSet) {
    payload.WithString("SourceCategory", m_sourceCategory);
  }

  if (m_intentHasBeenSet) {
    payload.WithString("Intent", m_intent);
  }

  if (m_organizationHasBeenSet) {
    payload.WithString("Organization", m_organization);
  }

  if (m_verifiedHasBeenSet) {
    payload.WithBool("Verified", m_verified);
  }

  if (m_groupByValueHasBeenSet) {
    payload.WithString("GroupByValue", m_groupByValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
