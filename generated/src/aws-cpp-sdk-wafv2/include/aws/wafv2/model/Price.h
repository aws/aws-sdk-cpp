/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CryptoCurrency.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>The price per request for a payment network, specifying the amount and
 * cryptocurrency.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Price">AWS API
 * Reference</a></p>
 */
class Price {
 public:
  AWS_WAFV2_API Price() = default;
  AWS_WAFV2_API Price(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Price& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The price per request as a decimal string in the specified currency. Minimum:
   * 0.001. Maximum: 999999999.999. Supports up to 3 decimal places.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  Price& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cryptocurrency for payment. Currently only <code>USDC</code> is
   * supported.</p>
   */
  inline CryptoCurrency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(CryptoCurrency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline Price& WithCurrency(CryptoCurrency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_amount;

  CryptoCurrency m_currency{CryptoCurrency::NOT_SET};
  bool m_amountHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
