/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/SettlementRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

SettlementRecord::SettlementRecord(JsonView jsonValue) { *this = jsonValue; }

SettlementRecord& SettlementRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PayerAddress")) {
    m_payerAddress = jsonValue.GetString("PayerAddress");
    m_payerAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WalletAddress")) {
    m_walletAddress = jsonValue.GetString("WalletAddress");
    m_walletAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = SettlementStatusMapper::GetSettlementStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Amount")) {
    m_amount = jsonValue.GetString("Amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Currency")) {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("Currency"));
    m_currencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Network")) {
    m_network = jsonValue.GetString("Network");
    m_networkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransactionId")) {
    m_transactionId = jsonValue.GetString("TransactionId");
    m_transactionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestId")) {
    m_requestId = jsonValue.GetString("RequestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceName")) {
    m_sourceName = jsonValue.GetString("SourceName");
    m_sourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Organization")) {
    m_organization = jsonValue.GetString("Organization");
    m_organizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceCategory")) {
    m_sourceCategory = jsonValue.GetString("SourceCategory");
    m_sourceCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Intent")) {
    m_intent = jsonValue.GetString("Intent");
    m_intentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Verified")) {
    m_verified = jsonValue.GetBool("Verified");
    m_verifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContentPath")) {
    m_contentPath = jsonValue.GetString("ContentPath");
    m_contentPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebAclArn")) {
    m_webAclArn = jsonValue.GetString("WebAclArn");
    m_webAclArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestTimestamp")) {
    m_requestTimestamp = jsonValue.GetDouble("RequestTimestamp");
    m_requestTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue SettlementRecord::Jsonize() const {
  JsonValue payload;

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_payerAddressHasBeenSet) {
    payload.WithString("PayerAddress", m_payerAddress);
  }

  if (m_walletAddressHasBeenSet) {
    payload.WithString("WalletAddress", m_walletAddress);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", SettlementStatusMapper::GetNameForSettlementStatus(m_status));
  }

  if (m_amountHasBeenSet) {
    payload.WithString("Amount", m_amount);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("Currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if (m_networkHasBeenSet) {
    payload.WithString("Network", m_network);
  }

  if (m_transactionIdHasBeenSet) {
    payload.WithString("TransactionId", m_transactionId);
  }

  if (m_requestIdHasBeenSet) {
    payload.WithString("RequestId", m_requestId);
  }

  if (m_sourceNameHasBeenSet) {
    payload.WithString("SourceName", m_sourceName);
  }

  if (m_organizationHasBeenSet) {
    payload.WithString("Organization", m_organization);
  }

  if (m_sourceCategoryHasBeenSet) {
    payload.WithString("SourceCategory", m_sourceCategory);
  }

  if (m_intentHasBeenSet) {
    payload.WithString("Intent", m_intent);
  }

  if (m_verifiedHasBeenSet) {
    payload.WithBool("Verified", m_verified);
  }

  if (m_contentPathHasBeenSet) {
    payload.WithString("ContentPath", m_contentPath);
  }

  if (m_webAclArnHasBeenSet) {
    payload.WithString("WebAclArn", m_webAclArn);
  }

  if (m_requestTimestampHasBeenSet) {
    payload.WithDouble("RequestTimestamp", m_requestTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
