/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Border settings configuration for visual elements, including visibility,
 * width, and color properties.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BorderSettings">AWS
 * API Reference</a></p>
 */
class BorderSettings {
 public:
  AWS_QUICKSIGHT_API BorderSettings() = default;
  AWS_QUICKSIGHT_API BorderSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BorderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Visibility setting for the border.</p>
   */
  inline Visibility GetBorderVisibility() const { return m_borderVisibility; }
  inline bool BorderVisibilityHasBeenSet() const { return m_borderVisibilityHasBeenSet; }
  inline void SetBorderVisibility(Visibility value) {
    m_borderVisibilityHasBeenSet = true;
    m_borderVisibility = value;
  }
  inline BorderSettings& WithBorderVisibility(Visibility value) {
    SetBorderVisibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Width of the border. Valid range is from 1px to 8px.</p>
   */
  inline const Aws::String& GetBorderWidth() const { return m_borderWidth; }
  inline bool BorderWidthHasBeenSet() const { return m_borderWidthHasBeenSet; }
  template <typename BorderWidthT = Aws::String>
  void SetBorderWidth(BorderWidthT&& value) {
    m_borderWidthHasBeenSet = true;
    m_borderWidth = std::forward<BorderWidthT>(value);
  }
  template <typename BorderWidthT = Aws::String>
  BorderSettings& WithBorderWidth(BorderWidthT&& value) {
    SetBorderWidth(std::forward<BorderWidthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Color of the border.</p>
   */
  inline const Aws::String& GetBorderColor() const { return m_borderColor; }
  inline bool BorderColorHasBeenSet() const { return m_borderColorHasBeenSet; }
  template <typename BorderColorT = Aws::String>
  void SetBorderColor(BorderColorT&& value) {
    m_borderColorHasBeenSet = true;
    m_borderColor = std::forward<BorderColorT>(value);
  }
  template <typename BorderColorT = Aws::String>
  BorderSettings& WithBorderColor(BorderColorT&& value) {
    SetBorderColor(std::forward<BorderColorT>(value));
    return *this;
  }
  ///@}
 private:
  Visibility m_borderVisibility{Visibility::NOT_SET};

  Aws::String m_borderWidth;

  Aws::String m_borderColor;
  bool m_borderVisibilityHasBeenSet = false;
  bool m_borderWidthHasBeenSet = false;
  bool m_borderColorHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
