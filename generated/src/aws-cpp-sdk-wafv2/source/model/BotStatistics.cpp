/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/BotStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

BotStatistics::BotStatistics(JsonView jsonValue) { *this = jsonValue; }

BotStatistics& BotStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BotName")) {
    m_botName = jsonValue.GetString("BotName");
    m_botNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestCount")) {
    m_requestCount = jsonValue.GetInt64("RequestCount");
    m_requestCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Percentage")) {
    m_percentage = jsonValue.GetDouble("Percentage");
    m_percentageHasBeenSet = true;
  }
  return *this;
}

JsonValue BotStatistics::Jsonize() const {
  JsonValue payload;

  if (m_botNameHasBeenSet) {
    payload.WithString("BotName", m_botName);
  }

  if (m_requestCountHasBeenSet) {
    payload.WithInt64("RequestCount", m_requestCount);
  }

  if (m_percentageHasBeenSet) {
    payload.WithDouble("Percentage", m_percentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
