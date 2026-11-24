/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/BillingPeriod.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

BillingPeriod::BillingPeriod(JsonView jsonValue) { *this = jsonValue; }

BillingPeriod& BillingPeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetDouble("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetDouble("endDate");
    m_endDateHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingPeriod::Jsonize() const {
  JsonValue payload;

  if (m_startDateHasBeenSet) {
    payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
