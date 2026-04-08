/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/BillingPeriodType.h>
#include <aws/marketplace-discovery/model/TermType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Defines a recurring payment term with fixed charges at regular billing
 * intervals.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/RecurringPaymentTerm">AWS
 * API Reference</a></p>
 */
class RecurringPaymentTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API RecurringPaymentTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API RecurringPaymentTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API RecurringPaymentTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  RecurringPaymentTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the term.</p>
   */
  inline TermType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TermType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RecurringPaymentTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the currency for the prices in this term.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  RecurringPaymentTerm& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period frequency, such as <code>Monthly</code>.</p>
   */
  inline BillingPeriodType GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  inline void SetBillingPeriod(BillingPeriodType value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = value;
  }
  inline RecurringPaymentTerm& WithBillingPeriod(BillingPeriodType value) {
    SetBillingPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount charged each billing period.</p>
   */
  inline const Aws::String& GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  template <typename PriceT = Aws::String>
  void SetPrice(PriceT&& value) {
    m_priceHasBeenSet = true;
    m_price = std::forward<PriceT>(value);
  }
  template <typename PriceT = Aws::String>
  RecurringPaymentTerm& WithPrice(PriceT&& value) {
    SetPrice(std::forward<PriceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_currencyCode;

  BillingPeriodType m_billingPeriod{BillingPeriodType::NOT_SET};

  Aws::String m_price;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_billingPeriodHasBeenSet = false;
  bool m_priceHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
