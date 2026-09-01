/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PriceIncrease.h>
#include <aws/marketplace-discovery/model/TermTemplate.h>
#include <aws/marketplace-discovery/model/TermType.h>

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
 * <p>Defines a renewal term that enables automatic agreement
 * renewal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/RenewalTerm">AWS
 * API Reference</a></p>
 */
class RenewalTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API RenewalTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API RenewalTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API RenewalTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the term.</p>
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
   * <p>The category of the term.</p>
   */
  inline TermType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TermType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RenewalTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of renewals allowed on this offer. Absent means unlimited
   * renewals.</p>
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
   * <p>The duration before the agreement end date when the lockout window begins, in
   * ISO 8601 format (for example, P30D). Absent means no lockout.</p>
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
   * <p>The duration before the agreement end date by which the renewal price is
   * finalized, represented in ISO 8601 format (for example, P30D). Only applicable
   * with <code>PercentageRange</code>.</p>
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
   * <p>The price increase applied at each renewal cycle. Absent means identical
   * pricing on renewal.</p>
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
   * <p>Structural templates defining how specific terms are reshaped on each renewal
   * cycle. Absent for upfront-only offers.</p>
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
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  int m_maxRenewals{0};

  Aws::String m_lockoutPeriod;

  Aws::String m_adjustmentDeadline;

  PriceIncrease m_priceIncrease;

  Aws::Vector<TermTemplate> m_termTemplates;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_maxRenewalsHasBeenSet = false;
  bool m_lockoutPeriodHasBeenSet = false;
  bool m_adjustmentDeadlineHasBeenSet = false;
  bool m_priceIncreaseHasBeenSet = false;
  bool m_termTemplatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
