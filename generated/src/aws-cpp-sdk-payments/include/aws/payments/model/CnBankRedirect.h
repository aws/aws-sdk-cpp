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
 * <p>The details of a China bank redirect instrument. A retail instrument is
 * registered with one bank and carries that bank's code. A corporate instrument
 * isn't registered with a bank.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/CnBankRedirect">AWS
 * API Reference</a></p>
 */
class CnBankRedirect {
 public:
  AWS_PAYMENTS_API CnBankRedirect() = default;
  AWS_PAYMENTS_API CnBankRedirect(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API CnBankRedirect& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The code of the bank that the instrument is registered with. This member is
   * present only for retail instruments.</p>
   */
  inline const Aws::String& GetBankCode() const { return m_bankCode; }
  inline bool BankCodeHasBeenSet() const { return m_bankCodeHasBeenSet; }
  template <typename BankCodeT = Aws::String>
  void SetBankCode(BankCodeT&& value) {
    m_bankCodeHasBeenSet = true;
    m_bankCode = std::forward<BankCodeT>(value);
  }
  template <typename BankCodeT = Aws::String>
  CnBankRedirect& WithBankCode(BankCodeT&& value) {
    SetBankCode(std::forward<BankCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bankCode;
  bool m_bankCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
