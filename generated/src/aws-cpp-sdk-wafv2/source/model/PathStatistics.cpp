/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/PathStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

PathStatistics::PathStatistics(JsonView jsonValue) { *this = jsonValue; }

PathStatistics& PathStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Path")) {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestCount")) {
    m_requestCount = jsonValue.GetInt64("RequestCount");
    m_requestCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Percentage")) {
    m_percentage = jsonValue.GetDouble("Percentage");
    m_percentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TopBots")) {
    Aws::Utils::Array<JsonView> topBotsJsonList = jsonValue.GetArray("TopBots");
    for (unsigned topBotsIndex = 0; topBotsIndex < topBotsJsonList.GetLength(); ++topBotsIndex) {
      m_topBots.push_back(topBotsJsonList[topBotsIndex].AsObject());
    }
    m_topBotsHasBeenSet = true;
  }
  return *this;
}

JsonValue PathStatistics::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_pathHasBeenSet) {
    payload.WithString("Path", m_path);
  }

  if (m_requestCountHasBeenSet) {
    payload.WithInt64("RequestCount", m_requestCount);
  }

  if (m_percentageHasBeenSet) {
    payload.WithDouble("Percentage", m_percentage);
  }

  if (m_topBotsHasBeenSet) {
    Aws::Utils::Array<JsonValue> topBotsJsonList(m_topBots.size());
    for (unsigned topBotsIndex = 0; topBotsIndex < topBotsJsonList.GetLength(); ++topBotsIndex) {
      topBotsJsonList[topBotsIndex].AsObject(m_topBots[topBotsIndex].Jsonize());
    }
    payload.WithArray("TopBots", std::move(topBotsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
