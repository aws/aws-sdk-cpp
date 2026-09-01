/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PriceIncrease.h>
#include <aws/marketplace-agreement/model/RenewalTermConfiguration.h>
#include <aws/marketplace-agreement/model/TermTemplate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Defines that on graceful expiration of the agreement (when the agreement ends
 * on its pre-defined end date), a new agreement will be created using the accepted
 * terms on the existing agreement. In other words, the agreement will be renewed.
 * Presence of <code>RenewalTerm</code> in the offer document means that
 * auto-renewal is allowed. The acceptor will have the option to accept or decline
 * auto-renewal at the offer acceptance/agreement creation. The acceptor can also
 * change this flag from <code>True</code> to <code>False</code> or
 * <code>False</code> to <code>True</code>, within the limits set by
 * <code>LockoutPeriod</code> and <code>MaxRenewals</code>. Setting the flag to
 * <code>True</code> doesn't by itself guarantee that the agreement renews, because
 * the proposer can also opt out.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RenewalTerm">AWS
 * API Reference</a></p>
 */
class RenewalTerm {
 public:
  AWS_AGREEMENTSERVICE_API RenewalTerm() = default;
  AWS_AGREEMENTSERVICE_API RenewalTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API RenewalTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Category of the term being updated. </p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  RenewalTerm& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  RenewalTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional parameters specified by the acceptor while accepting the term.</p>
   */
  inline const RenewalTermConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RenewalTermConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RenewalTermConfiguration>
  RenewalTerm& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The renewal decision deadline, measured back from the end date of the
   * agreement. This is the last day either party can opt in to or opt out of the
   * renewal. The duration is represented in the ISO 8601 format in whole days (for
   * example, <code>P30D</code> for 30 days or <code>P60D</code> for 60 days).</p>
   * <p>The field is <code>null</code> when no renewal decision deadline is set. In
   * that case, either party can change the auto-renewal decision up to the end date
   * of the agreement.</p>
   */
  inline const Aws::String& GetLockoutPeriod() const { return m_lockoutPeriod; }
  inline bool LockoutPeriodHasBeenSet() const { return m_lockoutPeriodHasBeenSet; }
  template <typename LockoutPeriodT = Aws::String>
  void SetLockoutPeriod(LockoutPeriodT&& value) {
    m_lockoutPeriodHasBeenSet = true;
    m_lockoutPeriod = std::forward<LockoutPeriodT>(value);
  }
  template <typename LockoutPeriodT = Aws::String>
  RenewalTerm& WithLockoutPeriod(LockoutPeriodT&& value) {
    SetLockoutPeriod(std::forward<LockoutPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of times the agreement can be renewed. The field is
   * <code>null</code> when the number of renewals is unlimited.</p> <p>After the
   * agreement reaches this limit, it expires on its end date instead of
   * renewing.</p>
   */
  inline int GetMaxRenewals() const { return m_maxRenewals; }
  inline bool MaxRenewalsHasBeenSet() const { return m_maxRenewalsHasBeenSet; }
  inline void SetMaxRenewals(int value) {
    m_maxRenewalsHasBeenSet = true;
    m_maxRenewals = value;
  }
  inline RenewalTerm& WithMaxRenewals(int value) {
    SetMaxRenewals(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date by which the proposer must finalize the price increase for the next
   * renewal, measured back from the end date of the agreement. The duration is
   * represented in the ISO 8601 format in whole days (for example, <code>P30D</code>
   * for 30 days or <code>P60D</code> for 60 days).</p> <p>This field applies only
   * when <code>PriceIncrease</code> is a <code>PercentageRange</code>. The field is
   * <code>null</code> when <code>PriceIncrease</code> is a
   * <code>FixedPercentage</code>, because the price increase is already fixed and
   * there is nothing for the proposer to finalize. If the proposer doesn't finalize
   * a value by the adjustment deadline, the <code>DefaultValue</code> of the range
   * applies.</p> <p> <code>AdjustmentDeadline</code> must be greater than
   * <code>LockoutPeriod</code>.</p>
   */
  inline const Aws::String& GetAdjustmentDeadline() const { return m_adjustmentDeadline; }
  inline bool AdjustmentDeadlineHasBeenSet() const { return m_adjustmentDeadlineHasBeenSet; }
  template <typename AdjustmentDeadlineT = Aws::String>
  void SetAdjustmentDeadline(AdjustmentDeadlineT&& value) {
    m_adjustmentDeadlineHasBeenSet = true;
    m_adjustmentDeadline = std::forward<AdjustmentDeadlineT>(value);
  }
  template <typename AdjustmentDeadlineT = Aws::String>
  RenewalTerm& WithAdjustmentDeadline(AdjustmentDeadlineT&& value) {
    SetAdjustmentDeadline(std::forward<AdjustmentDeadlineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The price increase that is applied each time the agreement renews. The field
   * is <code>null</code> when the price doesn't change at renewal.</p>
   */
  inline const PriceIncrease& GetPriceIncrease() const { return m_priceIncrease; }
  inline bool PriceIncreaseHasBeenSet() const { return m_priceIncreaseHasBeenSet; }
  template <typename PriceIncreaseT = PriceIncrease>
  void SetPriceIncrease(PriceIncreaseT&& value) {
    m_priceIncreaseHasBeenSet = true;
    m_priceIncrease = std::forward<PriceIncreaseT>(value);
  }
  template <typename PriceIncreaseT = PriceIncrease>
  RenewalTerm& WithPriceIncrease(PriceIncreaseT&& value) {
    SetPriceIncrease(std::forward<PriceIncreaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines how specific terms change each time the agreement renews. The field
   * is <code>null</code> when no terms change at renewal.</p>
   */
  inline const Aws::Vector<TermTemplate>& GetTermTemplates() const { return m_termTemplates; }
  inline bool TermTemplatesHasBeenSet() const { return m_termTemplatesHasBeenSet; }
  template <typename TermTemplatesT = Aws::Vector<TermTemplate>>
  void SetTermTemplates(TermTemplatesT&& value) {
    m_termTemplatesHasBeenSet = true;
    m_termTemplates = std::forward<TermTemplatesT>(value);
  }
  template <typename TermTemplatesT = Aws::Vector<TermTemplate>>
  RenewalTerm& WithTermTemplates(TermTemplatesT&& value) {
    SetTermTemplates(std::forward<TermTemplatesT>(value));
    return *this;
  }
  template <typename TermTemplatesT = TermTemplate>
  RenewalTerm& AddTermTemplates(TermTemplatesT&& value) {
    m_termTemplatesHasBeenSet = true;
    m_termTemplates.emplace_back(std::forward<TermTemplatesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_id;

  RenewalTermConfiguration m_configuration;

  Aws::String m_lockoutPeriod;

  int m_maxRenewals{0};

  Aws::String m_adjustmentDeadline;

  PriceIncrease m_priceIncrease;

  Aws::Vector<TermTemplate> m_termTemplates;
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_lockoutPeriodHasBeenSet = false;
  bool m_maxRenewalsHasBeenSet = false;
  bool m_adjustmentDeadlineHasBeenSet = false;
  bool m_priceIncreaseHasBeenSet = false;
  bool m_termTemplatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
