/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Monetary amounts associated with an invoice line item group.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PricingCurrencyAmount">AWS
 * API Reference</a></p>
 */
class PricingCurrencyAmount {
 public:
  AWS_AGREEMENTSERVICE_API PricingCurrencyAmount() = default;
  AWS_AGREEMENTSERVICE_API PricingCurrencyAmount(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API PricingCurrencyAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The monetary amount before tax.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  PricingCurrencyAmount& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum refundable amount as a string representation of a decimal
   * number.</p>
   */
  inline const Aws::String& GetMaxAdjustmentAmount() const { return m_maxAdjustmentAmount; }
  inline bool MaxAdjustmentAmountHasBeenSet() const { return m_maxAdjustmentAmountHasBeenSet; }
  template <typename MaxAdjustmentAmountT = Aws::String>
  void SetMaxAdjustmentAmount(MaxAdjustmentAmountT&& value) {
    m_maxAdjustmentAmountHasBeenSet = true;
    m_maxAdjustmentAmount = std::forward<MaxAdjustmentAmountT>(value);
  }
  template <typename MaxAdjustmentAmountT = Aws::String>
  PricingCurrencyAmount& WithMaxAdjustmentAmount(MaxAdjustmentAmountT&& value) {
    SetMaxAdjustmentAmount(std::forward<MaxAdjustmentAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 3-letter ISO 4217 currency code (e.g., <code>USD</code>,
   * <code>EUR</code>, <code>JPY</code>).</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  PricingCurrencyAmount& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_amount;

  Aws::String m_maxAdjustmentAmount;

  Aws::String m_currencyCode;
  bool m_amountHasBeenSet = false;
  bool m_maxAdjustmentAmountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
