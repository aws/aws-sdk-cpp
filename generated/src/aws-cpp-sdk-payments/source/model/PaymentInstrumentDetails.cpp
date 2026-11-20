/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/PaymentInstrumentDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

PaymentInstrumentDetails::PaymentInstrumentDetails(JsonView jsonValue) { *this = jsonValue; }

PaymentInstrumentDetails& PaymentInstrumentDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("card")) {
    m_card = jsonValue.GetObject("card");
    m_cardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usAchBankAccount")) {
    m_usAchBankAccount = jsonValue.GetObject("usAchBankAccount");
    m_usAchBankAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sepaBankAccount")) {
    m_sepaBankAccount = jsonValue.GetObject("sepaBankAccount");
    m_sepaBankAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ukBacsBankAccount")) {
    m_ukBacsBankAccount = jsonValue.GetObject("ukBacsBankAccount");
    m_ukBacsBankAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inNetBanking")) {
    m_inNetBanking = jsonValue.GetObject("inNetBanking");
    m_inNetBankingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cnBankRedirect")) {
    m_cnBankRedirect = jsonValue.GetObject("cnBankRedirect");
    m_cnBankRedirectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("upi")) {
    m_upi = jsonValue.GetObject("upi");
    m_upiHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentInstrumentDetails::Jsonize() const {
  JsonValue payload;

  if (m_cardHasBeenSet) {
    payload.WithObject("card", m_card.Jsonize());
  }

  if (m_usAchBankAccountHasBeenSet) {
    payload.WithObject("usAchBankAccount", m_usAchBankAccount.Jsonize());
  }

  if (m_sepaBankAccountHasBeenSet) {
    payload.WithObject("sepaBankAccount", m_sepaBankAccount.Jsonize());
  }

  if (m_ukBacsBankAccountHasBeenSet) {
    payload.WithObject("ukBacsBankAccount", m_ukBacsBankAccount.Jsonize());
  }

  if (m_inNetBankingHasBeenSet) {
    payload.WithObject("inNetBanking", m_inNetBanking.Jsonize());
  }

  if (m_cnBankRedirectHasBeenSet) {
    payload.WithObject("cnBankRedirect", m_cnBankRedirect.Jsonize());
  }

  if (m_upiHasBeenSet) {
    payload.WithObject("upi", m_upi.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
