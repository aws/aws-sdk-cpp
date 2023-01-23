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
   * <p>Currency-specific price information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/PriceWithCurrency">AWS
   * API Reference</a></p>
   */
  class PriceWithCurrency
  {
  public:
    AWS_ROUTE53DOMAINS_API PriceWithCurrency();
    AWS_ROUTE53DOMAINS_API PriceWithCurrency(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API PriceWithCurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The price of a domain, in a specific currency.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The price of a domain, in a specific currency.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>The price of a domain, in a specific currency.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The price of a domain, in a specific currency.</p>
     */
    inline PriceWithCurrency& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The currency specifier.</p>
     */
    inline const Aws::String& GetCurrency() const{ return m_currency; }

    /**
     * <p>The currency specifier.</p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>The currency specifier.</p>
     */
    inline void SetCurrency(const Aws::String& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>The currency specifier.</p>
     */
    inline void SetCurrency(Aws::String&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>The currency specifier.</p>
     */
    inline void SetCurrency(const char* value) { m_currencyHasBeenSet = true; m_currency.assign(value); }

    /**
     * <p>The currency specifier.</p>
     */
    inline PriceWithCurrency& WithCurrency(const Aws::String& value) { SetCurrency(value); return *this;}

    /**
     * <p>The currency specifier.</p>
     */
    inline PriceWithCurrency& WithCurrency(Aws::String&& value) { SetCurrency(std::move(value)); return *this;}

    /**
     * <p>The currency specifier.</p>
     */
    inline PriceWithCurrency& WithCurrency(const char* value) { SetCurrency(value); return *this;}

  private:

    double m_price;
    bool m_priceHasBeenSet = false;

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
