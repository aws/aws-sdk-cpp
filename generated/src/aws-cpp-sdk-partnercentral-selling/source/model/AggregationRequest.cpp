/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AggregationRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AggregationRequest::AggregationRequest(JsonView jsonValue) { *this = jsonValue; }

AggregationRequest& AggregationRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GroupBy")) {
    Aws::Utils::Array<JsonView> groupByJsonList = jsonValue.GetArray("GroupBy");
    for (unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex) {
      m_groupBy.push_back(AggregatableFieldMapper::GetAggregatableFieldForName(groupByJsonList[groupByIndex].AsString()));
    }
    m_groupByHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationRequest::Jsonize() const {
  JsonValue payload;

  if (m_groupByHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
    for (unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex) {
      groupByJsonList[groupByIndex].AsString(AggregatableFieldMapper::GetNameForAggregatableField(m_groupBy[groupByIndex]));
    }
    payload.WithArray("GroupBy", std::move(groupByJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
