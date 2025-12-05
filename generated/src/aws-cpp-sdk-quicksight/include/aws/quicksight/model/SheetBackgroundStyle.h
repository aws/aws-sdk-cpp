/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The background configuration for sheets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetBackgroundStyle">AWS
 * API Reference</a></p>
 */
class SheetBackgroundStyle {
 public:
  AWS_QUICKSIGHT_API SheetBackgroundStyle() = default;
  AWS_QUICKSIGHT_API SheetBackgroundStyle(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SheetBackgroundStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The solid color background option for sheets.</p>
   */
  inline const Aws::String& GetColor() const { return m_color; }
  inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
  template <typename ColorT = Aws::String>
  void SetColor(ColorT&& value) {
    m_colorHasBeenSet = true;
    m_color = std::forward<ColorT>(value);
  }
  template <typename ColorT = Aws::String>
  SheetBackgroundStyle& WithColor(ColorT&& value) {
    SetColor(std::forward<ColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gradient background option for sheets.</p>
   */
  inline const Aws::String& GetGradient() const { return m_gradient; }
  inline bool GradientHasBeenSet() const { return m_gradientHasBeenSet; }
  template <typename GradientT = Aws::String>
  void SetGradient(GradientT&& value) {
    m_gradientHasBeenSet = true;
    m_gradient = std::forward<GradientT>(value);
  }
  template <typename GradientT = Aws::String>
  SheetBackgroundStyle& WithGradient(GradientT&& value) {
    SetGradient(std::forward<GradientT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_color;

  Aws::String m_gradient;
  bool m_colorHasBeenSet = false;
  bool m_gradientHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
