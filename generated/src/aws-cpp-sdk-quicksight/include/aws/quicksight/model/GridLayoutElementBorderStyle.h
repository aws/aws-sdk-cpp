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
 * <p>The border style configuration of a grid layout element.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GridLayoutElementBorderStyle">AWS
 * API Reference</a></p>
 */
class GridLayoutElementBorderStyle {
 public:
  AWS_QUICKSIGHT_API GridLayoutElementBorderStyle() = default;
  AWS_QUICKSIGHT_API GridLayoutElementBorderStyle(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API GridLayoutElementBorderStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The border visibility of a grid layout element.</p>
   */
  inline Visibility GetVisibility() const { return m_visibility; }
  inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
  inline void SetVisibility(Visibility value) {
    m_visibilityHasBeenSet = true;
    m_visibility = value;
  }
  inline GridLayoutElementBorderStyle& WithVisibility(Visibility value) {
    SetVisibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border color of a grid layout element.</p>
   */
  inline const Aws::String& GetColor() const { return m_color; }
  inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
  template <typename ColorT = Aws::String>
  void SetColor(ColorT&& value) {
    m_colorHasBeenSet = true;
    m_color = std::forward<ColorT>(value);
  }
  template <typename ColorT = Aws::String>
  GridLayoutElementBorderStyle& WithColor(ColorT&& value) {
    SetColor(std::forward<ColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border width of a grid layout element.</p>
   */
  inline const Aws::String& GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  template <typename WidthT = Aws::String>
  void SetWidth(WidthT&& value) {
    m_widthHasBeenSet = true;
    m_width = std::forward<WidthT>(value);
  }
  template <typename WidthT = Aws::String>
  GridLayoutElementBorderStyle& WithWidth(WidthT&& value) {
    SetWidth(std::forward<WidthT>(value));
    return *this;
  }
  ///@}
 private:
  Visibility m_visibility{Visibility::NOT_SET};
  bool m_visibilityHasBeenSet = false;

  Aws::String m_color;
  bool m_colorHasBeenSet = false;

  Aws::String m_width;
  bool m_widthHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
