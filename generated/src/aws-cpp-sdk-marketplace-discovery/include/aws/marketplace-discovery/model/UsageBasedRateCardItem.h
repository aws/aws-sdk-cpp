/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/RateCardItem.h>

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
 * <p>A rate card within a usage-based pricing term, containing per-unit
 * rates.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/UsageBasedRateCardItem">AWS
 * API Reference</a></p>
 */
class UsageBasedRateCardItem {
 public:
  AWS_MARKETPLACEDISCOVERY_API UsageBasedRateCardItem() = default;
  AWS_MARKETPLACEDISCOVERY_API UsageBasedRateCardItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API UsageBasedRateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The per-unit rates for this usage-based rate card.</p>
   */
  inline const Aws::Vector<RateCardItem>& GetRateCard() const { return m_rateCard; }
  inline bool RateCardHasBeenSet() const { return m_rateCardHasBeenSet; }
  template <typename RateCardT = Aws::Vector<RateCardItem>>
  void SetRateCard(RateCardT&& value) {
    m_rateCardHasBeenSet = true;
    m_rateCard = std::forward<RateCardT>(value);
  }
  template <typename RateCardT = Aws::Vector<RateCardItem>>
  UsageBasedRateCardItem& WithRateCard(RateCardT&& value) {
    SetRateCard(std::forward<RateCardT>(value));
    return *this;
  }
  template <typename RateCardT = RateCardItem>
  UsageBasedRateCardItem& AddRateCard(RateCardT&& value) {
    m_rateCardHasBeenSet = true;
    m_rateCard.emplace_back(std::forward<RateCardT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RateCardItem> m_rateCard;
  bool m_rateCardHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
