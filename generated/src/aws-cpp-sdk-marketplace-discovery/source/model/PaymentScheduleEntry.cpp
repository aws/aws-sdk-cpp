/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PaymentScheduleEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PaymentScheduleEntry::PaymentScheduleEntry(JsonView jsonValue) { *this = jsonValue; }

PaymentScheduleEntry& PaymentScheduleEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("chargeDateOffset")) {
    m_chargeDateOffset = jsonValue.GetString("chargeDateOffset");
    m_chargeDateOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargePercentage")) {
    m_chargePercentage = jsonValue.GetString("chargePercentage");
    m_chargePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dayOfMonth")) {
    m_dayOfMonth = jsonValue.GetInteger("dayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentScheduleEntry::Jsonize() const {
  JsonValue payload;

  if (m_chargeDateOffsetHasBeenSet) {
    payload.WithString("chargeDateOffset", m_chargeDateOffset);
  }

  if (m_chargePercentageHasBeenSet) {
    payload.WithString("chargePercentage", m_chargePercentage);
  }

  if (m_dayOfMonthHasBeenSet) {
    payload.WithInteger("dayOfMonth", m_dayOfMonth);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
