/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/CreditMemoDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

CreditMemoDetails::CreditMemoDetails(JsonView jsonValue) { *this = jsonValue; }

CreditMemoDetails& CreditMemoDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("invoiceId")) {
    m_invoiceId = jsonValue.GetString("invoiceId");
    m_invoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingPeriod")) {
    m_billingPeriod = jsonValue.GetObject("billingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue CreditMemoDetails::Jsonize() const {
  JsonValue payload;

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("invoiceId", m_invoiceId);
  }

  if (m_billingPeriodHasBeenSet) {
    payload.WithObject("billingPeriod", m_billingPeriod.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
