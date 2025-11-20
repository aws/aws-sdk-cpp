/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/quicksight/model/HorizontalTextAlignment.h>
#include <aws/quicksight/model/TextTransform.h>

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
 * <p>Configures the display properties of the visual title.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualTitleFontConfiguration">AWS
 * API Reference</a></p>
 */
class VisualTitleFontConfiguration {
 public:
  AWS_QUICKSIGHT_API VisualTitleFontConfiguration() = default;
  AWS_QUICKSIGHT_API VisualTitleFontConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API VisualTitleFontConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
  inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
  template <typename FontConfigurationT = FontConfiguration>
  void SetFontConfiguration(FontConfigurationT&& value) {
    m_fontConfigurationHasBeenSet = true;
    m_fontConfiguration = std::forward<FontConfigurationT>(value);
  }
  template <typename FontConfigurationT = FontConfiguration>
  VisualTitleFontConfiguration& WithFontConfiguration(FontConfigurationT&& value) {
    SetFontConfiguration(std::forward<FontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines the alignment of visual title.</p>
   */
  inline HorizontalTextAlignment GetTextAlignment() const { return m_textAlignment; }
  inline bool TextAlignmentHasBeenSet() const { return m_textAlignmentHasBeenSet; }
  inline void SetTextAlignment(HorizontalTextAlignment value) {
    m_textAlignmentHasBeenSet = true;
    m_textAlignment = value;
  }
  inline VisualTitleFontConfiguration& WithTextAlignment(HorizontalTextAlignment value) {
    SetTextAlignment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines the text transformation of visual title.</p>
   */
  inline TextTransform GetTextTransform() const { return m_textTransform; }
  inline bool TextTransformHasBeenSet() const { return m_textTransformHasBeenSet; }
  inline void SetTextTransform(TextTransform value) {
    m_textTransformHasBeenSet = true;
    m_textTransform = value;
  }
  inline VisualTitleFontConfiguration& WithTextTransform(TextTransform value) {
    SetTextTransform(value);
    return *this;
  }
  ///@}
 private:
  FontConfiguration m_fontConfiguration;
  bool m_fontConfigurationHasBeenSet = false;

  HorizontalTextAlignment m_textAlignment{HorizontalTextAlignment::NOT_SET};
  bool m_textAlignmentHasBeenSet = false;

  TextTransform m_textTransform{TextTransform::NOT_SET};
  bool m_textTransformHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
