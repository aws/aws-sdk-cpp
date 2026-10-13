/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/PriceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Domains {
namespace Model {

/**
 * <p>Currency-specific price information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/PriceWithCurrency">AWS
 * API Reference</a></p>
 */
class PriceWithCurrency {
 public:
  AWS_ROUTE53DOMAINS_API PriceWithCurrency() = default;
  AWS_ROUTE53DOMAINS_API PriceWithCurrency(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53DOMAINS_API PriceWithCurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The price of a domain, in a specific currency.</p>
   */
  inline double GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  inline void SetPrice(double value) {
    m_priceHasBeenSet = true;
    m_price = value;
  }
  inline PriceWithCurrency& WithPrice(double value) {
    SetPrice(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency specifier.</p>
   */
  inline const Aws::String& GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  template <typename CurrencyT = Aws::String>
  void SetCurrency(CurrencyT&& value) {
    m_currencyHasBeenSet = true;
    m_currency = std::forward<CurrencyT>(value);
  }
  template <typename CurrencyT = Aws::String>
  PriceWithCurrency& WithCurrency(CurrencyT&& value) {
    SetCurrency(std::forward<CurrencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the domain has standard or premium pricing. A value of
   * <code>STANDARD</code> means the domain is priced at the regular rate for its
   * TLD. A value of <code>REGISTRY_PREMIUM</code> means the domain has registry
   * premium pricing, which may be different than the standard rate.</p>
   */
  inline PriceType GetPriceType() const { return m_priceType; }
  inline bool PriceTypeHasBeenSet() const { return m_priceTypeHasBeenSet; }
  inline void SetPriceType(PriceType value) {
    m_priceTypeHasBeenSet = true;
    m_priceType = value;
  }
  inline PriceWithCurrency& WithPriceType(PriceType value) {
    SetPriceType(value);
    return *this;
  }
  ///@}
 private:
  double m_price{0.0};

  Aws::String m_currency;

  PriceType m_priceType{PriceType::NOT_SET};
  bool m_priceHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_priceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws
