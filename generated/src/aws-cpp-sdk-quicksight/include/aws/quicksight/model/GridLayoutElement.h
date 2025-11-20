/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GridLayoutElementBackgroundStyle.h>
#include <aws/quicksight/model/GridLayoutElementBorderStyle.h>
#include <aws/quicksight/model/LayoutElementType.h>
#include <aws/quicksight/model/LoadingAnimation.h>

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
 * <p>An element within a grid layout.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GridLayoutElement">AWS
 * API Reference</a></p>
 */
class GridLayoutElement {
 public:
  AWS_QUICKSIGHT_API GridLayoutElement() = default;
  AWS_QUICKSIGHT_API GridLayoutElement(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API GridLayoutElement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for an element within a grid layout.</p>
   */
  inline const Aws::String& GetElementId() const { return m_elementId; }
  inline bool ElementIdHasBeenSet() const { return m_elementIdHasBeenSet; }
  template <typename ElementIdT = Aws::String>
  void SetElementId(ElementIdT&& value) {
    m_elementIdHasBeenSet = true;
    m_elementId = std::forward<ElementIdT>(value);
  }
  template <typename ElementIdT = Aws::String>
  GridLayoutElement& WithElementId(ElementIdT&& value) {
    SetElementId(std::forward<ElementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of element.</p>
   */
  inline LayoutElementType GetElementType() const { return m_elementType; }
  inline bool ElementTypeHasBeenSet() const { return m_elementTypeHasBeenSet; }
  inline void SetElementType(LayoutElementType value) {
    m_elementTypeHasBeenSet = true;
    m_elementType = value;
  }
  inline GridLayoutElement& WithElementType(LayoutElementType value) {
    SetElementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The column index for the upper left corner of an element.</p>
   */
  inline int GetColumnIndex() const { return m_columnIndex; }
  inline bool ColumnIndexHasBeenSet() const { return m_columnIndexHasBeenSet; }
  inline void SetColumnIndex(int value) {
    m_columnIndexHasBeenSet = true;
    m_columnIndex = value;
  }
  inline GridLayoutElement& WithColumnIndex(int value) {
    SetColumnIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The width of a grid element expressed as a number of grid columns.</p>
   */
  inline int GetColumnSpan() const { return m_columnSpan; }
  inline bool ColumnSpanHasBeenSet() const { return m_columnSpanHasBeenSet; }
  inline void SetColumnSpan(int value) {
    m_columnSpanHasBeenSet = true;
    m_columnSpan = value;
  }
  inline GridLayoutElement& WithColumnSpan(int value) {
    SetColumnSpan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The row index for the upper left corner of an element.</p>
   */
  inline int GetRowIndex() const { return m_rowIndex; }
  inline bool RowIndexHasBeenSet() const { return m_rowIndexHasBeenSet; }
  inline void SetRowIndex(int value) {
    m_rowIndexHasBeenSet = true;
    m_rowIndex = value;
  }
  inline GridLayoutElement& WithRowIndex(int value) {
    SetRowIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height of a grid element expressed as a number of grid rows.</p>
   */
  inline int GetRowSpan() const { return m_rowSpan; }
  inline bool RowSpanHasBeenSet() const { return m_rowSpanHasBeenSet; }
  inline void SetRowSpan(int value) {
    m_rowSpanHasBeenSet = true;
    m_rowSpan = value;
  }
  inline GridLayoutElement& WithRowSpan(int value) {
    SetRowSpan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border style configuration of a grid layout element.</p>
   */
  inline const GridLayoutElementBorderStyle& GetBorderStyle() const { return m_borderStyle; }
  inline bool BorderStyleHasBeenSet() const { return m_borderStyleHasBeenSet; }
  template <typename BorderStyleT = GridLayoutElementBorderStyle>
  void SetBorderStyle(BorderStyleT&& value) {
    m_borderStyleHasBeenSet = true;
    m_borderStyle = std::forward<BorderStyleT>(value);
  }
  template <typename BorderStyleT = GridLayoutElementBorderStyle>
  GridLayoutElement& WithBorderStyle(BorderStyleT&& value) {
    SetBorderStyle(std::forward<BorderStyleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border style configuration of a grid layout element. This border style is
   * used when the element is selected.</p>
   */
  inline const GridLayoutElementBorderStyle& GetSelectedBorderStyle() const { return m_selectedBorderStyle; }
  inline bool SelectedBorderStyleHasBeenSet() const { return m_selectedBorderStyleHasBeenSet; }
  template <typename SelectedBorderStyleT = GridLayoutElementBorderStyle>
  void SetSelectedBorderStyle(SelectedBorderStyleT&& value) {
    m_selectedBorderStyleHasBeenSet = true;
    m_selectedBorderStyle = std::forward<SelectedBorderStyleT>(value);
  }
  template <typename SelectedBorderStyleT = GridLayoutElementBorderStyle>
  GridLayoutElement& WithSelectedBorderStyle(SelectedBorderStyleT&& value) {
    SetSelectedBorderStyle(std::forward<SelectedBorderStyleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The background style configuration of a grid layout element.</p>
   */
  inline const GridLayoutElementBackgroundStyle& GetBackgroundStyle() const { return m_backgroundStyle; }
  inline bool BackgroundStyleHasBeenSet() const { return m_backgroundStyleHasBeenSet; }
  template <typename BackgroundStyleT = GridLayoutElementBackgroundStyle>
  void SetBackgroundStyle(BackgroundStyleT&& value) {
    m_backgroundStyleHasBeenSet = true;
    m_backgroundStyle = std::forward<BackgroundStyleT>(value);
  }
  template <typename BackgroundStyleT = GridLayoutElementBackgroundStyle>
  GridLayoutElement& WithBackgroundStyle(BackgroundStyleT&& value) {
    SetBackgroundStyle(std::forward<BackgroundStyleT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LoadingAnimation& GetLoadingAnimation() const { return m_loadingAnimation; }
  inline bool LoadingAnimationHasBeenSet() const { return m_loadingAnimationHasBeenSet; }
  template <typename LoadingAnimationT = LoadingAnimation>
  void SetLoadingAnimation(LoadingAnimationT&& value) {
    m_loadingAnimationHasBeenSet = true;
    m_loadingAnimation = std::forward<LoadingAnimationT>(value);
  }
  template <typename LoadingAnimationT = LoadingAnimation>
  GridLayoutElement& WithLoadingAnimation(LoadingAnimationT&& value) {
    SetLoadingAnimation(std::forward<LoadingAnimationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The border radius of a grid layout element.</p>
   */
  inline const Aws::String& GetBorderRadius() const { return m_borderRadius; }
  inline bool BorderRadiusHasBeenSet() const { return m_borderRadiusHasBeenSet; }
  template <typename BorderRadiusT = Aws::String>
  void SetBorderRadius(BorderRadiusT&& value) {
    m_borderRadiusHasBeenSet = true;
    m_borderRadius = std::forward<BorderRadiusT>(value);
  }
  template <typename BorderRadiusT = Aws::String>
  GridLayoutElement& WithBorderRadius(BorderRadiusT&& value) {
    SetBorderRadius(std::forward<BorderRadiusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The padding of a grid layout element.</p>
   */
  inline const Aws::String& GetPadding() const { return m_padding; }
  inline bool PaddingHasBeenSet() const { return m_paddingHasBeenSet; }
  template <typename PaddingT = Aws::String>
  void SetPadding(PaddingT&& value) {
    m_paddingHasBeenSet = true;
    m_padding = std::forward<PaddingT>(value);
  }
  template <typename PaddingT = Aws::String>
  GridLayoutElement& WithPadding(PaddingT&& value) {
    SetPadding(std::forward<PaddingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_elementId;
  bool m_elementIdHasBeenSet = false;

  LayoutElementType m_elementType{LayoutElementType::NOT_SET};
  bool m_elementTypeHasBeenSet = false;

  int m_columnIndex{0};
  bool m_columnIndexHasBeenSet = false;

  int m_columnSpan{0};
  bool m_columnSpanHasBeenSet = false;

  int m_rowIndex{0};
  bool m_rowIndexHasBeenSet = false;

  int m_rowSpan{0};
  bool m_rowSpanHasBeenSet = false;

  GridLayoutElementBorderStyle m_borderStyle;
  bool m_borderStyleHasBeenSet = false;

  GridLayoutElementBorderStyle m_selectedBorderStyle;
  bool m_selectedBorderStyleHasBeenSet = false;

  GridLayoutElementBackgroundStyle m_backgroundStyle;
  bool m_backgroundStyleHasBeenSet = false;

  LoadingAnimation m_loadingAnimation;
  bool m_loadingAnimationHasBeenSet = false;

  Aws::String m_borderRadius;
  bool m_borderRadiusHasBeenSet = false;

  Aws::String m_padding;
  bool m_paddingHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
