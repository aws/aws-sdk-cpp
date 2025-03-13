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
    AWS_SAVINGSPLANS_API ParentSavingsPlanOffering() = default;
    AWS_SAVINGSPLANS_API ParentSavingsPlanOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API ParentSavingsPlanOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    ParentSavingsPlanOffering& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline SavingsPlanPaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(SavingsPlanPaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline ParentSavingsPlanOffering& WithPaymentOption(SavingsPlanPaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline SavingsPlanType GetPlanType() const { return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(SavingsPlanType value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline ParentSavingsPlanOffering& WithPlanType(SavingsPlanType value) { SetPlanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds.</p>
     */
    inline long long GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(long long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline ParentSavingsPlanOffering& WithDurationSeconds(long long value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency.</p>
     */
    inline CurrencyCode GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(CurrencyCode value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline ParentSavingsPlanOffering& WithCurrency(CurrencyCode value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetPlanDescription() const { return m_planDescription; }
    inline bool PlanDescriptionHasBeenSet() const { return m_planDescriptionHasBeenSet; }
    template<typename PlanDescriptionT = Aws::String>
    void SetPlanDescription(PlanDescriptionT&& value) { m_planDescriptionHasBeenSet = true; m_planDescription = std::forward<PlanDescriptionT>(value); }
    template<typename PlanDescriptionT = Aws::String>
    ParentSavingsPlanOffering& WithPlanDescription(PlanDescriptionT&& value) { SetPlanDescription(std::forward<PlanDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    SavingsPlanPaymentOption m_paymentOption{SavingsPlanPaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    SavingsPlanType m_planType{SavingsPlanType::NOT_SET};
    bool m_planTypeHasBeenSet = false;

    long long m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    CurrencyCode m_currency{CurrencyCode::NOT_SET};
    bool m_currencyHasBeenSet = false;

    Aws::String m_planDescription;
    bool m_planDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
