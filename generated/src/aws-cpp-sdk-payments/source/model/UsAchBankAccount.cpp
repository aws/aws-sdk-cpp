/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/UsAchBankAccount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

UsAchBankAccount::UsAchBankAccount(JsonView jsonValue) { *this = jsonValue; }

UsAchBankAccount& UsAchBankAccount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountNumberTail")) {
    m_accountNumberTail = jsonValue.GetString("accountNumberTail");
    m_accountNumberTailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountHolderName")) {
    m_accountHolderName = jsonValue.GetString("accountHolderName");
    m_accountHolderNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bankName")) {
    m_bankName = jsonValue.GetString("bankName");
    m_bankNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountType")) {
    m_accountType = BankAccountTypeMapper::GetBankAccountTypeForName(jsonValue.GetString("accountType"));
    m_accountTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UsAchBankAccount::Jsonize() const {
  JsonValue payload;

  if (m_accountNumberTailHasBeenSet) {
    payload.WithString("accountNumberTail", m_accountNumberTail);
  }

  if (m_accountHolderNameHasBeenSet) {
    payload.WithString("accountHolderName", m_accountHolderName);
  }

  if (m_bankNameHasBeenSet) {
    payload.WithString("bankName", m_bankName);
  }

  if (m_accountTypeHasBeenSet) {
    payload.WithString("accountType", BankAccountTypeMapper::GetNameForBankAccountType(m_accountType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
