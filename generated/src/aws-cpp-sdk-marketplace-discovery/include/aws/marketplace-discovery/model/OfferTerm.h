/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ByolPricingTerm.h>
#include <aws/marketplace-discovery/model/ConfigurableUpfrontPricingTerm.h>
#include <aws/marketplace-discovery/model/FixedUpfrontPricingTerm.h>
#include <aws/marketplace-discovery/model/FreeTrialPricingTerm.h>
#include <aws/marketplace-discovery/model/LegalTerm.h>
#include <aws/marketplace-discovery/model/PaymentScheduleTerm.h>
#include <aws/marketplace-discovery/model/RecurringPaymentTerm.h>
#include <aws/marketplace-discovery/model/RenewalTerm.h>
#include <aws/marketplace-discovery/model/SupportTerm.h>
#include <aws/marketplace-discovery/model/UsageBasedPricingTerm.h>
#include <aws/marketplace-discovery/model/ValidityTerm.h>
#include <aws/marketplace-discovery/model/VariablePaymentTerm.h>

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
 * <p>A term attached to an offer. Each element contains exactly one term type,
 * such as a pricing term, legal term, or payment schedule term.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/OfferTerm">AWS
 * API Reference</a></p>
 */
class OfferTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API OfferTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API OfferTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API OfferTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const ByolPricingTerm& GetByolPricingTerm() const { return m_byolPricingTerm; }
  inline bool ByolPricingTermHasBeenSet() const { return m_byolPricingTermHasBeenSet; }
  template <typename ByolPricingTermT = ByolPricingTerm>
  void SetByolPricingTerm(ByolPricingTermT&& value) {
    m_byolPricingTermHasBeenSet = true;
    m_byolPricingTerm = std::forward<ByolPricingTermT>(value);
  }
  template <typename ByolPricingTermT = ByolPricingTerm>
  OfferTerm& WithByolPricingTerm(ByolPricingTermT&& value) {
    SetByolPricingTerm(std::forward<ByolPricingTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ConfigurableUpfrontPricingTerm& GetConfigurableUpfrontPricingTerm() const { return m_configurableUpfrontPricingTerm; }
  inline bool ConfigurableUpfrontPricingTermHasBeenSet() const { return m_configurableUpfrontPricingTermHasBeenSet; }
  template <typename ConfigurableUpfrontPricingTermT = ConfigurableUpfrontPricingTerm>
  void SetConfigurableUpfrontPricingTerm(ConfigurableUpfrontPricingTermT&& value) {
    m_configurableUpfrontPricingTermHasBeenSet = true;
    m_configurableUpfrontPricingTerm = std::forward<ConfigurableUpfrontPricingTermT>(value);
  }
  template <typename ConfigurableUpfrontPricingTermT = ConfigurableUpfrontPricingTerm>
  OfferTerm& WithConfigurableUpfrontPricingTerm(ConfigurableUpfrontPricingTermT&& value) {
    SetConfigurableUpfrontPricingTerm(std::forward<ConfigurableUpfrontPricingTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FixedUpfrontPricingTerm& GetFixedUpfrontPricingTerm() const { return m_fixedUpfrontPricingTerm; }
  inline bool FixedUpfrontPricingTermHasBeenSet() const { return m_fixedUpfrontPricingTermHasBeenSet; }
  template <typename FixedUpfrontPricingTermT = FixedUpfrontPricingTerm>
  void SetFixedUpfrontPricingTerm(FixedUpfrontPricingTermT&& value) {
    m_fixedUpfrontPricingTermHasBeenSet = true;
    m_fixedUpfrontPricingTerm = std::forward<FixedUpfrontPricingTermT>(value);
  }
  template <typename FixedUpfrontPricingTermT = FixedUpfrontPricingTerm>
  OfferTerm& WithFixedUpfrontPricingTerm(FixedUpfrontPricingTermT&& value) {
    SetFixedUpfrontPricingTerm(std::forward<FixedUpfrontPricingTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FreeTrialPricingTerm& GetFreeTrialPricingTerm() const { return m_freeTrialPricingTerm; }
  inline bool FreeTrialPricingTermHasBeenSet() const { return m_freeTrialPricingTermHasBeenSet; }
  template <typename FreeTrialPricingTermT = FreeTrialPricingTerm>
  void SetFreeTrialPricingTerm(FreeTrialPricingTermT&& value) {
    m_freeTrialPricingTermHasBeenSet = true;
    m_freeTrialPricingTerm = std::forward<FreeTrialPricingTermT>(value);
  }
  template <typename FreeTrialPricingTermT = FreeTrialPricingTerm>
  OfferTerm& WithFreeTrialPricingTerm(FreeTrialPricingTermT&& value) {
    SetFreeTrialPricingTerm(std::forward<FreeTrialPricingTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LegalTerm& GetLegalTerm() const { return m_legalTerm; }
  inline bool LegalTermHasBeenSet() const { return m_legalTermHasBeenSet; }
  template <typename LegalTermT = LegalTerm>
  void SetLegalTerm(LegalTermT&& value) {
    m_legalTermHasBeenSet = true;
    m_legalTerm = std::forward<LegalTermT>(value);
  }
  template <typename LegalTermT = LegalTerm>
  OfferTerm& WithLegalTerm(LegalTermT&& value) {
    SetLegalTerm(std::forward<LegalTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PaymentScheduleTerm& GetPaymentScheduleTerm() const { return m_paymentScheduleTerm; }
  inline bool PaymentScheduleTermHasBeenSet() const { return m_paymentScheduleTermHasBeenSet; }
  template <typename PaymentScheduleTermT = PaymentScheduleTerm>
  void SetPaymentScheduleTerm(PaymentScheduleTermT&& value) {
    m_paymentScheduleTermHasBeenSet = true;
    m_paymentScheduleTerm = std::forward<PaymentScheduleTermT>(value);
  }
  template <typename PaymentScheduleTermT = PaymentScheduleTerm>
  OfferTerm& WithPaymentScheduleTerm(PaymentScheduleTermT&& value) {
    SetPaymentScheduleTerm(std::forward<PaymentScheduleTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecurringPaymentTerm& GetRecurringPaymentTerm() const { return m_recurringPaymentTerm; }
  inline bool RecurringPaymentTermHasBeenSet() const { return m_recurringPaymentTermHasBeenSet; }
  template <typename RecurringPaymentTermT = RecurringPaymentTerm>
  void SetRecurringPaymentTerm(RecurringPaymentTermT&& value) {
    m_recurringPaymentTermHasBeenSet = true;
    m_recurringPaymentTerm = std::forward<RecurringPaymentTermT>(value);
  }
  template <typename RecurringPaymentTermT = RecurringPaymentTerm>
  OfferTerm& WithRecurringPaymentTerm(RecurringPaymentTermT&& value) {
    SetRecurringPaymentTerm(std::forward<RecurringPaymentTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RenewalTerm& GetRenewalTerm() const { return m_renewalTerm; }
  inline bool RenewalTermHasBeenSet() const { return m_renewalTermHasBeenSet; }
  template <typename RenewalTermT = RenewalTerm>
  void SetRenewalTerm(RenewalTermT&& value) {
    m_renewalTermHasBeenSet = true;
    m_renewalTerm = std::forward<RenewalTermT>(value);
  }
  template <typename RenewalTermT = RenewalTerm>
  OfferTerm& WithRenewalTerm(RenewalTermT&& value) {
    SetRenewalTerm(std::forward<RenewalTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SupportTerm& GetSupportTerm() const { return m_supportTerm; }
  inline bool SupportTermHasBeenSet() const { return m_supportTermHasBeenSet; }
  template <typename SupportTermT = SupportTerm>
  void SetSupportTerm(SupportTermT&& value) {
    m_supportTermHasBeenSet = true;
    m_supportTerm = std::forward<SupportTermT>(value);
  }
  template <typename SupportTermT = SupportTerm>
  OfferTerm& WithSupportTerm(SupportTermT&& value) {
    SetSupportTerm(std::forward<SupportTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UsageBasedPricingTerm& GetUsageBasedPricingTerm() const { return m_usageBasedPricingTerm; }
  inline bool UsageBasedPricingTermHasBeenSet() const { return m_usageBasedPricingTermHasBeenSet; }
  template <typename UsageBasedPricingTermT = UsageBasedPricingTerm>
  void SetUsageBasedPricingTerm(UsageBasedPricingTermT&& value) {
    m_usageBasedPricingTermHasBeenSet = true;
    m_usageBasedPricingTerm = std::forward<UsageBasedPricingTermT>(value);
  }
  template <typename UsageBasedPricingTermT = UsageBasedPricingTerm>
  OfferTerm& WithUsageBasedPricingTerm(UsageBasedPricingTermT&& value) {
    SetUsageBasedPricingTerm(std::forward<UsageBasedPricingTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ValidityTerm& GetValidityTerm() const { return m_validityTerm; }
  inline bool ValidityTermHasBeenSet() const { return m_validityTermHasBeenSet; }
  template <typename ValidityTermT = ValidityTerm>
  void SetValidityTerm(ValidityTermT&& value) {
    m_validityTermHasBeenSet = true;
    m_validityTerm = std::forward<ValidityTermT>(value);
  }
  template <typename ValidityTermT = ValidityTerm>
  OfferTerm& WithValidityTerm(ValidityTermT&& value) {
    SetValidityTerm(std::forward<ValidityTermT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const VariablePaymentTerm& GetVariablePaymentTerm() const { return m_variablePaymentTerm; }
  inline bool VariablePaymentTermHasBeenSet() const { return m_variablePaymentTermHasBeenSet; }
  template <typename VariablePaymentTermT = VariablePaymentTerm>
  void SetVariablePaymentTerm(VariablePaymentTermT&& value) {
    m_variablePaymentTermHasBeenSet = true;
    m_variablePaymentTerm = std::forward<VariablePaymentTermT>(value);
  }
  template <typename VariablePaymentTermT = VariablePaymentTerm>
  OfferTerm& WithVariablePaymentTerm(VariablePaymentTermT&& value) {
    SetVariablePaymentTerm(std::forward<VariablePaymentTermT>(value));
    return *this;
  }
  ///@}
 private:
  ByolPricingTerm m_byolPricingTerm;

  ConfigurableUpfrontPricingTerm m_configurableUpfrontPricingTerm;

  FixedUpfrontPricingTerm m_fixedUpfrontPricingTerm;

  FreeTrialPricingTerm m_freeTrialPricingTerm;

  LegalTerm m_legalTerm;

  PaymentScheduleTerm m_paymentScheduleTerm;

  RecurringPaymentTerm m_recurringPaymentTerm;

  RenewalTerm m_renewalTerm;

  SupportTerm m_supportTerm;

  UsageBasedPricingTerm m_usageBasedPricingTerm;

  ValidityTerm m_validityTerm;

  VariablePaymentTerm m_variablePaymentTerm;
  bool m_byolPricingTermHasBeenSet = false;
  bool m_configurableUpfrontPricingTermHasBeenSet = false;
  bool m_fixedUpfrontPricingTermHasBeenSet = false;
  bool m_freeTrialPricingTermHasBeenSet = false;
  bool m_legalTermHasBeenSet = false;
  bool m_paymentScheduleTermHasBeenSet = false;
  bool m_recurringPaymentTermHasBeenSet = false;
  bool m_renewalTermHasBeenSet = false;
  bool m_supportTermHasBeenSet = false;
  bool m_usageBasedPricingTermHasBeenSet = false;
  bool m_validityTermHasBeenSet = false;
  bool m_variablePaymentTermHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
