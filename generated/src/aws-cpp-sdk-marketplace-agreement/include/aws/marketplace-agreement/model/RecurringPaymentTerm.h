/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines a pricing model where customers are charged a fixed recurring price
   * at the end of each billing period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RecurringPaymentTerm">AWS
   * API Reference</a></p>
   */
  class RecurringPaymentTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API RecurringPaymentTerm();
    AWS_AGREEMENTSERVICE_API RecurringPaymentTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API RecurringPaymentTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = value; }

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::move(value); }

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriodHasBeenSet = true; m_billingPeriod.assign(value); }

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline RecurringPaymentTerm& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline RecurringPaymentTerm& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>Defines the recurrence at which buyers are charged.</p>
     */
    inline RecurringPaymentTerm& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline RecurringPaymentTerm& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline RecurringPaymentTerm& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline RecurringPaymentTerm& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline const Aws::String& GetPrice() const{ return m_price; }

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline void SetPrice(const Aws::String& value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline void SetPrice(Aws::String&& value) { m_priceHasBeenSet = true; m_price = std::move(value); }

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline void SetPrice(const char* value) { m_priceHasBeenSet = true; m_price.assign(value); }

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline RecurringPaymentTerm& WithPrice(const Aws::String& value) { SetPrice(value); return *this;}

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline RecurringPaymentTerm& WithPrice(Aws::String&& value) { SetPrice(std::move(value)); return *this;}

    /**
     * <p>Amount charged to the buyer every billing period.</p>
     */
    inline RecurringPaymentTerm& WithPrice(const char* value) { SetPrice(value); return *this;}


    /**
     * <p>Type of the term being updated.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline RecurringPaymentTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Type of the term being updated.</p>
     */
    inline RecurringPaymentTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Type of the term being updated.</p>
     */
    inline RecurringPaymentTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_price;
    bool m_priceHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
