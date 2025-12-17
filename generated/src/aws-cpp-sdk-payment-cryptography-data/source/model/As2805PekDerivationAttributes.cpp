/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/As2805PekDerivationAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

As2805PekDerivationAttributes::As2805PekDerivationAttributes(JsonView jsonValue) { *this = jsonValue; }

As2805PekDerivationAttributes& As2805PekDerivationAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SystemTraceAuditNumber")) {
    m_systemTraceAuditNumber = jsonValue.GetString("SystemTraceAuditNumber");
    m_systemTraceAuditNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransactionAmount")) {
    m_transactionAmount = jsonValue.GetString("TransactionAmount");
    m_transactionAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue As2805PekDerivationAttributes::Jsonize() const {
  JsonValue payload;

  if (m_systemTraceAuditNumberHasBeenSet) {
    payload.WithString("SystemTraceAuditNumber", m_systemTraceAuditNumber);
  }

  if (m_transactionAmountHasBeenSet) {
    payload.WithString("TransactionAmount", m_transactionAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
