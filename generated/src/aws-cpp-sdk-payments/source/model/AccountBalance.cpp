/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/AccountBalance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

AccountBalance::AccountBalance(JsonView jsonValue) { *this = jsonValue; }

AccountBalance& AccountBalance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetObject("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("merchantOfRecord")) {
    m_merchantOfRecord = jsonValue.GetString("merchantOfRecord");
    m_merchantOfRecordHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountBalance::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithObject("amount", m_amount.Jsonize());
  }

  if (m_merchantOfRecordHasBeenSet) {
    payload.WithString("merchantOfRecord", m_merchantOfRecord);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
