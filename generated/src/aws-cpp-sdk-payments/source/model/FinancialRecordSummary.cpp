/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/FinancialRecordSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

FinancialRecordSummary::FinancialRecordSummary(JsonView jsonValue) { *this = jsonValue; }

FinancialRecordSummary& FinancialRecordSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = FinancialRecordTypeMapper::GetFinancialRecordTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("businessUnit")) {
    m_businessUnit = jsonValue.GetObject("businessUnit");
    m_businessUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetObject("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("balances")) {
    m_balances = jsonValue.GetObject("balances");
    m_balancesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("settlementStatus")) {
    m_settlementStatus = SettlementStatusMapper::GetSettlementStatusForName(jsonValue.GetString("settlementStatus"));
    m_settlementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FinancialRecordStatusMapper::GetFinancialRecordStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuedAt")) {
    m_issuedAt = jsonValue.GetDouble("issuedAt");
    m_issuedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("closedAt")) {
    m_closedAt = jsonValue.GetDouble("closedAt");
    m_closedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FinancialRecordSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", FinancialRecordTypeMapper::GetNameForFinancialRecordType(m_type));
  }

  if (m_businessUnitHasBeenSet) {
    payload.WithObject("businessUnit", m_businessUnit.Jsonize());
  }

  if (m_amountHasBeenSet) {
    payload.WithObject("amount", m_amount.Jsonize());
  }

  if (m_balancesHasBeenSet) {
    payload.WithObject("balances", m_balances.Jsonize());
  }

  if (m_settlementStatusHasBeenSet) {
    payload.WithString("settlementStatus", SettlementStatusMapper::GetNameForSettlementStatus(m_settlementStatus));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FinancialRecordStatusMapper::GetNameForFinancialRecordStatus(m_status));
  }

  if (m_issuedAtHasBeenSet) {
    payload.WithDouble("issuedAt", m_issuedAt.SecondsWithMSPrecision());
  }

  if (m_closedAtHasBeenSet) {
    payload.WithDouble("closedAt", m_closedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
