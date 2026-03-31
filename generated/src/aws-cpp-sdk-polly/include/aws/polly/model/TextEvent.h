/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/FlushStreamConfiguration.h>
#include <aws/polly/model/TextType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>Contains text content to be synthesized into speech.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/TextEvent">AWS
 * API Reference</a></p>
 */
class TextEvent {
 public:
  AWS_POLLY_API TextEvent() = default;
  AWS_POLLY_API TextEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API TextEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text content to synthesize. If you specify <code>ssml</code> as the
   * <code>TextType</code>, follow the SSML format for the input text.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  TextEvent& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the input text is plain text or SSML. Default: plain
   * text.</p>
   */
  inline TextType GetTextType() const { return m_textType; }
  inline bool TextTypeHasBeenSet() const { return m_textTypeHasBeenSet; }
  inline void SetTextType(TextType value) {
    m_textTypeHasBeenSet = true;
    m_textType = value;
  }
  inline TextEvent& WithTextType(TextType value) {
    SetTextType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for controlling when synthesized audio flushes to the output
   * stream.</p>
   */
  inline const FlushStreamConfiguration& GetFlushStreamConfiguration() const { return m_flushStreamConfiguration; }
  inline bool FlushStreamConfigurationHasBeenSet() const { return m_flushStreamConfigurationHasBeenSet; }
  template <typename FlushStreamConfigurationT = FlushStreamConfiguration>
  void SetFlushStreamConfiguration(FlushStreamConfigurationT&& value) {
    m_flushStreamConfigurationHasBeenSet = true;
    m_flushStreamConfiguration = std::forward<FlushStreamConfigurationT>(value);
  }
  template <typename FlushStreamConfigurationT = FlushStreamConfiguration>
  TextEvent& WithFlushStreamConfiguration(FlushStreamConfigurationT&& value) {
    SetFlushStreamConfiguration(std::forward<FlushStreamConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  TextType m_textType{TextType::NOT_SET};

  FlushStreamConfiguration m_flushStreamConfiguration;
  bool m_textHasBeenSet = false;
  bool m_textTypeHasBeenSet = false;
  bool m_flushStreamConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
