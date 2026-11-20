/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {

/**
 * <p>A phrase in an inline custom vocabulary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularyPhrase">AWS
 * API Reference</a></p>
 */
class VocabularyPhrase {
 public:
  AWS_TRANSCRIBESERVICE_API VocabularyPhrase() = default;
  AWS_TRANSCRIBESERVICE_API VocabularyPhrase(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API VocabularyPhrase& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The phrase to recognize in your audio.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  VocabularyPhrase& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the phrase is written in your transcript. If you don't include
   * <code>DisplayAs</code>, the phrase is written as it appears in
   * <code>Text</code>.</p>
   */
  inline const Aws::String& GetDisplayAs() const { return m_displayAs; }
  inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }
  template <typename DisplayAsT = Aws::String>
  void SetDisplayAs(DisplayAsT&& value) {
    m_displayAsHasBeenSet = true;
    m_displayAs = std::forward<DisplayAsT>(value);
  }
  template <typename DisplayAsT = Aws::String>
  VocabularyPhrase& WithDisplayAs(DisplayAsT&& value) {
    SetDisplayAs(std::forward<DisplayAsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_displayAs;
  bool m_textHasBeenSet = false;
  bool m_displayAsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
