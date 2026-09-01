/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/TtmlBackgroundColor.h>
#include <aws/mediaconvert/model/TtmlFontColor.h>
#include <aws/mediaconvert/model/TtmlFontStyle.h>
#include <aws/mediaconvert/model/TtmlFontWeight.h>
#include <aws/mediaconvert/model/TtmlStylePassthrough.h>
#include <aws/mediaconvert/model/TtmlTextDecoration.h>

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
 * Settings related to TTML captions. TTML is a sidecar format that holds captions
 * in a file that is separate from the video container. Set up sidecar captions in
 * the same output group, but different output from your video. For more
 * information, see
 * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TtmlDestinationSettings">AWS
 * API Reference</a></p>
 */
class TtmlDestinationSettings {
 public:
  AWS_MEDIACONVERT_API TtmlDestinationSettings() = default;
  AWS_MEDIACONVERT_API TtmlDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API TtmlDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specify the color of the rectangle behind the captions. If Style passthrough is
   * set to enabled, leave blank or set to Auto to pass through the background color
   * from your input captions. If Style passthrough is set to disabled, leave blank
   * or set to Auto to use the default black.
   */
  inline TtmlBackgroundColor GetBackgroundColor() const { return m_backgroundColor; }
  inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
  inline void SetBackgroundColor(TtmlBackgroundColor value) {
    m_backgroundColorHasBeenSet = true;
    m_backgroundColor = value;
  }
  inline TtmlDestinationSettings& WithBackgroundColor(TtmlBackgroundColor value) {
    SetBackgroundColor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
   * where 0 is transparent and 255 is opaque. If Style passthrough is set to
   * enabled, leave blank to pass through the background style information in your
   * input captions to your output captions. If Style passthrough is set to disabled
   * and backgroundColor is set, leave blank to use a value of 255 (opaque).
   */
  inline int GetBackgroundOpacity() const { return m_backgroundOpacity; }
  inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }
  inline void SetBackgroundOpacity(int value) {
    m_backgroundOpacityHasBeenSet = true;
    m_backgroundOpacity = value;
  }
  inline TtmlDestinationSettings& WithBackgroundOpacity(int value) {
    SetBackgroundOpacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the color of the captions text. If Style passthrough is set to enabled,
   * leave blank or set to Auto to pass through the font color from your input
   * captions. If Style passthrough is set to disabled, leave blank or set to Auto to
   * use the default white.
   */
  inline TtmlFontColor GetFontColor() const { return m_fontColor; }
  inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
  inline void SetFontColor(TtmlFontColor value) {
    m_fontColorHasBeenSet = true;
    m_fontColor = value;
  }
  inline TtmlDestinationSettings& WithFontColor(TtmlFontColor value) {
    SetFontColor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the opacity of the captions. Enter a value from 0 to 255, where 0 is
   * transparent and 255 is opaque. If Style passthrough is set to enabled, leave
   * blank to pass through the font opacity information in your input captions to
   * your output captions. If Style passthrough is set to disabled and fontColor is
   * set, leave blank to use a value of 255 (opaque).
   */
  inline int GetFontOpacity() const { return m_fontOpacity; }
  inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }
  inline void SetFontOpacity(int value) {
    m_fontOpacityHasBeenSet = true;
    m_fontOpacity = value;
  }
  inline TtmlDestinationSettings& WithFontOpacity(int value) {
    SetFontOpacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the Font size in pixels. Must be a positive integer. Set to 0, or leave
   * blank, for automatic font size.
   */
  inline int GetFontSize() const { return m_fontSize; }
  inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
  inline void SetFontSize(int value) {
    m_fontSizeHasBeenSet = true;
    m_fontSize = value;
  }
  inline TtmlDestinationSettings& WithFontSize(int value) {
    SetFontSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the font style of the caption text. If Style passthrough is set to
   * enabled, leave blank to pass through the font style from your input captions. If
   * Style passthrough is set to disabled, leave blank to use the default normal
   * style.
   */
  inline TtmlFontStyle GetFontStyle() const { return m_fontStyle; }
  inline bool FontStyleHasBeenSet() const { return m_fontStyleHasBeenSet; }
  inline void SetFontStyle(TtmlFontStyle value) {
    m_fontStyleHasBeenSet = true;
    m_fontStyle = value;
  }
  inline TtmlDestinationSettings& WithFontStyle(TtmlFontStyle value) {
    SetFontStyle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the font weight of the caption text. If Style passthrough is set to
   * enabled, leave blank to pass through the font weight from your input captions.
   * If Style passthrough is set to disabled, leave blank to use the default normal
   * weight.
   */
  inline TtmlFontWeight GetFontWeight() const { return m_fontWeight; }
  inline bool FontWeightHasBeenSet() const { return m_fontWeightHasBeenSet; }
  inline void SetFontWeight(TtmlFontWeight value) {
    m_fontWeightHasBeenSet = true;
    m_fontWeight = value;
  }
  inline TtmlDestinationSettings& WithFontWeight(TtmlFontWeight value) {
    SetFontWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Pass through style and position information from a TTML-like input source (TTML,
   * IMSC, SMPTE-TT) to the TTML output.
   */
  inline TtmlStylePassthrough GetStylePassthrough() const { return m_stylePassthrough; }
  inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }
  inline void SetStylePassthrough(TtmlStylePassthrough value) {
    m_stylePassthroughHasBeenSet = true;
    m_stylePassthrough = value;
  }
  inline TtmlDestinationSettings& WithStylePassthrough(TtmlStylePassthrough value) {
    SetStylePassthrough(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the text decoration of the caption text. If Style passthrough is set to
   * enabled, leave blank to pass through the text decoration from your input
   * captions. If Style passthrough is set to disabled, leave blank to use the
   * default of none.
   */
  inline TtmlTextDecoration GetTextDecoration() const { return m_textDecoration; }
  inline bool TextDecorationHasBeenSet() const { return m_textDecorationHasBeenSet; }
  inline void SetTextDecoration(TtmlTextDecoration value) {
    m_textDecorationHasBeenSet = true;
    m_textDecoration = value;
  }
  inline TtmlDestinationSettings& WithTextDecoration(TtmlTextDecoration value) {
    SetTextDecoration(value);
    return *this;
  }
  ///@}
 private:
  TtmlBackgroundColor m_backgroundColor{TtmlBackgroundColor::NOT_SET};

  int m_backgroundOpacity{0};

  TtmlFontColor m_fontColor{TtmlFontColor::NOT_SET};

  int m_fontOpacity{0};

  int m_fontSize{0};

  TtmlFontStyle m_fontStyle{TtmlFontStyle::NOT_SET};

  TtmlFontWeight m_fontWeight{TtmlFontWeight::NOT_SET};

  TtmlStylePassthrough m_stylePassthrough{TtmlStylePassthrough::NOT_SET};

  TtmlTextDecoration m_textDecoration{TtmlTextDecoration::NOT_SET};
  bool m_backgroundColorHasBeenSet = false;
  bool m_backgroundOpacityHasBeenSet = false;
  bool m_fontColorHasBeenSet = false;
  bool m_fontOpacityHasBeenSet = false;
  bool m_fontSizeHasBeenSet = false;
  bool m_fontStyleHasBeenSet = false;
  bool m_fontWeightHasBeenSet = false;
  bool m_stylePassthroughHasBeenSet = false;
  bool m_textDecorationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
