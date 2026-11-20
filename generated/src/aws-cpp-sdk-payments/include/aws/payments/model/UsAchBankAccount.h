/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/BankAccountType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>The details of a bank account that is debited over Automated Clearing House
 * (ACH).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/UsAchBankAccount">AWS
 * API Reference</a></p>
 */
class UsAchBankAccount {
 public:
  AWS_PAYMENTS_API UsAchBankAccount() = default;
  AWS_PAYMENTS_API UsAchBankAccount(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API UsAchBankAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The last one to four characters of the account number. This member is absent
   * until your bank provides the account details, for example before you complete
   * authentication with your bank.</p>
   */
  inline const Aws::String& GetAccountNumberTail() const { return m_accountNumberTail; }
  inline bool AccountNumberTailHasBeenSet() const { return m_accountNumberTailHasBeenSet; }
  template <typename AccountNumberTailT = Aws::String>
  void SetAccountNumberTail(AccountNumberTailT&& value) {
    m_accountNumberTailHasBeenSet = true;
    m_accountNumberTail = std::forward<AccountNumberTailT>(value);
  }
  template <typename AccountNumberTailT = Aws::String>
  UsAchBankAccount& WithAccountNumberTail(AccountNumberTailT&& value) {
    SetAccountNumberTail(std::forward<AccountNumberTailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name on the account.</p>
   */
  inline const Aws::String& GetAccountHolderName() const { return m_accountHolderName; }
  inline bool AccountHolderNameHasBeenSet() const { return m_accountHolderNameHasBeenSet; }
  template <typename AccountHolderNameT = Aws::String>
  void SetAccountHolderName(AccountHolderNameT&& value) {
    m_accountHolderNameHasBeenSet = true;
    m_accountHolderName = std::forward<AccountHolderNameT>(value);
  }
  template <typename AccountHolderNameT = Aws::String>
  UsAchBankAccount& WithAccountHolderName(AccountHolderNameT&& value) {
    SetAccountHolderName(std::forward<AccountHolderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bank holding the account.</p>
   */
  inline const Aws::String& GetBankName() const { return m_bankName; }
  inline bool BankNameHasBeenSet() const { return m_bankNameHasBeenSet; }
  template <typename BankNameT = Aws::String>
  void SetBankName(BankNameT&& value) {
    m_bankNameHasBeenSet = true;
    m_bankName = std::forward<BankNameT>(value);
  }
  template <typename BankNameT = Aws::String>
  UsAchBankAccount& WithBankName(BankNameT&& value) {
    SetBankName(std::forward<BankNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the account is a checking account or a savings account.</p>
   */
  inline BankAccountType GetAccountType() const { return m_accountType; }
  inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
  inline void SetAccountType(BankAccountType value) {
    m_accountTypeHasBeenSet = true;
    m_accountType = value;
  }
  inline UsAchBankAccount& WithAccountType(BankAccountType value) {
    SetAccountType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountNumberTail;

  Aws::String m_accountHolderName;

  Aws::String m_bankName;

  BankAccountType m_accountType{BankAccountType::NOT_SET};
  bool m_accountNumberTailHasBeenSet = false;
  bool m_accountHolderNameHasBeenSet = false;
  bool m_bankNameHasBeenSet = false;
  bool m_accountTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
