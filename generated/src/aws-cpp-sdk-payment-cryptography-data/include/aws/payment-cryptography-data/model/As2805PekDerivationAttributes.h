/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptographyData {
namespace Model {

/**
 * <p>Parameter information to use a PEK derived using AS2805.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/As2805PekDerivationAttributes">AWS
 * API Reference</a></p>
 */
class As2805PekDerivationAttributes {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API As2805PekDerivationAttributes() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API As2805PekDerivationAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API As2805PekDerivationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The system trace audit number for the transaction.</p>
   */
  inline const Aws::String& GetSystemTraceAuditNumber() const { return m_systemTraceAuditNumber; }
  inline bool SystemTraceAuditNumberHasBeenSet() const { return m_systemTraceAuditNumberHasBeenSet; }
  template <typename SystemTraceAuditNumberT = Aws::String>
  void SetSystemTraceAuditNumber(SystemTraceAuditNumberT&& value) {
    m_systemTraceAuditNumberHasBeenSet = true;
    m_systemTraceAuditNumber = std::forward<SystemTraceAuditNumberT>(value);
  }
  template <typename SystemTraceAuditNumberT = Aws::String>
  As2805PekDerivationAttributes& WithSystemTraceAuditNumber(SystemTraceAuditNumberT&& value) {
    SetSystemTraceAuditNumber(std::forward<SystemTraceAuditNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transaction amount for the transaction.</p>
   */
  inline const Aws::String& GetTransactionAmount() const { return m_transactionAmount; }
  inline bool TransactionAmountHasBeenSet() const { return m_transactionAmountHasBeenSet; }
  template <typename TransactionAmountT = Aws::String>
  void SetTransactionAmount(TransactionAmountT&& value) {
    m_transactionAmountHasBeenSet = true;
    m_transactionAmount = std::forward<TransactionAmountT>(value);
  }
  template <typename TransactionAmountT = Aws::String>
  As2805PekDerivationAttributes& WithTransactionAmount(TransactionAmountT&& value) {
    SetTransactionAmount(std::forward<TransactionAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemTraceAuditNumber;

  Aws::String m_transactionAmount;
  bool m_systemTraceAuditNumberHasBeenSet = false;
  bool m_transactionAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
