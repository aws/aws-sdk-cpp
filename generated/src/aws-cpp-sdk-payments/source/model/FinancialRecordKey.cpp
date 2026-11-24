/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/FinancialRecordKey.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

FinancialRecordKey::FinancialRecordKey(JsonView jsonValue) { *this = jsonValue; }

FinancialRecordKey& FinancialRecordKey::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoiceIdentifier")) {
    m_invoiceIdentifier = jsonValue.GetString("invoiceIdentifier");
    m_invoiceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue FinancialRecordKey::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_invoiceIdentifierHasBeenSet) {
    payload.WithString("invoiceIdentifier", m_invoiceIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
