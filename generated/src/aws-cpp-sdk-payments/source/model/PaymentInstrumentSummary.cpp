/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/PaymentInstrumentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

PaymentInstrumentSummary::PaymentInstrumentSummary(JsonView jsonValue) { *this = jsonValue; }

PaymentInstrumentSummary& PaymentInstrumentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentMethod")) {
    m_paymentMethod = PaymentMethodMapper::GetPaymentMethodForName(jsonValue.GetString("paymentMethod"));
    m_paymentMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentInstrumentStatusMapper::GetPaymentInstrumentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentInstrumentSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_paymentMethodHasBeenSet) {
    payload.WithString("paymentMethod", PaymentMethodMapper::GetNameForPaymentMethod(m_paymentMethod));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PaymentInstrumentStatusMapper::GetNameForPaymentInstrumentStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
