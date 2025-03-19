/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p> Customer's consent for the owner change request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/Consent">AWS
   * API Reference</a></p>
   */
  class Consent
  {
  public:
    AWS_ROUTE53DOMAINS_API Consent() = default;
    AWS_ROUTE53DOMAINS_API Consent(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Consent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Maximum amount the customer agreed to accept. </p>
     */
    inline double GetMaxPrice() const { return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    inline void SetMaxPrice(double value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }
    inline Consent& WithMaxPrice(double value) { SetMaxPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Currency for the <code>MaxPrice</code>. </p>
     */
    inline const Aws::String& GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    template<typename CurrencyT = Aws::String>
    void SetCurrency(CurrencyT&& value) { m_currencyHasBeenSet = true; m_currency = std::forward<CurrencyT>(value); }
    template<typename CurrencyT = Aws::String>
    Consent& WithCurrency(CurrencyT&& value) { SetCurrency(std::forward<CurrencyT>(value)); return *this;}
    ///@}
  private:

    double m_maxPrice{0.0};
    bool m_maxPriceHasBeenSet = false;

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
