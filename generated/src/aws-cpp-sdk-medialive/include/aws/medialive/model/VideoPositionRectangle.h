/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * A rectangle defined by position (x, y) and dimensions (width, height) in
 * pixels.
Used for output positioning and input cropping.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoPositionRectangle">AWS
 * API Reference</a></p>
 */
class VideoPositionRectangle {
 public:
  AWS_MEDIALIVE_API VideoPositionRectangle() = default;
  AWS_MEDIALIVE_API VideoPositionRectangle(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API VideoPositionRectangle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Height in pixels. Must be an even number.
   */
  inline int GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  inline void SetHeight(int value) {
    m_heightHasBeenSet = true;
    m_height = value;
  }
  inline VideoPositionRectangle& WithHeight(int value) {
    SetHeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Width in pixels. Must be an even number.
   */
  inline int GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  inline void SetWidth(int value) {
    m_widthHasBeenSet = true;
    m_width = value;
  }
  inline VideoPositionRectangle& WithWidth(int value) {
    SetWidth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Left offset in pixels. Must be an even number.
   */
  inline int GetX() const { return m_x; }
  inline bool XHasBeenSet() const { return m_xHasBeenSet; }
  inline void SetX(int value) {
    m_xHasBeenSet = true;
    m_x = value;
  }
  inline VideoPositionRectangle& WithX(int value) {
    SetX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Top offset in pixels. Must be an even number.
   */
  inline int GetY() const { return m_y; }
  inline bool YHasBeenSet() const { return m_yHasBeenSet; }
  inline void SetY(int value) {
    m_yHasBeenSet = true;
    m_y = value;
  }
  inline VideoPositionRectangle& WithY(int value) {
    SetY(value);
    return *this;
  }
  ///@}
 private:
  int m_height{0};

  int m_width{0};

  int m_x{0};

  int m_y{0};
  bool m_heightHasBeenSet = false;
  bool m_widthHasBeenSet = false;
  bool m_xHasBeenSet = false;
  bool m_yHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
