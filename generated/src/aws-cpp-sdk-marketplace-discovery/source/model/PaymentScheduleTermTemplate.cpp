/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PaymentScheduleTermTemplate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PaymentScheduleTermTemplate::PaymentScheduleTermTemplate(JsonView jsonValue) { *this = jsonValue; }

PaymentScheduleTermTemplate& PaymentScheduleTermTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("schedule")) {
    Aws::Utils::Array<JsonView> scheduleJsonList = jsonValue.GetArray("schedule");
    for (unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex) {
      m_schedule.push_back(scheduleJsonList[scheduleIndex].AsObject());
    }
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentScheduleTermTemplate::Jsonize() const {
  JsonValue payload;

  if (m_scheduleHasBeenSet) {
    Aws::Utils::Array<JsonValue> scheduleJsonList(m_schedule.size());
    for (unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex) {
      scheduleJsonList[scheduleIndex].AsObject(m_schedule[scheduleIndex].Jsonize());
    }
    payload.WithArray("schedule", std::move(scheduleJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
