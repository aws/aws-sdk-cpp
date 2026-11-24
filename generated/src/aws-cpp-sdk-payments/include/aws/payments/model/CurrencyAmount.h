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
 * <p>A monetary amount expressed as a decimal string in the currency's standard
 * unit.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/CurrencyAmount">AWS
 * API Reference</a></p>
 */
class CurrencyAmount {
 public:
  AWS_PAYMENTS_API CurrencyAmount() = default;
  AWS_PAYMENTS_API CurrencyAmount(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API CurrencyAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount, as a decimal string, such as <code>10.99</code>. The number of
   * decimal places can differ between amounts, for example <code>0.0</code> and
   * <code>1000.24</code>.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  CurrencyAmount& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO 4217 currency code for the amount (for example,
   * <code>USD</code>).</p>
   */
  inline const Aws::String& GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  template <typename CurrencyT = Aws::String>
  void SetCurrency(CurrencyT&& value) {
    m_currencyHasBeenSet = true;
    m_currency = std::forward<CurrencyT>(value);
  }
  template <typename CurrencyT = Aws::String>
  CurrencyAmount& WithCurrency(CurrencyT&& value) {
    SetCurrency(std::forward<CurrencyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::String m_currency;
  bool m_valueHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
