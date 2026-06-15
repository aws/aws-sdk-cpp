/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Currency.h>

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
 * <p>A summary of AI bot monetization revenue, including total revenue, revenue by
 * verification tier, and request counts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RevenueBreakdown">AWS
 * API Reference</a></p>
 */
class RevenueBreakdown {
 public:
  AWS_WAFV2_API RevenueBreakdown() = default;
  AWS_WAFV2_API RevenueBreakdown(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API RevenueBreakdown& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total revenue amount in the specified currency.</p>
   */
  inline const Aws::String& GetTotalAmount() const { return m_totalAmount; }
  inline bool TotalAmountHasBeenSet() const { return m_totalAmountHasBeenSet; }
  template <typename TotalAmountT = Aws::String>
  void SetTotalAmount(TotalAmountT&& value) {
    m_totalAmountHasBeenSet = true;
    m_totalAmount = std::forward<TotalAmountT>(value);
  }
  template <typename TotalAmountT = Aws::String>
  RevenueBreakdown& WithTotalAmount(TotalAmountT&& value) {
    SetTotalAmount(std::forward<TotalAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue amount from verified AI bots.</p>
   */
  inline const Aws::String& GetVerifiedAmount() const { return m_verifiedAmount; }
  inline bool VerifiedAmountHasBeenSet() const { return m_verifiedAmountHasBeenSet; }
  template <typename VerifiedAmountT = Aws::String>
  void SetVerifiedAmount(VerifiedAmountT&& value) {
    m_verifiedAmountHasBeenSet = true;
    m_verifiedAmount = std::forward<VerifiedAmountT>(value);
  }
  template <typename VerifiedAmountT = Aws::String>
  RevenueBreakdown& WithVerifiedAmount(VerifiedAmountT&& value) {
    SetVerifiedAmount(std::forward<VerifiedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue amount from unverified AI bots.</p>
   */
  inline const Aws::String& GetUnverifiedAmount() const { return m_unverifiedAmount; }
  inline bool UnverifiedAmountHasBeenSet() const { return m_unverifiedAmountHasBeenSet; }
  template <typename UnverifiedAmountT = Aws::String>
  void SetUnverifiedAmount(UnverifiedAmountT&& value) {
    m_unverifiedAmountHasBeenSet = true;
    m_unverifiedAmount = std::forward<UnverifiedAmountT>(value);
  }
  template <typename UnverifiedAmountT = Aws::String>
  RevenueBreakdown& WithUnverifiedAmount(UnverifiedAmountT&& value) {
    SetUnverifiedAmount(std::forward<UnverifiedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency of the revenue amounts.</p>
   */
  inline Currency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(Currency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline RevenueBreakdown& WithCurrency(Currency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of successfully settled payment transactions.</p>
   */
  inline long long GetTotalSettled() const { return m_totalSettled; }
  inline bool TotalSettledHasBeenSet() const { return m_totalSettledHasBeenSet; }
  inline void SetTotalSettled(long long value) {
    m_totalSettledHasBeenSet = true;
    m_totalSettled = value;
  }
  inline RevenueBreakdown& WithTotalSettled(long long value) {
    SetTotalSettled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of HTTP 402 Payment Required responses served to AI
   * agents.</p>
   */
  inline long long GetTotalMonetizeServed() const { return m_totalMonetizeServed; }
  inline bool TotalMonetizeServedHasBeenSet() const { return m_totalMonetizeServedHasBeenSet; }
  inline void SetTotalMonetizeServed(long long value) {
    m_totalMonetizeServedHasBeenSet = true;
    m_totalMonetizeServed = value;
  }
  inline RevenueBreakdown& WithTotalMonetizeServed(long long value) {
    SetTotalMonetizeServed(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_totalAmount;

  Aws::String m_verifiedAmount;

  Aws::String m_unverifiedAmount;

  Currency m_currency{Currency::NOT_SET};

  long long m_totalSettled{0};

  long long m_totalMonetizeServed{0};
  bool m_totalAmountHasBeenSet = false;
  bool m_verifiedAmountHasBeenSet = false;
  bool m_unverifiedAmountHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_totalSettledHasBeenSet = false;
  bool m_totalMonetizeServedHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
