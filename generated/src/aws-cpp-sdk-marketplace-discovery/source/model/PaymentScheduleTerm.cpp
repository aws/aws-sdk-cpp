/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PaymentScheduleTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PaymentScheduleTerm::PaymentScheduleTerm(JsonView jsonValue) { *this = jsonValue; }

PaymentScheduleTerm& PaymentScheduleTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = TermTypeMapper::GetTermTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schedule")) {
    Aws::Utils::Array<JsonView> scheduleJsonList = jsonValue.GetArray("schedule");
    for (unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex) {
      m_schedule.push_back(scheduleJsonList[scheduleIndex].AsObject());
    }
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentScheduleTerm::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", TermTypeMapper::GetNameForTermType(m_type));
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

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
