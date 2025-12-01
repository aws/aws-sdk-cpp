/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ScheduleItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ScheduleItem::ScheduleItem(JsonView jsonValue) { *this = jsonValue; }

ScheduleItem& ScheduleItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("chargeDate")) {
    m_chargeDate = jsonValue.GetDouble("chargeDate");
    m_chargeDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeAmount")) {
    m_chargeAmount = jsonValue.GetString("chargeAmount");
    m_chargeAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleItem::Jsonize() const {
  JsonValue payload;

  if (m_chargeDateHasBeenSet) {
    payload.WithDouble("chargeDate", m_chargeDate.SecondsWithMSPrecision());
  }

  if (m_chargeAmountHasBeenSet) {
    payload.WithString("chargeAmount", m_chargeAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
