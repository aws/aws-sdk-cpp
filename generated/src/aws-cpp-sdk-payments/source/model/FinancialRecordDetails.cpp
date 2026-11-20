/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/FinancialRecordDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

FinancialRecordDetails::FinancialRecordDetails(JsonView jsonValue) { *this = jsonValue; }

FinancialRecordDetails& FinancialRecordDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("invoiceDetails")) {
    m_invoiceDetails = jsonValue.GetObject("invoiceDetails");
    m_invoiceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creditMemoDetails")) {
    m_creditMemoDetails = jsonValue.GetObject("creditMemoDetails");
    m_creditMemoDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue FinancialRecordDetails::Jsonize() const {
  JsonValue payload;

  if (m_invoiceDetailsHasBeenSet) {
    payload.WithObject("invoiceDetails", m_invoiceDetails.Jsonize());
  }

  if (m_creditMemoDetailsHasBeenSet) {
    payload.WithObject("creditMemoDetails", m_creditMemoDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
