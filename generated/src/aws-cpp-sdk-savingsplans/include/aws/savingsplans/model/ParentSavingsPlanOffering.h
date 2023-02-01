/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/CurrencyCode.h>
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
namespace SavingsPlans
{
namespace Model
{

  /**
   * <p>Information about a Savings Plan offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ParentSavingsPlanOffering">AWS
   * API Reference</a></p>
   */
  class ParentSavingsPlanOffering
  {
  public:
    AWS_SAVINGSPLANS_API ParentSavingsPlanOffering();
    AWS_SAVINGSPLANS_API ParentSavingsPlanOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API ParentSavingsPlanOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline ParentSavingsPlanOffering& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline ParentSavingsPlanOffering& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline ParentSavingsPlanOffering& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * <p>The payment option.</p>
     */
    inline const SavingsPlanPaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option.</p>
     */
    inline void SetPaymentOption(const SavingsPlanPaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option.</p>
     */
    inline void SetPaymentOption(SavingsPlanPaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option.</p>
     */
    inline ParentSavingsPlanOffering& WithPaymentOption(const SavingsPlanPaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option.</p>
     */
    inline ParentSavingsPlanOffering& WithPaymentOption(SavingsPlanPaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The plan type.</p>
     */
    inline const SavingsPlanType& GetPlanType() const{ return m_planType; }

    /**
     * <p>The plan type.</p>
     */
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetPlanType(const SavingsPlanType& value) { m_planTypeHasBeenSet = true; m_planType = value; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetPlanType(SavingsPlanType&& value) { m_planTypeHasBeenSet = true; m_planType = std::move(value); }

    /**
     * <p>The plan type.</p>
     */
    inline ParentSavingsPlanOffering& WithPlanType(const SavingsPlanType& value) { SetPlanType(value); return *this;}

    /**
     * <p>The plan type.</p>
     */
    inline ParentSavingsPlanOffering& WithPlanType(SavingsPlanType&& value) { SetPlanType(std::move(value)); return *this;}


    /**
     * <p>The duration, in seconds.</p>
     */
    inline long long GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The duration, in seconds.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The duration, in seconds.</p>
     */
    inline void SetDurationSeconds(long long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The duration, in seconds.</p>
     */
    inline ParentSavingsPlanOffering& WithDurationSeconds(long long value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>The currency.</p>
     */
    inline const CurrencyCode& GetCurrency() const{ return m_currency; }

    /**
     * <p>The currency.</p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>The currency.</p>
     */
    inline void SetCurrency(const CurrencyCode& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>The currency.</p>
     */
    inline void SetCurrency(CurrencyCode&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>The currency.</p>
     */
    inline ParentSavingsPlanOffering& WithCurrency(const CurrencyCode& value) { SetCurrency(value); return *this;}

    /**
     * <p>The currency.</p>
     */
    inline ParentSavingsPlanOffering& WithCurrency(CurrencyCode&& value) { SetCurrency(std::move(value)); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetPlanDescription() const{ return m_planDescription; }

    /**
     * <p>The description.</p>
     */
    inline bool PlanDescriptionHasBeenSet() const { return m_planDescriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetPlanDescription(const Aws::String& value) { m_planDescriptionHasBeenSet = true; m_planDescription = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetPlanDescription(Aws::String&& value) { m_planDescriptionHasBeenSet = true; m_planDescription = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetPlanDescription(const char* value) { m_planDescriptionHasBeenSet = true; m_planDescription.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline ParentSavingsPlanOffering& WithPlanDescription(const Aws::String& value) { SetPlanDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline ParentSavingsPlanOffering& WithPlanDescription(Aws::String&& value) { SetPlanDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline ParentSavingsPlanOffering& WithPlanDescription(const char* value) { SetPlanDescription(value); return *this;}

  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    SavingsPlanPaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    SavingsPlanType m_planType;
    bool m_planTypeHasBeenSet = false;

    long long m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    CurrencyCode m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::String m_planDescription;
    bool m_planDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
