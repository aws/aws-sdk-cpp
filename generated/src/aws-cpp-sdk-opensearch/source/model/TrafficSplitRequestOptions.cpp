/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/TrafficSplitRequestOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

TrafficSplitRequestOptions::TrafficSplitRequestOptions(JsonView jsonValue) { *this = jsonValue; }

TrafficSplitRequestOptions& TrafficSplitRequestOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Strategy")) {
    m_strategy = TrafficStrategyMapper::GetTrafficStrategyForName(jsonValue.GetString("Strategy"));
    m_strategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloneReadTrafficPercent")) {
    m_cloneReadTrafficPercent = jsonValue.GetInteger("CloneReadTrafficPercent");
    m_cloneReadTrafficPercentHasBeenSet = true;
  }
  return *this;
}

JsonValue TrafficSplitRequestOptions::Jsonize() const {
  JsonValue payload;

  if (m_strategyHasBeenSet) {
    payload.WithString("Strategy", TrafficStrategyMapper::GetNameForTrafficStrategy(m_strategy));
  }

  if (m_cloneReadTrafficPercentHasBeenSet) {
    payload.WithInteger("CloneReadTrafficPercent", m_cloneReadTrafficPercent);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
