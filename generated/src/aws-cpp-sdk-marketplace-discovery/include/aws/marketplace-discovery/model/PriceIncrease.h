/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/FixedPercentage.h>
#include <aws/marketplace-discovery/model/PercentageRange.h>

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
 * <p>The pricing adjustment that applies at each renewal cycle, expressed as
 * either a fixed percentage or a percentage range. Exactly one variant is
 * present.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PriceIncrease">AWS
 * API Reference</a></p>
 */
class PriceIncrease {
 public:
  AWS_MARKETPLACEDISCOVERY_API PriceIncrease() = default;
  AWS_MARKETPLACEDISCOVERY_API PriceIncrease(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PriceIncrease& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single fixed percentage applied uniformly at every renewal cycle.</p>
   */
  inline const FixedPercentage& GetFixedPercentage() const { return m_fixedPercentage; }
  inline bool FixedPercentageHasBeenSet() const { return m_fixedPercentageHasBeenSet; }
  template <typename FixedPercentageT = FixedPercentage>
  void SetFixedPercentage(FixedPercentageT&& value) {
    m_fixedPercentageHasBeenSet = true;
    m_fixedPercentage = std::forward<FixedPercentageT>(value);
  }
  template <typename FixedPercentageT = FixedPercentage>
  PriceIncrease& WithFixedPercentage(FixedPercentageT&& value) {
    SetFixedPercentage(std::forward<FixedPercentageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A percentage band with minimum, maximum, and default values that bound the
   * price increase at each renewal cycle.</p>
   */
  inline const PercentageRange& GetPercentageRange() const { return m_percentageRange; }
  inline bool PercentageRangeHasBeenSet() const { return m_percentageRangeHasBeenSet; }
  template <typename PercentageRangeT = PercentageRange>
  void SetPercentageRange(PercentageRangeT&& value) {
    m_percentageRangeHasBeenSet = true;
    m_percentageRange = std::forward<PercentageRangeT>(value);
  }
  template <typename PercentageRangeT = PercentageRange>
  PriceIncrease& WithPercentageRange(PercentageRangeT&& value) {
    SetPercentageRange(std::forward<PercentageRangeT>(value));
    return *this;
  }
  ///@}
 private:
  FixedPercentage m_fixedPercentage;

  PercentageRange m_percentageRange;
  bool m_fixedPercentageHasBeenSet = false;
  bool m_percentageRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
