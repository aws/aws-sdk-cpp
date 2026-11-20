/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/CurrencyAmount.h>

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
 * <p>An amount of the balance that <code>GetAccountBalance</code> returns: the
 * total for one merchant of record in one currency.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/AccountBalance">AWS
 * API Reference</a></p>
 */
class AccountBalance {
 public:
  AWS_PAYMENTS_API AccountBalance() = default;
  AWS_PAYMENTS_API AccountBalance(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API AccountBalance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount, in the currency that the records making up this balance were
   * issued in.</p>
   */
  inline const CurrencyAmount& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = CurrencyAmount>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = CurrencyAmount>
  AccountBalance& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The merchant of record that issued the invoices or credit memos that make up
   * this amount.</p>
   */
  inline const Aws::String& GetMerchantOfRecord() const { return m_merchantOfRecord; }
  inline bool MerchantOfRecordHasBeenSet() const { return m_merchantOfRecordHasBeenSet; }
  template <typename MerchantOfRecordT = Aws::String>
  void SetMerchantOfRecord(MerchantOfRecordT&& value) {
    m_merchantOfRecordHasBeenSet = true;
    m_merchantOfRecord = std::forward<MerchantOfRecordT>(value);
  }
  template <typename MerchantOfRecordT = Aws::String>
  AccountBalance& WithMerchantOfRecord(MerchantOfRecordT&& value) {
    SetMerchantOfRecord(std::forward<MerchantOfRecordT>(value));
    return *this;
  }
  ///@}
 private:
  CurrencyAmount m_amount;

  Aws::String m_merchantOfRecord;
  bool m_amountHasBeenSet = false;
  bool m_merchantOfRecordHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
