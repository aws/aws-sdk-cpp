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
 * <p>The display options for tile borders for visuals.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BorderStyle">AWS
 * API Reference</a></p>
 */
class BorderStyle {
 public:
  AWS_QUICKSIGHT_API BorderStyle() = default;
  AWS_QUICKSIGHT_API BorderStyle(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BorderStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The option to add color for tile borders for visuals.</p>
   */
  inline const Aws::String& GetColor() const { return m_color; }
  inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
  template <typename ColorT = Aws::String>
  void SetColor(ColorT&& value) {
    m_colorHasBeenSet = true;
    m_color = std::forward<ColorT>(value);
  }
  template <typename ColorT = Aws::String>
  BorderStyle& WithColor(ColorT&& value) {
    SetColor(std::forward<ColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The option to enable display of borders for visuals.</p>
   */
  inline bool GetShow() const { return m_show; }
  inline bool ShowHasBeenSet() const { return m_showHasBeenSet; }
  inline void SetShow(bool value) {
    m_showHasBeenSet = true;
    m_show = value;
  }
  inline BorderStyle& WithShow(bool value) {
    SetShow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The option to set the width of tile borders for visuals.</p>
   */
  inline const Aws::String& GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  template <typename WidthT = Aws::String>
  void SetWidth(WidthT&& value) {
    m_widthHasBeenSet = true;
    m_width = std::forward<WidthT>(value);
  }
  template <typename WidthT = Aws::String>
  BorderStyle& WithWidth(WidthT&& value) {
    SetWidth(std::forward<WidthT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_color;

  bool m_show{false};

  Aws::String m_width;
  bool m_colorHasBeenSet = false;
  bool m_showHasBeenSet = false;
  bool m_widthHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
