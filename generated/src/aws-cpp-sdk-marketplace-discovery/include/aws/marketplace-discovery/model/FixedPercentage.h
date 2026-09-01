/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

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
 * <p>A single fixed price increase percentage applied at each renewal
 * cycle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/FixedPercentage">AWS
 * API Reference</a></p>
 */
class FixedPercentage {
 public:
  AWS_MARKETPLACEDISCOVERY_API FixedPercentage() = default;
  AWS_MARKETPLACEDISCOVERY_API FixedPercentage(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API FixedPercentage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The percentage value applied at each renewal cycle.</p>
   */
  inline const Aws::String& GetPercentageValue() const { return m_percentageValue; }
  inline bool PercentageValueHasBeenSet() const { return m_percentageValueHasBeenSet; }
  template <typename PercentageValueT = Aws::String>
  void SetPercentageValue(PercentageValueT&& value) {
    m_percentageValueHasBeenSet = true;
    m_percentageValue = std::forward<PercentageValueT>(value);
  }
  template <typename PercentageValueT = Aws::String>
  FixedPercentage& WithPercentageValue(PercentageValueT&& value) {
    SetPercentageValue(std::forward<PercentageValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_percentageValue;
  bool m_percentageValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
