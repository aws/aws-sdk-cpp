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
    AWS_AGREEMENTSERVICE_API AcceptedTerm();
    AWS_AGREEMENTSERVICE_API AcceptedTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API AcceptedTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline const ByolPricingTerm& GetByolPricingTerm() const{ return m_byolPricingTerm; }

    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline bool ByolPricingTermHasBeenSet() const { return m_byolPricingTermHasBeenSet; }

    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline void SetByolPricingTerm(const ByolPricingTerm& value) { m_byolPricingTermHasBeenSet = true; m_byolPricingTerm = value; }

    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline void SetByolPricingTerm(ByolPricingTerm&& value) { m_byolPricingTermHasBeenSet = true; m_byolPricingTerm = std::move(value); }

    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline AcceptedTerm& WithByolPricingTerm(const ByolPricingTerm& value) { SetByolPricingTerm(value); return *this;}

    /**
     * <p>Enables you and your customers to move your existing agreements to AWS
     * Marketplace. The customer won't be charged for product usage in AWS Marketplace
     * because they already paid for the product outside of AWS Marketplace.</p>
     */
    inline AcceptedTerm& WithByolPricingTerm(ByolPricingTerm&& value) { SetByolPricingTerm(std::move(value)); return *this;}


    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline const ConfigurableUpfrontPricingTerm& GetConfigurableUpfrontPricingTerm() const{ return m_configurableUpfrontPricingTerm; }

    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline bool ConfigurableUpfrontPricingTermHasBeenSet() const { return m_configurableUpfrontPricingTermHasBeenSet; }

    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline void SetConfigurableUpfrontPricingTerm(const ConfigurableUpfrontPricingTerm& value) { m_configurableUpfrontPricingTermHasBeenSet = true; m_configurableUpfrontPricingTerm = value; }

    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline void SetConfigurableUpfrontPricingTerm(ConfigurableUpfrontPricingTerm&& value) { m_configurableUpfrontPricingTermHasBeenSet = true; m_configurableUpfrontPricingTerm = std::move(value); }

    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline AcceptedTerm& WithConfigurableUpfrontPricingTerm(const ConfigurableUpfrontPricingTerm& value) { SetConfigurableUpfrontPricingTerm(value); return *this;}

    /**
     * <p>Defines a prepaid payment model that allows buyers to configure the
     * entitlements they want to purchase and the duration.</p>
     */
    inline AcceptedTerm& WithConfigurableUpfrontPricingTerm(ConfigurableUpfrontPricingTerm&& value) { SetConfigurableUpfrontPricingTerm(std::move(value)); return *this;}


    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline const FixedUpfrontPricingTerm& GetFixedUpfrontPricingTerm() const{ return m_fixedUpfrontPricingTerm; }

    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline bool FixedUpfrontPricingTermHasBeenSet() const { return m_fixedUpfrontPricingTermHasBeenSet; }

    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline void SetFixedUpfrontPricingTerm(const FixedUpfrontPricingTerm& value) { m_fixedUpfrontPricingTermHasBeenSet = true; m_fixedUpfrontPricingTerm = value; }

    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline void SetFixedUpfrontPricingTerm(FixedUpfrontPricingTerm&& value) { m_fixedUpfrontPricingTermHasBeenSet = true; m_fixedUpfrontPricingTerm = std::move(value); }

    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline AcceptedTerm& WithFixedUpfrontPricingTerm(const FixedUpfrontPricingTerm& value) { SetFixedUpfrontPricingTerm(value); return *this;}

    /**
     * <p>Defines a pre-paid pricing model where the customers are charged a fixed
     * upfront amount.</p>
     */
    inline AcceptedTerm& WithFixedUpfrontPricingTerm(FixedUpfrontPricingTerm&& value) { SetFixedUpfrontPricingTerm(std::move(value)); return *this;}


    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline const FreeTrialPricingTerm& GetFreeTrialPricingTerm() const{ return m_freeTrialPricingTerm; }

    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline bool FreeTrialPricingTermHasBeenSet() const { return m_freeTrialPricingTermHasBeenSet; }

    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline void SetFreeTrialPricingTerm(const FreeTrialPricingTerm& value) { m_freeTrialPricingTermHasBeenSet = true; m_freeTrialPricingTerm = value; }

    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline void SetFreeTrialPricingTerm(FreeTrialPricingTerm&& value) { m_freeTrialPricingTermHasBeenSet = true; m_freeTrialPricingTerm = std::move(value); }

    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline AcceptedTerm& WithFreeTrialPricingTerm(const FreeTrialPricingTerm& value) { SetFreeTrialPricingTerm(value); return *this;}

    /**
     * <p>Defines a short-term free pricing model where the buyers aren’t charged
     * anything within a specified limit.</p>
     */
    inline AcceptedTerm& WithFreeTrialPricingTerm(FreeTrialPricingTerm&& value) { SetFreeTrialPricingTerm(std::move(value)); return *this;}


    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline const LegalTerm& GetLegalTerm() const{ return m_legalTerm; }

    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline bool LegalTermHasBeenSet() const { return m_legalTermHasBeenSet; }

    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline void SetLegalTerm(const LegalTerm& value) { m_legalTermHasBeenSet = true; m_legalTerm = value; }

    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline void SetLegalTerm(LegalTerm&& value) { m_legalTermHasBeenSet = true; m_legalTerm = std::move(value); }

    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline AcceptedTerm& WithLegalTerm(const LegalTerm& value) { SetLegalTerm(value); return *this;}

    /**
     * <p>Defines the list of text agreements proposed to the acceptors. An example is
     * the end user license agreement (EULA).</p>
     */
    inline AcceptedTerm& WithLegalTerm(LegalTerm&& value) { SetLegalTerm(std::move(value)); return *this;}


    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline const PaymentScheduleTerm& GetPaymentScheduleTerm() const{ return m_paymentScheduleTerm; }

    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline bool PaymentScheduleTermHasBeenSet() const { return m_paymentScheduleTermHasBeenSet; }

    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline void SetPaymentScheduleTerm(const PaymentScheduleTerm& value) { m_paymentScheduleTermHasBeenSet = true; m_paymentScheduleTerm = value; }

    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline void SetPaymentScheduleTerm(PaymentScheduleTerm&& value) { m_paymentScheduleTermHasBeenSet = true; m_paymentScheduleTerm = std::move(value); }

    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline AcceptedTerm& WithPaymentScheduleTerm(const PaymentScheduleTerm& value) { SetPaymentScheduleTerm(value); return *this;}

    /**
     * <p>Defines an installment-based pricing model where customers are charged a
     * fixed price on different dates during the agreement validity period. This is
     * used most commonly for flexible payment schedule pricing.</p>
     */
    inline AcceptedTerm& WithPaymentScheduleTerm(PaymentScheduleTerm&& value) { SetPaymentScheduleTerm(std::move(value)); return *this;}


    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline const RecurringPaymentTerm& GetRecurringPaymentTerm() const{ return m_recurringPaymentTerm; }

    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline bool RecurringPaymentTermHasBeenSet() const { return m_recurringPaymentTermHasBeenSet; }

    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline void SetRecurringPaymentTerm(const RecurringPaymentTerm& value) { m_recurringPaymentTermHasBeenSet = true; m_recurringPaymentTerm = value; }

    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline void SetRecurringPaymentTerm(RecurringPaymentTerm&& value) { m_recurringPaymentTermHasBeenSet = true; m_recurringPaymentTerm = std::move(value); }

    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline AcceptedTerm& WithRecurringPaymentTerm(const RecurringPaymentTerm& value) { SetRecurringPaymentTerm(value); return *this;}

    /**
     * <p>Defines a pricing model where customers are charged a fixed recurring price
     * at the end of each billing period.</p>
     */
    inline AcceptedTerm& WithRecurringPaymentTerm(RecurringPaymentTerm&& value) { SetRecurringPaymentTerm(std::move(value)); return *this;}


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
    inline const RenewalTerm& GetRenewalTerm() const{ return m_renewalTerm; }

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
    inline bool RenewalTermHasBeenSet() const { return m_renewalTermHasBeenSet; }

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
    inline void SetRenewalTerm(const RenewalTerm& value) { m_renewalTermHasBeenSet = true; m_renewalTerm = value; }

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
    inline void SetRenewalTerm(RenewalTerm&& value) { m_renewalTermHasBeenSet = true; m_renewalTerm = std::move(value); }

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
    inline AcceptedTerm& WithRenewalTerm(const RenewalTerm& value) { SetRenewalTerm(value); return *this;}

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
    inline AcceptedTerm& WithRenewalTerm(RenewalTerm&& value) { SetRenewalTerm(std::move(value)); return *this;}


    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline const SupportTerm& GetSupportTerm() const{ return m_supportTerm; }

    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline bool SupportTermHasBeenSet() const { return m_supportTermHasBeenSet; }

    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline void SetSupportTerm(const SupportTerm& value) { m_supportTermHasBeenSet = true; m_supportTerm = value; }

    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline void SetSupportTerm(SupportTerm&& value) { m_supportTermHasBeenSet = true; m_supportTerm = std::move(value); }

    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline AcceptedTerm& WithSupportTerm(const SupportTerm& value) { SetSupportTerm(value); return *this;}

    /**
     * <p>Defines the customer support available for the acceptors when they purchase
     * the software.</p>
     */
    inline AcceptedTerm& WithSupportTerm(SupportTerm&& value) { SetSupportTerm(std::move(value)); return *this;}


    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline const UsageBasedPricingTerm& GetUsageBasedPricingTerm() const{ return m_usageBasedPricingTerm; }

    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline bool UsageBasedPricingTermHasBeenSet() const { return m_usageBasedPricingTermHasBeenSet; }

    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline void SetUsageBasedPricingTerm(const UsageBasedPricingTerm& value) { m_usageBasedPricingTermHasBeenSet = true; m_usageBasedPricingTerm = value; }

    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline void SetUsageBasedPricingTerm(UsageBasedPricingTerm&& value) { m_usageBasedPricingTermHasBeenSet = true; m_usageBasedPricingTerm = std::move(value); }

    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline AcceptedTerm& WithUsageBasedPricingTerm(const UsageBasedPricingTerm& value) { SetUsageBasedPricingTerm(value); return *this;}

    /**
     * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
     * the customers are charged based on product usage.</p>
     */
    inline AcceptedTerm& WithUsageBasedPricingTerm(UsageBasedPricingTerm&& value) { SetUsageBasedPricingTerm(std::move(value)); return *this;}


    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline const ValidityTerm& GetValidityTerm() const{ return m_validityTerm; }

    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline bool ValidityTermHasBeenSet() const { return m_validityTermHasBeenSet; }

    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline void SetValidityTerm(const ValidityTerm& value) { m_validityTermHasBeenSet = true; m_validityTerm = value; }

    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline void SetValidityTerm(ValidityTerm&& value) { m_validityTermHasBeenSet = true; m_validityTerm = std::move(value); }

    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline AcceptedTerm& WithValidityTerm(const ValidityTerm& value) { SetValidityTerm(value); return *this;}

    /**
     * <p>Defines the conditions that will keep an agreement created from this offer
     * valid.</p>
     */
    inline AcceptedTerm& WithValidityTerm(ValidityTerm&& value) { SetValidityTerm(std::move(value)); return *this;}

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
