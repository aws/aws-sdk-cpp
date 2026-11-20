/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DynamicMultiviewSettingsEnabled.h>
#include <aws/mediaconvert/model/Rectangle.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Dynamic Multiview settings. Encodes this video output so that a downstream
 * packager can combine it with other outputs in a Dynamic Multiview presentation,
 * or replace parts of it. Available for H.264 and H.265 outputs. Enabling Dynamic
 * Multiview reduces compression efficiency.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DynamicMultiviewSettings">AWS
 * API Reference</a></p>
 */
class DynamicMultiviewSettings {
 public:
  AWS_MEDIACONVERT_API DynamicMultiviewSettings() = default;
  AWS_MEDIACONVERT_API DynamicMultiviewSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API DynamicMultiviewSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Choose Enabled to encode this video output for Dynamic Multiview. With no
   * regions, the whole frame is one view in the presentation. With regions, only
   * those rectangles can be replaced. Keep the default value, Disabled, to leave
   * Dynamic Multiview off; regions must then be empty. Dynamic Multiview outputs
   * must be progressive and use a Dynamic sub-GOP of Static. MediaConvert also
   * overrides some encoder settings on these outputs: Explicit weighted prediction
   * for H.264, and Tree block size and MV temporal predictor for H.265.
   */
  inline DynamicMultiviewSettingsEnabled GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(DynamicMultiviewSettingsEnabled value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DynamicMultiviewSettings& WithEnabled(DynamicMultiviewSettingsEnabled value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional rectangles that a downstream packager can replace with other content,
   * such as an ad. MediaConvert fills each region with black and encodes it
   * independently of the rest of the frame. Leave empty to use the whole frame as
   * one view. H.264 outputs support up to 8 regions; H.265 outputs support 1.
   */
  inline const Aws::Vector<Rectangle>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Rectangle>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Rectangle>>
  DynamicMultiviewSettings& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Rectangle>
  DynamicMultiviewSettings& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}
 private:
  DynamicMultiviewSettingsEnabled m_enabled{DynamicMultiviewSettingsEnabled::NOT_SET};

  Aws::Vector<Rectangle> m_regions;
  bool m_enabledHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
