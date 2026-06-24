/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/CurrencyCode.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>The pricing details for a subscription.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/SubscriptionPricingDetails">AWS
 * API Reference</a></p>
 */
class SubscriptionPricingDetails {
 public:
  AWS_OUTPOSTS_API SubscriptionPricingDetails() = default;
  AWS_OUTPOSTS_API SubscriptionPricingDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API SubscriptionPricingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The payment option.</p>
   */
  inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
  inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
  inline void SetPaymentOption(PaymentOption value) {
    m_paymentOptionHasBeenSet = true;
    m_paymentOption = value;
  }
  inline SubscriptionPricingDetails& WithPaymentOption(PaymentOption value) {
    SetPaymentOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment term.</p>
   */
  inline PaymentTerm GetPaymentTerm() const { return m_paymentTerm; }
  inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }
  inline void SetPaymentTerm(PaymentTerm value) {
    m_paymentTermHasBeenSet = true;
    m_paymentTerm = value;
  }
  inline SubscriptionPricingDetails& WithPaymentTerm(PaymentTerm value) {
    SetPaymentTerm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upfront price.</p>
   */
  inline double GetUpfrontPrice() const { return m_upfrontPrice; }
  inline bool UpfrontPriceHasBeenSet() const { return m_upfrontPriceHasBeenSet; }
  inline void SetUpfrontPrice(double value) {
    m_upfrontPriceHasBeenSet = true;
    m_upfrontPrice = value;
  }
  inline SubscriptionPricingDetails& WithUpfrontPrice(double value) {
    SetUpfrontPrice(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monthly recurring price.</p>
   */
  inline double GetMonthlyRecurringPrice() const { return m_monthlyRecurringPrice; }
  inline bool MonthlyRecurringPriceHasBeenSet() const { return m_monthlyRecurringPriceHasBeenSet; }
  inline void SetMonthlyRecurringPrice(double value) {
    m_monthlyRecurringPriceHasBeenSet = true;
    m_monthlyRecurringPrice = value;
  }
  inline SubscriptionPricingDetails& WithMonthlyRecurringPrice(double value) {
    SetMonthlyRecurringPrice(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency of the price. Currently only <code>USD</code> is supported.</p>
   */
  inline CurrencyCode GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(CurrencyCode value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline SubscriptionPricingDetails& WithCurrency(CurrencyCode value) {
    SetCurrency(value);
    return *this;
  }
  ///@}
 private:
  PaymentOption m_paymentOption{PaymentOption::NOT_SET};

  PaymentTerm m_paymentTerm{PaymentTerm::NOT_SET};

  double m_upfrontPrice{0.0};

  double m_monthlyRecurringPrice{0.0};

  CurrencyCode m_currency{CurrencyCode::NOT_SET};
  bool m_paymentOptionHasBeenSet = false;
  bool m_paymentTermHasBeenSet = false;
  bool m_upfrontPriceHasBeenSet = false;
  bool m_monthlyRecurringPriceHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
