/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

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
 * <p>The details of an India net banking instrument. The instrument is registered
 * with one bank.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/InNetBanking">AWS
 * API Reference</a></p>
 */
class InNetBanking {
 public:
  AWS_PAYMENTS_API InNetBanking() = default;
  AWS_PAYMENTS_API InNetBanking(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API InNetBanking& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The code of the bank that the instrument is registered with.</p>
   */
  inline const Aws::String& GetBankCode() const { return m_bankCode; }
  inline bool BankCodeHasBeenSet() const { return m_bankCodeHasBeenSet; }
  template <typename BankCodeT = Aws::String>
  void SetBankCode(BankCodeT&& value) {
    m_bankCodeHasBeenSet = true;
    m_bankCode = std::forward<BankCodeT>(value);
  }
  template <typename BankCodeT = Aws::String>
  InNetBanking& WithBankCode(BankCodeT&& value) {
    SetBankCode(std::forward<BankCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the bank that the instrument is registered with.</p>
   */
  inline const Aws::String& GetBankName() const { return m_bankName; }
  inline bool BankNameHasBeenSet() const { return m_bankNameHasBeenSet; }
  template <typename BankNameT = Aws::String>
  void SetBankName(BankNameT&& value) {
    m_bankNameHasBeenSet = true;
    m_bankName = std::forward<BankNameT>(value);
  }
  template <typename BankNameT = Aws::String>
  InNetBanking& WithBankName(BankNameT&& value) {
    SetBankName(std::forward<BankNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bankCode;

  Aws::String m_bankName;
  bool m_bankCodeHasBeenSet = false;
  bool m_bankNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
