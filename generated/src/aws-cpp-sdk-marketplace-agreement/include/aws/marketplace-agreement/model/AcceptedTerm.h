/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ByolPricingTerm.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTerm.h>
#include <aws/marketplace-agreement/model/FixedUpfrontPricingTerm.h>
#include <aws/marketplace-agreement/model/FreeTrialPricingTerm.h>
#include <aws/marketplace-agreement/model/LegalTerm.h>
#include <aws/marketplace-agreement/model/PaymentScheduleTerm.h>
#include <aws/marketplace-agreement/model/RecurringPaymentTerm.h>
#include <aws/marketplace-agreement/model/RenewalTerm.h>
#include <aws/marketplace-agreement/model/SupportTerm.h>
#include <aws/marketplace-agreement/model/UsageBasedPricingTerm.h>
#include <aws/marketplace-agreement/model/ValidityTerm.h>
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
   * <p>A subset of terms proposed by the proposer, which have been accepted by the
   * acceptor as part of agreement creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AcceptedTerm">AWS
   * API Reference</a></p>
   */
  class AcceptedTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API AcceptedTerm() = default;
    AWS_AGREEMENTSERVICE_API AcceptedTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API AcceptedTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline const ByolPricingTerm& GetByolPricingTerm() const { return m_byolPricingTerm; }
    inline bool ByolPricingTermHasBeenSet() const { return m_byolPricingTermHasBeenSet; }
    template<typename ByolPricingTermT = ByolPricingTerm>
    void SetByolPricingTerm(ByolPricingTermT&& value) { m_byolPricingTermHasBeenSet = true; m_byolPricingTerm = std::forward<ByolPricingTermT>(value); }
    template<typename ByolPricingTermT = ByolPricingTerm>
    AcceptedTerm& WithByolPricingTerm(ByolPricingTermT&& value) { SetByolPricingTerm(std::forward<ByolPricingTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline const ConfigurableUpfrontPricingTerm& GetConfigurableUpfrontPricingTerm() const { return m_configurableUpfrontPricingTerm; }
    inline bool ConfigurableUpfrontPricingTermHasBeenSet() const { return m_configurableUpfrontPricingTermHasBeenSet; }
    template<typename ConfigurableUpfrontPricingTermT = ConfigurableUpfrontPricingTerm>
    void SetConfigurableUpfrontPricingTerm(ConfigurableUpfrontPricingTermT&& value) { m_configurableUpfrontPricingTermHasBeenSet = true; m_configurableUpfrontPricingTerm = std::forward<ConfigurableUpfrontPricingTermT>(value); }
    template<typename ConfigurableUpfrontPricingTermT = ConfigurableUpfrontPricingTerm>
    AcceptedTerm& WithConfigurableUpfrontPricingTerm(ConfigurableUpfrontPricingTermT&& value) { SetConfigurableUpfrontPricingTerm(std::forward<ConfigurableUpfrontPricingTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline const FixedUpfrontPricingTerm& GetFixedUpfrontPricingTerm() const { return m_fixedUpfrontPricingTerm; }
    inline bool FixedUpfrontPricingTermHasBeenSet() const { return m_fixedUpfrontPricingTermHasBeenSet; }
    template<typename FixedUpfrontPricingTermT = FixedUpfrontPricingTerm>
    void SetFixedUpfrontPricingTerm(FixedUpfrontPricingTermT&& value) { m_fixedUpfrontPricingTermHasBeenSet = true; m_fixedUpfrontPricingTerm = std::forward<FixedUpfrontPricingTermT>(value); }
    template<typename FixedUpfrontPricingTermT = FixedUpfrontPricingTerm>
    AcceptedTerm& WithFixedUpfrontPricingTerm(FixedUpfrontPricingTermT&& value) { SetFixedUpfrontPricingTerm(std::forward<FixedUpfrontPricingTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline const FreeTrialPricingTerm& GetFreeTrialPricingTerm() const { return m_freeTrialPricingTerm; }
    inline bool FreeTrialPricingTermHasBeenSet() const { return m_freeTrialPricingTermHasBeenSet; }
    template<typename FreeTrialPricingTermT = FreeTrialPricingTerm>
    void SetFreeTrialPricingTerm(FreeTrialPricingTermT&& value) { m_freeTrialPricingTermHasBeenSet = true; m_freeTrialPricingTerm = std::forward<FreeTrialPricingTermT>(value); }
    template<typename FreeTrialPricingTermT = FreeTrialPricingTerm>
    AcceptedTerm& WithFreeTrialPricingTerm(FreeTrialPricingTermT&& value) { SetFreeTrialPricingTerm(std::forward<FreeTrialPricingTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline const LegalTerm& GetLegalTerm() const { return m_legalTerm; }
    inline bool LegalTermHasBeenSet() const { return m_legalTermHasBeenSet; }
    template<typename LegalTermT = LegalTerm>
    void SetLegalTerm(LegalTermT&& value) { m_legalTermHasBeenSet = true; m_legalTerm = std::forward<LegalTermT>(value); }
    template<typename LegalTermT = LegalTerm>
    AcceptedTerm& WithLegalTerm(LegalTermT&& value) { SetLegalTerm(std::forward<LegalTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline const PaymentScheduleTerm& GetPaymentScheduleTerm() const { return m_paymentScheduleTerm; }
    inline bool PaymentScheduleTermHasBeenSet() const { return m_paymentScheduleTermHasBeenSet; }
    template<typename PaymentScheduleTermT = PaymentScheduleTerm>
    void SetPaymentScheduleTerm(PaymentScheduleTermT&& value) { m_paymentScheduleTermHasBeenSet = true; m_paymentScheduleTerm = std::forward<PaymentScheduleTermT>(value); }
    template<typename PaymentScheduleTermT = PaymentScheduleTerm>
    AcceptedTerm& WithPaymentScheduleTerm(PaymentScheduleTermT&& value) { SetPaymentScheduleTerm(std::forward<PaymentScheduleTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline const RecurringPaymentTerm& GetRecurringPaymentTerm() const { return m_recurringPaymentTerm; }
    inline bool RecurringPaymentTermHasBeenSet() const { return m_recurringPaymentTermHasBeenSet; }
    template<typename RecurringPaymentTermT = RecurringPaymentTerm>
    void SetRecurringPaymentTerm(RecurringPaymentTermT&& value) { m_recurringPaymentTermHasBeenSet = true; m_recurringPaymentTerm = std::forward<RecurringPaymentTermT>(value); }
    template<typename RecurringPaymentTermT = RecurringPaymentTerm>
    AcceptedTerm& WithRecurringPaymentTerm(RecurringPaymentTermT&& value) { SetRecurringPaymentTerm(std::forward<RecurringPaymentTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines that on graceful expiration of the agreement (when the agreement ends
     * on its pre-defined end date), a new agreement will be created using the accepted
     * terms on the existing agreement. In other words, the agreement will be renewed.
     * Presence of <code>RenewalTerm</code> in the offer document means that
     * auto-renewal is allowed. Buyers will have the option to accept or decline
     * auto-renewal at the offer acceptance/agreement creation. Buyers can also change
     * this flag from <code>True</code> to <code>False</code> or <code>False</code> to
     * <code>True</code> at anytime during the agreement's lifecycle.</p>
     */
    inline const RenewalTerm& GetRenewalTerm() const { return m_renewalTerm; }
    inline bool RenewalTermHasBeenSet() const { return m_renewalTermHasBeenSet; }
    template<typename RenewalTermT = RenewalTerm>
    void SetRenewalTerm(RenewalTermT&& value) { m_renewalTermHasBeenSet = true; m_renewalTerm = std::forward<RenewalTermT>(value); }
    template<typename RenewalTermT = RenewalTerm>
    AcceptedTerm& WithRenewalTerm(RenewalTermT&& value) { SetRenewalTerm(std::forward<RenewalTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline const SupportTerm& GetSupportTerm() const { return m_supportTerm; }
    inline bool SupportTermHasBeenSet() const { return m_supportTermHasBeenSet; }
    template<typename SupportTermT = SupportTerm>
    void SetSupportTerm(SupportTermT&& value) { m_supportTermHasBeenSet = true; m_supportTerm = std::forward<SupportTermT>(value); }
    template<typename SupportTermT = SupportTerm>
    AcceptedTerm& WithSupportTerm(SupportTermT&& value) { SetSupportTerm(std::forward<SupportTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline const UsageBasedPricingTerm& GetUsageBasedPricingTerm() const { return m_usageBasedPricingTerm; }
    inline bool UsageBasedPricingTermHasBeenSet() const { return m_usageBasedPricingTermHasBeenSet; }
    template<typename UsageBasedPricingTermT = UsageBasedPricingTerm>
    void SetUsageBasedPricingTerm(UsageBasedPricingTermT&& value) { m_usageBasedPricingTermHasBeenSet = true; m_usageBasedPricingTerm = std::forward<UsageBasedPricingTermT>(value); }
    template<typename UsageBasedPricingTermT = UsageBasedPricingTerm>
    AcceptedTerm& WithUsageBasedPricingTerm(UsageBasedPricingTermT&& value) { SetUsageBasedPricingTerm(std::forward<UsageBasedPricingTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline const ValidityTerm& GetValidityTerm() const { return m_validityTerm; }
    inline bool ValidityTermHasBeenSet() const { return m_validityTermHasBeenSet; }
    template<typename ValidityTermT = ValidityTerm>
    void SetValidityTerm(ValidityTermT&& value) { m_validityTermHasBeenSet = true; m_validityTerm = std::forward<ValidityTermT>(value); }
    template<typename ValidityTermT = ValidityTerm>
    AcceptedTerm& WithValidityTerm(ValidityTermT&& value) { SetValidityTerm(std::forward<ValidityTermT>(value)); return *this;}
    ///@}
  private:

    ByolPricingTerm m_byolPricingTerm;
    bool m_byolPricingTermHasBeenSet = false;

    ConfigurableUpfrontPricingTerm m_configurableUpfrontPricingTerm;
    bool m_configurableUpfrontPricingTermHasBeenSet = false;

    FixedUpfrontPricingTerm m_fixedUpfrontPricingTerm;
    bool m_fixedUpfrontPricingTermHasBeenSet = false;

    FreeTrialPricingTerm m_freeTrialPricingTerm;
    bool m_freeTrialPricingTermHasBeenSet = false;

    LegalTerm m_legalTerm;
    bool m_legalTermHasBeenSet = false;

    PaymentScheduleTerm m_paymentScheduleTerm;
    bool m_paymentScheduleTermHasBeenSet = false;

    RecurringPaymentTerm m_recurringPaymentTerm;
    bool m_recurringPaymentTermHasBeenSet = false;

    RenewalTerm m_renewalTerm;
    bool m_renewalTermHasBeenSet = false;

    SupportTerm m_supportTerm;
    bool m_supportTermHasBeenSet = false;

    UsageBasedPricingTerm m_usageBasedPricingTerm;
    bool m_usageBasedPricingTermHasBeenSet = false;

    ValidityTerm m_validityTerm;
    bool m_validityTermHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
