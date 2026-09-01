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
 * <p>A price increase percentage range with minimum, maximum, and default
 * values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PercentageRange">AWS
 * API Reference</a></p>
 */
class PercentageRange {
 public:
  AWS_MARKETPLACEDISCOVERY_API PercentageRange() = default;
  AWS_MARKETPLACEDISCOVERY_API PercentageRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PercentageRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum percentage by which the price can increase at each renewal
   * cycle.</p>
   */
  inline const Aws::String& GetMinimumValue() const { return m_minimumValue; }
  inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }
  template <typename MinimumValueT = Aws::String>
  void SetMinimumValue(MinimumValueT&& value) {
    m_minimumValueHasBeenSet = true;
    m_minimumValue = std::forward<MinimumValueT>(value);
  }
  template <typename MinimumValueT = Aws::String>
  PercentageRange& WithMinimumValue(MinimumValueT&& value) {
    SetMinimumValue(std::forward<MinimumValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum percentage by which the price can increase at each renewal
   * cycle.</p>
   */
  inline const Aws::String& GetMaximumValue() const { return m_maximumValue; }
  inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }
  template <typename MaximumValueT = Aws::String>
  void SetMaximumValue(MaximumValueT&& value) {
    m_maximumValueHasBeenSet = true;
    m_maximumValue = std::forward<MaximumValueT>(value);
  }
  template <typename MaximumValueT = Aws::String>
  PercentageRange& WithMaximumValue(MaximumValueT&& value) {
    SetMaximumValue(std::forward<MaximumValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage increase applied by default when no other value is finalized
   * before the adjustment deadline. Falls between <code>minimumValue</code> and
   * <code>maximumValue</code>.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  PercentageRange& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_minimumValue;

  Aws::String m_maximumValue;

  Aws::String m_defaultValue;
  bool m_minimumValueHasBeenSet = false;
  bool m_maximumValueHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
