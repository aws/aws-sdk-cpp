/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DecalPatternType.h>
#include <aws/quicksight/model/DecalStyleType.h>
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
 * <p>Decal settings for accessibility features that define visual patterns and
 * styling for data elements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecalSettings">AWS
 * API Reference</a></p>
 */
class DecalSettings {
 public:
  AWS_QUICKSIGHT_API DecalSettings() = default;
  AWS_QUICKSIGHT_API DecalSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DecalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Field value of the field that you are setting the decal pattern to.
   * Applicable only for field level settings.</p>
   */
  inline const Aws::String& GetElementValue() const { return m_elementValue; }
  inline bool ElementValueHasBeenSet() const { return m_elementValueHasBeenSet; }
  template <typename ElementValueT = Aws::String>
  void SetElementValue(ElementValueT&& value) {
    m_elementValueHasBeenSet = true;
    m_elementValue = std::forward<ElementValueT>(value);
  }
  template <typename ElementValueT = Aws::String>
  DecalSettings& WithElementValue(ElementValueT&& value) {
    SetElementValue(std::forward<ElementValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Visibility setting for the decal pattern.</p>
   */
  inline Visibility GetDecalVisibility() const { return m_decalVisibility; }
  inline bool DecalVisibilityHasBeenSet() const { return m_decalVisibilityHasBeenSet; }
  inline void SetDecalVisibility(Visibility value) {
    m_decalVisibilityHasBeenSet = true;
    m_decalVisibility = value;
  }
  inline DecalSettings& WithDecalVisibility(Visibility value) {
    SetDecalVisibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Color configuration for the decal pattern.</p>
   */
  inline const Aws::String& GetDecalColor() const { return m_decalColor; }
  inline bool DecalColorHasBeenSet() const { return m_decalColorHasBeenSet; }
  template <typename DecalColorT = Aws::String>
  void SetDecalColor(DecalColorT&& value) {
    m_decalColorHasBeenSet = true;
    m_decalColor = std::forward<DecalColorT>(value);
  }
  template <typename DecalColorT = Aws::String>
  DecalSettings& WithDecalColor(DecalColorT&& value) {
    SetDecalColor(std::forward<DecalColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of pattern used for the decal, such as solid, diagonal, or circular
   * patterns in various sizes.</p> <ul> <li> <p> <code>SOLID</code>: Solid fill
   * pattern.</p> </li> <li> <p> <code>DIAGONAL_SMALL</code>: Small diagonal stripes
   * pattern.</p> </li> <li> <p> <code>DIAGONAL_MEDIUM</code>: Medium diagonal
   * stripes pattern.</p> </li> <li> <p> <code>DIAGONAL_LARGE</code>: Large diagonal
   * stripes pattern.</p> </li> <li> <p> <code>DIAGONAL_OPPOSITE_SMALL</code>: Small
   * cross-diagonal stripes pattern.</p> </li> <li> <p>
   * <code>DIAGONAL_OPPOSITE_MEDIUM</code>: Medium cross-diagonal stripes
   * pattern.</p> </li> <li> <p> <code>DIAGONAL_OPPOSITE_LARGE</code>: Large
   * cross-diagonal stripes pattern.</p> </li> <li> <p> <code>CIRCLE_SMALL</code>:
   * Small circle pattern.</p> </li> <li> <p> <code>CIRCLE_MEDIUM</code>: Medium
   * circle pattern.</p> </li> <li> <p> <code>CIRCLE_LARGE</code>: Large circle
   * pattern.</p> </li> <li> <p> <code>DIAMOND_SMALL</code>: Small diamonds
   * pattern.</p> </li> <li> <p> <code>DIAMOND_MEDIUM</code>: Medium diamonds
   * pattern.</p> </li> <li> <p> <code>DIAMOND_LARGE</code>: Large diamonds
   * pattern.</p> </li> <li> <p> <code>DIAMOND_GRID_SMALL</code>: Small diamond grid
   * pattern.</p> </li> <li> <p> <code>DIAMOND_GRID_MEDIUM</code>: Medium diamond
   * grid pattern.</p> </li> <li> <p> <code>DIAMOND_GRID_LARGE</code>: Large diamond
   * grid pattern.</p> </li> <li> <p> <code>CHECKERBOARD_SMALL</code>: Small
   * checkerboard pattern.</p> </li> <li> <p> <code>CHECKERBOARD_MEDIUM</code>:
   * Medium checkerboard pattern.</p> </li> <li> <p> <code>CHECKERBOARD_LARGE</code>:
   * Large checkerboard pattern.</p> </li> <li> <p> <code>TRIANGLE_SMALL</code>:
   * Small triangles pattern.</p> </li> <li> <p> <code>TRIANGLE_MEDIUM</code>: Medium
   * triangles pattern.</p> </li> <li> <p> <code>TRIANGLE_LARGE</code>: Large
   * triangles pattern.</p> </li> </ul>
   */
  inline DecalPatternType GetDecalPatternType() const { return m_decalPatternType; }
  inline bool DecalPatternTypeHasBeenSet() const { return m_decalPatternTypeHasBeenSet; }
  inline void SetDecalPatternType(DecalPatternType value) {
    m_decalPatternTypeHasBeenSet = true;
    m_decalPatternType = value;
  }
  inline DecalSettings& WithDecalPatternType(DecalPatternType value) {
    SetDecalPatternType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Style type for the decal, which can be either manual or automatic. This field
   * is only applicable for line series.</p> <ul> <li> <p> <code>Manual</code>: Apply
   * manual line and marker configuration for line series.</p> </li> <li> <p>
   * <code>Auto</code>: Apply automatic line and marker configuration for line
   * series.</p> </li> </ul>
   */
  inline DecalStyleType GetDecalStyleType() const { return m_decalStyleType; }
  inline bool DecalStyleTypeHasBeenSet() const { return m_decalStyleTypeHasBeenSet; }
  inline void SetDecalStyleType(DecalStyleType value) {
    m_decalStyleTypeHasBeenSet = true;
    m_decalStyleType = value;
  }
  inline DecalSettings& WithDecalStyleType(DecalStyleType value) {
    SetDecalStyleType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_elementValue;

  Visibility m_decalVisibility{Visibility::NOT_SET};

  Aws::String m_decalColor;

  DecalPatternType m_decalPatternType{DecalPatternType::NOT_SET};

  DecalStyleType m_decalStyleType{DecalStyleType::NOT_SET};
  bool m_elementValueHasBeenSet = false;
  bool m_decalVisibilityHasBeenSet = false;
  bool m_decalColorHasBeenSet = false;
  bool m_decalPatternTypeHasBeenSet = false;
  bool m_decalStyleTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
