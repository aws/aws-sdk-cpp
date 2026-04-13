/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/Constraints.h>
#include <aws/marketplace-discovery/model/RateCardItem.h>
#include <aws/marketplace-discovery/model/Selector.h>

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
 * <p>A rate card item within a configurable upfront pricing term, including a
 * selector for choosing the configuration and per-unit rates.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ConfigurableUpfrontRateCardItem">AWS
 * API Reference</a></p>
 */
class ConfigurableUpfrontRateCardItem {
 public:
  AWS_MARKETPLACEDISCOVERY_API ConfigurableUpfrontRateCardItem() = default;
  AWS_MARKETPLACEDISCOVERY_API ConfigurableUpfrontRateCardItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ConfigurableUpfrontRateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The selector criteria for this rate card, such as duration.</p>
   */
  inline const Selector& GetSelector() const { return m_selector; }
  inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
  template <typename SelectorT = Selector>
  void SetSelector(SelectorT&& value) {
    m_selectorHasBeenSet = true;
    m_selector = std::forward<SelectorT>(value);
  }
  template <typename SelectorT = Selector>
  ConfigurableUpfrontRateCardItem& WithSelector(SelectorT&& value) {
    SetSelector(std::forward<SelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Constraints on how the buyer can configure this rate card, such as whether
   * multiple dimensions can be selected.</p>
   */
  inline const Constraints& GetConstraints() const { return m_constraints; }
  inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
  template <typename ConstraintsT = Constraints>
  void SetConstraints(ConstraintsT&& value) {
    m_constraintsHasBeenSet = true;
    m_constraints = std::forward<ConstraintsT>(value);
  }
  template <typename ConstraintsT = Constraints>
  ConfigurableUpfrontRateCardItem& WithConstraints(ConstraintsT&& value) {
    SetConstraints(std::forward<ConstraintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-unit rates for this configuration.</p>
   */
  inline const Aws::Vector<RateCardItem>& GetRateCard() const { return m_rateCard; }
  inline bool RateCardHasBeenSet() const { return m_rateCardHasBeenSet; }
  template <typename RateCardT = Aws::Vector<RateCardItem>>
  void SetRateCard(RateCardT&& value) {
    m_rateCardHasBeenSet = true;
    m_rateCard = std::forward<RateCardT>(value);
  }
  template <typename RateCardT = Aws::Vector<RateCardItem>>
  ConfigurableUpfrontRateCardItem& WithRateCard(RateCardT&& value) {
    SetRateCard(std::forward<RateCardT>(value));
    return *this;
  }
  template <typename RateCardT = RateCardItem>
  ConfigurableUpfrontRateCardItem& AddRateCard(RateCardT&& value) {
    m_rateCardHasBeenSet = true;
    m_rateCard.emplace_back(std::forward<RateCardT>(value));
    return *this;
  }
  ///@}
 private:
  Selector m_selector;

  Constraints m_constraints;

  Aws::Vector<RateCardItem> m_rateCard;
  bool m_selectorHasBeenSet = false;
  bool m_constraintsHasBeenSet = false;
  bool m_rateCardHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
