/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BorderStyle.h>

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
 * <p>Display options related to tiles on a sheet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TileStyle">AWS
 * API Reference</a></p>
 */
class TileStyle {
 public:
  AWS_QUICKSIGHT_API TileStyle() = default;
  AWS_QUICKSIGHT_API TileStyle(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TileStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The background color of a tile.</p>
   */
  inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
  inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
  template <typename BackgroundColorT = Aws::String>
  void SetBackgroundColor(BackgroundColorT&& value) {
    m_backgroundColorHasBeenSet = true;
    m_backgroundColor = std::forward<BackgroundColorT>(value);
  }
  template <typename BackgroundColorT = Aws::String>
  TileStyle& WithBackgroundColor(BackgroundColorT&& value) {
    SetBackgroundColor(std::forward<BackgroundColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border around a tile.</p>
   */
  inline const BorderStyle& GetBorder() const { return m_border; }
  inline bool BorderHasBeenSet() const { return m_borderHasBeenSet; }
  template <typename BorderT = BorderStyle>
  void SetBorder(BorderT&& value) {
    m_borderHasBeenSet = true;
    m_border = std::forward<BorderT>(value);
  }
  template <typename BorderT = BorderStyle>
  TileStyle& WithBorder(BorderT&& value) {
    SetBorder(std::forward<BorderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border radius of a tile.</p>
   */
  inline const Aws::String& GetBorderRadius() const { return m_borderRadius; }
  inline bool BorderRadiusHasBeenSet() const { return m_borderRadiusHasBeenSet; }
  template <typename BorderRadiusT = Aws::String>
  void SetBorderRadius(BorderRadiusT&& value) {
    m_borderRadiusHasBeenSet = true;
    m_borderRadius = std::forward<BorderRadiusT>(value);
  }
  template <typename BorderRadiusT = Aws::String>
  TileStyle& WithBorderRadius(BorderRadiusT&& value) {
    SetBorderRadius(std::forward<BorderRadiusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The padding of a tile.</p>
   */
  inline const Aws::String& GetPadding() const { return m_padding; }
  inline bool PaddingHasBeenSet() const { return m_paddingHasBeenSet; }
  template <typename PaddingT = Aws::String>
  void SetPadding(PaddingT&& value) {
    m_paddingHasBeenSet = true;
    m_padding = std::forward<PaddingT>(value);
  }
  template <typename PaddingT = Aws::String>
  TileStyle& WithPadding(PaddingT&& value) {
    SetPadding(std::forward<PaddingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_backgroundColor;

  BorderStyle m_border;

  Aws::String m_borderRadius;

  Aws::String m_padding;
  bool m_backgroundColorHasBeenSet = false;
  bool m_borderHasBeenSet = false;
  bool m_borderRadiusHasBeenSet = false;
  bool m_paddingHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
