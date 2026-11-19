/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AggregationResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AggregationResult::AggregationResult(JsonView jsonValue) { *this = jsonValue; }

AggregationResult& AggregationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GroupBy")) {
    Aws::Utils::Array<JsonView> groupByJsonList = jsonValue.GetArray("GroupBy");
    for (unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex) {
      m_groupBy.push_back(AggregatableFieldMapper::GetAggregatableFieldForName(groupByJsonList[groupByIndex].AsString()));
    }
    m_groupByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Buckets")) {
    Aws::Utils::Array<JsonView> bucketsJsonList = jsonValue.GetArray("Buckets");
    for (unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex) {
      m_buckets.push_back(bucketsJsonList[bucketsIndex].AsObject());
    }
    m_bucketsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OtherCount")) {
    m_otherCount = jsonValue.GetInteger("OtherCount");
    m_otherCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationResult::Jsonize() const {
  JsonValue payload;

  if (m_groupByHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
    for (unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex) {
      groupByJsonList[groupByIndex].AsString(AggregatableFieldMapper::GetNameForAggregatableField(m_groupBy[groupByIndex]));
    }
    payload.WithArray("GroupBy", std::move(groupByJsonList));
  }

  if (m_bucketsHasBeenSet) {
    Aws::Utils::Array<JsonValue> bucketsJsonList(m_buckets.size());
    for (unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex) {
      bucketsJsonList[bucketsIndex].AsObject(m_buckets[bucketsIndex].Jsonize());
    }
    payload.WithArray("Buckets", std::move(bucketsJsonList));
  }

  if (m_otherCountHasBeenSet) {
    payload.WithInteger("OtherCount", m_otherCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
