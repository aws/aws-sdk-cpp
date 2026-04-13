/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/DimensionLabelType.h>

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
 * <p>A label used to group or categorize pricing dimensions, such as by region or
 * SageMaker option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/DimensionLabel">AWS
 * API Reference</a></p>
 */
class DimensionLabel {
 public:
  AWS_MARKETPLACEDISCOVERY_API DimensionLabel() = default;
  AWS_MARKETPLACEDISCOVERY_API DimensionLabel(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API DimensionLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the dimension label, such as <code>Region</code> or
   * <code>SagemakerOption</code>.</p>
   */
  inline DimensionLabelType GetLabelType() const { return m_labelType; }
  inline bool LabelTypeHasBeenSet() const { return m_labelTypeHasBeenSet; }
  inline void SetLabelType(DimensionLabelType value) {
    m_labelTypeHasBeenSet = true;
    m_labelType = value;
  }
  inline DimensionLabel& WithLabelType(DimensionLabelType value) {
    SetLabelType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value used to group dimensions together.</p>
   */
  inline const Aws::String& GetLabelValue() const { return m_labelValue; }
  inline bool LabelValueHasBeenSet() const { return m_labelValueHasBeenSet; }
  template <typename LabelValueT = Aws::String>
  void SetLabelValue(LabelValueT&& value) {
    m_labelValueHasBeenSet = true;
    m_labelValue = std::forward<LabelValueT>(value);
  }
  template <typename LabelValueT = Aws::String>
  DimensionLabel& WithLabelValue(LabelValueT&& value) {
    SetLabelValue(std::forward<LabelValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable display name of the label.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  DimensionLabel& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  DimensionLabelType m_labelType{DimensionLabelType::NOT_SET};

  Aws::String m_labelValue;

  Aws::String m_displayName;
  bool m_labelTypeHasBeenSet = false;
  bool m_labelValueHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
